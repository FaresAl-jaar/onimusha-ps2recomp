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

// Function: sub_003E9430
// Address: 0x3e9430 - 0x3e94a4
void sub_003E9430_0x3e9430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E9430_0x3e9430");
#endif

    switch (ctx->pc) {
        case 0x3e9454u: goto label_3e9454;
        case 0x3e945cu: goto label_3e945c;
        default: break;
    }

    ctx->pc = 0x3e9430u;

    // 0x3e9430: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3e9430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3e9434: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3e9434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3e9438: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3e9438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3e943c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3e943cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3e9440: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3e9440u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e9444: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e9444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3e9448: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3e9448u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e944c: 0xc0fb6a8  jal         func_3EDAA0
    ctx->pc = 0x3E944Cu;
    SET_GPR_U32(ctx, 31, 0x3E9454u);
    ctx->pc = 0x3E9450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E944Cu;
    // 0x3e9450: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EDAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EDAA0u, 0x3E944Cu, 0x3E9454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9454u;
label_3e9454:
    // 0x3e9454: 0xc0fb6a4  jal         func_3EDA90
    ctx->pc = 0x3E9454u;
    SET_GPR_U32(ctx, 31, 0x3E945Cu);
    ctx->pc = 0x3E9458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9454u;
    // 0x3e9458: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EDA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EDA90u, 0x3E9454u, 0x3E945Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E945Cu;
label_3e945c:
    // 0x3e945c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3e945cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3e9460: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3e9460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e9464: 0xa6442b32  sh          $a0, 0x2B32($s2)
    ctx->pc = 0x3e9464u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 11058), (uint16_t)GPR_U32(ctx, 4));
    // 0x3e9468: 0xa6512b38  sh          $s1, 0x2B38($s2)
    ctx->pc = 0x3e9468u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 11064), (uint16_t)GPR_U32(ctx, 17));
    // 0x3e946c: 0xa2432b2e  sb          $v1, 0x2B2E($s2)
    ctx->pc = 0x3e946cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 11054), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e9470: 0xa2432b34  sb          $v1, 0x2B34($s2)
    ctx->pc = 0x3e9470u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 11060), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e9474: 0xa2432b2f  sb          $v1, 0x2B2F($s2)
    ctx->pc = 0x3e9474u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 11055), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e9478: 0xa2432b35  sb          $v1, 0x2B35($s2)
    ctx->pc = 0x3e9478u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 11061), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e947c: 0xa2432b30  sb          $v1, 0x2B30($s2)
    ctx->pc = 0x3e947cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 11056), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e9480: 0xa2432b36  sb          $v1, 0x2B36($s2)
    ctx->pc = 0x3e9480u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 11062), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e9484: 0xa2432b31  sb          $v1, 0x2B31($s2)
    ctx->pc = 0x3e9484u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 11057), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e9488: 0xa2432b37  sb          $v1, 0x2B37($s2)
    ctx->pc = 0x3e9488u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 11063), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e948c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3e948cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e9490: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3e9490u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e9494: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3e9494u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e9498: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e9498u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e949c: 0x3e00008  jr          $ra
    ctx->pc = 0x3E949Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E94A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E949Cu;
        // 0x3e94a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E949Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E94A4u;
}
