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

// Function: sub_0028B750
// Address: 0x28b750 - 0x28b99c
void sub_0028B750_0x28b750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028B750_0x28b750");
#endif

    switch (ctx->pc) {
        case 0x28b7c8u: goto label_28b7c8;
        case 0x28b7f8u: goto label_28b7f8;
        case 0x28b8e4u: goto label_28b8e4;
        case 0x28b918u: goto label_28b918;
        default: break;
    }

    ctx->pc = 0x28b750u;

    // 0x28b750: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x28b750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x28b754: 0x3c024475  lui         $v0, 0x4475
    ctx->pc = 0x28b754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17525 << 16));
    // 0x28b758: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x28b758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x28b75c: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x28b75cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x28b760: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x28b760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x28b764: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x28b764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x28b768: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28b768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x28b76c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x28b76cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b770: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28b770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x28b774: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28b774u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28b778: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28b778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28b77c: 0x24636d00  addiu       $v1, $v1, 0x6D00
    ctx->pc = 0x28b77cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27904));
    // 0x28b780: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28b780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28b784: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x28b784u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b788: 0x78245c10  lq          $a0, 0x5C10($at)
    ctx->pc = 0x28b788u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x665C10u));
    // 0x28b78c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x28b78cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b790: 0x7fa40060  sq          $a0, 0x60($sp)
    ctx->pc = 0x28b790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 4));
    // 0x28b794: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x28b794u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x28b798: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28b798u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x28b79c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x28b79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28b7a0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x28b7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28b7a4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x28b7a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28b7a8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x28b7a8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x28b7ac: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x28b7acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x28b7b0: 0x90a20024  lbu         $v0, 0x24($a1)
    ctx->pc = 0x28b7b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x28b7b4: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x28b7b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x28b7b8: 0x1020006f  beqz        $at, . + 4 + (0x6F << 2)
    ctx->pc = 0x28B7B8u;
    {
        const bool branch_taken_0x28b7b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B7B8u;
        // 0x28b7bc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b7b8) {
            ctx->pc = 0x28B978u;
            goto label_28b978;
        }
    }
    ctx->pc = 0x28B7C0u;
    // 0x28b7c0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x28b7c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b7c4: 0x0  nop
    ctx->pc = 0x28b7c4u;
    // NOP
label_28b7c8:
    // 0x28b7c8: 0x86030020  lh          $v1, 0x20($s0)
    ctx->pc = 0x28b7c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x28b7cc: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x28b7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x28b7d0: 0x10620063  beq         $v1, $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x28B7D0u;
    {
        const bool branch_taken_0x28b7d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28b7d0) {
            ctx->pc = 0x28B960u;
            goto label_28b960;
        }
    }
    ctx->pc = 0x28B7D8u;
    // 0x28b7d8: 0xc66d0030  lwc1        $f13, 0x30($s3)
    ctx->pc = 0x28b7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x28b7dc: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x28b7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x28b7e0: 0x34428885  ori         $v0, $v0, 0x8885
    ctx->pc = 0x28b7e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x28b7e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28b7e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b7e8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x28b7e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28b7ec: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x28b7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x28b7f0: 0xc07681c  jal         func_1DA070
    ctx->pc = 0x28B7F0u;
    SET_GPR_U32(ctx, 31, 0x28B7F8u);
    ctx->pc = 0x28B7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B7F0u;
    // 0x28b7f4: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA070u, 0x28B7F0u, 0x28B7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B7F8u;
