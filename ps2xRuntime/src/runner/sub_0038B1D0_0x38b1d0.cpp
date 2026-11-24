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

// Function: sub_0038B1D0
// Address: 0x38b1d0 - 0x38b244
void sub_0038B1D0_0x38b1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038B1D0_0x38b1d0");
#endif

    switch (ctx->pc) {
        case 0x38b1e4u: goto label_38b1e4;
        case 0x38b234u: goto label_38b234;
        default: break;
    }

    ctx->pc = 0x38b1d0u;

    // 0x38b1d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x38b1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x38b1d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38b1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38b1d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38b1d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x38b1dc: 0xc0d0494  jal         func_341250
    ctx->pc = 0x38B1DCu;
    SET_GPR_U32(ctx, 31, 0x38B1E4u);
    ctx->pc = 0x38B1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B1DCu;
    // 0x38b1e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341250u, 0x38B1DCu, 0x38B1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B1E4u;
label_38b1e4:
    // 0x38b1e4: 0x8e060144  lw          $a2, 0x144($s0)
    ctx->pc = 0x38b1e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
    // 0x38b1e8: 0xc6030020  lwc1        $f3, 0x20($s0)
    ctx->pc = 0x38b1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x38b1ec: 0xc6020024  lwc1        $f2, 0x24($s0)
    ctx->pc = 0x38b1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x38b1f0: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x38b1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x38b1f4: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x38b1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x38b1f8: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x38b1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x38b1fc: 0xc600002c  lwc1        $f0, 0x2C($s0)
    ctx->pc = 0x38b1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38b200: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38b200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38b204: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x38b204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x38b208: 0xe4c30000  swc1        $f3, 0x0($a2)
    ctx->pc = 0x38b208u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x38b20c: 0xe4c20004  swc1        $f2, 0x4($a2)
    ctx->pc = 0x38b20cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x38b210: 0xe4c10008  swc1        $f1, 0x8($a2)
    ctx->pc = 0x38b210u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x38b214: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x38b214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x38b218: 0x860600c2  lh          $a2, 0xC2($s0)
    ctx->pc = 0x38b218u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x38b21c: 0xa6062ace  sh          $a2, 0x2ACE($s0)
    ctx->pc = 0x38b21cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10958), (uint16_t)GPR_U32(ctx, 6));
    // 0x38b220: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x38b220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x38b224: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x38b224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x38b228: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x38b228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x38b22c: 0xc0d0508  jal         func_341420
    ctx->pc = 0x38B22Cu;
    SET_GPR_U32(ctx, 31, 0x38B234u);
    ctx->pc = 0x38B230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B22Cu;
    // 0x38b230: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341420u, 0x38B22Cu, 0x38B234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B234u;
label_38b234:
    // 0x38b234: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38b234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38b238: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38b238u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38b23c: 0x3e00008  jr          $ra
    ctx->pc = 0x38B23Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38B240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B23Cu;
        // 0x38b240: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38B23Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38B244u;
}
