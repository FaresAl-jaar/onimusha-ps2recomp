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

// Function: sub_0028CCA0
// Address: 0x28cca0 - 0x28ccfc
void sub_0028CCA0_0x28cca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028CCA0_0x28cca0");
#endif

    switch (ctx->pc) {
        case 0x28cce4u: goto label_28cce4;
        default: break;
    }

    ctx->pc = 0x28cca0u;

    // 0x28cca0: 0x61c3c  dsll32      $v1, $a2, 16
    ctx->pc = 0x28cca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 16));
    // 0x28cca4: 0x7143c  dsll32      $v0, $a3, 16
    ctx->pc = 0x28cca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 16));
    // 0x28cca8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x28cca8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x28ccac: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x28ccacu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x28ccb0: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x28ccb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x28ccb4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28ccb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28ccb8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28ccb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28ccbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28ccbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28ccc0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x28ccc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ccc4: 0x9082015d  lbu         $v0, 0x15D($a0)
    ctx->pc = 0x28ccc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 349)));
    // 0x28ccc8: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x28ccc8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x28cccc: 0x3443c  dsll32      $t0, $v1, 16
    ctx->pc = 0x28ccccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << (32 + 16));
    // 0x28ccd0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28CCD0u;
    {
        const bool branch_taken_0x28ccd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CCD0u;
        // 0x28ccd4: 0x8443f  dsra32      $t0, $t0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ccd0) {
            ctx->pc = 0x28CCE8u;
            goto label_28cce8;
        }
    }
    ctx->pc = 0x28CCD8u;
    // 0x28ccd8: 0x8c870150  lw          $a3, 0x150($a0)
    ctx->pc = 0x28ccd8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x28ccdc: 0xc0a2c24  jal         func_28B090
    ctx->pc = 0x28CCDCu;
    SET_GPR_U32(ctx, 31, 0x28CCE4u);
    ctx->pc = 0x28CCE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CCDCu;
    // 0x28cce0: 0x248600a0  addiu       $a2, $a0, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28B090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28B090u, 0x28CCDCu, 0x28CCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CCE4u;
label_28cce4:
    // 0x28cce4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x28cce4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_28cce8:
    // 0x28cce8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x28cce8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ccec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28ccecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28ccf0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28ccf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28ccf4: 0x3e00008  jr          $ra
    ctx->pc = 0x28CCF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28CCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CCF4u;
        // 0x28ccf8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28CCF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28CCFCu;
}
