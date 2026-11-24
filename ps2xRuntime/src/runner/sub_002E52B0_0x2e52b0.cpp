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

// Function: sub_002E52B0
// Address: 0x2e52b0 - 0x2e53fc
void sub_002E52B0_0x2e52b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E52B0_0x2e52b0");
#endif

    switch (ctx->pc) {
        case 0x2e52f0u: goto label_2e52f0;
        case 0x2e5330u: goto label_2e5330;
        case 0x2e533cu: goto label_2e533c;
        case 0x2e53c0u: goto label_2e53c0;
        case 0x2e53d0u: goto label_2e53d0;
        default: break;
    }

    ctx->pc = 0x2e52b0u;

    // 0x2e52b0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2e52b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2e52b4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2e52b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2e52b8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2e52b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2e52bc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2e52bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2e52c0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2e52c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e52c4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2e52c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2e52c8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2e52c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e52cc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2e52ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2e52d0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2e52d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e52d4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e52d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e52d8: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x2e52d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e52dc: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x2e52dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e52e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e52e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e52e4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2e52e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e52e8: 0xc041468  jal         func_1051A0
    ctx->pc = 0x2E52E8u;
    SET_GPR_U32(ctx, 31, 0x2E52F0u);
    ctx->pc = 0x2E52ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E52E8u;
    // 0x2e52ec: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x2E52E8u, 0x2E52F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E52F0u;
label_2e52f0:
    // 0x2e52f0: 0x3c023586  lui         $v0, 0x3586
    ctx->pc = 0x2e52f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13702 << 16));
    // 0x2e52f4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2e52f4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2e52f8: 0x344237bd  ori         $v0, $v0, 0x37BD
    ctx->pc = 0x2e52f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14269);
    // 0x2e52fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e52fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5300: 0x0  nop
    ctx->pc = 0x2e5300u;
    // NOP
    // 0x2e5304: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2e5304u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e5308: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2E5308u;
    {
        const bool branch_taken_0x2e5308 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e5308) {
            ctx->pc = 0x2E5320u;
            goto label_2e5320;
        }
    }
    ctx->pc = 0x2E5310u;
    // 0x2e5310: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e5310u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5314: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2E5314u;
    {
        const bool branch_taken_0x2e5314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5314) {
            ctx->pc = 0x2E53D8u;
            goto label_2e53d8;
        }
    }
    ctx->pc = 0x2E531Cu;
    // 0x2e531c: 0x0  nop
    ctx->pc = 0x2e531cu;
    // NOP
label_2e5320:
    // 0x2e5320: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e5320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5324: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2e5324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2e5328: 0xc0414d0  jal         func_105340
    ctx->pc = 0x2E5328u;
    SET_GPR_U32(ctx, 31, 0x2E5330u);
    ctx->pc = 0x2E532Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5328u;
    // 0x2e532c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x2E5328u, 0x2E5330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5330u;
label_2e5330:
    // 0x2e5330: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e5330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5334: 0xc041468  jal         func_1051A0
    ctx->pc = 0x2E5334u;
    SET_GPR_U32(ctx, 31, 0x2E533Cu);
    ctx->pc = 0x2E5338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5334u;
    // 0x2e5338: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x2E5334u, 0x2E533Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E533Cu;
label_2e533c:
    // 0x2e533c: 0x0  nop
    ctx->pc = 0x2e533cu;
    // NOP
    // 0x2e5340: 0x0  nop
    ctx->pc = 0x2e5340u;
    // NOP
    // 0x2e5344: 0x46140503  div.s       $f20, $f0, $f20
    ctx->pc = 0x2e5344u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
    // 0x2e5348: 0x0  nop
    ctx->pc = 0x2e5348u;
    // NOP
    // 0x2e534c: 0x0  nop
    ctx->pc = 0x2e534cu;
    // NOP
    // 0x2e5350: 0x16200017  bnez        $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2E5350u;
    {
        const bool branch_taken_0x2e5350 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e5350) {
            ctx->pc = 0x2E53B0u;
            goto label_2e53b0;
        }
    }
    ctx->pc = 0x2E5358u;
    // 0x2e5358: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e5358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e535c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e535cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e5360: 0x0  nop
    ctx->pc = 0x2e5360u;
    // NOP
    // 0x2e5364: 0x46140836  c.le.s      $f1, $f20
    ctx->pc = 0x2e5364u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e5368: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2E5368u;
    {
        const bool branch_taken_0x2e5368 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e5368) {
            ctx->pc = 0x2E5374u;
            goto label_2e5374;
        }
    }
    ctx->pc = 0x2E5370u;
    // 0x2e5370: 0x4600a046  mov.s       $f1, $f20
    ctx->pc = 0x2e5370u;
    ctx->f[1] = FPU_MOV_S(ctx->f[20]);
label_2e5374:
    // 0x2e5374: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e5374u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5378: 0x0  nop
    ctx->pc = 0x2e5378u;
    // NOP
    // 0x2e537c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2e537cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e5380: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5380u;
    {
        const bool branch_taken_0x2e5380 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E5384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5380u;
        // 0x2e5384: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5380) {
            ctx->pc = 0x2E5390u;
            goto label_2e5390;
        }
    }
    ctx->pc = 0x2E5388u;
    // 0x2e5388: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2E5388u;
    {
        const bool branch_taken_0x2e5388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E538Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5388u;
        // 0x2e538c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5388) {
            ctx->pc = 0x2E53B0u;
            goto label_2e53b0;
        }
    }
    ctx->pc = 0x2E5390u;
label_2e5390:
    // 0x2e5390: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e5390u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5394: 0x0  nop
    ctx->pc = 0x2e5394u;
    // NOP
    // 0x2e5398: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x2e5398u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e539c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2E539Cu;
    {
        const bool branch_taken_0x2e539c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e539c) {
            ctx->pc = 0x2E53ACu;
            goto label_2e53ac;
        }
    }
    ctx->pc = 0x2E53A4u;
    // 0x2e53a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E53A4u;
    {
        const bool branch_taken_0x2e53a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e53a4) {
            ctx->pc = 0x2E53B0u;
            goto label_2e53b0;
        }
    }
    ctx->pc = 0x2E53ACu;
label_2e53ac:
    // 0x2e53ac: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2e53acu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2e53b0:
    // 0x2e53b0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2e53b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e53b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e53b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e53b8: 0xc0414dc  jal         func_105370
    ctx->pc = 0x2E53B8u;
    SET_GPR_U32(ctx, 31, 0x2E53C0u);
    ctx->pc = 0x2E53BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E53B8u;
    // 0x2e53bc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x2E53B8u, 0x2E53C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E53C0u;
label_2e53c0:
    // 0x2e53c0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2e53c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e53c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e53c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e53c8: 0xc0414ca  jal         func_105328
    ctx->pc = 0x2E53C8u;
    SET_GPR_U32(ctx, 31, 0x2E53D0u);
    ctx->pc = 0x2E53CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E53C8u;
    // 0x2e53cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2E53C8u, 0x2E53D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E53D0u;
label_2e53d0:
    // 0x2e53d0: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x2e53d0u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
    // 0x2e53d4: 0x0  nop
    ctx->pc = 0x2e53d4u;
    // NOP
label_2e53d8:
    // 0x2e53d8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2e53d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e53dc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2e53dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e53e0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2e53e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e53e4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2e53e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e53e8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2e53e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e53ec: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2e53ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e53f0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e53f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e53f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E53F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E53F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E53F4u;
        // 0x2e53f8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E53F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E53FCu;
}
