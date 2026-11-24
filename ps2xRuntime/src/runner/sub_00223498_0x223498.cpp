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

// Function: sub_00223498
// Address: 0x223498 - 0x223514
void sub_00223498_0x223498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223498_0x223498");
#endif

    switch (ctx->pc) {
        case 0x2234b8u: goto label_2234b8;
        case 0x2234c8u: goto label_2234c8;
        case 0x2234d8u: goto label_2234d8;
        default: break;
    }

    ctx->pc = 0x223498u;

    // 0x223498: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x223498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22349c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x22349cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2234a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2234a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2234a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2234a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2234a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2234a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2234ac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2234acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2234b0: 0xc0888fc  jal         func_2223F0
    ctx->pc = 0x2234B0u;
    SET_GPR_U32(ctx, 31, 0x2234B8u);
    ctx->pc = 0x2234B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2234B0u;
    // 0x2234b4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2223F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2223F0u, 0x2234B0u, 0x2234B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2234B8u;
label_2234b8:
    // 0x2234b8: 0x10510011  beq         $v0, $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2234B8u;
    {
        const bool branch_taken_0x2234b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x2234BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2234B8u;
        // 0x2234bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2234b8) {
            ctx->pc = 0x223500u;
            goto label_223500;
        }
    }
    ctx->pc = 0x2234C0u;
    // 0x2234c0: 0xc08408e  jal         func_210238
    ctx->pc = 0x2234C0u;
    SET_GPR_U32(ctx, 31, 0x2234C8u);
    ctx->pc = 0x2234C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2234C0u;
    // 0x2234c4: 0x8e0520d8  lw          $a1, 0x20D8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8408)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210238u, 0x2234C0u, 0x2234C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2234C8u;
label_2234c8:
    // 0x2234c8: 0x1451000d  bne         $v0, $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x2234C8u;
    {
        const bool branch_taken_0x2234c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x2234CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2234C8u;
        // 0x2234cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2234c8) {
            ctx->pc = 0x223500u;
            goto label_223500;
        }
    }
    ctx->pc = 0x2234D0u;
    // 0x2234d0: 0xc088d46  jal         func_223518
    ctx->pc = 0x2234D0u;
    SET_GPR_U32(ctx, 31, 0x2234D8u);
    ctx->pc = 0x223518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223518u, 0x2234D0u, 0x2234D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2234D8u;
label_2234d8:
    // 0x2234d8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2234D8u;
    {
        const bool branch_taken_0x2234d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2234DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2234D8u;
        // 0x2234dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2234d8) {
            ctx->pc = 0x223500u;
            goto label_223500;
        }
    }
    ctx->pc = 0x2234E0u;
    // 0x2234e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2234e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2234e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2234e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2234e8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2234e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2234ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2234ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2234f0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2234f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2234f4: 0x80888f6  j           func_2223D8
    ctx->pc = 0x2234F4u;
    ctx->pc = 0x2234F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2234F4u;
    // 0x2234f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2223D8u;
    sub_002223D8_0x2223d8(rdram, ctx, runtime); return;
    ctx->pc = 0x2234FCu;
    // 0x2234fc: 0x0  nop
    ctx->pc = 0x2234fcu;
    // NOP
label_223500:
    // 0x223500: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x223500u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223504: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x223504u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x223508: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x223508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22350c: 0x3e00008  jr          $ra
    ctx->pc = 0x22350Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22350Cu;
        // 0x223510: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22350Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223514u;
}
