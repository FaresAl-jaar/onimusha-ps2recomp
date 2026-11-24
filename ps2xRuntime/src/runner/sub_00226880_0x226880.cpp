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

// Function: sub_00226880
// Address: 0x226880 - 0x2268d8
void sub_00226880_0x226880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226880_0x226880");
#endif

    switch (ctx->pc) {
        case 0x226894u: goto label_226894;
        case 0x2268a8u: goto label_2268a8;
        default: break;
    }

    ctx->pc = 0x226880u;

    // 0x226880: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x226880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x226884: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x226884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x226888: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x226888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x22688c: 0xc089a36  jal         func_2268D8
    ctx->pc = 0x22688Cu;
    SET_GPR_U32(ctx, 31, 0x226894u);
    ctx->pc = 0x2268D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2268D8u, 0x22688Cu, 0x226894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226894u;
label_226894:
    // 0x226894: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x226894u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226898: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x226898u;
    {
        const bool branch_taken_0x226898 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x22689Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226898u;
        // 0x22689c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226898) {
            ctx->pc = 0x2268C8u;
            goto label_2268c8;
        }
    }
    ctx->pc = 0x2268A0u;
    // 0x2268a0: 0xc089a4a  jal         func_226928
    ctx->pc = 0x2268A0u;
    SET_GPR_U32(ctx, 31, 0x2268A8u);
    ctx->pc = 0x226928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226928u, 0x2268A0u, 0x2268A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2268A8u;
label_2268a8:
    // 0x2268a8: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x2268a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x2268ac: 0x2463a840  addiu       $v1, $v1, -0x57C0
    ctx->pc = 0x2268acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944832));
    // 0x2268b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2268b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2268b4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2268b4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x4BA840u));
    // 0x2268b8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2268b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2268bc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2268bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2268c0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2268c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x4BA840u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BA840u, _value); } while (0);
    // 0x2268c4: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x2268c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_2268c8:
    // 0x2268c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2268c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2268cc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2268ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2268d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2268D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2268D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2268D0u;
        // 0x2268d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2268D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2268D8u;
}
