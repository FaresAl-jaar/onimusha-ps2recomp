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

// Function: sub_0027B0B0
// Address: 0x27b0b0 - 0x27b190
void sub_0027B0B0_0x27b0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027B0B0_0x27b0b0");
#endif

    switch (ctx->pc) {
        case 0x27b0e4u: goto label_27b0e4;
        case 0x27b0f0u: goto label_27b0f0;
        case 0x27b130u: goto label_27b130;
        case 0x27b138u: goto label_27b138;
        case 0x27b148u: goto label_27b148;
        case 0x27b178u: goto label_27b178;
        default: break;
    }

    ctx->pc = 0x27b0b0u;

    // 0x27b0b0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x27b0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x27b0b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x27b0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x27b0b8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x27b0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x27b0bc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x27b0bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x27b0c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x27b0c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b0c4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x27b0c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x27b0c8: 0x90a2000f  lbu         $v0, 0xF($a1)
    ctx->pc = 0x27b0c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 15)));
    // 0x27b0cc: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x27b0ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x27b0d0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x27B0D0u;
    {
        const bool branch_taken_0x27b0d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B0D0u;
        // 0x27b0d4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b0d0) {
            ctx->pc = 0x27B0F8u;
            goto label_27b0f8;
        }
    }
    ctx->pc = 0x27B0D8u;
    // 0x27b0d8: 0x24e50020  addiu       $a1, $a3, 0x20
    ctx->pc = 0x27b0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x27b0dc: 0xc0414d0  jal         func_105340
    ctx->pc = 0x27B0DCu;
    SET_GPR_U32(ctx, 31, 0x27B0E4u);
    ctx->pc = 0x27B0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B0DCu;
    // 0x27b0e0: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x27B0DCu, 0x27B0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B0E4u;
label_27b0e4:
    // 0x27b0e4: 0xc62d0008  lwc1        $f13, 0x8($s1)
    ctx->pc = 0x27b0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x27b0e8: 0xc047b88  jal         func_11EE20
    ctx->pc = 0x27B0E8u;
    SET_GPR_U32(ctx, 31, 0x27B0F0u);
    ctx->pc = 0x27B0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B0E8u;
    // 0x27b0ec: 0xc62c0000  lwc1        $f12, 0x0($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE20u, 0x27B0E8u, 0x27B0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B0F0u;
label_27b0f0:
    // 0x27b0f0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x27B0F0u;
    {
        const bool branch_taken_0x27b0f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B0F0u;
        // 0x27b0f4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b0f0) {
            ctx->pc = 0x27B128u;
            goto label_27b128;
        }
    }
    ctx->pc = 0x27B0F8u;
label_27b0f8:
    // 0x27b0f8: 0x84c400c2  lh          $a0, 0xC2($a2)
    ctx->pc = 0x27b0f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 194)));
    // 0x27b0fc: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x27b0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x27b100: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x27b100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x27b104: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x27b104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x27b108: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x27b108u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27b10c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27b10cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27b110: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x27b110u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x27b114: 0x0  nop
    ctx->pc = 0x27b114u;
    // NOP
    // 0x27b118: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x27b118u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x27b11c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x27b11cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x27b120: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x27b120u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x27b124: 0x0  nop
    ctx->pc = 0x27b124u;
    // NOP
label_27b128:
    // 0x27b128: 0xc04150c  jal         func_105430
    ctx->pc = 0x27B128u;
    SET_GPR_U32(ctx, 31, 0x27B130u);
    ctx->pc = 0x27B12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B128u;
    // 0x27b12c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105430u, 0x27B128u, 0x27B130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B130u;
label_27b130:
    // 0x27b130: 0xc09681c  jal         func_25A070
    ctx->pc = 0x27B130u;
    SET_GPR_U32(ctx, 31, 0x27B138u);
    ctx->pc = 0x27B134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B130u;
    // 0x27b134: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A070u, 0x27B130u, 0x27B138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B138u;
label_27b138:
    // 0x27b138: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x27b138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27b13c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x27b13cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x27b140: 0xc041588  jal         func_105620
    ctx->pc = 0x27B140u;
    SET_GPR_U32(ctx, 31, 0x27B148u);
    ctx->pc = 0x27B144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B140u;
    // 0x27b144: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105620u, 0x27B140u, 0x27B148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B148u;
label_27b148:
    // 0x27b148: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x27b148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27b14c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x27b14cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x27b150: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27b150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b154: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x27b154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27b158: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x27b158u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b15c: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x27b15cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x27b160: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x27b160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27b164: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x27b164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x27b168: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x27b168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27b16c: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x27b16cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x27b170: 0xc041442  jal         func_105108
    ctx->pc = 0x27B170u;
    SET_GPR_U32(ctx, 31, 0x27B178u);
    ctx->pc = 0x27B174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B170u;
    // 0x27b174: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x27B170u, 0x27B178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B178u;
label_27b178:
    // 0x27b178: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x27b178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27b17c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x27b17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27b180: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x27b180u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27b184: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x27b184u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27b188: 0x3e00008  jr          $ra
    ctx->pc = 0x27B188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27B18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B188u;
        // 0x27b18c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27B188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27B190u;
}
