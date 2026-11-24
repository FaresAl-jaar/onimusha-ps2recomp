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

// Function: sub_001A1970
// Address: 0x1a1970 - 0x1a19ec
void sub_001A1970_0x1a1970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A1970_0x1a1970");
#endif

    switch (ctx->pc) {
        case 0x1a1994u: goto label_1a1994;
        case 0x1a19dcu: goto label_1a19dc;
        default: break;
    }

    ctx->pc = 0x1a1970u;

    // 0x1a1970: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1a1970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1a1974: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x1a1974u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x1a1978: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a1978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a197c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1a197cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1a1980: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a1980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a1984: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1a1984u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a1988: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a1988u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1a198c: 0xc068648  jal         func_1A1920
    ctx->pc = 0x1A198Cu;
    SET_GPR_U32(ctx, 31, 0x1A1994u);
    ctx->pc = 0x1A1990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A198Cu;
    // 0x1a1990: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1920u, 0x1A198Cu, 0x1A1994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1994u;
label_1a1994:
    // 0x1a1994: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1a1994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1a1998: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1a1998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1a199c: 0x2442e7a0  addiu       $v0, $v0, -0x1860
    ctx->pc = 0x1a199cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961056));
    // 0x1a19a0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1a19a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a19a4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1a19a4u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x40E7A0u));
    // 0x1a19a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a19a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a19ac: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1a19acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1a19b0: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x1a19b0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x1a19b4: 0x2442e7b0  addiu       $v0, $v0, -0x1850
    ctx->pc = 0x1a19b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961072));
    // 0x1a19b8: 0x78480000  lq          $t0, 0x0($v0)
    ctx->pc = 0x1a19b8u;
    SET_GPR_VEC(ctx, 8, FAST_READ128(0x40E7B0u));
    // 0x1a19bc: 0x78470010  lq          $a3, 0x10($v0)
    ctx->pc = 0x1a19bcu;
    SET_GPR_VEC(ctx, 7, FAST_READ128(0x40E7C0u));
    // 0x1a19c0: 0x78430020  lq          $v1, 0x20($v0)
    ctx->pc = 0x1a19c0u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x40E7D0u));
    // 0x1a19c4: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x1a19c4u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x40E7E0u));
    // 0x1a19c8: 0x7cc80000  sq          $t0, 0x0($a2)
    ctx->pc = 0x1a19c8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 8));
    // 0x1a19cc: 0x7cc70010  sq          $a3, 0x10($a2)
    ctx->pc = 0x1a19ccu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 7));
    // 0x1a19d0: 0x7cc30020  sq          $v1, 0x20($a2)
    ctx->pc = 0x1a19d0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 3));
    // 0x1a19d4: 0xc06867c  jal         func_1A19F0
    ctx->pc = 0x1A19D4u;
    SET_GPR_U32(ctx, 31, 0x1A19DCu);
    ctx->pc = 0x1A19D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A19D4u;
    // 0x1a19d8: 0x7cc20030  sq          $v0, 0x30($a2) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A19F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A19F0u, 0x1A19D4u, 0x1A19DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A19DCu;
label_1a19dc:
    // 0x1a19dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a19dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a19e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a19e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a19e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A19E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A19E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A19E4u;
        // 0x1a19e8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A19E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A19ECu;
}
