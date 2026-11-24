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

// Function: sub_0038DEB0
// Address: 0x38deb0 - 0x38df00
void sub_0038DEB0_0x38deb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038DEB0_0x38deb0");
#endif

    ctx->pc = 0x38deb0u;

    // 0x38deb0: 0x84862b40  lh          $a2, 0x2B40($a0)
    ctx->pc = 0x38deb0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 11072)));
    // 0x38deb4: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x38deb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x38deb8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x38deb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x38debc: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x38debcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x38dec0: 0x24a56540  addiu       $a1, $a1, 0x6540
    ctx->pc = 0x38dec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25920));
    // 0x38dec4: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x38dec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38dec8: 0x30c30fff  andi        $v1, $a2, 0xFFF
    ctx->pc = 0x38dec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4095);
    // 0x38decc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x38deccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x38ded0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x38ded0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x38ded4: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x38ded4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x38ded8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x38ded8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x38dedc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x38dedcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x38dee0: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x38dee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x38dee4: 0x84832b40  lh          $v1, 0x2B40($a0)
    ctx->pc = 0x38dee4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 11072)));
    // 0x38dee8: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x38dee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x38deec: 0xa4832b40  sh          $v1, 0x2B40($a0)
    ctx->pc = 0x38deecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 11072), (uint16_t)GPR_U32(ctx, 3));
    // 0x38def0: 0x84832b40  lh          $v1, 0x2B40($a0)
    ctx->pc = 0x38def0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 11072)));
    // 0x38def4: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x38def4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x38def8: 0x3e00008  jr          $ra
    ctx->pc = 0x38DEF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38DEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DEF8u;
        // 0x38defc: 0xa4832b40  sh          $v1, 0x2B40($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 11072), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38DEF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38DF00u;
}
