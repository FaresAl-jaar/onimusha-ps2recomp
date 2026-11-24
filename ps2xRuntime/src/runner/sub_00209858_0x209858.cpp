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

// Function: sub_00209858
// Address: 0x209858 - 0x2098a4
void sub_00209858_0x209858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209858_0x209858");
#endif

    switch (ctx->pc) {
        case 0x209880u: goto label_209880;
        default: break;
    }

    ctx->pc = 0x209858u;

    // 0x209858: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x209858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20985c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x20985cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x209860: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x209860u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209864: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x209864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x209868: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x209868u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20986c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x20986cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x209870: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x209870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209874: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x209874u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x209878: 0xc08992c  jal         func_2264B0
    ctx->pc = 0x209878u;
    SET_GPR_U32(ctx, 31, 0x209880u);
    ctx->pc = 0x20987Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209878u;
    // 0x20987c: 0x8c8400a8  lw          $a0, 0xA8($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2264B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2264B0u, 0x209878u, 0x209880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209880u;
label_209880:
    // 0x209880: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x209880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x209884: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x209884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x209888: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x209888u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x20988c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x20988cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x209890: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x209890u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x209894: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x209894u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x209898: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x209898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20989c: 0x3e00008  jr          $ra
    ctx->pc = 0x20989Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2098A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20989Cu;
        // 0x2098a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20989Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2098A4u;
}
