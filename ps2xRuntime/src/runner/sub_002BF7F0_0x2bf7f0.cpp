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

// Function: sub_002BF7F0
// Address: 0x2bf7f0 - 0x2bf9e8
void sub_002BF7F0_0x2bf7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BF7F0_0x2bf7f0");
#endif

    switch (ctx->pc) {
        case 0x2bf8a0u: goto label_2bf8a0;
        case 0x2bf8ccu: goto label_2bf8cc;
        case 0x2bf8dcu: goto label_2bf8dc;
        case 0x2bf8fcu: goto label_2bf8fc;
        case 0x2bf990u: goto label_2bf990;
        case 0x2bf9b8u: goto label_2bf9b8;
        default: break;
    }

    ctx->pc = 0x2bf7f0u;

    // 0x2bf7f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2bf7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2bf7f4: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2bf7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2bf7f8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2bf7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2bf7fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bf7fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf800: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2bf800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2bf804: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2bf804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2bf808: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2bf808u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf80c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2bf80cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2bf810: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2bf810u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf814: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bf814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2bf818: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bf818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2bf81c: 0xc4a128f0  lwc1        $f1, 0x28F0($a1)
    ctx->pc = 0x2bf81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 10480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bf820: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2bf820u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bf824: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x2BF824u;
    {
        const bool branch_taken_0x2bf824 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BF828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF824u;
        // 0x2bf828: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf824) {
            ctx->pc = 0x2BF848u;
            goto label_2bf848;
        }
    }
    ctx->pc = 0x2BF82Cu;
    // 0x2bf82c: 0xc64128f0  lwc1        $f1, 0x28F0($s2)
    ctx->pc = 0x2bf82cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 10480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bf830: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2bf830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2bf834: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bf834u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf838: 0x0  nop
    ctx->pc = 0x2bf838u;
    // NOP
    // 0x2bf83c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2bf83cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bf840: 0x4501005f  bc1t        . + 4 + (0x5F << 2)
    ctx->pc = 0x2BF840u;
    {
        const bool branch_taken_0x2bf840 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bf840) {
            ctx->pc = 0x2BF9C0u;
            goto label_2bf9c0;
        }
    }
    ctx->pc = 0x2BF848u;
label_2bf848:
    // 0x2bf848: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2bf848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2bf84c: 0xc64128f0  lwc1        $f1, 0x28F0($s2)
    ctx->pc = 0x2bf84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 10480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bf850: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bf850u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf854: 0x0  nop
    ctx->pc = 0x2bf854u;
    // NOP
    // 0x2bf858: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2bf858u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bf85c: 0x45000058  bc1f        . + 4 + (0x58 << 2)
    ctx->pc = 0x2BF85Cu;
    {
        const bool branch_taken_0x2bf85c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bf85c) {
            ctx->pc = 0x2BF9C0u;
            goto label_2bf9c0;
        }
    }
    ctx->pc = 0x2BF864u;
    // 0x2bf864: 0x8f848b34  lw          $a0, -0x74CC($gp)
    ctx->pc = 0x2bf864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937396)));
    // 0x2bf868: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x2bf868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2bf86c: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x2BF86Cu;
    {
        const bool branch_taken_0x2bf86c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf86c) {
            ctx->pc = 0x2BF9C0u;
            goto label_2bf9c0;
        }
    }
    ctx->pc = 0x2BF874u;
    // 0x2bf874: 0x92670002  lbu         $a3, 0x2($s3)
    ctx->pc = 0x2bf874u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x2bf878: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2bf878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2bf87c: 0x2442f38c  addiu       $v0, $v0, -0xC74
    ctx->pc = 0x2bf87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964108));
    // 0x2bf880: 0x928600e9  lbu         $a2, 0xE9($s4)
    ctx->pc = 0x2bf880u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 233)));
    // 0x2bf884: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x2bf884u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x2bf888: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2bf888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2bf88c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2bf88cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2bf890: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bf890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bf894: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2bf894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2bf898: 0xc0c753c  jal         func_31D4F0
    ctx->pc = 0x2BF898u;
    SET_GPR_U32(ctx, 31, 0x2BF8A0u);
    ctx->pc = 0x2BF89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF898u;
    // 0x2bf89c: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D4F0u, 0x2BF898u, 0x2BF8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF8A0u;
