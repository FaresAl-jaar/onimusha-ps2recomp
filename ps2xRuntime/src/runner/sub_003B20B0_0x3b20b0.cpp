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

// Function: sub_003B20B0
// Address: 0x3b20b0 - 0x3b2110
void sub_003B20B0_0x3b20b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B20B0_0x3b20b0");
#endif

    switch (ctx->pc) {
        case 0x3b20d8u: goto label_3b20d8;
        case 0x3b20e8u: goto label_3b20e8;
        case 0x3b20f8u: goto label_3b20f8;
        default: break;
    }

    ctx->pc = 0x3b20b0u;

    // 0x3b20b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3b20b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3b20b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3b20b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3b20b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3b20b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3b20bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b20bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3b20c0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3b20c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b20c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b20c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3b20c8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3b20c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b20cc: 0xc4cc0000  lwc1        $f12, 0x0($a2)
    ctx->pc = 0x3b20ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3b20d0: 0xc04155e  jal         func_105578
    ctx->pc = 0x3B20D0u;
    SET_GPR_U32(ctx, 31, 0x3B20D8u);
    ctx->pc = 0x3B20D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B20D0u;
    // 0x3b20d4: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105578u, 0x3B20D0u, 0x3B20D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B20D8u;
label_3b20d8:
    // 0x3b20d8: 0xc60c0004  lwc1        $f12, 0x4($s0)
    ctx->pc = 0x3b20d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3b20dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b20dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b20e0: 0xc041588  jal         func_105620
    ctx->pc = 0x3B20E0u;
    SET_GPR_U32(ctx, 31, 0x3B20E8u);
    ctx->pc = 0x3B20E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B20E0u;
    // 0x3b20e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105620u, 0x3B20E0u, 0x3B20E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B20E8u;
label_3b20e8:
    // 0x3b20e8: 0xc60c0008  lwc1        $f12, 0x8($s0)
    ctx->pc = 0x3b20e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3b20ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b20ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b20f0: 0xc041534  jal         func_1054D0
    ctx->pc = 0x3B20F0u;
    SET_GPR_U32(ctx, 31, 0x3B20F8u);
    ctx->pc = 0x3B20F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B20F0u;
    // 0x3b20f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054D0u, 0x3B20F0u, 0x3B20F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B20F8u;
label_3b20f8:
    // 0x3b20f8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3b20f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b20fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3b20fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b2100: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b2100u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b2104: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b2104u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b2108: 0x3e00008  jr          $ra
    ctx->pc = 0x3B2108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B210Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2108u;
        // 0x3b210c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B2108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B2110u;
}
