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

// Function: sub_0013DEE0
// Address: 0x13dee0 - 0x13df5c
void sub_0013DEE0_0x13dee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013DEE0_0x13dee0");
#endif

    ctx->pc = 0x13dee0u;

    // 0x13dee0: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x13dee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x13dee4: 0xac830fb8  sw          $v1, 0xFB8($a0)
    ctx->pc = 0x13dee4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4024), GPR_U32(ctx, 3));
    // 0x13dee8: 0xac800fbc  sw          $zero, 0xFBC($a0)
    ctx->pc = 0x13dee8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4028), GPR_U32(ctx, 0));
    // 0x13deec: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x13deecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x13def0: 0xac800fc0  sw          $zero, 0xFC0($a0)
    ctx->pc = 0x13def0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4032), GPR_U32(ctx, 0));
    // 0x13def4: 0xac800fc4  sw          $zero, 0xFC4($a0)
    ctx->pc = 0x13def4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4036), GPR_U32(ctx, 0));
    // 0x13def8: 0xa0800fcc  sb          $zero, 0xFCC($a0)
    ctx->pc = 0x13def8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4044), (uint8_t)GPR_U32(ctx, 0));
    // 0x13defc: 0xa0800fcd  sb          $zero, 0xFCD($a0)
    ctx->pc = 0x13defcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4045), (uint8_t)GPR_U32(ctx, 0));
    // 0x13df00: 0xa4800fc8  sh          $zero, 0xFC8($a0)
    ctx->pc = 0x13df00u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4040), (uint16_t)GPR_U32(ctx, 0));
    // 0x13df04: 0xac800f34  sw          $zero, 0xF34($a0)
    ctx->pc = 0x13df04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3892), GPR_U32(ctx, 0));
    // 0x13df08: 0xac800fac  sw          $zero, 0xFAC($a0)
    ctx->pc = 0x13df08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4012), GPR_U32(ctx, 0));
    // 0x13df0c: 0xe48c0fb0  swc1        $f12, 0xFB0($a0)
    ctx->pc = 0x13df0cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4016), bits); }
    // 0x13df10: 0xe48d0fb4  swc1        $f13, 0xFB4($a0)
    ctx->pc = 0x13df10u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4020), bits); }
    // 0x13df14: 0xac850f80  sw          $a1, 0xF80($a0)
    ctx->pc = 0x13df14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3968), GPR_U32(ctx, 5));
    // 0x13df18: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x13df18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13df1c: 0xe4800f60  swc1        $f0, 0xF60($a0)
    ctx->pc = 0x13df1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3936), bits); }
    // 0x13df20: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x13df20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13df24: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x13df24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x13df28: 0xe4800f64  swc1        $f0, 0xF64($a0)
    ctx->pc = 0x13df28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3940), bits); }
    // 0x13df2c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x13df2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13df30: 0xe4800f68  swc1        $f0, 0xF68($a0)
    ctx->pc = 0x13df30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3944), bits); }
    // 0x13df34: 0xac830f6c  sw          $v1, 0xF6C($a0)
    ctx->pc = 0x13df34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3948), GPR_U32(ctx, 3));
    // 0x13df38: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x13df38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13df3c: 0xe4800f70  swc1        $f0, 0xF70($a0)
    ctx->pc = 0x13df3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3952), bits); }
    // 0x13df40: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x13df40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13df44: 0x460d0000  add.s       $f0, $f0, $f13
    ctx->pc = 0x13df44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[13]);
    // 0x13df48: 0xe4800f74  swc1        $f0, 0xF74($a0)
    ctx->pc = 0x13df48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3956), bits); }
    // 0x13df4c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x13df4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13df50: 0xe4800f78  swc1        $f0, 0xF78($a0)
    ctx->pc = 0x13df50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3960), bits); }
    // 0x13df54: 0x3e00008  jr          $ra
    ctx->pc = 0x13DF54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13DF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DF54u;
        // 0x13df58: 0xac830f7c  sw          $v1, 0xF7C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3964), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DF54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13DF5Cu;
}
