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

// Function: sub_001CF810
// Address: 0x1cf810 - 0x1cf8a8
void sub_001CF810_0x1cf810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CF810_0x1cf810");
#endif

    switch (ctx->pc) {
        case 0x1cf860u: goto label_1cf860;
        case 0x1cf878u: goto label_1cf878;
        case 0x1cf884u: goto label_1cf884;
        default: break;
    }

    ctx->pc = 0x1cf810u;

    // 0x1cf810: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cf810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cf814: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cf814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf818: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cf818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cf81c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cf81cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cf820: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cf820u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf824: 0x90843022  lbu         $a0, 0x3022($a0)
    ctx->pc = 0x1cf824u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12322)));
    // 0x1cf828: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1CF828u;
    {
        const bool branch_taken_0x1cf828 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1cf828) {
            ctx->pc = 0x1CF858u;
            goto label_1cf858;
        }
    }
    ctx->pc = 0x1CF830u;
    // 0x1cf830: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CF830u;
    {
        const bool branch_taken_0x1cf830 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf830) {
            ctx->pc = 0x1CF840u;
            goto label_1cf840;
        }
    }
    ctx->pc = 0x1CF838u;
    // 0x1cf838: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1CF838u;
    {
        const bool branch_taken_0x1cf838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf838) {
            ctx->pc = 0x1CF898u;
            goto label_1cf898;
        }
    }
    ctx->pc = 0x1CF840u;
label_1cf840:
    // 0x1cf840: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cf840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cf844: 0x9022cea4  lbu         $v0, -0x315C($at)
    ctx->pc = 0x1cf844u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x81CEA4u));
    // 0x1cf848: 0xa2023023  sb          $v0, 0x3023($s0)
    ctx->pc = 0x1cf848u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12323), (uint8_t)GPR_U32(ctx, 2));
    // 0x1cf84c: 0x92023022  lbu         $v0, 0x3022($s0)
    ctx->pc = 0x1cf84cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12322)));
    // 0x1cf850: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1cf850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1cf854: 0xa2023022  sb          $v0, 0x3022($s0)
    ctx->pc = 0x1cf854u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12322), (uint8_t)GPR_U32(ctx, 2));
label_1cf858:
    // 0x1cf858: 0xc074050  jal         func_1D0140
    ctx->pc = 0x1CF858u;
    SET_GPR_U32(ctx, 31, 0x1CF860u);
    ctx->pc = 0x1CF85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF858u;
    // 0x1cf85c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0140u, 0x1CF858u, 0x1CF860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF860u;
label_1cf860:
    // 0x1cf860: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1CF860u;
    {
        const bool branch_taken_0x1cf860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf860) {
            ctx->pc = 0x1CF898u;
            goto label_1cf898;
        }
    }
    ctx->pc = 0x1CF868u;
    // 0x1cf868: 0xa2003026  sb          $zero, 0x3026($s0)
    ctx->pc = 0x1cf868u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12326), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cf86c: 0x8e043030  lw          $a0, 0x3030($s0)
    ctx->pc = 0x1cf86cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12336)));
    // 0x1cf870: 0xc073a30  jal         func_1CE8C0
    ctx->pc = 0x1CF870u;
    SET_GPR_U32(ctx, 31, 0x1CF878u);
    ctx->pc = 0x1CF874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF870u;
    // 0x1cf874: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE8C0u, 0x1CF870u, 0x1CF878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF878u;
label_1cf878:
    // 0x1cf878: 0x8e043034  lw          $a0, 0x3034($s0)
    ctx->pc = 0x1cf878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12340)));
    // 0x1cf87c: 0xc073a30  jal         func_1CE8C0
    ctx->pc = 0x1CF87Cu;
    SET_GPR_U32(ctx, 31, 0x1CF884u);
    ctx->pc = 0x1CF880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF87Cu;
    // 0x1cf880: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE8C0u, 0x1CF87Cu, 0x1CF884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF884u;
label_1cf884:
    // 0x1cf884: 0x92043022  lbu         $a0, 0x3022($s0)
    ctx->pc = 0x1cf884u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12322)));
    // 0x1cf888: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cf888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf88c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1cf88cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1cf890: 0xa2043022  sb          $a0, 0x3022($s0)
    ctx->pc = 0x1cf890u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12322), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cf894: 0xa2033021  sb          $v1, 0x3021($s0)
    ctx->pc = 0x1cf894u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12321), (uint8_t)GPR_U32(ctx, 3));
label_1cf898:
    // 0x1cf898: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cf898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cf89c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cf89cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf8a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF8A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF8A0u;
        // 0x1cf8a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF8A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF8A8u;
}
