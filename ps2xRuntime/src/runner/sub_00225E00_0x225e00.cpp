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

// Function: sub_00225E00
// Address: 0x225e00 - 0x225e78
void sub_00225E00_0x225e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225E00_0x225e00");
#endif

    switch (ctx->pc) {
        case 0x225e3cu: goto label_225e3c;
        case 0x225e54u: goto label_225e54;
        default: break;
    }

    ctx->pc = 0x225e00u;

    // 0x225e00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x225e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x225e04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x225e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x225e08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x225e08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225e0c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x225e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x225e10: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x225e10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225e14: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x225e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x225e18: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x225e18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225e1c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x225e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x225e20: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x225e20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225e24: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x225e24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225e28: 0x140402d  daddu       $t0, $t2, $zero
    ctx->pc = 0x225e28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225e2c: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x225e2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225e30: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x225e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x225e34: 0xc089462  jal         func_225188
    ctx->pc = 0x225E34u;
    SET_GPR_U32(ctx, 31, 0x225E3Cu);
    ctx->pc = 0x225E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225E34u;
    // 0x225e38: 0x160482d  daddu       $t1, $t3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225188u, 0x225E34u, 0x225E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225E3Cu;
label_225e3c:
    // 0x225e3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x225e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225e40: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x225e40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225e44: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x225e44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225e48: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x225e48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225e4c: 0xc08979e  jal         func_225E78
    ctx->pc = 0x225E4Cu;
    SET_GPR_U32(ctx, 31, 0x225E54u);
    ctx->pc = 0x225E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225E4Cu;
    // 0x225e50: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225E78u, 0x225E4Cu, 0x225E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225E54u;
label_225e54:
    // 0x225e54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x225e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x225e58: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x225e58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x225e5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x225e5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225e60: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x225e60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x225e64: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x225e64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225e68: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x225e68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x225e6c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x225e6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x225e70: 0x3e00008  jr          $ra
    ctx->pc = 0x225E70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225E70u;
        // 0x225e74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225E70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225E78u;
}
