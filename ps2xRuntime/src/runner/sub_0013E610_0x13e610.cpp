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

// Function: sub_0013E610
// Address: 0x13e610 - 0x13eb8c
void sub_0013E610_0x13e610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013E610_0x13e610");
#endif

    switch (ctx->pc) {
        case 0x13e6b8u: goto label_13e6b8;
        case 0x13e6d0u: goto label_13e6d0;
        case 0x13e8a0u: goto label_13e8a0;
        case 0x13e8d4u: goto label_13e8d4;
        case 0x13e964u: goto label_13e964;
        case 0x13e988u: goto label_13e988;
        case 0x13ea00u: goto label_13ea00;
        case 0x13ea0cu: goto label_13ea0c;
        default: break;
    }

    ctx->pc = 0x13e610u;

    // 0x13e610: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x13e610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x13e614: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x13e614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x13e618: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x13e618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x13e61c: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x13e61cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x13e620: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x13e620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x13e624: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x13e624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x13e628: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x13e628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x13e62c: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x13e62cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e630: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x13e630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x13e634: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x13e634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x13e638: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x13e638u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e63c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x13e63cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x13e640: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x13e640u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e644: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x13e644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x13e648: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x13e648u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e64c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x13e64cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x13e650: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13e650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13e654: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x13e654u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x13e658: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x13e658u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x13e65c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x13e65cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x13e660: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13E660u;
    {
        const bool branch_taken_0x13e660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E660u;
        // 0x13e664: 0xafa800dc  sw          $t0, 0xDC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e660) {
            ctx->pc = 0x13E670u;
            goto label_13e670;
        }
    }
    ctx->pc = 0x13E668u;
    // 0x13e668: 0x1000013b  b           . + 4 + (0x13B << 2)
    ctx->pc = 0x13E668u;
    {
        const bool branch_taken_0x13e668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E668u;
        // 0x13e66c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e668) {
            ctx->pc = 0x13EB58u;
            goto label_13eb58;
        }
    }
    ctx->pc = 0x13E670u;
label_13e670:
    // 0x13e670: 0x96a20004  lhu         $v0, 0x4($s5)
    ctx->pc = 0x13e670u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x13e674: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13E674u;
    {
        const bool branch_taken_0x13e674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e674) {
            ctx->pc = 0x13E688u;
            goto label_13e688;
        }
    }
    ctx->pc = 0x13E67Cu;
    // 0x13e67c: 0x10000136  b           . + 4 + (0x136 << 2)
    ctx->pc = 0x13E67Cu;
    {
        const bool branch_taken_0x13e67c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E67Cu;
        // 0x13e680: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e67c) {
            ctx->pc = 0x13EB58u;
            goto label_13eb58;
        }
    }
    ctx->pc = 0x13E684u;
    // 0x13e684: 0x0  nop
    ctx->pc = 0x13e684u;
    // NOP
label_13e688:
    // 0x13e688: 0x7a650000  lq          $a1, 0x0($s3)
    ctx->pc = 0x13e688u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x13e68c: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x13e68cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x13e690: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x13e690u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e694: 0x27a20110  addiu       $v0, $sp, 0x110
    ctx->pc = 0x13e694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x13e698: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x13e698u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e69c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x13e69cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x13e6a0: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x13e6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x13e6a4: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x13e6a4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
    // 0x13e6a8: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x13e6a8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x13e6ac: 0x1000010c  b           . + 4 + (0x10C << 2)
    ctx->pc = 0x13E6ACu;
    {
        const bool branch_taken_0x13e6ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E6ACu;
        // 0x13e6b0: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e6ac) {
            ctx->pc = 0x13EAE0u;
            goto label_13eae0;
        }
    }
    ctx->pc = 0x13E6B4u;
    // 0x13e6b4: 0x0  nop
    ctx->pc = 0x13e6b4u;
    // NOP