label_28b7f8:
    // 0x28b7f8: 0x92620034  lbu         $v0, 0x34($s3)
    ctx->pc = 0x28b7f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x28b7fc: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x28B7FCu;
    {
        const bool branch_taken_0x28b7fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b7fc) {
            ctx->pc = 0x28B860u;
            goto label_28b860;
        }
    }
    ctx->pc = 0x28B804u;
    // 0x28b804: 0x92020025  lbu         $v0, 0x25($s0)
    ctx->pc = 0x28b804u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 37)));
    // 0x28b808: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x28B808u;
    {
        const bool branch_taken_0x28b808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b808) {
            ctx->pc = 0x28B860u;
            goto label_28b860;
        }
    }
    ctx->pc = 0x28B810u;
    // 0x28b810: 0xc6810084  lwc1        $f1, 0x84($s4)
    ctx->pc = 0x28b810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28b814: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x28b814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28b818: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x28b818u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28b81c: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x28B81Cu;
    {
        const bool branch_taken_0x28b81c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28b81c) {
            ctx->pc = 0x28B860u;
            goto label_28b860;
        }
    }
    ctx->pc = 0x28B824u;
    // 0x28b824: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x28b824u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x28b828: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x28b828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x28b82c: 0x92630034  lbu         $v1, 0x34($s3)
    ctx->pc = 0x28b82cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x28b830: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x28b830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28b834: 0x24426d20  addiu       $v0, $v0, 0x6D20
    ctx->pc = 0x28b834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27936));
    // 0x28b838: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x28b838u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x28b83c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28b83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28b840: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x28b840u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x28b844: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x28b844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28b848: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x28b848u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28b84c: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x28b84cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x28b850: 0x92020025  lbu         $v0, 0x25($s0)
    ctx->pc = 0x28b850u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 37)));
    // 0x28b854: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x28b854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x28b858: 0xa2020025  sb          $v0, 0x25($s0)
    ctx->pc = 0x28b858u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 37), (uint8_t)GPR_U32(ctx, 2));
    // 0x28b85c: 0x0  nop
    ctx->pc = 0x28b85cu;
    // NOP
label_28b860:
    // 0x28b860: 0xc662001c  lwc1        $f2, 0x1C($s3)
    ctx->pc = 0x28b860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28b864: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x28b864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28b868: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28b868u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28b86c: 0x0  nop
    ctx->pc = 0x28b86cu;
    // NOP
    // 0x28b870: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x28b870u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x28b874: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x28b874u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28b878: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x28B878u;
    {
        const bool branch_taken_0x28b878 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28B87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B878u;
        // 0x28b87c: 0xe6010028  swc1        $f1, 0x28($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b878) {
            ctx->pc = 0x28B888u;
            goto label_28b888;
        }
    }
    ctx->pc = 0x28B880u;
    // 0x28b880: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x28b880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x28b884: 0x0  nop
    ctx->pc = 0x28b884u;
    // NOP
label_28b888:
    // 0x28b888: 0x96630036  lhu         $v1, 0x36($s3)
    ctx->pc = 0x28b888u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 54)));
    // 0x28b88c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x28B88Cu;
    {
        const bool branch_taken_0x28b88c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b88c) {
            ctx->pc = 0x28B8B0u;
            goto label_28b8b0;
        }
    }
    ctx->pc = 0x28B894u;
    // 0x28b894: 0x9602002c  lhu         $v0, 0x2C($s0)
    ctx->pc = 0x28b894u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x28b898: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28b898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28b89c: 0xa602002c  sh          $v0, 0x2C($s0)
    ctx->pc = 0x28b89cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 44), (uint16_t)GPR_U32(ctx, 2));
    // 0x28b8a0: 0x9602002c  lhu         $v0, 0x2C($s0)
    ctx->pc = 0x28b8a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x28b8a4: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x28b8a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x28b8a8: 0xa602002c  sh          $v0, 0x2C($s0)
    ctx->pc = 0x28b8a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 44), (uint16_t)GPR_U32(ctx, 2));
    // 0x28b8ac: 0x0  nop
    ctx->pc = 0x28b8acu;
    // NOP
label_28b8b0:
    // 0x28b8b0: 0x92620025  lbu         $v0, 0x25($s3)
    ctx->pc = 0x28b8b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 37)));
    // 0x28b8b4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28b8b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28b8b8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x28B8B8u;
    {
        const bool branch_taken_0x28b8b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b8b8) {
            ctx->pc = 0x28B910u;
            goto label_28b910;
        }
    }
    ctx->pc = 0x28B8C0u;
    // 0x28b8c0: 0x86060026  lh          $a2, 0x26($s0)
    ctx->pc = 0x28b8c0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 38)));
    // 0x28b8c4: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x28B8C4u;
    {
        const bool branch_taken_0x28b8c4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B8C4u;
        // 0x28b8c8: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b8c4) {
            ctx->pc = 0x28B8D8u;
            goto label_28b8d8;
        }
    }
    ctx->pc = 0x28B8CCu;
    // 0x28b8cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28b8ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28b8d0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x28B8D0u;
    {
        const bool branch_taken_0x28b8d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B8D0u;
        // 0x28b8d4: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b8d0) {
            ctx->pc = 0x28B8E8u;
            goto label_28b8e8;
        }
    }
    ctx->pc = 0x28B8D8u;
