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

// Function: sub_003A03D0
// Address: 0x3a03d0 - 0x3a0420
void sub_003A03D0_0x3a03d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A03D0_0x3a03d0");
#endif

    switch (ctx->pc) {
        case 0x3a0404u: goto label_3a0404;
        case 0x3a0410u: goto label_3a0410;
        default: break;
    }

    ctx->pc = 0x3a03d0u;

    // 0x3a03d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a03d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a03d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3a03d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3a03d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3a03d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3a03dc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x3a03dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3a03e0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x3A03E0u;
    {
        const bool branch_taken_0x3a03e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A03E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A03E0u;
        // 0x3a03e4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a03e0) {
            ctx->pc = 0x3A0410u;
            goto label_3a0410;
        }
    }
    ctx->pc = 0x3A03E8u;
    // 0x3a03e8: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x3a03e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3a03ec: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x3a03ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x3a03f0: 0x82020001  lb          $v0, 0x1($s0)
    ctx->pc = 0x3a03f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x3a03f4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A03F4u;
    {
        const bool branch_taken_0x3a03f4 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x3a03f4) {
            ctx->pc = 0x3A0408u;
            goto label_3a0408;
        }
    }
    ctx->pc = 0x3A03FCu;
    // 0x3a03fc: 0xc0e8108  jal         func_3A0420
    ctx->pc = 0x3A03FCu;
    SET_GPR_U32(ctx, 31, 0x3A0404u);
    ctx->pc = 0x3A0420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0420u, 0x3A03FCu, 0x3A0404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0404u;
label_3a0404:
    // 0x3a0404: 0x0  nop
    ctx->pc = 0x3a0404u;
    // NOP
label_3a0408:
    // 0x3a0408: 0xc0e8148  jal         func_3A0520
    ctx->pc = 0x3A0408u;
    SET_GPR_U32(ctx, 31, 0x3A0410u);
    ctx->pc = 0x3A040Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0408u;
    // 0x3a040c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0520u, 0x3A0408u, 0x3A0410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0410u;
label_3a0410:
    // 0x3a0410: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a0410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a0414: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3a0414u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a0418: 0x3e00008  jr          $ra
    ctx->pc = 0x3A0418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A041Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0418u;
        // 0x3a041c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A0418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A0420u;
}
