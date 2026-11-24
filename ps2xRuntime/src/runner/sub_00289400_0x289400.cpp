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

// Function: sub_00289400
// Address: 0x289400 - 0x289524
void sub_00289400_0x289400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00289400_0x289400");
#endif

    switch (ctx->pc) {
        case 0x28946cu: goto label_28946c;
        case 0x2894c0u: goto label_2894c0;
        case 0x2894c8u: goto label_2894c8;
        case 0x289500u: goto label_289500;
        case 0x289510u: goto label_289510;
        default: break;
    }

    ctx->pc = 0x289400u;

    // 0x289400: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x289400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x289404: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x289404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x289408: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x289408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x28940c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x28940cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x289410: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x289410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x289414: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x289414u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
    // 0x289418: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x289418u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x28941c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x28941cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x289420: 0xc7808078  lwc1        $f0, -0x7F88($gp)
    ctx->pc = 0x289420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x289424: 0x90870002  lbu         $a3, 0x2($a0)
    ctx->pc = 0x289424u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x289428: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x289428u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28942c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28942cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289430: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x289430u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x289434: 0x24c60b8c  addiu       $a2, $a2, 0xB8C
    ctx->pc = 0x289434u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2956));
    // 0x289438: 0x8e0507c0  lw          $a1, 0x7C0($s0)
    ctx->pc = 0x289438u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1984)));
    // 0x28943c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x28943cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x289440: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x289440u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x289444: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x289444u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x289448: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x289448u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x28944c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28944cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x289450: 0x24844570  addiu       $a0, $a0, 0x4570
    ctx->pc = 0x289450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    // 0x289454: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x289454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x289458: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x289458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28945c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x28945cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x289460: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x289460u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x289464: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x289464u;
    SET_GPR_U32(ctx, 31, 0x28946Cu);
    ctx->pc = 0x289468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289464u;
    // 0x289468: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x289464u, 0x28946Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28946Cu;
label_28946c:
    // 0x28946c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x28946Cu;
    {
        const bool branch_taken_0x28946c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28946c) {
            ctx->pc = 0x289510u;
            goto label_289510;
        }
    }
    ctx->pc = 0x289474u;
    // 0x289474: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x289474u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x289478: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x289478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x28947c: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x28947cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x289480: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x289480u;
    {
        const bool branch_taken_0x289480 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x289484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289480u;
        // 0x289484: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x289480) {
            ctx->pc = 0x289490u;
            goto label_289490;
        }
    }
    ctx->pc = 0x289488u;
    // 0x289488: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x289488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28948c: 0x0  nop
    ctx->pc = 0x28948cu;
    // NOP
label_289490:
    // 0x289490: 0x1080001f  beqz        $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x289490u;
    {
        const bool branch_taken_0x289490 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x289490) {
            ctx->pc = 0x289510u;
            goto label_289510;
        }
    }
    ctx->pc = 0x289498u;
    // 0x289498: 0x8c4329c0  lw          $v1, 0x29C0($v0)
    ctx->pc = 0x289498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10688)));
    // 0x28949c: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x28949cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2894a0: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x2894A0u;
    {
        const bool branch_taken_0x2894a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2894A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2894A0u;
        // 0x2894a4: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2894a0) {
            ctx->pc = 0x289510u;
            goto label_289510;
        }
    }
    ctx->pc = 0x2894A8u;
    // 0x2894a8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2894a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2894ac: 0x8e0206cc  lw          $v0, 0x6CC($s0)
    ctx->pc = 0x2894acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1740)));
    // 0x2894b0: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x2894b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2894b4: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x2894b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x2894b8: 0xc0414d0  jal         func_105340
    ctx->pc = 0x2894B8u;
    SET_GPR_U32(ctx, 31, 0x2894C0u);
    ctx->pc = 0x2894BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2894B8u;
    // 0x2894bc: 0xae0206cc  sw          $v0, 0x6CC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1740), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x2894B8u, 0x2894C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2894C0u;
label_2894c0:
    // 0x2894c0: 0xc0968f0  jal         func_25A3C0
    ctx->pc = 0x2894C0u;
    SET_GPR_U32(ctx, 31, 0x2894C8u);
    ctx->pc = 0x2894C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2894C0u;
    // 0x2894c4: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3C0u, 0x2894C0u, 0x2894C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2894C8u;
label_2894c8:
    // 0x2894c8: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2894c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2894cc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2894ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2894d0: 0x0  nop
    ctx->pc = 0x2894d0u;
    // NOP
    // 0x2894d4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2894d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2894d8: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x2894D8u;
    {
        const bool branch_taken_0x2894d8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2894DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2894D8u;
        // 0x2894dc: 0x3c0342c8  lui         $v1, 0x42C8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2894d8) {
            ctx->pc = 0x289510u;
            goto label_289510;
        }
    }
    ctx->pc = 0x2894E0u;
    // 0x2894e0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2894e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2894e4: 0x0  nop
    ctx->pc = 0x2894e4u;
    // NOP
    // 0x2894e8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2894e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2894ec: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x2894ECu;
    {
        const bool branch_taken_0x2894ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2894F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2894ECu;
        // 0x2894f0: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2894ec) {
            ctx->pc = 0x289510u;
            goto label_289510;
        }
    }
    ctx->pc = 0x2894F4u;
    // 0x2894f4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2894f4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2894f8: 0xc09693c  jal         func_25A4F0
    ctx->pc = 0x2894F8u;
    SET_GPR_U32(ctx, 31, 0x289500u);
    ctx->pc = 0x2894FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2894F8u;
    // 0x2894fc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A4F0u, 0x2894F8u, 0x289500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289500u;
label_289500:
    // 0x289500: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x289500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x289504: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x289504u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x289508: 0xc0414ca  jal         func_105328
    ctx->pc = 0x289508u;
    SET_GPR_U32(ctx, 31, 0x289510u);
    ctx->pc = 0x28950Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289508u;
    // 0x28950c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x289508u, 0x289510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289510u;
label_289510:
    // 0x289510: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x289510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x289514: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x289514u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x289518: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x289518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x28951c: 0x3e00008  jr          $ra
    ctx->pc = 0x28951Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28951Cu;
        // 0x289520: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28951Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x289524u;
}
