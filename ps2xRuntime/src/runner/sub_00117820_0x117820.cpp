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

// Function: sub_00117820
// Address: 0x117820 - 0x117880
void sub_00117820_0x117820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117820_0x117820");
#endif

    switch (ctx->pc) {
        case 0x117850u: goto label_117850;
        case 0x11785cu: goto label_11785c;
        case 0x117868u: goto label_117868;
        default: break;
    }

    ctx->pc = 0x117820u;

    // 0x117820: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x117820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x117824: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x117824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x117828: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x117828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11782c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11782cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x117830: 0x3c100011  lui         $s0, 0x11
    ctx->pc = 0x117830u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)17 << 16));
    // 0x117834: 0x26107d40  addiu       $s0, $s0, 0x7D40
    ctx->pc = 0x117834u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32064));
    // 0x117838: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x117838u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11783c: 0xac512e98  sw          $s1, 0x2E98($v0)
    ctx->pc = 0x11783cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x402E98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x402E98u, _value); } while (0);
    // 0x117840: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x117840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117844: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x117844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x117848: 0xc043724  jal         func_10DC90
    ctx->pc = 0x117848u;
    SET_GPR_U32(ctx, 31, 0x117850u);
    ctx->pc = 0x11784Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117848u;
    // 0x11784c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DC90u, 0x117848u, 0x117850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117850u;
label_117850:
    // 0x117850: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x117850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117854: 0xc043724  jal         func_10DC90
    ctx->pc = 0x117854u;
    SET_GPR_U32(ctx, 31, 0x11785Cu);
    ctx->pc = 0x117858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117854u;
    // 0x117858: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DC90u, 0x117854u, 0x11785Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11785Cu;
label_11785c:
    // 0x11785c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11785cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117860: 0xc043724  jal         func_10DC90
    ctx->pc = 0x117860u;
    SET_GPR_U32(ctx, 31, 0x117868u);
    ctx->pc = 0x117864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117860u;
    // 0x117864: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DC90u, 0x117860u, 0x117868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117868u;
label_117868:
    // 0x117868: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x117868u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11786c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11786cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x117870: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x117870u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117874: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x117874u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117878: 0x3e00008  jr          $ra
    ctx->pc = 0x117878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11787Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117878u;
        // 0x11787c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117880u;
}