label_13e6b8:
    // 0x13e6b8: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x13e6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x13e6bc: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x13e6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x13e6c0: 0x8c500ed0  lw          $s0, 0xED0($v0)
    ctx->pc = 0x13e6c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
    // 0x13e6c4: 0x100000fe  b           . + 4 + (0xFE << 2)
    ctx->pc = 0x13E6C4u;
    {
        const bool branch_taken_0x13e6c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E6C4u;
        // 0x13e6c8: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e6c4) {
            ctx->pc = 0x13EAC0u;
            goto label_13eac0;
        }
    }
    ctx->pc = 0x13E6CCu;
    // 0x13e6cc: 0x0  nop
    ctx->pc = 0x13e6ccu;
    // NOP
label_13e6d0:
    // 0x13e6d0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x13e6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x13e6d4: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x13e6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x13e6d8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x13e6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x13e6dc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x13e6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x13e6e0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x13e6e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x13e6e4: 0x144000f4  bnez        $v0, . + 4 + (0xF4 << 2)
    ctx->pc = 0x13E6E4u;
    {
        const bool branch_taken_0x13e6e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e6e4) {
            ctx->pc = 0x13EAB8u;
            goto label_13eab8;
        }
    }
    ctx->pc = 0x13E6ECu;
    // 0x13e6ec: 0xdf838538  ld          $v1, -0x7AC8($gp)
    ctx->pc = 0x13e6ecu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294935864)));
    // 0x13e6f0: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x13e6f0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13e6f4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x13e6f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x13e6f8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13E6F8u;
    {
        const bool branch_taken_0x13e6f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e6f8) {
            ctx->pc = 0x13E718u;
            goto label_13e718;
        }
    }
    ctx->pc = 0x13E700u;
    // 0x13e700: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x13e700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x13e704: 0x24020a02  addiu       $v0, $zero, 0xA02
    ctx->pc = 0x13e704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2562));
    // 0x13e708: 0x94236ac4  lhu         $v1, 0x6AC4($at)
    ctx->pc = 0x13e708u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x13e70c: 0x146200ea  bne         $v1, $v0, . + 4 + (0xEA << 2)
    ctx->pc = 0x13E70Cu;
    {
        const bool branch_taken_0x13e70c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13e70c) {
            ctx->pc = 0x13EAB8u;
            goto label_13eab8;
        }
    }
    ctx->pc = 0x13E714u;
    // 0x13e714: 0x0  nop
    ctx->pc = 0x13e714u;
    // NOP
label_13e718:
    // 0x13e718: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x13e718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x13e71c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13e71cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x13e720: 0x104000e5  beqz        $v0, . + 4 + (0xE5 << 2)
    ctx->pc = 0x13E720u;
    {
        const bool branch_taken_0x13e720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e720) {
            ctx->pc = 0x13EAB8u;
            goto label_13eab8;
        }
    }
    ctx->pc = 0x13E728u;
    // 0x13e728: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x13e728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e72c: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x13e72cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13e730: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x13e730u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13e734: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x13E734u;
    {
        const bool branch_taken_0x13e734 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13e734) {
            ctx->pc = 0x13E760u;
            goto label_13e760;
        }
    }
    ctx->pc = 0x13E73Cu;
    // 0x13e73c: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x13e73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e740: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x13e740u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13e744: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x13E744u;
    {
        const bool branch_taken_0x13e744 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13e744) {
            ctx->pc = 0x13E760u;
            goto label_13e760;
        }
    }
    ctx->pc = 0x13E74Cu;
    // 0x13e74c: 0xc6000044  lwc1        $f0, 0x44($s0)
    ctx->pc = 0x13e74cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e750: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x13e750u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13e754: 0x450000d8  bc1f        . + 4 + (0xD8 << 2)
    ctx->pc = 0x13E754u;
    {
        const bool branch_taken_0x13e754 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13e754) {
            ctx->pc = 0x13EAB8u;
            goto label_13eab8;
        }
    }
    ctx->pc = 0x13E75Cu;
    // 0x13e75c: 0x0  nop
    ctx->pc = 0x13e75cu;
    // NOP
