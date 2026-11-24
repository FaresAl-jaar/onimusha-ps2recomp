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

// Function: sub_002BA7A0
// Address: 0x2ba7a0 - 0x2ba7e8
void sub_002BA7A0_0x2ba7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BA7A0_0x2ba7a0");
#endif

    switch (ctx->pc) {
        case 0x2ba7b8u: goto label_2ba7b8;
        default: break;
    }

    ctx->pc = 0x2ba7a0u;

    // 0x2ba7a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ba7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ba7a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ba7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ba7a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ba7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ba7ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ba7acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba7b0: 0xc0a614c  jal         func_298530
    ctx->pc = 0x2BA7B0u;
    SET_GPR_U32(ctx, 31, 0x2BA7B8u);
    ctx->pc = 0x2BA7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA7B0u;
    // 0x2ba7b4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298530u, 0x2BA7B0u, 0x2BA7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA7B8u;
label_2ba7b8:
    // 0x2ba7b8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2BA7B8u;
    {
        const bool branch_taken_0x2ba7b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba7b8) {
            ctx->pc = 0x2BA7D8u;
            goto label_2ba7d8;
        }
    }
    ctx->pc = 0x2BA7C0u;
    // 0x2ba7c0: 0xc6020014  lwc1        $f2, 0x14($s0)
    ctx->pc = 0x2ba7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ba7c4: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x2ba7c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ba7c8: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x2ba7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ba7cc: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x2ba7ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2ba7d0: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x2ba7d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x2ba7d4: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x2ba7d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_2ba7d8:
    // 0x2ba7d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ba7d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ba7dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ba7dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ba7e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2BA7E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BA7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA7E0u;
        // 0x2ba7e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA7E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BA7E8u;
}
