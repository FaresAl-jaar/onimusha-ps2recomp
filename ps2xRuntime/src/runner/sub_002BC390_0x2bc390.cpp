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

// Function: sub_002BC390
// Address: 0x2bc390 - 0x2bc3e8
void sub_002BC390_0x2bc390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BC390_0x2bc390");
#endif

    ctx->pc = 0x2bc390u;

    // 0x2bc390: 0xdca30500  ld          $v1, 0x500($a1)
    ctx->pc = 0x2bc390u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 1280)));
    // 0x2bc394: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x2bc394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x2bc398: 0xfca30500  sd          $v1, 0x500($a1)
    ctx->pc = 0x2bc398u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 1280), GPR_U64(ctx, 3));
    // 0x2bc39c: 0x8ca308cc  lw          $v1, 0x8CC($a1)
    ctx->pc = 0x2bc39cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2252)));
    // 0x2bc3a0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BC3A0u;
    {
        const bool branch_taken_0x2bc3a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc3a0) {
            ctx->pc = 0x2BC3B0u;
            goto label_2bc3b0;
        }
    }
    ctx->pc = 0x2BC3A8u;
    // 0x2bc3a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2BC3A8u;
    {
        const bool branch_taken_0x2bc3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC3A8u;
        // 0x2bc3ac: 0xaca008cc  sw          $zero, 0x8CC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 2252), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc3a8) {
            ctx->pc = 0x2BC3B8u;
            goto label_2bc3b8;
        }
    }
    ctx->pc = 0x2BC3B0u;
label_2bc3b0:
    // 0x2bc3b0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2BC3B0u;
    {
        const bool branch_taken_0x2bc3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc3b0) {
            ctx->pc = 0x2BC3E0u;
            goto label_2bc3e0;
        }
    }
    ctx->pc = 0x2BC3B8u;
label_2bc3b8:
    // 0x2bc3b8: 0xdca30500  ld          $v1, 0x500($a1)
    ctx->pc = 0x2bc3b8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 1280)));
    // 0x2bc3bc: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2bc3bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x2bc3c0: 0xfca30500  sd          $v1, 0x500($a1)
    ctx->pc = 0x2bc3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 1280), GPR_U64(ctx, 3));
    // 0x2bc3c4: 0xc4820014  lwc1        $f2, 0x14($a0)
    ctx->pc = 0x2bc3c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bc3c8: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x2bc3c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc3cc: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x2bc3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc3d0: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x2bc3d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2bc3d4: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x2bc3d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2bc3d8: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x2bc3d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2bc3dc: 0x0  nop
    ctx->pc = 0x2bc3dcu;
    // NOP
label_2bc3e0:
    // 0x2bc3e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2BC3E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BC3E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BC3E8u;
}