label_2bf8a0:
    // 0x2bf8a0: 0x92450002  lbu         $a1, 0x2($s2)
    ctx->pc = 0x2bf8a0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x2bf8a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bf8a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf8a8: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2bf8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2bf8ac: 0x2442f38c  addiu       $v0, $v0, -0xC74
    ctx->pc = 0x2bf8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964108));
    // 0x2bf8b0: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x2bf8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2bf8b4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2bf8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2bf8b8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2bf8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2bf8bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bf8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bf8c0: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2bf8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2bf8c4: 0xc0ae964  jal         func_2BA590
    ctx->pc = 0x2BF8C4u;
    SET_GPR_U32(ctx, 31, 0x2BF8CCu);
    ctx->pc = 0x2BF8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF8C4u;
    // 0x2bf8c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA590u, 0x2BF8C4u, 0x2BF8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF8CCu;
label_2bf8cc:
    // 0x2bf8cc: 0x8f848b34  lw          $a0, -0x74CC($gp)
    ctx->pc = 0x2bf8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937396)));
    // 0x2bf8d0: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x2bf8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x2bf8d4: 0xc0c753c  jal         func_31D4F0
    ctx->pc = 0x2BF8D4u;
    SET_GPR_U32(ctx, 31, 0x2BF8DCu);
    ctx->pc = 0x2BF8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF8D4u;
    // 0x2bf8d8: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D4F0u, 0x2BF8D4u, 0x2BF8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF8DCu;
label_2bf8dc:
    // 0x2bf8dc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2bf8dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf8e0: 0x12110037  beq         $s0, $s1, . + 4 + (0x37 << 2)
    ctx->pc = 0x2BF8E0u;
    {
        const bool branch_taken_0x2bf8e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x2BF8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF8E0u;
        // 0x2bf8e4: 0xa29000e9  sb          $s0, 0xE9($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 233), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf8e0) {
            ctx->pc = 0x2BF9C0u;
            goto label_2bf9c0;
        }
    }
    ctx->pc = 0x2BF8E8u;
    // 0x2bf8e8: 0x8f848b34  lw          $a0, -0x74CC($gp)
    ctx->pc = 0x2bf8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937396)));
    // 0x2bf8ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2bf8ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf8f0: 0x82870103  lb          $a3, 0x103($s4)
    ctx->pc = 0x2bf8f0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 259)));
    // 0x2bf8f4: 0xc0c7670  jal         func_31D9C0
    ctx->pc = 0x2BF8F4u;
    SET_GPR_U32(ctx, 31, 0x2BF8FCu);
    ctx->pc = 0x2BF8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF8F4u;
    // 0x2bf8f8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D9C0u, 0x2BF8F4u, 0x2BF8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF8FCu;
label_2bf8fc:
    // 0x2bf8fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bf8fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf900: 0x10102b  sltu        $v0, $zero, $s0
    ctx->pc = 0x2bf900u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2bf904: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2bf904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2bf908: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2BF908u;
    {
        const bool branch_taken_0x2bf908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bf908) {
            ctx->pc = 0x2BF9C0u;
            goto label_2bf9c0;
        }
    }
    ctx->pc = 0x2BF910u;
    // 0x2bf910: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x2bf910u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2bf914: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x2bf914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x2bf918: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x2bf918u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2bf91c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2BF91Cu;
    {
        const bool branch_taken_0x2bf91c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BF920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF91Cu;
        // 0x2bf920: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf91c) {
            ctx->pc = 0x2BF928u;
            goto label_2bf928;
        }
    }
    ctx->pc = 0x2BF924u;
    // 0x2bf924: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2bf924u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bf928:
    // 0x2bf928: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BF928u;
    {
        const bool branch_taken_0x2bf928 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF928u;
        // 0x2bf92c: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf928) {
            ctx->pc = 0x2BF93Cu;
            goto label_2bf93c;
        }
    }
    ctx->pc = 0x2BF930u;
    // 0x2bf930: 0x8e62004c  lw          $v0, 0x4C($s3)
    ctx->pc = 0x2bf930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x2bf934: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x2bf934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x2bf938: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x2bf938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_2bf93c:
    // 0x2bf93c: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x2bf93cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2bf940: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x2bf940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x2bf944: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x2bf944u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2bf948: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BF948u;
    {
        const bool branch_taken_0x2bf948 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BF94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF948u;
        // 0x2bf94c: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf948) {
            ctx->pc = 0x2BF958u;
            goto label_2bf958;
        }
    }
    ctx->pc = 0x2BF950u;
    // 0x2bf950: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2bf950u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf954: 0x0  nop
    ctx->pc = 0x2bf954u;
    // NOP
