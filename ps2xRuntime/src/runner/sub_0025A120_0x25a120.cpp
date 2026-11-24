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

// Function: sub_0025A120
// Address: 0x25a120 - 0x25a230
void sub_0025A120_0x25a120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025A120_0x25a120");
#endif

    switch (ctx->pc) {
        case 0x25a1acu: goto label_25a1ac;
        case 0x25a1c0u: goto label_25a1c0;
        case 0x25a1d0u: goto label_25a1d0;
        case 0x25a1f0u: goto label_25a1f0;
        default: break;
    }

    ctx->pc = 0x25a120u;

    // 0x25a120: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x25a120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x25a124: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x25a124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x25a128: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x25a128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x25a12c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x25a12cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x25a130: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x25a130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x25a134: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x25a134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x25a138: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x25a138u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a13c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25a13cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x25a140: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x25a140u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a144: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x25a144u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x25a148: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x25a148u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a14c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x25a14cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x25a150: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25a150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a154: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x25a154u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x25a158: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x25a158u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x25a15c: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x25a15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25a160: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x25a160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25a164: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x25a164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25a168: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x25a168u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x25a16c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25a16cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a170: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x25a170u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x25a174: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x25a174u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x25a178: 0x46140843  div.s       $f1, $f1, $f20
    ctx->pc = 0x25a178u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[20]); }
    // 0x25a17c: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x25a17cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x25a180: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x25a180u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x25a184: 0x46010584  c1          0x10584
    ctx->pc = 0x25a184u;
    ctx->f[22] = FPU_SQRT_S(ctx->f[1]);
    // 0x25a188: 0x0  nop
    ctx->pc = 0x25a188u;
    // NOP
    // 0x25a18c: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x25a18cu;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
    // 0x25a190: 0x0  nop
    ctx->pc = 0x25a190u;
    // NOP
    // 0x25a194: 0x0  nop
    ctx->pc = 0x25a194u;
    // NOP
    // 0x25a198: 0x46000544  c1          0x544
    ctx->pc = 0x25a198u;
    ctx->f[21] = FPU_SQRT_S(ctx->f[0]);
    // 0x25a19c: 0x0  nop
    ctx->pc = 0x25a19cu;
    // NOP
    // 0x25a1a0: 0x0  nop
    ctx->pc = 0x25a1a0u;
    // NOP
    // 0x25a1a4: 0xc096908  jal         func_25A420
    ctx->pc = 0x25A1A4u;
    SET_GPR_U32(ctx, 31, 0x25A1ACu);
    ctx->pc = 0x25A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A420u, 0x25A1A4u, 0x25A1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A1ACu;
label_25a1ac:
    // 0x25a1ac: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x25a1acu;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x25a1b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25a1b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a1b4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x25a1b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a1b8: 0xc0414d0  jal         func_105340
    ctx->pc = 0x25A1B8u;
    SET_GPR_U32(ctx, 31, 0x25A1C0u);
    ctx->pc = 0x25A1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A1B8u;
    // 0x25a1bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x25A1B8u, 0x25A1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A1C0u;
label_25a1c0:
    // 0x25a1c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25a1c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a1c4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25a1c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a1c8: 0xc041472  jal         func_1051C8
    ctx->pc = 0x25A1C8u;
    SET_GPR_U32(ctx, 31, 0x25A1D0u);
    ctx->pc = 0x25A1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A1C8u;
    // 0x25a1cc: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x25A1C8u, 0x25A1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A1D0u;
label_25a1d0:
    // 0x25a1d0: 0x4615b540  add.s       $f21, $f22, $f21
    ctx->pc = 0x25a1d0u;
    ctx->f[21] = FPU_ADD_S(ctx->f[22], ctx->f[21]);
    // 0x25a1d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25a1d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a1d8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25a1d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a1dc: 0x4615bb03  div.s       $f12, $f23, $f21
    ctx->pc = 0x25a1dcu;
    { if (ctx->f[21] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[23], ctx->f[21]); }
    // 0x25a1e0: 0x0  nop
    ctx->pc = 0x25a1e0u;
    // NOP
    // 0x25a1e4: 0x0  nop
    ctx->pc = 0x25a1e4u;
    // NOP
    // 0x25a1e8: 0xc0414dc  jal         func_105370
    ctx->pc = 0x25A1E8u;
    SET_GPR_U32(ctx, 31, 0x25A1F0u);
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x25A1E8u, 0x25A1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A1F0u;
label_25a1f0:
    // 0x25a1f0: 0x4616a082  mul.s       $f2, $f20, $f22
    ctx->pc = 0x25a1f0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
    // 0x25a1f4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x25a1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x25a1f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x25a1f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25a1fc: 0x4600a806  mov.s       $f0, $f21
    ctx->pc = 0x25a1fcu;
    ctx->f[0] = FPU_MOV_S(ctx->f[21]);
    // 0x25a200: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x25a200u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x25a204: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x25a204u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x25a208: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x25a208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25a20c: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x25a20cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x25a210: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x25a210u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25a214: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x25a214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x25a218: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x25a218u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25a21c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x25a21cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x25a220: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x25a220u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25a224: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x25a224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25a228: 0x3e00008  jr          $ra
    ctx->pc = 0x25A228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A228u;
        // 0x25a22c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A230u;
}
