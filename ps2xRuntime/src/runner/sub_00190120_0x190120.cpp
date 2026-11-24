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

// Function: sub_00190120
// Address: 0x190120 - 0x190180
void sub_00190120_0x190120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00190120_0x190120");
#endif

    switch (ctx->pc) {
        case 0x190148u: goto label_190148;
        case 0x190158u: goto label_190158;
        case 0x190168u: goto label_190168;
        default: break;
    }

    ctx->pc = 0x190120u;

    // 0x190120: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x190120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x190124: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x190124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x190128: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x190128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19012c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19012cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x190130: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x190130u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190134: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x190134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x190138: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x190138u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19013c: 0xc4cc0000  lwc1        $f12, 0x0($a2)
    ctx->pc = 0x19013cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x190140: 0xc04155e  jal         func_105578
    ctx->pc = 0x190140u;
    SET_GPR_U32(ctx, 31, 0x190148u);
    ctx->pc = 0x190144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190140u;
    // 0x190144: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105578u, 0x190140u, 0x190148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190148u;
label_190148:
    // 0x190148: 0xc60c0004  lwc1        $f12, 0x4($s0)
    ctx->pc = 0x190148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19014c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19014cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190150: 0xc041588  jal         func_105620
    ctx->pc = 0x190150u;
    SET_GPR_U32(ctx, 31, 0x190158u);
    ctx->pc = 0x190154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190150u;
    // 0x190154: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105620u, 0x190150u, 0x190158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190158u;
label_190158:
    // 0x190158: 0xc60c0008  lwc1        $f12, 0x8($s0)
    ctx->pc = 0x190158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19015c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19015cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190160: 0xc041534  jal         func_1054D0
    ctx->pc = 0x190160u;
    SET_GPR_U32(ctx, 31, 0x190168u);
    ctx->pc = 0x190164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190160u;
    // 0x190164: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054D0u, 0x190160u, 0x190168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190168u;
label_190168:
    // 0x190168: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x190168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19016c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19016cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x190170: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x190170u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190174: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x190174u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190178: 0x3e00008  jr          $ra
    ctx->pc = 0x190178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19017Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190178u;
        // 0x19017c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190180u;
}