label_13e760:
    // 0x13e760: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x13e760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e764: 0xc7a10114  lwc1        $f1, 0x114($sp)
    ctx->pc = 0x13e764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13e768: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13e768u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13e76c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x13E76Cu;
    {
        const bool branch_taken_0x13e76c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13e76c) {
            ctx->pc = 0x13E798u;
            goto label_13e798;
        }
    }
    ctx->pc = 0x13E774u;
    // 0x13e774: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x13e774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e778: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13e778u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13e77c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x13E77Cu;
    {
        const bool branch_taken_0x13e77c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13e77c) {
            ctx->pc = 0x13E798u;
            goto label_13e798;
        }
    }
    ctx->pc = 0x13E784u;
    // 0x13e784: 0xc6000044  lwc1        $f0, 0x44($s0)
    ctx->pc = 0x13e784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e788: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13e788u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13e78c: 0x450100ca  bc1t        . + 4 + (0xCA << 2)
    ctx->pc = 0x13E78Cu;
    {
        const bool branch_taken_0x13e78c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13e78c) {
            ctx->pc = 0x13EAB8u;
            goto label_13eab8;
        }
    }
    ctx->pc = 0x13E794u;
    // 0x13e794: 0x0  nop
    ctx->pc = 0x13e794u;
    // NOP
label_13e798:
    // 0x13e798: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x13e798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13e79c: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x13e79cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e7a0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13e7a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13e7a4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x13E7A4u;
    {
        const bool branch_taken_0x13e7a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13e7a4) {
            ctx->pc = 0x13E7B0u;
            goto label_13e7b0;
        }
    }
    ctx->pc = 0x13E7ACu;
    // 0x13e7ac: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x13e7acu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_13e7b0:
    // 0x13e7b0: 0xc6000040  lwc1        $f0, 0x40($s0)
    ctx->pc = 0x13e7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e7b4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13e7b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13e7b8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x13E7B8u;
    {
        const bool branch_taken_0x13e7b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13e7b8) {
            ctx->pc = 0x13E7C8u;
            goto label_13e7c8;
        }
    }
    ctx->pc = 0x13E7C0u;
    // 0x13e7c0: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x13e7c0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x13e7c4: 0x0  nop
    ctx->pc = 0x13e7c4u;
    // NOP
label_13e7c8:
    // 0x13e7c8: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x13e7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e7cc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13e7ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13e7d0: 0x450100b9  bc1t        . + 4 + (0xB9 << 2)
    ctx->pc = 0x13E7D0u;
    {
        const bool branch_taken_0x13e7d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13e7d0) {
            ctx->pc = 0x13EAB8u;
            goto label_13eab8;
        }
    }
    ctx->pc = 0x13E7D8u;
    // 0x13e7d8: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x13e7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13e7dc: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x13e7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e7e0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x13e7e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13e7e4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x13E7E4u;
    {
        const bool branch_taken_0x13e7e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13e7e4) {
            ctx->pc = 0x13E7F0u;
            goto label_13e7f0;
        }
    }
    ctx->pc = 0x13E7ECu;
    // 0x13e7ec: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x13e7ecu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_13e7f0:
    // 0x13e7f0: 0xc6000040  lwc1        $f0, 0x40($s0)
    ctx->pc = 0x13e7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e7f4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x13e7f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13e7f8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x13E7F8u;
    {
        const bool branch_taken_0x13e7f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13e7f8) {
            ctx->pc = 0x13E808u;
            goto label_13e808;
        }
    }
    ctx->pc = 0x13E800u;
    // 0x13e800: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x13e800u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x13e804: 0x0  nop
    ctx->pc = 0x13e804u;
    // NOP
