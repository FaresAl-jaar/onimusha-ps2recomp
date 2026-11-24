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

// Function: sub_00238380
// Address: 0x238380 - 0x2383c8
void sub_00238380_0x238380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238380_0x238380");
#endif

    switch (ctx->pc) {
        case 0x23839cu: goto label_23839c;
        case 0x2383a8u: goto label_2383a8;
        case 0x2383b0u: goto label_2383b0;
        default: break;
    }

    ctx->pc = 0x238380u;

    // 0x238380: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x238380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x238384: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x238384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x238388: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x238388u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23838c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23838cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x238390: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x238390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x238394: 0xc08e2bc  jal         func_238AF0
    ctx->pc = 0x238394u;
    SET_GPR_U32(ctx, 31, 0x23839Cu);
    ctx->pc = 0x238398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238394u;
    // 0x238398: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238AF0u, 0x238394u, 0x23839Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23839Cu;
label_23839c:
    // 0x23839c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23839cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2383a0: 0xc08e0f2  jal         func_2383C8
    ctx->pc = 0x2383A0u;
    SET_GPR_U32(ctx, 31, 0x2383A8u);
    ctx->pc = 0x2383A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2383A0u;
    // 0x2383a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2383C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2383C8u, 0x2383A0u, 0x2383A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2383A8u;
label_2383a8:
    // 0x2383a8: 0xc08e2c2  jal         func_238B08
    ctx->pc = 0x2383A8u;
    SET_GPR_U32(ctx, 31, 0x2383B0u);
    ctx->pc = 0x2383ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2383A8u;
    // 0x2383ac: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238B08u, 0x2383A8u, 0x2383B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2383B0u;
label_2383b0:
    // 0x2383b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2383b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2383b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2383b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2383b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2383b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2383bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2383bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2383c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2383C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2383C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2383C0u;
        // 0x2383c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2383C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2383C8u;
}
