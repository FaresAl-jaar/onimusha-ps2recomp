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

// Function: sub_002F12F0
// Address: 0x2f12f0 - 0x2f1334
void sub_002F12F0_0x2f12f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F12F0_0x2f12f0");
#endif

    switch (ctx->pc) {
        case 0x2f1328u: goto label_2f1328;
        default: break;
    }

    ctx->pc = 0x2f12f0u;

    // 0x2f12f0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2f12f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f12f4: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x2f12f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f12f8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2f12f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f12fc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f12fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f1300: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2f1300u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1304: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x2f1304u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1308: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x2f1308u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f130c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f130cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f1310: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x2f1310u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1314: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2f1314u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1318: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f1318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f131c: 0x240b0008  addiu       $t3, $zero, 0x8
    ctx->pc = 0x2f131cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2f1320: 0xc0d96a8  jal         func_365AA0
    ctx->pc = 0x2F1320u;
    SET_GPR_U32(ctx, 31, 0x2F1328u);
    ctx->pc = 0x2F1324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1320u;
    // 0x2f1324: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x365AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x365AA0u, 0x2F1320u, 0x2F1328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1328u;
label_2f1328:
    // 0x2f1328: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f1328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f132c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F132Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F132Cu;
        // 0x2f1330: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F132Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F1334u;
}
