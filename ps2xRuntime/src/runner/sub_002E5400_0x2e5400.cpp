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

// Function: sub_002E5400
// Address: 0x2e5400 - 0x2e55f8
void sub_002E5400_0x2e5400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E5400_0x2e5400");
#endif

    switch (ctx->pc) {
        case 0x2e5460u: goto label_2e5460;
        case 0x2e5488u: goto label_2e5488;
        case 0x2e559cu: goto label_2e559c;
        case 0x2e55acu: goto label_2e55ac;
        case 0x2e55c8u: goto label_2e55c8;
        default: break;
    }

    ctx->pc = 0x2e5400u;

    // 0x2e5400: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2e5400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2e5404: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2e5404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2e5408: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2e5408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x2e540c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2e540cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x2e5410: 0x160b82d  daddu       $s7, $t3, $zero
    ctx->pc = 0x2e5410u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5414: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2e5414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2e5418: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x2e5418u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e541c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2e541cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2e5420: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2e5420u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5424: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2e5424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2e5428: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2e5428u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e542c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2e542cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2e5430: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2e5430u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5434: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2e5434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2e5438: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x2e5438u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e543c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e543cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e5440: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x2e5440u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5444: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2e5444u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2e5448: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2e5448u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e544c: 0x8fb000b0  lw          $s0, 0xB0($sp)
    ctx->pc = 0x2e544cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2e5450: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2e5450u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5454: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2e5454u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e5458: 0xc0b94ac  jal         func_2E52B0
    ctx->pc = 0x2E5458u;
    SET_GPR_U32(ctx, 31, 0x2E5460u);
    ctx->pc = 0x2E545Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5458u;
    // 0x2e545c: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E52B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E52B0u, 0x2E5458u, 0x2E5460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5460u;
label_2e5460:
    // 0x2e5460: 0x32e300ff  andi        $v1, $s7, 0xFF
    ctx->pc = 0x2e5460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
    // 0x2e5464: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2e5464u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e5468: 0x10680057  beq         $v1, $t0, . + 4 + (0x57 << 2)
    ctx->pc = 0x2E5468u;
    {
        const bool branch_taken_0x2e5468 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        ctx->pc = 0x2E546Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5468u;
        // 0x2e546c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5468) {
            ctx->pc = 0x2E55C8u;
            goto label_2e55c8;
        }
    }
    ctx->pc = 0x2E5470u;
    // 0x2e5470: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2e5470u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5474: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2e5474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5478: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2e5478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e547c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2e547cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5480: 0xc0b94ac  jal         func_2E52B0
    ctx->pc = 0x2E5480u;
    SET_GPR_U32(ctx, 31, 0x2E5488u);
    ctx->pc = 0x2E5484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5480u;
    // 0x2e5484: 0x27a900a0  addiu       $t1, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E52B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E52B0u, 0x2E5480u, 0x2E5488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5488u;
label_2e5488:
    // 0x2e5488: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2e5488u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e548c: 0x0  nop
    ctx->pc = 0x2e548cu;
    // NOP
    // 0x2e5490: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x2e5490u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e5494: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2E5494u;
    {
        const bool branch_taken_0x2e5494 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e5494) {
            ctx->pc = 0x2E54A8u;
            goto label_2e54a8;
        }
    }
    ctx->pc = 0x2E549Cu;
    // 0x2e549c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2e549cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e54a0: 0x45010049  bc1t        . + 4 + (0x49 << 2)
    ctx->pc = 0x2E54A0u;
    {
        const bool branch_taken_0x2e54a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e54a0) {
            ctx->pc = 0x2E55C8u;
            goto label_2e55c8;
        }
    }
    ctx->pc = 0x2E54A8u;
label_2e54a8:
    // 0x2e54a8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2e54a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2e54ac: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2e54acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e54b0: 0x0  nop
    ctx->pc = 0x2e54b0u;
    // NOP
    // 0x2e54b4: 0x4601a036  c.le.s      $f20, $f1
    ctx->pc = 0x2e54b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e54b8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2E54B8u;
    {
        const bool branch_taken_0x2e54b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e54b8) {
            ctx->pc = 0x2E54D0u;
            goto label_2e54d0;
        }
    }
    ctx->pc = 0x2E54C0u;
    // 0x2e54c0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2e54c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e54c4: 0x45000040  bc1f        . + 4 + (0x40 << 2)
    ctx->pc = 0x2E54C4u;
    {
        const bool branch_taken_0x2e54c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e54c4) {
            ctx->pc = 0x2E55C8u;
            goto label_2e55c8;
        }
    }
    ctx->pc = 0x2E54CCu;
    // 0x2e54cc: 0x0  nop
    ctx->pc = 0x2e54ccu;
    // NOP
label_2e54d0:
    // 0x2e54d0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e54d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e54d4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2e54d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e54d8: 0x0  nop
    ctx->pc = 0x2e54d8u;
    // NOP
    // 0x2e54dc: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x2e54dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e54e0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2E54E0u;
    {
        const bool branch_taken_0x2e54e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e54e0) {
            ctx->pc = 0x2E54ECu;
            goto label_2e54ec;
        }
    }
    ctx->pc = 0x2E54E8u;
    // 0x2e54e8: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x2e54e8u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_2e54ec:
    // 0x2e54ec: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2e54ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e54f0: 0x0  nop
    ctx->pc = 0x2e54f0u;
    // NOP
    // 0x2e54f4: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x2e54f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e54f8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2E54F8u;
    {
        const bool branch_taken_0x2e54f8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E54FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E54F8u;
        // 0x2e54fc: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e54f8) {
            ctx->pc = 0x2E5508u;
            goto label_2e5508;
        }
    }
    ctx->pc = 0x2E5500u;
    // 0x2e5500: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2E5500u;
    {
        const bool branch_taken_0x2e5500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5500u;
        // 0x2e5504: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5500) {
            ctx->pc = 0x2E5528u;
            goto label_2e5528;
        }
    }
    ctx->pc = 0x2E5508u;
