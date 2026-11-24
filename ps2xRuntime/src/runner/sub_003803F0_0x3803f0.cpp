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

// Function: sub_003803F0
// Address: 0x3803f0 - 0x380490
void sub_003803F0_0x3803f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003803F0_0x3803f0");
#endif

    switch (ctx->pc) {
        case 0x380420u: goto label_380420;
        case 0x380434u: goto label_380434;
        case 0x380448u: goto label_380448;
        case 0x380460u: goto label_380460;
        default: break;
    }

    ctx->pc = 0x3803f0u;

    // 0x3803f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3803f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3803f4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3803f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3803f8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3803f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3803fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3803fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x380400: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x380400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x380404: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x380404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x380408: 0x80912b90  lb          $s1, 0x2B90($a0)
    ctx->pc = 0x380408u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 11152)));
    // 0x38040c: 0x8c922b80  lw          $s2, 0x2B80($a0)
    ctx->pc = 0x38040cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11136)));
    // 0x380410: 0x1622000b  bne         $s1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x380410u;
    {
        const bool branch_taken_0x380410 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x380414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380410u;
        // 0x380414: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380410) {
            ctx->pc = 0x380440u;
            goto label_380440;
        }
    }
    ctx->pc = 0x380418u;
    // 0x380418: 0xc04d4a0  jal         func_135280
    ctx->pc = 0x380418u;
    SET_GPR_U32(ctx, 31, 0x380420u);
    ctx->pc = 0x135280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135280u, 0x380418u, 0x380420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380420u;
label_380420:
    // 0x380420: 0x92430003  lbu         $v1, 0x3($s2)
    ctx->pc = 0x380420u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x380424: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x380424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380428: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x380428u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x38042c: 0xc04b742  jal         func_12DD08
    ctx->pc = 0x38042Cu;
    SET_GPR_U32(ctx, 31, 0x380434u);
    ctx->pc = 0x380430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38042Cu;
    // 0x380430: 0x5283f  dsra32      $a1, $a1, 0 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DD08u, 0x38042Cu, 0x380434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380434u;
label_380434:
    // 0x380434: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x380434u;
    {
        const bool branch_taken_0x380434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x380438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380434u;
        // 0x380438: 0xa2022b90  sb          $v0, 0x2B90($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11152), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380434) {
            ctx->pc = 0x380478u;
            goto label_380478;
        }
    }
    ctx->pc = 0x38043Cu;
    // 0x38043c: 0x0  nop
    ctx->pc = 0x38043cu;
    // NOP
label_380440:
    // 0x380440: 0xc04d4a0  jal         func_135280
    ctx->pc = 0x380440u;
    SET_GPR_U32(ctx, 31, 0x380448u);
    ctx->pc = 0x135280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135280u, 0x380440u, 0x380448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380448u;
label_380448:
    // 0x380448: 0x92430003  lbu         $v1, 0x3($s2)
    ctx->pc = 0x380448u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x38044c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x38044cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380450: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x380450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x380454: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x380454u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x380458: 0xc04b742  jal         func_12DD08
    ctx->pc = 0x380458u;
    SET_GPR_U32(ctx, 31, 0x380460u);
    ctx->pc = 0x38045Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380458u;
    // 0x38045c: 0x5283f  dsra32      $a1, $a1, 0 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DD08u, 0x380458u, 0x380460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380460u;
label_380460:
    // 0x380460: 0xa2022b90  sb          $v0, 0x2B90($s0)
    ctx->pc = 0x380460u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11152), (uint8_t)GPR_U32(ctx, 2));
    // 0x380464: 0x82042b90  lb          $a0, 0x2B90($s0)
    ctx->pc = 0x380464u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 11152)));
    // 0x380468: 0x91182a  slt         $v1, $a0, $s1
    ctx->pc = 0x380468u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x38046c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x38046Cu;
    {
        const bool branch_taken_0x38046c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x380470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38046Cu;
        // 0x380470: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38046c) {
            ctx->pc = 0x380478u;
            goto label_380478;
        }
    }
    ctx->pc = 0x380474u;
    // 0x380474: 0xa2032b90  sb          $v1, 0x2B90($s0)
    ctx->pc = 0x380474u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11152), (uint8_t)GPR_U32(ctx, 3));
label_380478:
    // 0x380478: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x380478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38047c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x38047cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x380480: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x380480u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x380484: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x380484u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x380488: 0x3e00008  jr          $ra
    ctx->pc = 0x380488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38048Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380488u;
        // 0x38048c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x380488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x380490u;
}
