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

// Function: sub_002BC2D0
// Address: 0x2bc2d0 - 0x2bc330
void sub_002BC2D0_0x2bc2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BC2D0_0x2bc2d0");
#endif

    ctx->pc = 0x2bc2d0u;

    // 0x2bc2d0: 0x94830022  lhu         $v1, 0x22($a0)
    ctx->pc = 0x2bc2d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 34)));
    // 0x2bc2d4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BC2D4u;
    {
        const bool branch_taken_0x2bc2d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc2d4) {
            ctx->pc = 0x2BC2F0u;
            goto label_2bc2f0;
        }
    }
    ctx->pc = 0x2BC2DCu;
    // 0x2bc2dc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2bc2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2bc2e0: 0xa4830022  sh          $v1, 0x22($a0)
    ctx->pc = 0x2bc2e0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 34), (uint16_t)GPR_U32(ctx, 3));
    // 0x2bc2e4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2bc2e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2bc2e8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BC2E8u;
    {
        const bool branch_taken_0x2bc2e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc2e8) {
            ctx->pc = 0x2BC300u;
            goto label_2bc300;
        }
    }
    ctx->pc = 0x2BC2F0u;
label_2bc2f0:
    // 0x2bc2f0: 0xdca30500  ld          $v1, 0x500($a1)
    ctx->pc = 0x2bc2f0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 1280)));
    // 0x2bc2f4: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x2bc2f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x2bc2f8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2BC2F8u;
    {
        const bool branch_taken_0x2bc2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC2F8u;
        // 0x2bc2fc: 0xfca30500  sd          $v1, 0x500($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 1280), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc2f8) {
            ctx->pc = 0x2BC328u;
            goto label_2bc328;
        }
    }
    ctx->pc = 0x2BC300u;
label_2bc300:
    // 0x2bc300: 0xdca30500  ld          $v1, 0x500($a1)
    ctx->pc = 0x2bc300u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 1280)));
    // 0x2bc304: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2bc304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x2bc308: 0xfca30500  sd          $v1, 0x500($a1)
    ctx->pc = 0x2bc308u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 1280), GPR_U64(ctx, 3));
    // 0x2bc30c: 0xc4820014  lwc1        $f2, 0x14($a0)
    ctx->pc = 0x2bc30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bc310: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x2bc310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc314: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x2bc314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc318: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x2bc318u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2bc31c: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x2bc31cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2bc320: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x2bc320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2bc324: 0x0  nop
    ctx->pc = 0x2bc324u;
    // NOP
label_2bc328:
    // 0x2bc328: 0x3e00008  jr          $ra
    ctx->pc = 0x2BC328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BC328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BC330u;
}
