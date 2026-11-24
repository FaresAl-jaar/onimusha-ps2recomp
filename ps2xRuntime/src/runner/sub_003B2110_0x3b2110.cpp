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

// Function: sub_003B2110
// Address: 0x3b2110 - 0x3b217c
void sub_003B2110_0x3b2110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B2110_0x3b2110");
#endif

    switch (ctx->pc) {
        case 0x3b2148u: goto label_3b2148;
        case 0x3b2158u: goto label_3b2158;
        case 0x3b2168u: goto label_3b2168;
        default: break;
    }

    ctx->pc = 0x3b2110u;

    // 0x3b2110: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3b2110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3b2114: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3b2114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3b2118: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3b2118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3b211c: 0x2442de10  addiu       $v0, $v0, -0x21F0
    ctx->pc = 0x3b211cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958608));
    // 0x3b2120: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b2120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3b2124: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x3b2124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3b2128: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b2128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3b212c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b212cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2130: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3b2130u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x65DE10u));
    // 0x3b2134: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3b2134u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2138: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3b2138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3b213c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x3b213cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x3b2140: 0xc04150c  jal         func_105430
    ctx->pc = 0x3B2140u;
    SET_GPR_U32(ctx, 31, 0x3B2148u);
    ctx->pc = 0x3B2144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2140u;
    // 0x3b2144: 0xe7ac0078  swc1        $f12, 0x78($sp) (Delay Slot)
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105430u, 0x3B2140u, 0x3B2148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2148u;
label_3b2148:
    // 0x3b2148: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3b2148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3b214c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3b214cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2150: 0xc0ec82c  jal         func_3B20B0
    ctx->pc = 0x3B2150u;
    SET_GPR_U32(ctx, 31, 0x3B2158u);
    ctx->pc = 0x3B2154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2150u;
    // 0x3b2154: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B20B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B20B0u, 0x3B2150u, 0x3B2158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2158u;
label_3b2158:
    // 0x3b2158: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b2158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b215c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3b215cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3b2160: 0xc041442  jal         func_105108
    ctx->pc = 0x3B2160u;
    SET_GPR_U32(ctx, 31, 0x3B2168u);
    ctx->pc = 0x3B2164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2160u;
    // 0x3b2164: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x3B2160u, 0x3B2168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2168u;
label_3b2168:
    // 0x3b2168: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3b2168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b216c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b216cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b2170: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b2170u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b2174: 0x3e00008  jr          $ra
    ctx->pc = 0x3B2174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B2178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2174u;
        // 0x3b2178: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B2174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B217Cu;
}
