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

// Function: sub_001D0080
// Address: 0x1d0080 - 0x1d0124
void sub_001D0080_0x1d0080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0080_0x1d0080");
#endif

    switch (ctx->pc) {
        case 0x1d00e8u: goto label_1d00e8;
        case 0x1d00f8u: goto label_1d00f8;
        case 0x1d0108u: goto label_1d0108;
        case 0x1d0118u: goto label_1d0118;
        default: break;
    }

    ctx->pc = 0x1d0080u;

    // 0x1d0080: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d0080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d0084: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1d0084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1d0088: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d0088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d008c: 0xaf8087dc  sw          $zero, -0x7824($gp)
    ctx->pc = 0x1d008cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936540), GPR_U32(ctx, 0));
    // 0x1d0090: 0xa0803022  sb          $zero, 0x3022($a0)
    ctx->pc = 0x1d0090u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12322), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d0094: 0xa0803021  sb          $zero, 0x3021($a0)
    ctx->pc = 0x1d0094u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12321), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d0098: 0xa0803023  sb          $zero, 0x3023($a0)
    ctx->pc = 0x1d0098u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12323), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d009c: 0xa0803025  sb          $zero, 0x3025($a0)
    ctx->pc = 0x1d009cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12325), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d00a0: 0xa0803026  sb          $zero, 0x3026($a0)
    ctx->pc = 0x1d00a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12326), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d00a4: 0xac803034  sw          $zero, 0x3034($a0)
    ctx->pc = 0x1d00a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12340), GPR_U32(ctx, 0));
    // 0x1d00a8: 0xac803030  sw          $zero, 0x3030($a0)
    ctx->pc = 0x1d00a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12336), GPR_U32(ctx, 0));
    // 0x1d00ac: 0x90853020  lbu         $a1, 0x3020($a0)
    ctx->pc = 0x1d00acu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12320)));
    // 0x1d00b0: 0x10a30017  beq         $a1, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1D00B0u;
    {
        const bool branch_taken_0x1d00b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D00B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D00B0u;
        // 0x1d00b4: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d00b0) {
            ctx->pc = 0x1D0110u;
            goto label_1d0110;
        }
    }
    ctx->pc = 0x1D00B8u;
    // 0x1d00b8: 0x10a30011  beq         $a1, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D00B8u;
    {
        const bool branch_taken_0x1d00b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d00b8) {
            ctx->pc = 0x1D0100u;
            goto label_1d0100;
        }
    }
    ctx->pc = 0x1D00C0u;
    // 0x1d00c0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d00c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d00c4: 0x10a3000a  beq         $a1, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1D00C4u;
    {
        const bool branch_taken_0x1d00c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D00C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D00C4u;
        // 0x1d00c8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d00c4) {
            ctx->pc = 0x1D00F0u;
            goto label_1d00f0;
        }
    }
    ctx->pc = 0x1D00CCu;
    // 0x1d00cc: 0x10a30004  beq         $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D00CCu;
    {
        const bool branch_taken_0x1d00cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d00cc) {
            ctx->pc = 0x1D00E0u;
            goto label_1d00e0;
        }
    }
    ctx->pc = 0x1D00D4u;
    // 0x1d00d4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1D00D4u;
    {
        const bool branch_taken_0x1d00d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d00d4) {
            ctx->pc = 0x1D0118u;
            goto label_1d0118;
        }
    }
    ctx->pc = 0x1D00DCu;
    // 0x1d00dc: 0x0  nop
    ctx->pc = 0x1d00dcu;
    // NOP
label_1d00e0:
    // 0x1d00e0: 0xc073e30  jal         func_1CF8C0
    ctx->pc = 0x1D00E0u;
    SET_GPR_U32(ctx, 31, 0x1D00E8u);
    ctx->pc = 0x1CF8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF8C0u, 0x1D00E0u, 0x1D00E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D00E8u;
label_1d00e8:
    // 0x1d00e8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1D00E8u;
    {
        const bool branch_taken_0x1d00e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d00e8) {
            ctx->pc = 0x1D0118u;
            goto label_1d0118;
        }
    }
    ctx->pc = 0x1D00F0u;
label_1d00f0:
    // 0x1d00f0: 0xc073d94  jal         func_1CF650
    ctx->pc = 0x1D00F0u;
    SET_GPR_U32(ctx, 31, 0x1D00F8u);
    ctx->pc = 0x1CF650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF650u, 0x1D00F0u, 0x1D00F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D00F8u;
label_1d00f8:
    // 0x1d00f8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1D00F8u;
    {
        const bool branch_taken_0x1d00f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d00f8) {
            ctx->pc = 0x1D0118u;
            goto label_1d0118;
        }
    }
    ctx->pc = 0x1D0100u;
label_1d0100:
    // 0x1d0100: 0xc073fa4  jal         func_1CFE90
    ctx->pc = 0x1D0100u;
    SET_GPR_U32(ctx, 31, 0x1D0108u);
    ctx->pc = 0x1CFE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFE90u, 0x1D0100u, 0x1D0108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0108u;
label_1d0108:
    // 0x1d0108: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D0108u;
    {
        const bool branch_taken_0x1d0108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0108) {
            ctx->pc = 0x1D0118u;
            goto label_1d0118;
        }
    }
    ctx->pc = 0x1D0110u;
label_1d0110:
    // 0x1d0110: 0xc073e00  jal         func_1CF800
    ctx->pc = 0x1D0110u;
    SET_GPR_U32(ctx, 31, 0x1D0118u);
    ctx->pc = 0x1CF800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF800u, 0x1D0110u, 0x1D0118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0118u;
label_1d0118:
    // 0x1d0118: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d0118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d011c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D011Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D011Cu;
        // 0x1d0120: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D011Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0124u;
}
