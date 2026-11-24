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

// Function: sub_00256800
// Address: 0x256800 - 0x256890
void sub_00256800_0x256800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00256800_0x256800");
#endif

    switch (ctx->pc) {
        case 0x256834u: goto label_256834;
        case 0x256874u: goto label_256874;
        default: break;
    }

    ctx->pc = 0x256800u;

    // 0x256800: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x256800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x256804: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x256804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x256808: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x256808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25680c: 0x8c820050  lw          $v0, 0x50($a0)
    ctx->pc = 0x25680cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x256810: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x256810u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256814: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x256814u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x256818: 0x84430022  lh          $v1, 0x22($v0)
    ctx->pc = 0x256818u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 34)));
    // 0x25681c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x25681cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x256820: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x256820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x256824: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x256824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x256828: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x256828u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x25682c: 0xc0959f4  jal         func_2567D0
    ctx->pc = 0x25682Cu;
    SET_GPR_U32(ctx, 31, 0x256834u);
    ctx->pc = 0x256830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25682Cu;
    // 0x256830: 0x6343f  dsra32      $a2, $a2, 16 (Delay Slot)
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2567D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2567D0u, 0x25682Cu, 0x256834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256834u;
label_256834:
    // 0x256834: 0x8e060050  lw          $a2, 0x50($s0)
    ctx->pc = 0x256834u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x256838: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x256838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25683c: 0x84c30020  lh          $v1, 0x20($a2)
    ctx->pc = 0x25683cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x256840: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x256840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x256844: 0xa4c20020  sh          $v0, 0x20($a2)
    ctx->pc = 0x256844u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 32), (uint16_t)GPR_U32(ctx, 2));
    // 0x256848: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x256848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x25684c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x25684cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x256850: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x256850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x256854: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x256854u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x256858: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x256858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x25685c: 0x94490024  lhu         $t1, 0x24($v0)
    ctx->pc = 0x25685cu;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x256860: 0x9046009f  lbu         $a2, 0x9F($v0)
    ctx->pc = 0x256860u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 159)));
    // 0x256864: 0x8c470010  lw          $a3, 0x10($v0)
    ctx->pc = 0x256864u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x256868: 0x8448001a  lh          $t0, 0x1A($v0)
    ctx->pc = 0x256868u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 26)));
    // 0x25686c: 0xc095e0c  jal         func_257830
    ctx->pc = 0x25686Cu;
    SET_GPR_U32(ctx, 31, 0x256874u);
    ctx->pc = 0x256870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25686Cu;
    // 0x256870: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257830u, 0x25686Cu, 0x256874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256874u;
label_256874:
    // 0x256874: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x256874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x256878: 0xa462001e  sh          $v0, 0x1E($v1)
    ctx->pc = 0x256878u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 30), (uint16_t)GPR_U32(ctx, 2));
    // 0x25687c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25687cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x256880: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x256880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x256884: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x256884u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x256888: 0x3e00008  jr          $ra
    ctx->pc = 0x256888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25688Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256888u;
        // 0x25688c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x256890u;
}
