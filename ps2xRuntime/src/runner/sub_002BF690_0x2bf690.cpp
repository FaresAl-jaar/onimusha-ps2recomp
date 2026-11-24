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

// Function: sub_002BF690
// Address: 0x2bf690 - 0x2bf7e4
void sub_002BF690_0x2bf690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BF690_0x2bf690");
#endif

    switch (ctx->pc) {
        case 0x2bf710u: goto label_2bf710;
        case 0x2bf728u: goto label_2bf728;
        case 0x2bf744u: goto label_2bf744;
        case 0x2bf78cu: goto label_2bf78c;
        case 0x2bf7b0u: goto label_2bf7b0;
        default: break;
    }

    ctx->pc = 0x2bf690u;

    // 0x2bf690: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2bf690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2bf694: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2bf694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2bf698: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2bf698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2bf69c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bf69cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf6a0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2bf6a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2bf6a4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2bf6a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2bf6a8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2bf6a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf6ac: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2bf6acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2bf6b0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2bf6b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf6b4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2bf6b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2bf6b8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2bf6b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf6bc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2bf6bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2bf6c0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2bf6c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2bf6c4: 0xc4a128f0  lwc1        $f1, 0x28F0($a1)
    ctx->pc = 0x2bf6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 10480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bf6c8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2bf6c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bf6cc: 0x4500003a  bc1f        . + 4 + (0x3A << 2)
    ctx->pc = 0x2BF6CCu;
    {
        const bool branch_taken_0x2bf6cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BF6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF6CCu;
        // 0x2bf6d0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf6cc) {
            ctx->pc = 0x2BF7B8u;
            goto label_2bf7b8;
        }
    }
    ctx->pc = 0x2BF6D4u;
    // 0x2bf6d4: 0x8f848b34  lw          $a0, -0x74CC($gp)
    ctx->pc = 0x2bf6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937396)));
    // 0x2bf6d8: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x2bf6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2bf6dc: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x2BF6DCu;
    {
        const bool branch_taken_0x2bf6dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf6dc) {
            ctx->pc = 0x2BF7B8u;
            goto label_2bf7b8;
        }
    }
    ctx->pc = 0x2BF6E4u;
    // 0x2bf6e4: 0x92670002  lbu         $a3, 0x2($s3)
    ctx->pc = 0x2bf6e4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x2bf6e8: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2bf6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2bf6ec: 0x2442f38c  addiu       $v0, $v0, -0xC74
    ctx->pc = 0x2bf6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964108));
    // 0x2bf6f0: 0x928600e9  lbu         $a2, 0xE9($s4)
    ctx->pc = 0x2bf6f0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 233)));
    // 0x2bf6f4: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x2bf6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x2bf6f8: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2bf6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2bf6fc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2bf6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2bf700: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bf700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bf704: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2bf704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2bf708: 0xc0c753c  jal         func_31D4F0
    ctx->pc = 0x2BF708u;
    SET_GPR_U32(ctx, 31, 0x2BF710u);
    ctx->pc = 0x2BF70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF708u;
    // 0x2bf70c: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D4F0u, 0x2BF708u, 0x2BF710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF710u;
label_2bf710:
    // 0x2bf710: 0x8f848b34  lw          $a0, -0x74CC($gp)
    ctx->pc = 0x2bf710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937396)));
    // 0x2bf714: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2bf714u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2bf718: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bf718u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf71c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2bf71cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf720: 0xc0c753c  jal         func_31D4F0
    ctx->pc = 0x2BF720u;
    SET_GPR_U32(ctx, 31, 0x2BF728u);
    ctx->pc = 0x2BF724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF720u;
    // 0x2bf724: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D4F0u, 0x2BF720u, 0x2BF728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF728u;