label_13e808:
    // 0x13e808: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x13e808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e80c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x13e80cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13e810: 0x450000a9  bc1f        . + 4 + (0xA9 << 2)
    ctx->pc = 0x13E810u;
    {
        const bool branch_taken_0x13e810 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13e810) {
            ctx->pc = 0x13EAB8u;
            goto label_13eab8;
        }
    }
    ctx->pc = 0x13E818u;
    // 0x13e818: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x13e818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13e81c: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x13e81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e820: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13e820u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13e824: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x13E824u;
    {
        const bool branch_taken_0x13e824 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13e824) {
            ctx->pc = 0x13E830u;
            goto label_13e830;
        }
    }
    ctx->pc = 0x13E82Cu;
    // 0x13e82c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x13e82cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_13e830:
    // 0x13e830: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x13e830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e834: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13e834u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13e838: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x13E838u;
    {
        const bool branch_taken_0x13e838 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13e838) {
            ctx->pc = 0x13E848u;
            goto label_13e848;
        }
    }
    ctx->pc = 0x13E840u;
    // 0x13e840: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x13e840u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x13e844: 0x0  nop
    ctx->pc = 0x13e844u;
    // NOP
label_13e848:
    // 0x13e848: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x13e848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e84c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13e84cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13e850: 0x45010099  bc1t        . + 4 + (0x99 << 2)
    ctx->pc = 0x13E850u;
    {
        const bool branch_taken_0x13e850 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13e850) {
            ctx->pc = 0x13EAB8u;
            goto label_13eab8;
        }
    }
    ctx->pc = 0x13E858u;
    // 0x13e858: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x13e858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13e85c: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x13e85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e860: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x13e860u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13e864: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x13E864u;
    {
        const bool branch_taken_0x13e864 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13e864) {
            ctx->pc = 0x13E870u;
            goto label_13e870;
        }
    }
    ctx->pc = 0x13E86Cu;
    // 0x13e86c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x13e86cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_13e870:
    // 0x13e870: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x13e870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e874: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x13e874u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13e878: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x13E878u;
    {
        const bool branch_taken_0x13e878 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13e878) {
            ctx->pc = 0x13E888u;
            goto label_13e888;
        }
    }
    ctx->pc = 0x13E880u;
    // 0x13e880: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x13e880u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x13e884: 0x0  nop
    ctx->pc = 0x13e884u;
    // NOP
label_13e888:
    // 0x13e888: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x13e888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e88c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x13e88cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13e890: 0x45000089  bc1f        . + 4 + (0x89 << 2)
    ctx->pc = 0x13E890u;
    {
        const bool branch_taken_0x13e890 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13e890) {
            ctx->pc = 0x13EAB8u;
            goto label_13eab8;
        }
    }
    ctx->pc = 0x13E898u;
    // 0x13e898: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x13E898u;
    {
        const bool branch_taken_0x13e898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E898u;
        // 0x13e89c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e898) {
            ctx->pc = 0x13E8F8u;
            goto label_13e8f8;
        }
    }
    ctx->pc = 0x13E8A0u;
label_13e8a0:
    // 0x13e8a0: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x13e8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x13e8a4: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x13e8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13e8a8: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x13e8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x13e8ac: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x13e8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x13e8b0: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x13e8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x13e8b4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x13e8b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13e8b8: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x13e8b8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13e8bc: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x13e8bcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13e8c0: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x13e8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x13e8c4: 0x26050050  addiu       $a1, $s0, 0x50
    ctx->pc = 0x13e8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x13e8c8: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x13e8c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x13e8cc: 0xc0414d6  jal         func_105358
    ctx->pc = 0x13E8CCu;
    SET_GPR_U32(ctx, 31, 0x13E8D4u);
    ctx->pc = 0x13E8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E8CCu;
    // 0x13e8d0: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105358u, 0x13E8CCu, 0x13E8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E8D4u;
