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

// Function: sub_003B4940
// Address: 0x3b4940 - 0x3b49b4
void sub_003B4940_0x3b4940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B4940_0x3b4940");
#endif

    switch (ctx->pc) {
        case 0x3b4960u: goto label_3b4960;
        case 0x3b4970u: goto label_3b4970;
        case 0x3b497cu: goto label_3b497c;
        default: break;
    }

    ctx->pc = 0x3b4940u;

    // 0x3b4940: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b4940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b4944: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x3b4944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x3b4948: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b4948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3b494c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b494cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3b4950: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x3b4950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x3b4954: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b4954u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b4958: 0xc096908  jal         func_25A420
    ctx->pc = 0x3B4958u;
    SET_GPR_U32(ctx, 31, 0x3B4960u);
    ctx->pc = 0x3B495Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4958u;
    // 0x3b495c: 0x24440020  addiu       $a0, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A420u, 0x3B4958u, 0x3B4960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4960u;
label_3b4960:
    // 0x3b4960: 0xc78183e4  lwc1        $f1, -0x7C1C($gp)
    ctx->pc = 0x3b4960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b4964: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3b4964u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3b4968: 0xc096968  jal         func_25A5A0
    ctx->pc = 0x3B4968u;
    SET_GPR_U32(ctx, 31, 0x3B4970u);
    ctx->pc = 0x3B496Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4968u;
    // 0x3b496c: 0x46010341  sub.s       $f13, $f0, $f1 (Delay Slot)
    ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5A0u, 0x3B4968u, 0x3B4970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4970u;
label_3b4970:
    // 0x3b4970: 0xc78c83e8  lwc1        $f12, -0x7C18($gp)
    ctx->pc = 0x3b4970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3b4974: 0xc096964  jal         func_25A590
    ctx->pc = 0x3B4974u;
    SET_GPR_U32(ctx, 31, 0x3B497Cu);
    ctx->pc = 0x3B4978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4974u;
    // 0x3b4978: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A590u, 0x3B4974u, 0x3B497Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B497Cu;
label_3b497c:
    // 0x3b497c: 0xc78483e8  lwc1        $f4, -0x7C18($gp)
    ctx->pc = 0x3b497cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3b4980: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3b4980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3b4984: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3b4984u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3b4988: 0xc78283ec  lwc1        $f2, -0x7C14($gp)
    ctx->pc = 0x3b4988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3b498c: 0xc6010080  lwc1        $f1, 0x80($s0)
    ctx->pc = 0x3b498cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b4990: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x3b4990u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[4]); }
    // 0x3b4994: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x3b4994u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x3b4998: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3b4998u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3b499c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3b499cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3b49a0: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x3b49a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x3b49a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b49a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b49a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b49a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b49ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3B49ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B49B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B49ACu;
        // 0x3b49b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B49ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B49B4u;
}