label_28b8d8:
    // 0x28b8d8: 0x86040020  lh          $a0, 0x20($s0)
    ctx->pc = 0x28b8d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x28b8dc: 0xc0767d4  jal         func_1D9F50
    ctx->pc = 0x28B8DCu;
    SET_GPR_U32(ctx, 31, 0x28B8E4u);
    ctx->pc = 0x28B8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B8DCu;
    // 0x28b8e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9F50u, 0x28B8DCu, 0x28B8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B8E4u;
label_28b8e4:
    // 0x28b8e4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x28b8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_28b8e8:
    // 0x28b8e8: 0x3c034380  lui         $v1, 0x4380
    ctx->pc = 0x28b8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17280 << 16));
    // 0x28b8ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28b8ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28b8f0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x28b8f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28b8f4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x28b8f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x28b8f8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x28b8f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x28b8fc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28b8fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x28b900: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x28b900u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x28b904: 0x0  nop
    ctx->pc = 0x28b904u;
    // NOP
    // 0x28b908: 0xa6020022  sh          $v0, 0x22($s0)
    ctx->pc = 0x28b908u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 34), (uint16_t)GPR_U32(ctx, 2));
    // 0x28b90c: 0x0  nop
    ctx->pc = 0x28b90cu;
    // NOP
label_28b910:
    // 0x28b910: 0xc0743c0  jal         func_1D0F00
    ctx->pc = 0x28B910u;
    SET_GPR_U32(ctx, 31, 0x28B918u);
    ctx->pc = 0x28B914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B910u;
    // 0x28b914: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F00u, 0x28B910u, 0x28B918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B918u;
label_28b918:
    // 0x28b918: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28B918u;
    {
        const bool branch_taken_0x28b918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28b918) {
            ctx->pc = 0x28B930u;
            goto label_28b930;
        }
    }
    ctx->pc = 0x28B920u;
    // 0x28b920: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x28b920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x28b924: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x28B924u;
    {
        const bool branch_taken_0x28b924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B924u;
        // 0x28b928: 0xa6020020  sh          $v0, 0x20($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b924) {
            ctx->pc = 0x28B960u;
            goto label_28b960;
        }
    }
    ctx->pc = 0x28B92Cu;
    // 0x28b92c: 0x0  nop
    ctx->pc = 0x28b92cu;
    // NOP
label_28b930:
    // 0x28b930: 0x86020020  lh          $v0, 0x20($s0)
    ctx->pc = 0x28b930u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x28b934: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28b934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28b938: 0xa6020020  sh          $v0, 0x20($s0)
    ctx->pc = 0x28b938u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 2));
    // 0x28b93c: 0x86030020  lh          $v1, 0x20($s0)
    ctx->pc = 0x28b93cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x28b940: 0x86020026  lh          $v0, 0x26($s0)
    ctx->pc = 0x28b940u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 38)));
    // 0x28b944: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x28b944u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x28b948: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x28B948u;
    {
        const bool branch_taken_0x28b948 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B948u;
        // 0x28b94c: 0x24027ffe  addiu       $v0, $zero, 0x7FFE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b948) {
            ctx->pc = 0x28B958u;
            goto label_28b958;
        }
    }
    ctx->pc = 0x28B950u;
    // 0x28b950: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x28B950u;
    {
        const bool branch_taken_0x28b950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B950u;
        // 0x28b954: 0xa6020020  sh          $v0, 0x20($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b950) {
            ctx->pc = 0x28B960u;
            goto label_28b960;
        }
    }
    ctx->pc = 0x28B958u;
label_28b958:
    // 0x28b958: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x28b958u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x28b95c: 0x0  nop
    ctx->pc = 0x28b95cu;
    // NOP
label_28b960:
    // 0x28b960: 0x92620024  lbu         $v0, 0x24($s3)
    ctx->pc = 0x28b960u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x28b964: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x28b964u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x28b968: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x28b968u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x28b96c: 0x1440ff96  bnez        $v0, . + 4 + (-0x6A << 2)
    ctx->pc = 0x28B96Cu;
    {
        const bool branch_taken_0x28b96c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B96Cu;
        // 0x28b970: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b96c) {
            ctx->pc = 0x28B7C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28b7c8;
        }
    }
    ctx->pc = 0x28B974u;
    // 0x28b974: 0x0  nop
    ctx->pc = 0x28b974u;
    // NOP
label_28b978:
    // 0x28b978: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x28b978u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b97c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x28b97cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28b980: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x28b980u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28b984: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28b984u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28b988: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28b988u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28b98c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28b98cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28b990: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28b990u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28b994: 0x3e00008  jr          $ra
    ctx->pc = 0x28B994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28B998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B994u;
        // 0x28b998: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28B99Cu;
}