label_2e5508:
    // 0x2e5508: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e5508u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e550c: 0x0  nop
    ctx->pc = 0x2e550cu;
    // NOP
    // 0x2e5510: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e5510u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e5514: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5514u;
    {
        const bool branch_taken_0x2e5514 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e5514) {
            ctx->pc = 0x2E5524u;
            goto label_2e5524;
        }
    }
    ctx->pc = 0x2E551Cu;
    // 0x2e551c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E551Cu;
    {
        const bool branch_taken_0x2e551c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e551c) {
            ctx->pc = 0x2E5528u;
            goto label_2e5528;
        }
    }
    ctx->pc = 0x2E5524u;
label_2e5524:
    // 0x2e5524: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x2e5524u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_2e5528:
    // 0x2e5528: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e5528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e552c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2e552cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e5530: 0x0  nop
    ctx->pc = 0x2e5530u;
    // NOP
    // 0x2e5534: 0x46141036  c.le.s      $f2, $f20
    ctx->pc = 0x2e5534u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e5538: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2E5538u;
    {
        const bool branch_taken_0x2e5538 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e5538) {
            ctx->pc = 0x2E5544u;
            goto label_2e5544;
        }
    }
    ctx->pc = 0x2E5540u;
    // 0x2e5540: 0x4600a086  mov.s       $f2, $f20
    ctx->pc = 0x2e5540u;
    ctx->f[2] = FPU_MOV_S(ctx->f[20]);
label_2e5544:
    // 0x2e5544: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2e5544u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e5548: 0x0  nop
    ctx->pc = 0x2e5548u;
    // NOP
    // 0x2e554c: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x2e554cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e5550: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5550u;
    {
        const bool branch_taken_0x2e5550 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E5554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5550u;
        // 0x2e5554: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5550) {
            ctx->pc = 0x2E5560u;
            goto label_2e5560;
        }
    }
    ctx->pc = 0x2E5558u;
    // 0x2e5558: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2E5558u;
    {
        const bool branch_taken_0x2e5558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E555Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5558u;
        // 0x2e555c: 0x46000d06  mov.s       $f20, $f1 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5558) {
            ctx->pc = 0x2E5580u;
            goto label_2e5580;
        }
    }
    ctx->pc = 0x2E5560u;
label_2e5560:
    // 0x2e5560: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e5560u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e5564: 0x0  nop
    ctx->pc = 0x2e5564u;
    // NOP
    // 0x2e5568: 0x46140836  c.le.s      $f1, $f20
    ctx->pc = 0x2e5568u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e556c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2E556Cu;
    {
        const bool branch_taken_0x2e556c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e556c) {
            ctx->pc = 0x2E557Cu;
            goto label_2e557c;
        }
    }
    ctx->pc = 0x2E5574u;
    // 0x2e5574: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E5574u;
    {
        const bool branch_taken_0x2e5574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5574) {
            ctx->pc = 0x2E5580u;
            goto label_2e5580;
        }
    }
    ctx->pc = 0x2E557Cu;
label_2e557c:
    // 0x2e557c: 0x46000d06  mov.s       $f20, $f1
    ctx->pc = 0x2e557cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[1]);
label_2e5580:
    // 0x2e5580: 0x4600a040  add.s       $f1, $f20, $f0
    ctx->pc = 0x2e5580u;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2e5584: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2e5584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2e5588: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2e5588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e558c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e558cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5590: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e5590u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5594: 0xc0414dc  jal         func_105370
    ctx->pc = 0x2E5594u;
    SET_GPR_U32(ctx, 31, 0x2E559Cu);
    ctx->pc = 0x2E5598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5594u;
    // 0x2e5598: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x2E5594u, 0x2E559Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E559Cu;
label_2e559c:
    // 0x2e559c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2e559cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e55a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e55a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e55a4: 0xc0414ca  jal         func_105328
    ctx->pc = 0x2E55A4u;
    SET_GPR_U32(ctx, 31, 0x2E55ACu);
    ctx->pc = 0x2E55A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E55A4u;
    // 0x2e55a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2E55A4u, 0x2E55ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E55ACu;
label_2e55ac:
    // 0x2e55ac: 0x8fa900b8  lw          $t1, 0xB8($sp)
    ctx->pc = 0x2e55acu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2e55b0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2e55b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e55b4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e55b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e55b8: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2e55b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e55bc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2e55bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e55c0: 0xc0b94ac  jal         func_2E52B0
    ctx->pc = 0x2E55C0u;
    SET_GPR_U32(ctx, 31, 0x2E55C8u);
    ctx->pc = 0x2E55C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E55C0u;
    // 0x2e55c4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E52B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E52B0u, 0x2E55C0u, 0x2E55C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E55C8u;
label_2e55c8:
    // 0x2e55c8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2e55c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e55cc: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2e55ccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e55d0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2e55d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e55d4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2e55d4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e55d8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2e55d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e55dc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2e55dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e55e0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2e55e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e55e4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2e55e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e55e8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2e55e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e55ec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e55ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e55f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E55F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E55F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E55F0u;
        // 0x2e55f4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E55F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E55F8u;
}
