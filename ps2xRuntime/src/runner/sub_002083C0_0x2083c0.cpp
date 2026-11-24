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

// Function: sub_002083C0
// Address: 0x2083c0 - 0x208464
void sub_002083C0_0x2083c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002083C0_0x2083c0");
#endif

    switch (ctx->pc) {
        case 0x2083dcu: goto label_2083dc;
        case 0x208410u: goto label_208410;
        default: break;
    }

    ctx->pc = 0x2083c0u;

    // 0x2083c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2083c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2083c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2083c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2083c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2083c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2083cc: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x2083ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2083d0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2083d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2083d4: 0xc081d84  jal         func_207610
    ctx->pc = 0x2083D4u;
    SET_GPR_U32(ctx, 31, 0x2083DCu);
    ctx->pc = 0x2083D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2083D4u;
    // 0x2083d8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x207610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207610u, 0x2083D4u, 0x2083DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2083DCu;
label_2083dc:
    // 0x2083dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2083dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2083e0: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2083E0u;
    {
        const bool branch_taken_0x2083e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2083E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2083E0u;
        // 0x2083e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2083e0) {
            ctx->pc = 0x208408u;
            goto label_208408;
        }
    }
    ctx->pc = 0x2083E8u;
    // 0x2083e8: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x2083e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x2083ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2083ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2083f0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2083f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2083f4: 0x24847b68  addiu       $a0, $a0, 0x7B68
    ctx->pc = 0x2083f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31592));
    // 0x2083f8: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x2083f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2083fc: 0x8082e3e  j           func_20B8F8
    ctx->pc = 0x2083FCu;
    ctx->pc = 0x208400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2083FCu;
    // 0x208400: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    sub_0020B8F8_0x20b8f8(rdram, ctx, runtime); return;
    ctx->pc = 0x208404u;
    // 0x208404: 0x0  nop
    ctx->pc = 0x208404u;
    // NOP
label_208408:
    // 0x208408: 0xc081c12  jal         func_207048
    ctx->pc = 0x208408u;
    SET_GPR_U32(ctx, 31, 0x208410u);
    ctx->pc = 0x207048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207048u, 0x208408u, 0x208410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208410u;
label_208410:
    // 0x208410: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x208410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x208414: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x208414u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x208418: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x208418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x20841c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20841cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208420: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x208420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208424: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x208424u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x208428: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x208428u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x20842c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x20842cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x208430: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x208430u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x208434: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x208434u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208438: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x208438u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x20843c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20843cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x208440: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x208440u;
    {
        const bool branch_taken_0x208440 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x208444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208440u;
        // 0x208444: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208440) {
            ctx->pc = 0x20844Cu;
            goto label_20844c;
        }
    }
    ctx->pc = 0x208448u;
    // 0x208448: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x208448u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20844c:
    // 0x20844c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20844cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208450: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x208450u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x208454: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x208454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x208458: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x208458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x20845c: 0x8087004  j           func_21C010
    ctx->pc = 0x20845Cu;
    ctx->pc = 0x208460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20845Cu;
    // 0x208460: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C010u;
    sub_0021C010_0x21c010(rdram, ctx, runtime); return;
    ctx->pc = 0x208464u;
}