label_2bf958:
    // 0x2bf958: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BF958u;
    {
        const bool branch_taken_0x2bf958 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF958u;
        // 0x2bf95c: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf958) {
            ctx->pc = 0x2BF96Cu;
            goto label_2bf96c;
        }
    }
    ctx->pc = 0x2BF960u;
    // 0x2bf960: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x2bf960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x2bf964: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x2bf964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x2bf968: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x2bf968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_2bf96c:
    // 0x2bf96c: 0x92660002  lbu         $a2, 0x2($s3)
    ctx->pc = 0x2bf96cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x2bf970: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2bf970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2bf974: 0x2442f388  addiu       $v0, $v0, -0xC78
    ctx->pc = 0x2bf974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964104));
    // 0x2bf978: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x2bf978u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2bf97c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2bf97cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2bf980: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2bf980u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2bf984: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bf984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bf988: 0xc0ae8b8  jal         func_2BA2E0
    ctx->pc = 0x2BF988u;
    SET_GPR_U32(ctx, 31, 0x2BF990u);
    ctx->pc = 0x2BF98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF988u;
    // 0x2bf98c: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA2E0u, 0x2BF988u, 0x2BF990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF990u;
label_2bf990:
    // 0x2bf990: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2BF990u;
    {
        const bool branch_taken_0x2bf990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf990) {
            ctx->pc = 0x2BF9C0u;
            goto label_2bf9c0;
        }
    }
    ctx->pc = 0x2BF998u;
    // 0x2bf998: 0x1a000003  blez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BF998u;
    {
        const bool branch_taken_0x2bf998 = (GPR_S64(ctx, 16) <= 0);
        if (branch_taken_0x2bf998) {
            ctx->pc = 0x2BF9A8u;
            goto label_2bf9a8;
        }
    }
    ctx->pc = 0x2BF9A0u;
    // 0x2bf9a0: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x2bf9a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf9a4: 0x0  nop
    ctx->pc = 0x2bf9a4u;
    // NOP
label_2bf9a8:
    // 0x2bf9a8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2bf9a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf9ac: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2bf9acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf9b0: 0xc0afd08  jal         func_2BF420
    ctx->pc = 0x2BF9B0u;
    SET_GPR_U32(ctx, 31, 0x2BF9B8u);
    ctx->pc = 0x2BF9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF9B0u;
    // 0x2bf9b4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF420u, 0x2BF9B0u, 0x2BF9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF9B8u;
label_2bf9b8:
    // 0x2bf9b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2BF9B8u;
    {
        const bool branch_taken_0x2bf9b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf9b8) {
            ctx->pc = 0x2BF9C8u;
            goto label_2bf9c8;
        }
    }
    ctx->pc = 0x2BF9C0u;
label_2bf9c0:
    // 0x2bf9c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2bf9c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf9c4: 0x0  nop
    ctx->pc = 0x2bf9c4u;
    // NOP
label_2bf9c8:
    // 0x2bf9c8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2bf9c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bf9cc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2bf9ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bf9d0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2bf9d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bf9d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2bf9d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bf9d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bf9d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bf9dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bf9dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bf9e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2BF9E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF9E0u;
        // 0x2bf9e4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF9E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF9E8u;
}