label_2bf728:
    // 0x2bf728: 0xa29000e9  sb          $s0, 0xE9($s4)
    ctx->pc = 0x2bf728u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 233), (uint8_t)GPR_U32(ctx, 16));
    // 0x2bf72c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2bf72cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf730: 0x8f848b34  lw          $a0, -0x74CC($gp)
    ctx->pc = 0x2bf730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937396)));
    // 0x2bf734: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2bf734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf738: 0x82870103  lb          $a3, 0x103($s4)
    ctx->pc = 0x2bf738u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 259)));
    // 0x2bf73c: 0xc0c7670  jal         func_31D9C0
    ctx->pc = 0x2BF73Cu;
    SET_GPR_U32(ctx, 31, 0x2BF744u);
    ctx->pc = 0x2BF740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF73Cu;
    // 0x2bf740: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D9C0u, 0x2BF73Cu, 0x2BF744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF744u;
label_2bf744:
    // 0x2bf744: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bf744u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf748: 0x10102b  sltu        $v0, $zero, $s0
    ctx->pc = 0x2bf748u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2bf74c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2bf74cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2bf750: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2BF750u;
    {
        const bool branch_taken_0x2bf750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bf750) {
            ctx->pc = 0x2BF7B8u;
            goto label_2bf7b8;
        }
    }
    ctx->pc = 0x2BF758u;
    // 0x2bf758: 0x8e63004c  lw          $v1, 0x4C($s3)
    ctx->pc = 0x2bf758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x2bf75c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2bf75cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2bf760: 0x92650002  lbu         $a1, 0x2($s3)
    ctx->pc = 0x2bf760u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x2bf764: 0x2442f388  addiu       $v0, $v0, -0xC78
    ctx->pc = 0x2bf764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964104));
    // 0x2bf768: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bf768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf76c: 0x8c660094  lw          $a2, 0x94($v1)
    ctx->pc = 0x2bf76cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x2bf770: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x2bf770u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2bf774: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2bf774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2bf778: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2bf778u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2bf77c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bf77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bf780: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2bf780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2bf784: 0xc0ae8b8  jal         func_2BA2E0
    ctx->pc = 0x2BF784u;
    SET_GPR_U32(ctx, 31, 0x2BF78Cu);
    ctx->pc = 0x2BF788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF784u;
    // 0x2bf788: 0x24c50030  addiu       $a1, $a2, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA2E0u, 0x2BF784u, 0x2BF78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF78Cu;
label_2bf78c:
    // 0x2bf78c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2BF78Cu;
    {
        const bool branch_taken_0x2bf78c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf78c) {
            ctx->pc = 0x2BF7B8u;
            goto label_2bf7b8;
        }
    }
    ctx->pc = 0x2BF794u;
    // 0x2bf794: 0x1a000002  blez        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2BF794u;
    {
        const bool branch_taken_0x2bf794 = (GPR_S64(ctx, 16) <= 0);
        if (branch_taken_0x2bf794) {
            ctx->pc = 0x2BF7A0u;
            goto label_2bf7a0;
        }
    }
    ctx->pc = 0x2BF79Cu;
    // 0x2bf79c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x2bf79cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bf7a0:
    // 0x2bf7a0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2bf7a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf7a4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2bf7a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf7a8: 0xc0afd08  jal         func_2BF420
    ctx->pc = 0x2BF7A8u;
    SET_GPR_U32(ctx, 31, 0x2BF7B0u);
    ctx->pc = 0x2BF7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF7A8u;
    // 0x2bf7ac: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF420u, 0x2BF7A8u, 0x2BF7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF7B0u;
label_2bf7b0:
    // 0x2bf7b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2BF7B0u;
    {
        const bool branch_taken_0x2bf7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf7b0) {
            ctx->pc = 0x2BF7C0u;
            goto label_2bf7c0;
        }
    }
    ctx->pc = 0x2BF7B8u;
label_2bf7b8:
    // 0x2bf7b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2bf7b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf7bc: 0x0  nop
    ctx->pc = 0x2bf7bcu;
    // NOP
label_2bf7c0:
    // 0x2bf7c0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2bf7c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2bf7c4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2bf7c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bf7c8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2bf7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2bf7cc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2bf7ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bf7d0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2bf7d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bf7d4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2bf7d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bf7d8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2bf7d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bf7dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2BF7DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF7DCu;
        // 0x2bf7e0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF7DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF7E4u;
}