label_13e8d4:
    // 0x13e8d4: 0xc7a10140  lwc1        $f1, 0x140($sp)
    ctx->pc = 0x13e8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13e8d8: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x13e8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x13e8dc: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x13e8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e8e0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x13e8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13e8e4: 0xc7a20148  lwc1        $f2, 0x148($sp)
    ctx->pc = 0x13e8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13e8e8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x13e8e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x13e8ec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x13e8ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x13e8f0: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x13e8f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x13e8f4: 0xe4400168  swc1        $f0, 0x168($v0)
    ctx->pc = 0x13e8f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 360), bits); }
label_13e8f8:
    // 0x13e8f8: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x13e8f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x13e8fc: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x13E8FCu;
    {
        const bool branch_taken_0x13e8fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e8fc) {
            ctx->pc = 0x13E8A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13e8a0;
        }
    }
    ctx->pc = 0x13E904u;
    // 0x13e904: 0xc7a20168  lwc1        $f2, 0x168($sp)
    ctx->pc = 0x13e904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13e908: 0xc7a1016c  lwc1        $f1, 0x16C($sp)
    ctx->pc = 0x13e908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13e90c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13e90cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13e910: 0x0  nop
    ctx->pc = 0x13e910u;
    // NOP
    // 0x13e914: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x13e914u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x13e918: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13e918u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13e91c: 0x45000066  bc1f        . + 4 + (0x66 << 2)
    ctx->pc = 0x13E91Cu;
    {
        const bool branch_taken_0x13e91c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13e91c) {
            ctx->pc = 0x13EAB8u;
            goto label_13eab8;
        }
    }
    ctx->pc = 0x13E924u;
    // 0x13e924: 0xc7a10168  lwc1        $f1, 0x168($sp)
    ctx->pc = 0x13e924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13e928: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13e928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13e92c: 0xc7a0016c  lwc1        $f0, 0x16C($sp)
    ctx->pc = 0x13e92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e930: 0x34443000  ori         $a0, $v0, 0x3000
    ctx->pc = 0x13e930u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12288);
    // 0x13e934: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x13e934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x13e938: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x13e938u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x13e93c: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x13e93cu;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x13e940: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x13e940u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x13e944: 0xe7a10168  swc1        $f1, 0x168($sp)
    ctx->pc = 0x13e944u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x13e948: 0xe7a0016c  swc1        $f0, 0x16C($sp)
    ctx->pc = 0x13e948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 364), bits); }
    // 0x13e94c: 0xc7a20168  lwc1        $f2, 0x168($sp)
    ctx->pc = 0x13e94cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13e950: 0xc7a1016c  lwc1        $f1, 0x16C($sp)
    ctx->pc = 0x13e950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13e954: 0xc7a0016c  lwc1        $f0, 0x16C($sp)
    ctx->pc = 0x13e954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e958: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x13e958u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x13e95c: 0xc0414c0  jal         func_105300
    ctx->pc = 0x13E95Cu;
    SET_GPR_U32(ctx, 31, 0x13E964u);
    ctx->pc = 0x13E960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E95Cu;
    // 0x13e960: 0x46010303  div.s       $f12, $f0, $f1 (Delay Slot)
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105300u, 0x13E95Cu, 0x13E964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E964u;
label_13e964:
    // 0x13e964: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13e964u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e968: 0xa3a000b0  sb          $zero, 0xB0($sp)
    ctx->pc = 0x13e968u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 176), (uint8_t)GPR_U32(ctx, 0));
    // 0x13e96c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13e96cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13e970: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x13e970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x13e974: 0x34423000  ori         $v0, $v0, 0x3000
    ctx->pc = 0x13e974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12288);
    // 0x13e978: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x13e978u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e97c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x13e97cu;
    SET_GPR_VEC(ctx, 2, runtime->Load128(rdram, ctx, 0x70003000u));
    // 0x13e980: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x13E980u;
    {
        const bool branch_taken_0x13e980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E980u;
        // 0x13e984: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e980) {
            ctx->pc = 0x13EA38u;
            goto label_13ea38;
        }
    }
    ctx->pc = 0x13E988u;
