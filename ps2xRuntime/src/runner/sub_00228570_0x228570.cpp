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

// Function: sub_00228570
// Address: 0x228570 - 0x2285c8
void sub_00228570_0x228570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228570_0x228570");
#endif

    switch (ctx->pc) {
        case 0x2285a8u: goto label_2285a8;
        case 0x2285b0u: goto label_2285b0;
        default: break;
    }

    ctx->pc = 0x228570u;

    // 0x228570: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x228570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x228574: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x228574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x228578: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x228578u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22857c: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22857Cu;
    {
        const bool branch_taken_0x22857c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x228580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22857Cu;
        // 0x228580: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22857c) {
            ctx->pc = 0x2285A0u;
            goto label_2285a0;
        }
    }
    ctx->pc = 0x228584u;
    // 0x228584: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x228584u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x228588: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x228588u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22858c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x22858cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x228590: 0x24849660  addiu       $a0, $a0, -0x69A0
    ctx->pc = 0x228590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940256));
    // 0x228594: 0x808a0d4  j           func_228350
    ctx->pc = 0x228594u;
    ctx->pc = 0x228598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228594u;
    // 0x228598: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228350u;
    sub_00228350_0x228350(rdram, ctx, runtime); return;
    ctx->pc = 0x22859Cu;
    // 0x22859c: 0x0  nop
    ctx->pc = 0x22859cu;
    // NOP
label_2285a0:
    // 0x2285a0: 0xc08a172  jal         func_2285C8
    ctx->pc = 0x2285A0u;
    SET_GPR_U32(ctx, 31, 0x2285A8u);
    ctx->pc = 0x2285C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2285C8u, 0x2285A0u, 0x2285A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2285A8u;
label_2285a8:
    // 0x2285a8: 0xc08a14a  jal         func_228528
    ctx->pc = 0x2285A8u;
    SET_GPR_U32(ctx, 31, 0x2285B0u);
    ctx->pc = 0x2285ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2285A8u;
    // 0x2285ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228528u, 0x2285A8u, 0x2285B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2285B0u;
label_2285b0:
    // 0x2285b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2285b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2285b4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2285b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x2285b8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2285b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2285bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2285bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2285c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2285C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2285C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2285C0u;
        // 0x2285c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2285C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2285C8u;
}
