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

// Function: sub_0020F748
// Address: 0x20f748 - 0x20f7d4
void sub_0020F748_0x20f748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020F748_0x20f748");
#endif

    switch (ctx->pc) {
        case 0x20f770u: goto label_20f770;
        default: break;
    }

    ctx->pc = 0x20f748u;

    // 0x20f748: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20f748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20f74c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x20f74cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f750: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x20f750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x20f754: 0x24500018  addiu       $s0, $v0, 0x18
    ctx->pc = 0x20f754u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x20f758: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x20f758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x20f75c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20f75cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20f760: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x20f760u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f764: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x20f764u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x20f768: 0xc083df6  jal         func_20F7D8
    ctx->pc = 0x20F768u;
    SET_GPR_U32(ctx, 31, 0x20F770u);
    ctx->pc = 0x20F76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F768u;
    // 0x20f76c: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F7D8u, 0x20F768u, 0x20F770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F770u;
label_20f770:
    // 0x20f770: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x20f770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20f774: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x20f774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20f778: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x20f778u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x20f77c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x20F77Cu;
    {
        const bool branch_taken_0x20f77c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20f77c) {
            ctx->pc = 0x20F780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20F77Cu;
            // 0x20f780: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20F79Cu;
            goto label_20f79c;
        }
    }
    ctx->pc = 0x20F784u;
    // 0x20f784: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x20f784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x20f788: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x20f788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x20f78c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x20f78cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x20f790: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x20F790u;
    {
        const bool branch_taken_0x20f790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20f790) {
            ctx->pc = 0x20F794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20F790u;
            // 0x20f794: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20F7C8u;
            goto label_20f7c8;
        }
    }
    ctx->pc = 0x20F798u;
    // 0x20f798: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x20f798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_20f79c:
    // 0x20f79c: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x20f79cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x20f7a0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x20F7A0u;
    {
        const bool branch_taken_0x20f7a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20f7a0) {
            ctx->pc = 0x20F7A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20F7A0u;
            // 0x20f7a4: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20F7C0u;
            goto label_20f7c0;
        }
    }
    ctx->pc = 0x20F7A8u;
    // 0x20f7a8: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x20f7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x20f7ac: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x20f7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x20f7b0: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x20f7b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x20f7b4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x20F7B4u;
    {
        const bool branch_taken_0x20f7b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20f7b4) {
            ctx->pc = 0x20F7B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20F7B4u;
            // 0x20f7b8: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20F7C8u;
            goto label_20f7c8;
        }
    }
    ctx->pc = 0x20F7BCu;
    // 0x20f7bc: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x20f7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_20f7c0:
    // 0x20f7c0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x20f7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x20f7c4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x20f7c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_20f7c8:
    // 0x20f7c8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x20f7c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x20f7cc: 0x3e00008  jr          $ra
    ctx->pc = 0x20F7CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20F7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F7CCu;
        // 0x20f7d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F7CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20F7D4u;
}
