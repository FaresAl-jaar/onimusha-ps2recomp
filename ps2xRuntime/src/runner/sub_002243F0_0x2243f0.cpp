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

// Function: sub_002243F0
// Address: 0x2243f0 - 0x22443c
void sub_002243F0_0x2243f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002243F0_0x2243f0");
#endif

    switch (ctx->pc) {
        case 0x224414u: goto label_224414;
        default: break;
    }

    ctx->pc = 0x2243f0u;

    // 0x2243f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2243f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2243f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2243f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2243f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2243f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2243fc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2243fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224400: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x224400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x224404: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x224404u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x224408: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x224408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x22440c: 0xc088e5e  jal         func_223978
    ctx->pc = 0x22440Cu;
    SET_GPR_U32(ctx, 31, 0x224414u);
    ctx->pc = 0x224410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22440Cu;
    // 0x224410: 0x245000b0  addiu       $s0, $v0, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223978u, 0x22440Cu, 0x224414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224414u;
label_224414:
    // 0x224414: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x224414u;
    {
        const bool branch_taken_0x224414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x224414) {
            ctx->pc = 0x224418u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x224414u;
            // 0x224418: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22442Cu;
            goto label_22442c;
        }
    }
    ctx->pc = 0x22441Cu;
    // 0x22441c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x22441cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x224420: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x224420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x224424: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x224424u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x224428: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x224428u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22442c:
    // 0x22442c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22442cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x224430: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x224430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x224434: 0x3e00008  jr          $ra
    ctx->pc = 0x224434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224434u;
        // 0x224438: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22443Cu;
}
