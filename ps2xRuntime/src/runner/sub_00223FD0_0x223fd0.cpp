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

// Function: sub_00223FD0
// Address: 0x223fd0 - 0x224020
void sub_00223FD0_0x223fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223FD0_0x223fd0");
#endif

    switch (ctx->pc) {
        case 0x223ff8u: goto label_223ff8;
        default: break;
    }

    ctx->pc = 0x223fd0u;

    // 0x223fd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x223fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x223fd4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x223fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x223fd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x223fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x223fdc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x223fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x223fe0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x223fe0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223fe4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x223fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x223fe8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x223fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x223fec: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x223fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x223ff0: 0xc088e5e  jal         func_223978
    ctx->pc = 0x223FF0u;
    SET_GPR_U32(ctx, 31, 0x223FF8u);
    ctx->pc = 0x223FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223FF0u;
    // 0x223ff4: 0x24700080  addiu       $s0, $v1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223978u, 0x223FF0u, 0x223FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223FF8u;
label_223ff8:
    // 0x223ff8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x223FF8u;
    {
        const bool branch_taken_0x223ff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x223ff8) {
            ctx->pc = 0x223FFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x223FF8u;
            // 0x223ffc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x224010u;
            goto label_224010;
        }
    }
    ctx->pc = 0x224000u;
    // 0x224000: 0x92030004  lbu         $v1, 0x4($s0)
    ctx->pc = 0x224000u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x224004: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x224004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x224008: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x224008u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x22400c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22400cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_224010:
    // 0x224010: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x224010u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x224014: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x224014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x224018: 0x3e00008  jr          $ra
    ctx->pc = 0x224018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22401Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224018u;
        // 0x22401c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224020u;
}