label_13e988:
    // 0x13e988: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x13e988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x13e98c: 0x244248e8  addiu       $v0, $v0, 0x48E8
    ctx->pc = 0x13e98cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18664));
    // 0x13e990: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x13e990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x13e994: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x13e994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x13e998: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x13e998u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13e99c: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x13e99cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x13e9a0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x13e9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x13e9a4: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x13e9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x13e9a8: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x13e9a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x13e9ac: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13e9acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13e9b0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x13e9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x13e9b4: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x13e9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x13e9b8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x13e9b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13e9bc: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x13e9bcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13e9c0: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x13e9c0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13e9c4: 0xf8a30000  sqc2        $vf3, 0x0($a1)
    ctx->pc = 0x13e9c4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x13e9c8: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x13e9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x13e9cc: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x13e9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x13e9d0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x13e9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x13e9d4: 0x34633000  ori         $v1, $v1, 0x3000
    ctx->pc = 0x13e9d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12288);
    // 0x13e9d8: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x13e9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x13e9dc: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x13e9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x13e9e0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x13e9e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(runtime->Load128(rdram, ctx, 0x70003000u));
    // 0x13e9e4: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x13e9e4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13e9e8: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x13e9e8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13e9ec: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x13e9ecu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x13e9f0: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x13e9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x13e9f4: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x13e9f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x13e9f8: 0xc041460  jal         func_105180
    ctx->pc = 0x13E9F8u;
    SET_GPR_U32(ctx, 31, 0x13EA00u);
    ctx->pc = 0x13E9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E9F8u;
    // 0x13e9fc: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x13E9F8u, 0x13EA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EA00u;
label_13ea00:
    // 0x13ea00: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x13ea00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x13ea04: 0xc041468  jal         func_1051A0
    ctx->pc = 0x13EA04u;
    SET_GPR_U32(ctx, 31, 0x13EA0Cu);
    ctx->pc = 0x13EA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EA04u;
    // 0x13ea08: 0x26050050  addiu       $a1, $s0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x13EA04u, 0x13EA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EA0Cu;
label_13ea0c:
    // 0x13ea0c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x13ea0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13ea10: 0x0  nop
    ctx->pc = 0x13ea10u;
    // NOP
    // 0x13ea14: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13ea14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13ea18: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x13EA18u;
    {
        const bool branch_taken_0x13ea18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13ea18) {
            ctx->pc = 0x13EA30u;
            goto label_13ea30;
        }
    }
    ctx->pc = 0x13EA20u;
    // 0x13ea20: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x13ea20u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x13ea24: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x13ea24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x13ea28: 0xa3a200b0  sb          $v0, 0xB0($sp)
    ctx->pc = 0x13ea28u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 176), (uint8_t)GPR_U32(ctx, 2));
    // 0x13ea2c: 0x0  nop
    ctx->pc = 0x13ea2cu;
    // NOP
label_13ea30:
    // 0x13ea30: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x13ea30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x13ea34: 0x0  nop
    ctx->pc = 0x13ea34u;
    // NOP
