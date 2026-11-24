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

// Function: sub_002A5320
// Address: 0x2a5320 - 0x2a5368
void sub_002A5320_0x2a5320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A5320_0x2a5320");
#endif

    switch (ctx->pc) {
        case 0x2a535cu: goto label_2a535c;
        default: break;
    }

    ctx->pc = 0x2a5320u;

    // 0x2a5320: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a5320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a5324: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x2a5324u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5328: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a5328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a532c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a532cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a5330: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2a5330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2a5334: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2a5334u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5338: 0xffa80008  sd          $t0, 0x8($sp)
    ctx->pc = 0x2a5338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 8));
    // 0x2a533c: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x2a533cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5340: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2a5340u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5344: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x2a5344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x2a5348: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a5348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a534c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2a534cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5350: 0x24055038  addiu       $a1, $zero, 0x5038
    ctx->pc = 0x2a5350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20536));
    // 0x2a5354: 0xc097df4  jal         func_25F7D0
    ctx->pc = 0x2A5354u;
    SET_GPR_U32(ctx, 31, 0x2A535Cu);
    ctx->pc = 0x2A5358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5354u;
    // 0x2a5358: 0x24060064  addiu       $a2, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F7D0u, 0x2A5354u, 0x2A535Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A535Cu;
label_2a535c:
    // 0x2a535c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a535cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a5360: 0x3e00008  jr          $ra
    ctx->pc = 0x2A5360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5360u;
        // 0x2a5364: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A5360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A5368u;
}
