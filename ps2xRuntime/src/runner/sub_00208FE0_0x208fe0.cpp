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

// Function: sub_00208FE0
// Address: 0x208fe0 - 0x209034
void sub_00208FE0_0x208fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208FE0_0x208fe0");
#endif

    switch (ctx->pc) {
        case 0x208ff4u: goto label_208ff4;
        case 0x20900cu: goto label_20900c;
        case 0x209020u: goto label_209020;
        default: break;
    }

    ctx->pc = 0x208fe0u;

    // 0x208fe0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x208fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x208fe4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x208fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x208fe8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x208fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x208fec: 0xc081d84  jal         func_207610
    ctx->pc = 0x208FECu;
    SET_GPR_U32(ctx, 31, 0x208FF4u);
    ctx->pc = 0x208FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208FECu;
    // 0x208ff0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207610u, 0x208FECu, 0x208FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208FF4u;
label_208ff4:
    // 0x208ff4: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x208ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x208ff8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x208ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208ffc: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x208FFCu;
    {
        const bool branch_taken_0x208ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x209000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208FFCu;
        // 0x209000: 0x24847e28  addiu       $a0, $a0, 0x7E28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208ffc) {
            ctx->pc = 0x209018u;
            goto label_209018;
        }
    }
    ctx->pc = 0x209004u;
    // 0x209004: 0xc082e3e  jal         func_20B8F8
    ctx->pc = 0x209004u;
    SET_GPR_U32(ctx, 31, 0x20900Cu);
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x209004u, 0x20900Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20900Cu;
label_20900c:
    // 0x20900c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x20900Cu;
    {
        const bool branch_taken_0x20900c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20900Cu;
        // 0x209010: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20900c) {
            ctx->pc = 0x209024u;
            goto label_209024;
        }
    }
    ctx->pc = 0x209014u;
    // 0x209014: 0x0  nop
    ctx->pc = 0x209014u;
    // NOP
label_209018:
    // 0x209018: 0xc0821e6  jal         func_208798
    ctx->pc = 0x209018u;
    SET_GPR_U32(ctx, 31, 0x209020u);
    ctx->pc = 0x20901Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209018u;
    // 0x20901c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208798u, 0x209018u, 0x209020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209020u;
label_209020:
    // 0x209020: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x209020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_209024:
    // 0x209024: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x209024u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x209028: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x209028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20902c: 0x3e00008  jr          $ra
    ctx->pc = 0x20902Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20902Cu;
        // 0x209030: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20902Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209034u;
}
