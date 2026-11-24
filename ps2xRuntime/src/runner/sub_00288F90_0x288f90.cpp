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

// Function: sub_00288F90
// Address: 0x288f90 - 0x289010
void sub_00288F90_0x288f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00288F90_0x288f90");
#endif

    switch (ctx->pc) {
        case 0x288fb4u: goto label_288fb4;
        case 0x288ffcu: goto label_288ffc;
        default: break;
    }

    ctx->pc = 0x288f90u;

    // 0x288f90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x288f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x288f94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x288f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x288f98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x288f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x288f9c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x288f9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288fa0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x288fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x288fa4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x288fa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288fa8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x288fa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288fac: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x288FACu;
    SET_GPR_U32(ctx, 31, 0x288FB4u);
    ctx->pc = 0x288FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288FACu;
    // 0x288fb0: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x288FACu, 0x288FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288FB4u;
label_288fb4:
    // 0x288fb4: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x288fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x288fb8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x288fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x288fbc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x288fbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x288fc0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x288fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x288fc4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x288fc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x288fc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x288fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288fcc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x288fccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x288fd0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x288fd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288fd4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x288fd4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x288fd8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x288fd8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x288fdc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x288fdcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x288fe0: 0x0  nop
    ctx->pc = 0x288fe0u;
    // NOP
    // 0x288fe4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x288fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x288fe8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x288fe8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x288fec: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x288fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x288ff0: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x288ff0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x288ff4: 0xc0a23b0  jal         func_288EC0
    ctx->pc = 0x288FF4u;
    SET_GPR_U32(ctx, 31, 0x288FFCu);
    ctx->pc = 0x288FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288FF4u;
    // 0x288ff8: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288EC0u, 0x288FF4u, 0x288FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288FFCu;
label_288ffc:
    // 0x288ffc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x288ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x289000: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x289000u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x289004: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x289004u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x289008: 0x3e00008  jr          $ra
    ctx->pc = 0x289008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28900Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289008u;
        // 0x28900c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x289008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x289010u;
}
