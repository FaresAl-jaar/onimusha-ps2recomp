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

// Function: sub_00259EB0
// Address: 0x259eb0 - 0x259efc
void sub_00259EB0_0x259eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00259EB0_0x259eb0");
#endif

    switch (ctx->pc) {
        case 0x259ed4u: goto label_259ed4;
        case 0x259eecu: goto label_259eec;
        default: break;
    }

    ctx->pc = 0x259eb0u;

    // 0x259eb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x259eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x259eb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x259eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x259eb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x259eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x259ebc: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x259ebcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x259ec0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x259ec0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259ec4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x259ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x259ec8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x259ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x259ecc: 0xc0968f0  jal         func_25A3C0
    ctx->pc = 0x259ECCu;
    SET_GPR_U32(ctx, 31, 0x259ED4u);
    ctx->pc = 0x259ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259ECCu;
    // 0x259ed0: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3C0u, 0x259ECCu, 0x259ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259ED4u;
label_259ed4:
    // 0x259ed4: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x259ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x259ed8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x259ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x259edc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x259edcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x259ee0: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x259ee0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x259ee4: 0xc047b88  jal         func_11EE20
    ctx->pc = 0x259EE4u;
    SET_GPR_U32(ctx, 31, 0x259EECu);
    ctx->pc = 0x259EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259EE4u;
    // 0x259ee8: 0x46011302  mul.s       $f12, $f2, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE20u, 0x259EE4u, 0x259EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259EECu;
label_259eec:
    // 0x259eec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x259eecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259ef0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x259ef0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259ef4: 0x3e00008  jr          $ra
    ctx->pc = 0x259EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259EF4u;
        // 0x259ef8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259EF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x259EFCu;
}
