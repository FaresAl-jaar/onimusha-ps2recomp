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

// Function: sub_00283F20
// Address: 0x283f20 - 0x283f80
void sub_00283F20_0x283f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00283F20_0x283f20");
#endif

    switch (ctx->pc) {
        case 0x283f50u: goto label_283f50;
        case 0x283f68u: goto label_283f68;
        default: break;
    }

    ctx->pc = 0x283f20u;

    // 0x283f20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x283f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x283f24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x283f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x283f28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x283f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x283f2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x283f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x283f30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x283f30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283f34: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x283F34u;
    {
        const bool branch_taken_0x283f34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x283F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283F34u;
        // 0x283f38: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283f34) {
            ctx->pc = 0x283F68u;
            goto label_283f68;
        }
    }
    ctx->pc = 0x283F3Cu;
    // 0x283f3c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x283f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x283f40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x283f40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283f44: 0x24427570  addiu       $v0, $v0, 0x7570
    ctx->pc = 0x283f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30064));
    // 0x283f48: 0xc096b20  jal         func_25AC80
    ctx->pc = 0x283F48u;
    SET_GPR_U32(ctx, 31, 0x283F50u);
    ctx->pc = 0x283F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283F48u;
    // 0x283f4c: 0xae220034  sw          $v0, 0x34($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AC80u, 0x283F48u, 0x283F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283F50u;
label_283f50:
    // 0x283f50: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x283f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x283f54: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x283f54u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x283f58: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x283F58u;
    {
        const bool branch_taken_0x283f58 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x283F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283F58u;
        // 0x283f5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283f58) {
            ctx->pc = 0x283F68u;
            goto label_283f68;
        }
    }
    ctx->pc = 0x283F60u;
    // 0x283f60: 0xc0741a8  jal         func_1D06A0
    ctx->pc = 0x283F60u;
    SET_GPR_U32(ctx, 31, 0x283F68u);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x283F60u, 0x283F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283F68u;
label_283f68:
    // 0x283f68: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x283f68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283f6c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x283f6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x283f70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x283f70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x283f74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x283f74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x283f78: 0x3e00008  jr          $ra
    ctx->pc = 0x283F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283F78u;
        // 0x283f7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283F78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283F80u;
}
