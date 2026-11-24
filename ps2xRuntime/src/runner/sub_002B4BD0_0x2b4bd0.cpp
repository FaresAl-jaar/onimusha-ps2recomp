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

// Function: sub_002B4BD0
// Address: 0x2b4bd0 - 0x2b4c5c
void sub_002B4BD0_0x2b4bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B4BD0_0x2b4bd0");
#endif

    switch (ctx->pc) {
        case 0x2b4c20u: goto label_2b4c20;
        case 0x2b4c30u: goto label_2b4c30;
        case 0x2b4c40u: goto label_2b4c40;
        default: break;
    }

    ctx->pc = 0x2b4bd0u;

    // 0x2b4bd0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2b4bd0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4bd4: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x2b4bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x2b4bd8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2b4bd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2b4bdc: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b4bdcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b4be0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2b4be0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2b4be4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b4be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2b4be8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2b4be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2b4bec: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x2b4becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x2b4bf0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b4bf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4bf4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2b4bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2b4bf8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b4bf8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b4bfc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2b4bfcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2b4c00: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b4c00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b4c04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b4c04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4c08: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2b4c08u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2b4c0c: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x2b4c0cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2b4c10: 0x0  nop
    ctx->pc = 0x2b4c10u;
    // NOP
    // 0x2b4c14: 0x0  nop
    ctx->pc = 0x2b4c14u;
    // NOP
    // 0x2b4c18: 0xc096784  jal         func_259E10
    ctx->pc = 0x2B4C18u;
    SET_GPR_U32(ctx, 31, 0x2B4C20u);
    ctx->pc = 0x259E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259E10u, 0x2B4C18u, 0x2B4C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4C20u;
label_2b4c20:
    // 0x2b4c20: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2b4c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2b4c24: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2b4c24u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2b4c28: 0xc0414dc  jal         func_105370
    ctx->pc = 0x2B4C28u;
    SET_GPR_U32(ctx, 31, 0x2B4C30u);
    ctx->pc = 0x2B4C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4C28u;
    // 0x2b4c2c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x2B4C28u, 0x2B4C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4C30u;
label_2b4c30:
    // 0x2b4c30: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x2b4c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2b4c34: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2b4c34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2b4c38: 0xc0414ca  jal         func_105328
    ctx->pc = 0x2B4C38u;
    SET_GPR_U32(ctx, 31, 0x2B4C40u);
    ctx->pc = 0x2B4C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4C38u;
    // 0x2b4c3c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2B4C38u, 0x2B4C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4C40u;
label_2b4c40:
    // 0x2b4c40: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x2b4c40u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b4c44: 0x7e030090  sq          $v1, 0x90($s0)
    ctx->pc = 0x2b4c44u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), GPR_VEC(ctx, 3));
    // 0x2b4c48: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b4c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b4c4c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2b4c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b4c50: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2b4c50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b4c54: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4C54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4C54u;
        // 0x2b4c58: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4C54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4C5Cu;
}
