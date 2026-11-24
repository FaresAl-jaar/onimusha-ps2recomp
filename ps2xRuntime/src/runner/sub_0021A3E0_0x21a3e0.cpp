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

// Function: sub_0021A3E0
// Address: 0x21a3e0 - 0x21a434
void sub_0021A3E0_0x21a3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021A3E0_0x21a3e0");
#endif

    switch (ctx->pc) {
        case 0x21a3f4u: goto label_21a3f4;
        case 0x21a40cu: goto label_21a40c;
        case 0x21a420u: goto label_21a420;
        default: break;
    }

    ctx->pc = 0x21a3e0u;

    // 0x21a3e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21a3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21a3e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21a3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21a3e8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x21a3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21a3ec: 0xc084968  jal         func_2125A0
    ctx->pc = 0x21A3ECu;
    SET_GPR_U32(ctx, 31, 0x21A3F4u);
    ctx->pc = 0x21A3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A3ECu;
    // 0x21a3f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2125A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2125A0u, 0x21A3ECu, 0x21A3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A3F4u;
label_21a3f4:
    // 0x21a3f4: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x21a3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x21a3f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21a3f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a3fc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21A3FCu;
    {
        const bool branch_taken_0x21a3fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A3FCu;
        // 0x21a400: 0x34a50183  ori         $a1, $a1, 0x183 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)387);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a3fc) {
            ctx->pc = 0x21A418u;
            goto label_21a418;
        }
    }
    ctx->pc = 0x21A404u;
    // 0x21a404: 0xc0848e0  jal         func_212380
    ctx->pc = 0x21A404u;
    SET_GPR_U32(ctx, 31, 0x21A40Cu);
    ctx->pc = 0x21A408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A404u;
    // 0x21a408: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212380u, 0x21A404u, 0x21A40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A40Cu;
label_21a40c:
    // 0x21a40c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x21A40Cu;
    {
        const bool branch_taken_0x21a40c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A40Cu;
        // 0x21a410: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a40c) {
            ctx->pc = 0x21A424u;
            goto label_21a424;
        }
    }
    ctx->pc = 0x21A414u;
    // 0x21a414: 0x0  nop
    ctx->pc = 0x21a414u;
    // NOP
label_21a418:
    // 0x21a418: 0xc08690e  jal         func_21A438
    ctx->pc = 0x21A418u;
    SET_GPR_U32(ctx, 31, 0x21A420u);
    ctx->pc = 0x21A438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A438u, 0x21A418u, 0x21A420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A420u;
label_21a420:
    // 0x21a420: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x21a420u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_21a424:
    // 0x21a424: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21a424u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21a428: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21a428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21a42c: 0x3e00008  jr          $ra
    ctx->pc = 0x21A42Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A42Cu;
        // 0x21a430: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A42Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21A434u;
}
