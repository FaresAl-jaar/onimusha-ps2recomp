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

// Function: sub_002215F8
// Address: 0x2215f8 - 0x22162c
void sub_002215F8_0x2215f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002215F8_0x2215f8");
#endif

    switch (ctx->pc) {
        case 0x22161cu: goto label_22161c;
        default: break;
    }

    ctx->pc = 0x2215f8u;

    // 0x2215f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2215f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2215fc: 0x24870a0c  addiu       $a3, $a0, 0xA0C
    ctx->pc = 0x2215fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 2572));
    // 0x221600: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x221600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x221604: 0x8ce30038  lw          $v1, 0x38($a3)
    ctx->pc = 0x221604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x221608: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x221608u;
    {
        const bool branch_taken_0x221608 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22160Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221608u;
        // 0x22160c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221608) {
            ctx->pc = 0x221620u;
            goto label_221620;
        }
    }
    ctx->pc = 0x221610u;
    // 0x221610: 0x8ce800b0  lw          $t0, 0xB0($a3)
    ctx->pc = 0x221610u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 176)));
    // 0x221614: 0xc0885e0  jal         func_221780
    ctx->pc = 0x221614u;
    SET_GPR_U32(ctx, 31, 0x22161Cu);
    ctx->pc = 0x221618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221614u;
    // 0x221618: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221780u, 0x221614u, 0x22161Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22161Cu;
label_22161c:
    // 0x22161c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x22161cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_221620:
    // 0x221620: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x221620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221624: 0x3e00008  jr          $ra
    ctx->pc = 0x221624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221624u;
        // 0x221628: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22162Cu;
}
