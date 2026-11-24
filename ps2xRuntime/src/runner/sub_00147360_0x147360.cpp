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

// Function: sub_00147360
// Address: 0x147360 - 0x1473f4
void sub_00147360_0x147360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00147360_0x147360");
#endif

    switch (ctx->pc) {
        case 0x147394u: goto label_147394;
        case 0x1473a8u: goto label_1473a8;
        case 0x1473bcu: goto label_1473bc;
        case 0x1473dcu: goto label_1473dc;
        default: break;
    }

    ctx->pc = 0x147360u;

    // 0x147360: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x147360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x147364: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x147364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x147368: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x147368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x14736c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x14736cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x147370: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x147370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x147374: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x147374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x147378: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x147378u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14737c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14737cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x147380: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x147380u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147384: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x147384u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147388: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x147388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14738c: 0xc0414dc  jal         func_105370
    ctx->pc = 0x14738Cu;
    SET_GPR_U32(ctx, 31, 0x147394u);
    ctx->pc = 0x147390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14738Cu;
    // 0x147390: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x14738Cu, 0x147394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147394u;
label_147394:
    // 0x147394: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x147394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x147398: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x147398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14739c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x14739cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1473a0: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1473A0u;
    SET_GPR_U32(ctx, 31, 0x1473A8u);
    ctx->pc = 0x1473A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1473A0u;
    // 0x1473a4: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1473A0u, 0x1473A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1473A8u;
label_1473a8:
    // 0x1473a8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1473a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1473ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1473acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1473b0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1473b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1473b4: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1473B4u;
    SET_GPR_U32(ctx, 31, 0x1473BCu);
    ctx->pc = 0x1473B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1473B4u;
    // 0x1473b8: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1473B4u, 0x1473BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1473BCu;
label_1473bc:
    // 0x1473bc: 0xae400038  sw          $zero, 0x38($s2)
    ctx->pc = 0x1473bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 0));
    // 0x1473c0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1473c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1473c4: 0xae400034  sw          $zero, 0x34($s2)
    ctx->pc = 0x1473c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 0));
    // 0x1473c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1473c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1473cc: 0xae400030  sw          $zero, 0x30($s2)
    ctx->pc = 0x1473ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 0));
    // 0x1473d0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1473d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1473d4: 0xc041482  jal         func_105208
    ctx->pc = 0x1473D4u;
    SET_GPR_U32(ctx, 31, 0x1473DCu);
    ctx->pc = 0x1473D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1473D4u;
    // 0x1473d8: 0xae42003c  sw          $v0, 0x3C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105208u, 0x1473D4u, 0x1473DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1473DCu;
label_1473dc:
    // 0x1473dc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1473dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1473e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1473e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1473e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1473e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1473e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1473e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1473ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1473ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1473F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1473ECu;
        // 0x1473f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1473ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1473F4u;
}
