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

// Function: sub_002AAED0
// Address: 0x2aaed0 - 0x2aaf1c
void sub_002AAED0_0x2aaed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AAED0_0x2aaed0");
#endif

    switch (ctx->pc) {
        case 0x2aaf10u: goto label_2aaf10;
        default: break;
    }

    ctx->pc = 0x2aaed0u;

    // 0x2aaed0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2aaed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2aaed4: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x2aaed4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aaed8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2aaed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2aaedc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2aaedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2aaee0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2aaee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2aaee4: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x2aaee4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aaee8: 0xffa80008  sd          $t0, 0x8($sp)
    ctx->pc = 0x2aaee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 8));
    // 0x2aaeec: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2aaeecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aaef0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2aaef0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aaef4: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2aaef4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aaef8: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2aaef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2aaefc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2aaefcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aaf00: 0x2406021c  addiu       $a2, $zero, 0x21C
    ctx->pc = 0x2aaf00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 540));
    // 0x2aaf04: 0x34450254  ori         $a1, $v0, 0x254
    ctx->pc = 0x2aaf04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)596);
    // 0x2aaf08: 0xc097df4  jal         func_25F7D0
    ctx->pc = 0x2AAF08u;
    SET_GPR_U32(ctx, 31, 0x2AAF10u);
    ctx->pc = 0x2AAF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AAF08u;
    // 0x2aaf0c: 0xffa00010  sd          $zero, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F7D0u, 0x2AAF08u, 0x2AAF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAF10u;
label_2aaf10:
    // 0x2aaf10: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2aaf10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2aaf14: 0x3e00008  jr          $ra
    ctx->pc = 0x2AAF14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AAF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAF14u;
        // 0x2aaf18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AAF14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AAF1Cu;
}
