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

// Function: sub_003CF250
// Address: 0x3cf250 - 0x3cf2a8
void sub_003CF250_0x3cf250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CF250_0x3cf250");
#endif

    switch (ctx->pc) {
        case 0x3cf29cu: goto label_3cf29c;
        default: break;
    }

    ctx->pc = 0x3cf250u;

    // 0x3cf250: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3cf250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3cf254: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3cf254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3cf258: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3cf258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3cf25c: 0x2442e4c0  addiu       $v0, $v0, -0x1B40
    ctx->pc = 0x3cf25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960320));
    // 0x3cf260: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3cf260u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x65E4C0u));
    // 0x3cf264: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x3cf264u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3cf268: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3cf268u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cf26c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3cf26cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cf270: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3cf270u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cf274: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3cf274u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cf278: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3cf278u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cf27c: 0x3c022200  lui         $v0, 0x2200
    ctx->pc = 0x3cf27cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8704 << 16));
    // 0x3cf280: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x3cf280u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x3cf284: 0x34454e02  ori         $a1, $v0, 0x4E02
    ctx->pc = 0x3cf284u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19970);
    // 0x3cf288: 0x9082052e  lbu         $v0, 0x52E($a0)
    ctx->pc = 0x3cf288u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1326)));
    // 0x3cf28c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3cf28cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3cf290: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3cf290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3cf294: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3CF294u;
    SET_GPR_U32(ctx, 31, 0x3CF29Cu);
    ctx->pc = 0x3CF298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF294u;
    // 0x3cf298: 0x2484d200  addiu       $a0, $a0, -0x2E00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3CF294u, 0x3CF29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF29Cu;
label_3cf29c:
    // 0x3cf29c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3cf29cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3cf2a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3CF2A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CF2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF2A0u;
        // 0x3cf2a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CF2A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CF2A8u;
}
