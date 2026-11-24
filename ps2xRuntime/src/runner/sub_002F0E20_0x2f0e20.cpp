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

// Function: sub_002F0E20
// Address: 0x2f0e20 - 0x2f0e80
void sub_002F0E20_0x2f0e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0E20_0x2f0e20");
#endif

    switch (ctx->pc) {
        case 0x2f0e48u: goto label_2f0e48;
        case 0x2f0e68u: goto label_2f0e68;
        default: break;
    }

    ctx->pc = 0x2f0e20u;

    // 0x2f0e20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2f0e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2f0e24: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2f0e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2f0e28: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f0e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2f0e2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f0e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f0e30: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2f0e30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0e34: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f0e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f0e38: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2f0e38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0e3c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2f0e3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0e40: 0xc097404  jal         func_25D010
    ctx->pc = 0x2F0E40u;
    SET_GPR_U32(ctx, 31, 0x2F0E48u);
    ctx->pc = 0x2F0E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0E40u;
    // 0x2f0e44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D010u, 0x2F0E40u, 0x2F0E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0E48u;
label_2f0e48:
    // 0x2f0e48: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f0e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0e4c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2f0e4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0e50: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x2f0e50u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0e54: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f0e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f0e58: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2f0e58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0e5c: 0x24090021  addiu       $t1, $zero, 0x21
    ctx->pc = 0x2f0e5cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2f0e60: 0xc0d287c  jal         func_34A1F0
    ctx->pc = 0x2F0E60u;
    SET_GPR_U32(ctx, 31, 0x2F0E68u);
    ctx->pc = 0x2F0E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0E60u;
    // 0x2f0e64: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34A1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34A1F0u, 0x2F0E60u, 0x2F0E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0E68u;
label_2f0e68:
    // 0x2f0e68: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2f0e68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f0e6c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f0e6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f0e70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f0e70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f0e74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f0e74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f0e78: 0x3e00008  jr          $ra
    ctx->pc = 0x2F0E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F0E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0E78u;
        // 0x2f0e7c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0E78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F0E80u;
}
