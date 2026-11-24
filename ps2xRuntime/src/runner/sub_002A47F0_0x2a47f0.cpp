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

// Function: sub_002A47F0
// Address: 0x2a47f0 - 0x2a4838
void sub_002A47F0_0x2a47f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A47F0_0x2a47f0");
#endif

    switch (ctx->pc) {
        case 0x2a482cu: goto label_2a482c;
        default: break;
    }

    ctx->pc = 0x2a47f0u;

    // 0x2a47f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a47f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a47f4: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x2a47f4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a47f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a47f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a47fc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a47fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a4800: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2a4800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2a4804: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2a4804u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4808: 0xffa80008  sd          $t0, 0x8($sp)
    ctx->pc = 0x2a4808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 8));
    // 0x2a480c: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x2a480cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4810: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2a4810u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4814: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2a4814u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4818: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a4818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a481c: 0x240521e4  addiu       $a1, $zero, 0x21E4
    ctx->pc = 0x2a481cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8676));
    // 0x2a4820: 0x2406036c  addiu       $a2, $zero, 0x36C
    ctx->pc = 0x2a4820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 876));
    // 0x2a4824: 0xc097df4  jal         func_25F7D0
    ctx->pc = 0x2A4824u;
    SET_GPR_U32(ctx, 31, 0x2A482Cu);
    ctx->pc = 0x2A4828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4824u;
    // 0x2a4828: 0xffa00010  sd          $zero, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F7D0u, 0x2A4824u, 0x2A482Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A482Cu;
label_2a482c:
    // 0x2a482c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a482cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a4830: 0x3e00008  jr          $ra
    ctx->pc = 0x2A4830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4830u;
        // 0x2a4834: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A4830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A4838u;
}
