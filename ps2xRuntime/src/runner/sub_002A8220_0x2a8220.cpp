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

// Function: sub_002A8220
// Address: 0x2a8220 - 0x2a8260
void sub_002A8220_0x2a8220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A8220_0x2a8220");
#endif

    switch (ctx->pc) {
        case 0x2a8254u: goto label_2a8254;
        default: break;
    }

    ctx->pc = 0x2a8220u;

    // 0x2a8220: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a8220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a8224: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2a8224u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8228: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x2a8228u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a822c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a822cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a8230: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2a8230u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8234: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2a8234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2a8238: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a8238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a823c: 0x240600c8  addiu       $a2, $zero, 0xC8
    ctx->pc = 0x2a823cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x2a8240: 0x34451360  ori         $a1, $v0, 0x1360
    ctx->pc = 0x2a8240u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4960);
    // 0x2a8244: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a8244u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a8248: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a8248u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a824c: 0xc097bb8  jal         func_25EEE0
    ctx->pc = 0x2A824Cu;
    SET_GPR_U32(ctx, 31, 0x2A8254u);
    ctx->pc = 0x2A8250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A824Cu;
    // 0x2a8250: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EEE0u, 0x2A824Cu, 0x2A8254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8254u;
label_2a8254:
    // 0x2a8254: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a8254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a8258: 0x3e00008  jr          $ra
    ctx->pc = 0x2A8258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A825Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8258u;
        // 0x2a825c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A8260u;
}
