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

// Function: sub_001DCF70
// Address: 0x1dcf70 - 0x1dcfdc
void sub_001DCF70_0x1dcf70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DCF70_0x1dcf70");
#endif

    switch (ctx->pc) {
        case 0x1dcfa4u: goto label_1dcfa4;
        default: break;
    }

    ctx->pc = 0x1dcf70u;

    // 0x1dcf70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1dcf70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1dcf74: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1dcf74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1dcf78: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1dcf78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1dcf7c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1dcf7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1dcf80: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1dcf80u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcf84: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1dcf84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1dcf88: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1dcf88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcf8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1dcf8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1dcf90: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1dcf90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcf94: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1dcf94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1dcf98: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1dcf98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcf9c: 0xc076f20  jal         func_1DBC80
    ctx->pc = 0x1DCF9Cu;
    SET_GPR_U32(ctx, 31, 0x1DCFA4u);
    ctx->pc = 0x1DCFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCF9Cu;
    // 0x1dcfa0: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBC80u, 0x1DCF9Cu, 0x1DCFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCFA4u;
label_1dcfa4:
    // 0x1dcfa4: 0xae930004  sw          $s3, 0x4($s4)
    ctx->pc = 0x1dcfa4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 19));
    // 0x1dcfa8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dcfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dcfac: 0xae800008  sw          $zero, 0x8($s4)
    ctx->pc = 0x1dcfacu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
    // 0x1dcfb0: 0xae92000c  sw          $s2, 0xC($s4)
    ctx->pc = 0x1dcfb0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 18));
    // 0x1dcfb4: 0xae910010  sw          $s1, 0x10($s4)
    ctx->pc = 0x1dcfb4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 17));
    // 0x1dcfb8: 0xa6900014  sh          $s0, 0x14($s4)
    ctx->pc = 0x1dcfb8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 20), (uint16_t)GPR_U32(ctx, 16));
    // 0x1dcfbc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1dcfbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1dcfc0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1dcfc0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1dcfc4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1dcfc4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dcfc8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1dcfc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dcfcc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1dcfccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dcfd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1dcfd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dcfd4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCFD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCFD4u;
        // 0x1dcfd8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCFD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCFDCu;
}