label_13ea38:
    // 0x13ea38: 0x2e220003  sltiu       $v0, $s1, 0x3
    ctx->pc = 0x13ea38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x13ea3c: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x13EA3Cu;
    {
        const bool branch_taken_0x13ea3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ea3c) {
            ctx->pc = 0x13E988u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13e988;
        }
    }
    ctx->pc = 0x13EA44u;
    // 0x13ea44: 0x93a200b0  lbu         $v0, 0xB0($sp)
    ctx->pc = 0x13ea44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x13ea48: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x13EA48u;
    {
        const bool branch_taken_0x13ea48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ea48) {
            ctx->pc = 0x13EAB8u;
            goto label_13eab8;
        }
    }
    ctx->pc = 0x13EA50u;
    // 0x13ea50: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x13ea50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x13ea54: 0xc4213004  lwc1        $f1, 0x3004($at)
    ctx->pc = 0x13ea54u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70003004u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13ea58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13ea58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13ea5c: 0x0  nop
    ctx->pc = 0x13ea5cu;
    // NOP
    // 0x13ea60: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13ea60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13ea64: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x13EA64u;
    {
        const bool branch_taken_0x13ea64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13ea64) {
            ctx->pc = 0x13EA78u;
            goto label_13ea78;
        }
    }
    ctx->pc = 0x13EA6Cu;
    // 0x13ea6c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x13ea6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x13ea70: 0xe4203004  swc1        $f0, 0x3004($at)
    ctx->pc = 0x13ea70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003004u, bits); }
    // 0x13ea74: 0x0  nop
    ctx->pc = 0x13ea74u;
    // NOP
label_13ea78:
    // 0x13ea78: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x13ea78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x13ea7c: 0xc4203004  lwc1        $f0, 0x3004($at)
    ctx->pc = 0x13ea7cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70003004u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ea80: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x13ea80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13ea84: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x13EA84u;
    {
        const bool branch_taken_0x13ea84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13ea84) {
            ctx->pc = 0x13EAB8u;
            goto label_13eab8;
        }
    }
    ctx->pc = 0x13EA8Cu;
    // 0x13ea8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13ea8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13ea90: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x13ea90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x13ea94: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x13ea94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x13ea98: 0x27a300f0  addiu       $v1, $sp, 0xF0
    ctx->pc = 0x13ea98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x13ea9c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13ea9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13eaa0: 0x200f02d  daddu       $fp, $s0, $zero
    ctx->pc = 0x13eaa0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13eaa4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13eaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13eaa8: 0x34423000  ori         $v0, $v0, 0x3000
    ctx->pc = 0x13eaa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12288);
    // 0x13eaac: 0xc4343004  lwc1        $f20, 0x3004($at)
    ctx->pc = 0x13eaacu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70003004u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13eab0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x13eab0u;
    SET_GPR_VEC(ctx, 2, runtime->Load128(rdram, ctx, 0x70003000u));
    // 0x13eab4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x13eab4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_13eab8:
    // 0x13eab8: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x13eab8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x13eabc: 0x26100070  addiu       $s0, $s0, 0x70
    ctx->pc = 0x13eabcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_13eac0:
    // 0x13eac0: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x13eac0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x13eac4: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x13eac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x13eac8: 0x8c420a5c  lw          $v0, 0xA5C($v0)
    ctx->pc = 0x13eac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2652)));
    // 0x13eacc: 0x2c2102b  sltu        $v0, $s6, $v0
    ctx->pc = 0x13eaccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x13ead0: 0x1440feff  bnez        $v0, . + 4 + (-0x101 << 2)
    ctx->pc = 0x13EAD0u;
    {
        const bool branch_taken_0x13ead0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ead0) {
            ctx->pc = 0x13E6D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13e6d0;
        }
    }
    ctx->pc = 0x13EAD8u;
    // 0x13ead8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x13ead8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x13eadc: 0x0  nop
    ctx->pc = 0x13eadcu;
    // NOP
