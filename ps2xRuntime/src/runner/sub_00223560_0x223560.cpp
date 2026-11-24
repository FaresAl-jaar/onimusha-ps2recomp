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

// Function: sub_00223560
// Address: 0x223560 - 0x2235dc
void sub_00223560_0x223560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223560_0x223560");
#endif

    switch (ctx->pc) {
        case 0x223580u: goto label_223580;
        case 0x223590u: goto label_223590;
        case 0x2235a0u: goto label_2235a0;
        default: break;
    }

    ctx->pc = 0x223560u;

    // 0x223560: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x223560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x223564: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x223564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x223568: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x223568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22356c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22356cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223570: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x223570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x223574: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x223574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x223578: 0xc0888f0  jal         func_2223C0
    ctx->pc = 0x223578u;
    SET_GPR_U32(ctx, 31, 0x223580u);
    ctx->pc = 0x22357Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223578u;
    // 0x22357c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2223C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2223C0u, 0x223578u, 0x223580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223580u;
label_223580:
    // 0x223580: 0x10510011  beq         $v0, $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x223580u;
    {
        const bool branch_taken_0x223580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x223584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223580u;
        // 0x223584: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223580) {
            ctx->pc = 0x2235C8u;
            goto label_2235c8;
        }
    }
    ctx->pc = 0x223588u;
    // 0x223588: 0xc084074  jal         func_2101D0
    ctx->pc = 0x223588u;
    SET_GPR_U32(ctx, 31, 0x223590u);
    ctx->pc = 0x22358Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223588u;
    // 0x22358c: 0x8e0520d8  lw          $a1, 0x20D8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8408)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2101D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2101D0u, 0x223588u, 0x223590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223590u;
label_223590:
    // 0x223590: 0x1451000d  bne         $v0, $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x223590u;
    {
        const bool branch_taken_0x223590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x223594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223590u;
        // 0x223594: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223590) {
            ctx->pc = 0x2235C8u;
            goto label_2235c8;
        }
    }
    ctx->pc = 0x223598u;
    // 0x223598: 0xc088d78  jal         func_2235E0
    ctx->pc = 0x223598u;
    SET_GPR_U32(ctx, 31, 0x2235A0u);
    ctx->pc = 0x2235E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2235E0u, 0x223598u, 0x2235A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2235A0u;
label_2235a0:
    // 0x2235a0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2235A0u;
    {
        const bool branch_taken_0x2235a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2235A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2235A0u;
        // 0x2235a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2235a0) {
            ctx->pc = 0x2235C8u;
            goto label_2235c8;
        }
    }
    ctx->pc = 0x2235A8u;
    // 0x2235a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2235a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2235ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2235acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2235b0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2235b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2235b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2235b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2235b8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2235b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2235bc: 0x80888ea  j           func_2223A8
    ctx->pc = 0x2235BCu;
    ctx->pc = 0x2235C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2235BCu;
    // 0x2235c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2223A8u;
    sub_002223A8_0x2223a8(rdram, ctx, runtime); return;
    ctx->pc = 0x2235C4u;
    // 0x2235c4: 0x0  nop
    ctx->pc = 0x2235c4u;
    // NOP
label_2235c8:
    // 0x2235c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2235c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2235cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2235ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2235d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2235d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2235d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2235D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2235D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2235D4u;
        // 0x2235d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2235D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2235DCu;
}
