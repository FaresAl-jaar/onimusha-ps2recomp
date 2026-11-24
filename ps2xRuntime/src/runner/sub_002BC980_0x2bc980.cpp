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

// Function: sub_002BC980
// Address: 0x2bc980 - 0x2bc9dc
void sub_002BC980_0x2bc980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BC980_0x2bc980");
#endif

    switch (ctx->pc) {
        case 0x2bc9c8u: goto label_2bc9c8;
        default: break;
    }

    ctx->pc = 0x2bc980u;

    // 0x2bc980: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bc980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bc984: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2bc984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2bc988: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bc988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2bc98c: 0x94c30006  lhu         $v1, 0x6($a2)
    ctx->pc = 0x2bc98cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x2bc990: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2bc990u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc994: 0x94c20008  lhu         $v0, 0x8($a2)
    ctx->pc = 0x2bc994u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2bc998: 0x94c80002  lhu         $t0, 0x2($a2)
    ctx->pc = 0x2bc998u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2bc99c: 0x94c70004  lhu         $a3, 0x4($a2)
    ctx->pc = 0x2bc99cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2bc9a0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2bc9a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2bc9a4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2bc9a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2bc9a8: 0x73438  dsll        $a2, $a3, 16
    ctx->pc = 0x2bc9a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << 16);
    // 0x2bc9ac: 0xa08000e6  sb          $zero, 0xE6($a0)
    ctx->pc = 0x2bc9acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 230), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bc9b0: 0x1063025  or          $a2, $t0, $a2
    ctx->pc = 0x2bc9b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) | GPR_U64(ctx, 6));
    // 0x2bc9b4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2bc9b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc9b8: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x2bc9b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x2bc9bc: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2bc9bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2bc9c0: 0xc0a6168  jal         func_2985A0
    ctx->pc = 0x2BC9C0u;
    SET_GPR_U32(ctx, 31, 0x2BC9C8u);
    ctx->pc = 0x2BC9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC9C0u;
    // 0x2bc9c4: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2985A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2985A0u, 0x2BC9C0u, 0x2BC9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC9C8u;
label_2bc9c8:
    // 0x2bc9c8: 0x2602000a  addiu       $v0, $s0, 0xA
    ctx->pc = 0x2bc9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 10));
    // 0x2bc9cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2bc9ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bc9d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bc9d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bc9d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2BC9D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BC9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC9D4u;
        // 0x2bc9d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BC9D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BC9DCu;
}