label_13eae0:
    // 0x13eae0: 0x2e420018  sltiu       $v0, $s2, 0x18
    ctx->pc = 0x13eae0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x13eae4: 0x1440fef4  bnez        $v0, . + 4 + (-0x10C << 2)
    ctx->pc = 0x13EAE4u;
    {
        const bool branch_taken_0x13eae4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13eae4) {
            ctx->pc = 0x13E6B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13e6b8;
        }
    }
    ctx->pc = 0x13EAECu;
    // 0x13eaec: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x13eaecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x13eaf0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x13EAF0u;
    {
        const bool branch_taken_0x13eaf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13eaf0) {
            ctx->pc = 0x13EB38u;
            goto label_13eb38;
        }
    }
    ctx->pc = 0x13EAF8u;
    // 0x13eaf8: 0xae9e0038  sw          $fp, 0x38($s4)
    ctx->pc = 0x13eaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 56), GPR_U32(ctx, 30));
    // 0x13eafc: 0x8e820f34  lw          $v0, 0xF34($s4)
    ctx->pc = 0x13eafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3892)));
    // 0x13eb00: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13EB00u;
    {
        const bool branch_taken_0x13eb00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13eb00) {
            ctx->pc = 0x13EB10u;
            goto label_13eb10;
        }
    }
    ctx->pc = 0x13EB08u;
    // 0x13eb08: 0xac540110  sw          $s4, 0x110($v0)
    ctx->pc = 0x13eb08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 272), GPR_U32(ctx, 20));
    // 0x13eb0c: 0x0  nop
    ctx->pc = 0x13eb0cu;
    // NOP
label_13eb10:
    // 0x13eb10: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x13eb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x13eb14: 0x12e00006  beqz        $s7, . + 4 + (0x6 << 2)
    ctx->pc = 0x13EB14u;
    {
        const bool branch_taken_0x13eb14 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EB14u;
        // 0x13eb18: 0xe4540000  swc1        $f20, 0x0($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13eb14) {
            ctx->pc = 0x13EB30u;
            goto label_13eb30;
        }
    }
    ctx->pc = 0x13EB1Cu;
    // 0x13eb1c: 0x27c20050  addiu       $v0, $fp, 0x50
    ctx->pc = 0x13eb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x13eb20: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x13eb20u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13eb24: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x13eb24u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13eb28: 0x7ee30000  sq          $v1, 0x0($s7)
    ctx->pc = 0x13eb28u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 0), GPR_VEC(ctx, 3));
    // 0x13eb2c: 0x0  nop
    ctx->pc = 0x13eb2cu;
    // NOP
label_13eb30:
    // 0x13eb30: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x13EB30u;
    {
        const bool branch_taken_0x13eb30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EB30u;
        // 0x13eb34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13eb30) {
            ctx->pc = 0x13EB58u;
            goto label_13eb58;
        }
    }
    ctx->pc = 0x13EB38u;
label_13eb38:
    // 0x13eb38: 0xae800038  sw          $zero, 0x38($s4)
    ctx->pc = 0x13eb38u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 56), GPR_U32(ctx, 0));
    // 0x13eb3c: 0x8e820f34  lw          $v0, 0xF34($s4)
    ctx->pc = 0x13eb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3892)));
    // 0x13eb40: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13EB40u;
    {
        const bool branch_taken_0x13eb40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13eb40) {
            ctx->pc = 0x13EB50u;
            goto label_13eb50;
        }
    }
    ctx->pc = 0x13EB48u;
    // 0x13eb48: 0xac400110  sw          $zero, 0x110($v0)
    ctx->pc = 0x13eb48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 272), GPR_U32(ctx, 0));
    // 0x13eb4c: 0x0  nop
    ctx->pc = 0x13eb4cu;
    // NOP
label_13eb50:
    // 0x13eb50: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x13eb50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13eb54: 0x0  nop
    ctx->pc = 0x13eb54u;
    // NOP
label_13eb58:
    // 0x13eb58: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x13eb58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x13eb5c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x13eb5cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x13eb60: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x13eb60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13eb64: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x13eb64u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x13eb68: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x13eb68u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13eb6c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x13eb6cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13eb70: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x13eb70u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13eb74: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x13eb74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13eb78: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x13eb78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13eb7c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x13eb7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13eb80: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13eb80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13eb84: 0x3e00008  jr          $ra
    ctx->pc = 0x13EB84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13EB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EB84u;
        // 0x13eb88: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13EB84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13EB8Cu;
}
