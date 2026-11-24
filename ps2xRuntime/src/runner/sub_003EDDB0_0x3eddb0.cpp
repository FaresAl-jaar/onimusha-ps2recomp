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

// Function: sub_003EDDB0
// Address: 0x3eddb0 - 0x3ede24
void sub_003EDDB0_0x3eddb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EDDB0_0x3eddb0");
#endif

    switch (ctx->pc) {
        case 0x3edddcu: goto label_3edddc;
        case 0x3eddf4u: goto label_3eddf4;
        case 0x3ede00u: goto label_3ede00;
        default: break;
    }

    ctx->pc = 0x3eddb0u;

    // 0x3eddb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3eddb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3eddb4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3eddb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3eddb8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3eddb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3eddbc: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x3eddbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x3eddc0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3eddc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3eddc4: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x3eddc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3eddc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3eddc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3eddcc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3eddccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eddd0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3eddd0u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x660060u));
    // 0x3eddd4: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x3EDDD4u;
    SET_GPR_U32(ctx, 31, 0x3EDDDCu);
    ctx->pc = 0x3EDDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EDDD4u;
    // 0x3eddd8: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x3EDDD4u, 0x3EDDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EDDDCu;
label_3edddc:
    // 0x3edddc: 0x86252b2c  lh          $a1, 0x2B2C($s1)
    ctx->pc = 0x3edddcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 11052)));
    // 0x3edde0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3edde0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3edde4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3edde4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3edde8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3edde8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eddec: 0xc0aacac  jal         func_2AB2B0
    ctx->pc = 0x3EDDECu;
    SET_GPR_U32(ctx, 31, 0x3EDDF4u);
    ctx->pc = 0x3EDDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EDDECu;
    // 0x3eddf0: 0x27a80030  addiu       $t0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB2B0u, 0x3EDDECu, 0x3EDDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EDDF4u;
label_3eddf4:
    // 0x3eddf4: 0x8e242960  lw          $a0, 0x2960($s1)
    ctx->pc = 0x3eddf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10592)));
    // 0x3eddf8: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x3EDDF8u;
    SET_GPR_U32(ctx, 31, 0x3EDE00u);
    ctx->pc = 0x3EDDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EDDF8u;
    // 0x3eddfc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x3EDDF8u, 0x3EDE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EDE00u;
label_3ede00:
    // 0x3ede00: 0xae302960  sw          $s0, 0x2960($s1)
    ctx->pc = 0x3ede00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10592), GPR_U32(ctx, 16));
    // 0x3ede04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ede04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ede08: 0xa2232be0  sb          $v1, 0x2BE0($s1)
    ctx->pc = 0x3ede08u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11232), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ede0c: 0xa2202be1  sb          $zero, 0x2BE1($s1)
    ctx->pc = 0x3ede0cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11233), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ede10: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3ede10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ede14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3ede14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ede18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ede18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ede1c: 0x3e00008  jr          $ra
    ctx->pc = 0x3EDE1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EDE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDE1Cu;
        // 0x3ede20: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EDE1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EDE24u;
}
