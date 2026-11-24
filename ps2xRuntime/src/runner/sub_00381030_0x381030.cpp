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

// Function: sub_00381030
// Address: 0x381030 - 0x3810d8
void sub_00381030_0x381030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00381030_0x381030");
#endif

    switch (ctx->pc) {
        case 0x38109cu: goto label_38109c;
        case 0x3810a8u: goto label_3810a8;
        case 0x3810b4u: goto label_3810b4;
        case 0x3810c0u: goto label_3810c0;
        default: break;
    }

    ctx->pc = 0x381030u;

    // 0x381030: 0x3c03442a  lui         $v1, 0x442A
    ctx->pc = 0x381030u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17450 << 16));
    // 0x381034: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x381034u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x381038: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x381038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x38103c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x38103cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x381040: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x381040u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x381044: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x381044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x381048: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x381048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x38104c: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x38104cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x381050: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x381050u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x381054: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x381054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x381058: 0x8c84004c  lw          $a0, 0x4C($a0)
    ctx->pc = 0x381058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x38105c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38105cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x381060: 0x8c900080  lw          $s0, 0x80($a0)
    ctx->pc = 0x381060u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x381064: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x381064u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x381068: 0x0  nop
    ctx->pc = 0x381068u;
    // NOP
    // 0x38106c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x38106cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x381070: 0x26042ae0  addiu       $a0, $s0, 0x2AE0
    ctx->pc = 0x381070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 10976));
    // 0x381074: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x381074u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x381078: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x381078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x38107c: 0x3943c  dsll32      $s2, $v1, 16
    ctx->pc = 0x38107cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) << (32 + 16));
    // 0x381080: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x381080u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    // 0x381084: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x381084u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x381088: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x381088u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38108c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x38108cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x381090: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x381090u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x381094: 0xc04d5d4  jal         func_135750
    ctx->pc = 0x381094u;
    SET_GPR_U32(ctx, 31, 0x38109Cu);
    ctx->pc = 0x381098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381094u;
    // 0x381098: 0x118c3f  dsra32      $s1, $s1, 16 (Delay Slot)
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135750u, 0x381094u, 0x38109Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38109Cu;
label_38109c:
    // 0x38109c: 0x26042bc0  addiu       $a0, $s0, 0x2BC0
    ctx->pc = 0x38109cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 11200));
    // 0x3810a0: 0xc04d5d4  jal         func_135750
    ctx->pc = 0x3810A0u;
    SET_GPR_U32(ctx, 31, 0x3810A8u);
    ctx->pc = 0x3810A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3810A0u;
    // 0x3810a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135750u, 0x3810A0u, 0x3810A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3810A8u;
label_3810a8:
    // 0x3810a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3810a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3810ac: 0xc04d5f0  jal         func_1357C0
    ctx->pc = 0x3810ACu;
    SET_GPR_U32(ctx, 31, 0x3810B4u);
    ctx->pc = 0x3810B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3810ACu;
    // 0x3810b0: 0x26042ca0  addiu       $a0, $s0, 0x2CA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 11424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1357C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1357C0u, 0x3810ACu, 0x3810B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3810B4u;
label_3810b4:
    // 0x3810b4: 0x26042d80  addiu       $a0, $s0, 0x2D80
    ctx->pc = 0x3810b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 11648));
    // 0x3810b8: 0xc04d5f0  jal         func_1357C0
    ctx->pc = 0x3810B8u;
    SET_GPR_U32(ctx, 31, 0x3810C0u);
    ctx->pc = 0x3810BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3810B8u;
    // 0x3810bc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1357C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1357C0u, 0x3810B8u, 0x3810C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3810C0u;
label_3810c0:
    // 0x3810c0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3810c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3810c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3810c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3810c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3810c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3810cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3810ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3810d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3810D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3810D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3810D0u;
        // 0x3810d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3810D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3810D8u;
}
