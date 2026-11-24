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

// Function: sub_003BF080
// Address: 0x3bf080 - 0x3bf0f4
void sub_003BF080_0x3bf080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BF080_0x3bf080");
#endif

    switch (ctx->pc) {
        case 0x3bf0acu: goto label_3bf0ac;
        case 0x3bf0bcu: goto label_3bf0bc;
        case 0x3bf0d8u: goto label_3bf0d8;
        default: break;
    }

    ctx->pc = 0x3bf080u;

    // 0x3bf080: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3bf080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3bf084: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3bf084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3bf088: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3bf088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3bf08c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3bf08cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3bf090: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3bf090u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bf094: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3bf094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3bf098: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3bf098u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bf09c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3bf09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3bf0a0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3bf0a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bf0a4: 0xc0ef8bc  jal         func_3BE2F0
    ctx->pc = 0x3BF0A4u;
    SET_GPR_U32(ctx, 31, 0x3BF0ACu);
    ctx->pc = 0x3BF0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF0A4u;
    // 0x3bf0a8: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE2F0u, 0x3BF0A4u, 0x3BF0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF0ACu;
label_3bf0ac:
    // 0x3bf0ac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3bf0acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bf0b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3bf0b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bf0b4: 0xc0efa18  jal         func_3BE860
    ctx->pc = 0x3BF0B4u;
    SET_GPR_U32(ctx, 31, 0x3BF0BCu);
    ctx->pc = 0x3BF0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF0B4u;
    // 0x3bf0b8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE860u, 0x3BF0B4u, 0x3BF0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF0BCu;
label_3bf0bc:
    // 0x3bf0bc: 0x3c024596  lui         $v0, 0x4596
    ctx->pc = 0x3bf0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17814 << 16));
    // 0x3bf0c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3bf0c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bf0c4: 0x34425000  ori         $v0, $v0, 0x5000
    ctx->pc = 0x3bf0c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20480);
    // 0x3bf0c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3bf0c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bf0cc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3bf0ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3bf0d0: 0xc0efbc8  jal         func_3BEF20
    ctx->pc = 0x3BF0D0u;
    SET_GPR_U32(ctx, 31, 0x3BF0D8u);
    ctx->pc = 0x3BF0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF0D0u;
    // 0x3bf0d4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEF20u, 0x3BF0D0u, 0x3BF0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF0D8u;
label_3bf0d8:
    // 0x3bf0d8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3bf0d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3bf0dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3bf0dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3bf0e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3bf0e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3bf0e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3bf0e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bf0e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3bf0e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bf0ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3BF0ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BF0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF0ECu;
        // 0x3bf0f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BF0ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BF0F4u;
}
