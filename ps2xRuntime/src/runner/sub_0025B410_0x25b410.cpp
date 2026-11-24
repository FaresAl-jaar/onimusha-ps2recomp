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

// Function: sub_0025B410
// Address: 0x25b410 - 0x25b46c
void sub_0025B410_0x25b410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025B410_0x25b410");
#endif

    switch (ctx->pc) {
        case 0x25b448u: goto label_25b448;
        default: break;
    }

    ctx->pc = 0x25b410u;

    // 0x25b410: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25b410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25b414: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25b414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x25b418: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25b418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25b41c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25b41cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25b420: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25b420u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b424: 0x84a200c0  lh          $v0, 0xC0($a1)
    ctx->pc = 0x25b424u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 192)));
    // 0x25b428: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x25b428u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b42c: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x25b42cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x25b430: 0x84a200c2  lh          $v0, 0xC2($a1)
    ctx->pc = 0x25b430u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 194)));
    // 0x25b434: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x25b434u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x25b438: 0x84a200c4  lh          $v0, 0xC4($a1)
    ctx->pc = 0x25b438u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 196)));
    // 0x25b43c: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x25b43cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x25b440: 0xc076570  jal         func_1D95C0
    ctx->pc = 0x25B440u;
    SET_GPR_U32(ctx, 31, 0x25B448u);
    ctx->pc = 0x25B444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B440u;
    // 0x25b444: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D95C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D95C0u, 0x25B440u, 0x25B448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B448u;
label_25b448:
    // 0x25b448: 0x7a040020  lq          $a0, 0x20($s0)
    ctx->pc = 0x25b448u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x25b44c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x25b44cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x25b450: 0x7e240030  sq          $a0, 0x30($s1)
    ctx->pc = 0x25b450u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 4));
    // 0x25b454: 0xae23003c  sw          $v1, 0x3C($s1)
    ctx->pc = 0x25b454u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 3));
    // 0x25b458: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25b458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25b45c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25b45cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25b460: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25b460u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25b464: 0x3e00008  jr          $ra
    ctx->pc = 0x25B464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B464u;
        // 0x25b468: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25B46Cu;
}
