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

// Function: sub_0030E660
// Address: 0x30e660 - 0x30ef18
void sub_0030E660_0x30e660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030E660_0x30e660");
#endif

    switch (ctx->pc) {
        case 0x30e6e0u: goto label_30e6e0;
        case 0x30e75cu: goto label_30e75c;
        case 0x30e764u: goto label_30e764;
        case 0x30e78cu: goto label_30e78c;
        case 0x30e914u: goto label_30e914;
        case 0x30e998u: goto label_30e998;
        case 0x30e9c8u: goto label_30e9c8;
        case 0x30ea10u: goto label_30ea10;
        case 0x30ea28u: goto label_30ea28;
        case 0x30eae4u: goto label_30eae4;
        case 0x30eaecu: goto label_30eaec;
        case 0x30eb08u: goto label_30eb08;
        case 0x30eb48u: goto label_30eb48;
        case 0x30ec00u: goto label_30ec00;
        case 0x30ec34u: goto label_30ec34;
        case 0x30ec3cu: goto label_30ec3c;
        case 0x30ed18u: goto label_30ed18;
        case 0x30ed78u: goto label_30ed78;
        case 0x30edacu: goto label_30edac;
        case 0x30edb4u: goto label_30edb4;
        case 0x30ee90u: goto label_30ee90;
        default: break;
    }

    ctx->pc = 0x30e660u;

    // 0x30e660: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x30e660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x30e664: 0x3c01008e  lui         $at, 0x8E
    ctx->pc = 0x30e664u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)142 << 16));
    // 0x30e668: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x30e668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x30e66c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x30e66cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x30e670: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x30e670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x30e674: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x30e674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x30e678: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x30e678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x30e67c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x30e67cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x30e680: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x30e680u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e684: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x30e684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x30e688: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x30e688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x30e68c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x30e68cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x30e690: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x30e690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x30e694: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x30e694u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x30e698: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x30e698u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x30e69c: 0x8c23fd84  lw          $v1, -0x27C($at)
    ctx->pc = 0x30e69cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8DFD84u));
    // 0x30e6a0: 0x90a40003  lbu         $a0, 0x3($a1)
    ctx->pc = 0x30e6a0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x30e6a4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x30E6A4u;
    {
        const bool branch_taken_0x30e6a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E6A4u;
        // 0x30e6a8: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e6a4) {
            ctx->pc = 0x30E6C8u;
            goto label_30e6c8;
        }
    }
    ctx->pc = 0x30E6ACu;
    // 0x30e6ac: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x30e6acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x30e6b0: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x30e6b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x30e6b4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x30e6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x30e6b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30e6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30e6bc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x30E6BCu;
    {
        const bool branch_taken_0x30e6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E6BCu;
        // 0x30e6c0: 0x24730004  addiu       $s3, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e6bc) {
            ctx->pc = 0x30E6D0u;
            goto label_30e6d0;
        }
    }
    ctx->pc = 0x30E6C4u;
    // 0x30e6c4: 0x0  nop
    ctx->pc = 0x30e6c4u;
    // NOP
label_30e6c8:
    // 0x30e6c8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x30e6c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e6cc: 0x0  nop
    ctx->pc = 0x30e6ccu;
    // NOP
label_30e6d0:
    // 0x30e6d0: 0x8ebe0604  lw          $fp, 0x604($s5)
    ctx->pc = 0x30e6d0u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1540)));
    // 0x30e6d4: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x30E6D4u;
    {
        const bool branch_taken_0x30e6d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E6D4u;
        // 0x30e6d8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e6d4) {
            ctx->pc = 0x30E958u;
            goto label_30e958;
        }
    }
    ctx->pc = 0x30E6DCu;
    // 0x30e6dc: 0x0  nop
    ctx->pc = 0x30e6dcu;
    // NOP
label_30e6e0:
    // 0x30e6e0: 0x121840  sll         $v1, $s2, 1
    ctx->pc = 0x30e6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x30e6e4: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x30e6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x30e6e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x30e6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30e6ec: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x30e6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x30e6f0: 0x90630008  lbu         $v1, 0x8($v1)
    ctx->pc = 0x30e6f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x30e6f4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x30E6F4u;
    {
        const bool branch_taken_0x30e6f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30e6f4) {
            ctx->pc = 0x30E710u;
            goto label_30e710;
        }
    }
    ctx->pc = 0x30E6FCu;
    // 0x30e6fc: 0x92640000  lbu         $a0, 0x0($s3)
    ctx->pc = 0x30e6fcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x30e700: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30e700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30e704: 0x14830092  bne         $a0, $v1, . + 4 + (0x92 << 2)
    ctx->pc = 0x30E704u;
    {
        const bool branch_taken_0x30e704 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x30e704) {
            ctx->pc = 0x30E950u;
            goto label_30e950;
        }
    }
    ctx->pc = 0x30E70Cu;
    // 0x30e70c: 0x0  nop
    ctx->pc = 0x30e70cu;
    // NOP
label_30e710:
    // 0x30e710: 0x8ea40600  lw          $a0, 0x600($s5)
    ctx->pc = 0x30e710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1536)));
    // 0x30e714: 0x122980  sll         $a1, $s2, 6
    ctx->pc = 0x30e714u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x30e718: 0x92830000  lbu         $v1, 0x0($s4)
    ctx->pc = 0x30e718u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x30e71c: 0x858821  addu        $s1, $a0, $a1
    ctx->pc = 0x30e71cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x30e720: 0x92240022  lbu         $a0, 0x22($s1)
    ctx->pc = 0x30e720u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 34)));
    // 0x30e724: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x30e724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x30e728: 0x31efe  dsrl32      $v1, $v1, 27
    ctx->pc = 0x30e728u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 27));
    // 0x30e72c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x30e72cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x30e730: 0x10600087  beqz        $v1, . + 4 + (0x87 << 2)
    ctx->pc = 0x30E730u;
    {
        const bool branch_taken_0x30e730 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30e730) {
            ctx->pc = 0x30E950u;
            goto label_30e950;
        }
    }
    ctx->pc = 0x30E738u;
    // 0x30e738: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x30e738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x30e73c: 0x14600084  bnez        $v1, . + 4 + (0x84 << 2)
    ctx->pc = 0x30E73Cu;
    {
        const bool branch_taken_0x30e73c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30e73c) {
            ctx->pc = 0x30E950u;
            goto label_30e950;
        }
    }
    ctx->pc = 0x30E744u;
    // 0x30e744: 0x92230034  lbu         $v1, 0x34($s1)
    ctx->pc = 0x30e744u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x30e748: 0x10600081  beqz        $v1, . + 4 + (0x81 << 2)
    ctx->pc = 0x30E748u;
    {
        const bool branch_taken_0x30e748 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E748u;
        // 0x30e74c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e748) {
            ctx->pc = 0x30E950u;
            goto label_30e950;
        }
    }
    ctx->pc = 0x30E750u;
    // 0x30e750: 0x26850020  addiu       $a1, $s4, 0x20
    ctx->pc = 0x30e750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x30e754: 0xc0414d0  jal         func_105340
    ctx->pc = 0x30E754u;
    SET_GPR_U32(ctx, 31, 0x30E75Cu);
    ctx->pc = 0x30E758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E754u;
    // 0x30e758: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x30E754u, 0x30E75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E75Cu;
label_30e75c:
    // 0x30e75c: 0xc04d7b4  jal         func_135ED0
    ctx->pc = 0x30E75Cu;
    SET_GPR_U32(ctx, 31, 0x30E764u);
    ctx->pc = 0x30E760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E75Cu;
    // 0x30e760: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x30E75Cu, 0x30E764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E764u;
label_30e764:
    // 0x30e764: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x30e764u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x30e768: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x30e768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x30e76c: 0xc6800018  lwc1        $f0, 0x18($s4)
    ctx->pc = 0x30e76cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30e770: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x30e770u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x30e774: 0x0  nop
    ctx->pc = 0x30e774u;
    // NOP
    // 0x30e778: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x30e778u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30e77c: 0x45000074  bc1f        . + 4 + (0x74 << 2)
    ctx->pc = 0x30E77Cu;
    {
        const bool branch_taken_0x30e77c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30E780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E77Cu;
        // 0x30e780: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e77c) {
            ctx->pc = 0x30E950u;
            goto label_30e950;
        }
    }
    ctx->pc = 0x30E784u;
    // 0x30e784: 0xc041472  jal         func_1051C8
    ctx->pc = 0x30E784u;
    SET_GPR_U32(ctx, 31, 0x30E78Cu);
    ctx->pc = 0x30E788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E784u;
    // 0x30e788: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x30E784u, 0x30E78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E78Cu;
label_30e78c:
    // 0x30e78c: 0xc6810014  lwc1        $f1, 0x14($s4)
    ctx->pc = 0x30e78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30e790: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x30e790u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30e794: 0x0  nop
    ctx->pc = 0x30e794u;
    // NOP
    // 0x30e798: 0x4601ad41  sub.s       $f21, $f21, $f1
    ctx->pc = 0x30e798u;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[1]);
    // 0x30e79c: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x30e79cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30e7a0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x30E7A0u;
    {
        const bool branch_taken_0x30e7a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30e7a0) {
            ctx->pc = 0x30E7C0u;
            goto label_30e7c0;
        }
    }
    ctx->pc = 0x30E7A8u;
    // 0x30e7a8: 0xc6810010  lwc1        $f1, 0x10($s4)
    ctx->pc = 0x30e7a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30e7ac: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x30e7acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x30e7b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30e7b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30e7b4: 0x0  nop
    ctx->pc = 0x30e7b4u;
    // NOP
    // 0x30e7b8: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x30e7b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x30e7bc: 0x46010501  sub.s       $f20, $f0, $f1
    ctx->pc = 0x30e7bcu;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_30e7c0:
    // 0x30e7c0: 0x92630001  lbu         $v1, 0x1($s3)
    ctx->pc = 0x30e7c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x30e7c4: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x30E7C4u;
    {
        const bool branch_taken_0x30e7c4 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x30E7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E7C4u;
        // 0x30e7c8: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e7c4) {
            ctx->pc = 0x30E7D8u;
            goto label_30e7d8;
        }
    }
    ctx->pc = 0x30E7CCu;
    // 0x30e7cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30e7ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30e7d0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30E7D0u;
    {
        const bool branch_taken_0x30e7d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E7D0u;
        // 0x30e7d4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e7d0) {
            ctx->pc = 0x30E7F0u;
            goto label_30e7f0;
        }
    }
    ctx->pc = 0x30E7D8u;
label_30e7d8:
    // 0x30e7d8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x30e7d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x30e7dc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x30e7dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x30e7e0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x30e7e0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30e7e4: 0x0  nop
    ctx->pc = 0x30e7e4u;
    // NOP
    // 0x30e7e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x30e7e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x30e7ec: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x30e7ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_30e7f0:
    // 0x30e7f0: 0xc6210030  lwc1        $f1, 0x30($s1)
    ctx->pc = 0x30e7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30e7f4: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x30e7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x30e7f8: 0x46140082  mul.s       $f2, $f0, $f20
    ctx->pc = 0x30e7f8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x30e7fc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x30e7fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x30e800: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30e800u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30e804: 0x0  nop
    ctx->pc = 0x30e804u;
    // NOP
    // 0x30e808: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x30e808u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30e80c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x30E80Cu;
    {
        const bool branch_taken_0x30e80c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30e80c) {
            ctx->pc = 0x30E824u;
            goto label_30e824;
        }
    }
    ctx->pc = 0x30E814u;
    // 0x30e814: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30e814u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x30e818: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x30e818u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x30e81c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x30E81Cu;
    {
        const bool branch_taken_0x30e81c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E81Cu;
        // 0x30e820: 0x92230023  lbu         $v1, 0x23($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e81c) {
            ctx->pc = 0x30E840u;
            goto label_30e840;
        }
    }
    ctx->pc = 0x30E824u;
label_30e824:
    // 0x30e824: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x30e824u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x30e828: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x30e828u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x30e82c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30e82cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x30e830: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x30e830u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x30e834: 0x0  nop
    ctx->pc = 0x30e834u;
    // NOP
    // 0x30e838: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x30e838u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x30e83c: 0x92230023  lbu         $v1, 0x23($s1)
    ctx->pc = 0x30e83cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
label_30e840:
    // 0x30e840: 0x309000ff  andi        $s0, $a0, 0xFF
    ctx->pc = 0x30e840u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x30e844: 0x70082a  slt         $at, $v1, $s0
    ctx->pc = 0x30e844u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x30e848: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x30E848u;
    {
        const bool branch_taken_0x30e848 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x30e848) {
            ctx->pc = 0x30E858u;
            goto label_30e858;
        }
    }
    ctx->pc = 0x30E850u;
    // 0x30e850: 0xa2300023  sb          $s0, 0x23($s1)
    ctx->pc = 0x30e850u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 35), (uint8_t)GPR_U32(ctx, 16));
    // 0x30e854: 0x0  nop
    ctx->pc = 0x30e854u;
    // NOP
label_30e858:
    // 0x30e858: 0x121840  sll         $v1, $s2, 1
    ctx->pc = 0x30e858u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x30e85c: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x30e85cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x30e860: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x30e860u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x30e864: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x30e864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x30e868: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x30e868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    // 0x30e86c: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x30e86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30e870: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30e870u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30e874: 0x0  nop
    ctx->pc = 0x30e874u;
    // NOP
    // 0x30e878: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x30e878u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30e87c: 0x45010034  bc1t        . + 4 + (0x34 << 2)
    ctx->pc = 0x30E87Cu;
    {
        const bool branch_taken_0x30e87c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30e87c) {
            ctx->pc = 0x30E950u;
            goto label_30e950;
        }
    }
    ctx->pc = 0x30E884u;
    // 0x30e884: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30E884u;
    {
        const bool branch_taken_0x30e884 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x30E888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E884u;
        // 0x30e888: 0x46010041  sub.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e884) {
            ctx->pc = 0x30E898u;
            goto label_30e898;
        }
    }
    ctx->pc = 0x30E88Cu;
    // 0x30e88c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x30e88cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30e890: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x30E890u;
    {
        const bool branch_taken_0x30e890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E890u;
        // 0x30e894: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e890) {
            ctx->pc = 0x30E8B4u;
            goto label_30e8b4;
        }
    }
    ctx->pc = 0x30E898u;
label_30e898:
    // 0x30e898: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x30e898u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x30e89c: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x30e89cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x30e8a0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x30e8a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30e8a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30e8a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30e8a8: 0x0  nop
    ctx->pc = 0x30e8a8u;
    // NOP
    // 0x30e8ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x30e8acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x30e8b0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x30e8b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_30e8b4:
    // 0x30e8b4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x30e8b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x30e8b8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x30e8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x30e8bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30e8bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30e8c0: 0x0  nop
    ctx->pc = 0x30e8c0u;
    // NOP
    // 0x30e8c4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x30e8c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30e8c8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x30E8C8u;
    {
        const bool branch_taken_0x30e8c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30e8c8) {
            ctx->pc = 0x30E8E0u;
            goto label_30e8e0;
        }
    }
    ctx->pc = 0x30E8D0u;
    // 0x30e8d0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30e8d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x30e8d4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x30e8d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x30e8d8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x30E8D8u;
    {
        const bool branch_taken_0x30e8d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E8D8u;
        // 0x30e8dc: 0x8e260028  lw          $a2, 0x28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e8d8) {
            ctx->pc = 0x30E8FCu;
            goto label_30e8fc;
        }
    }
    ctx->pc = 0x30E8E0u;
label_30e8e0:
    // 0x30e8e0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x30e8e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x30e8e4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x30e8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x30e8e8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30e8e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x30e8ec: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x30e8ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x30e8f0: 0x0  nop
    ctx->pc = 0x30e8f0u;
    // NOP
    // 0x30e8f4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x30e8f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30e8f8: 0x8e260028  lw          $a2, 0x28($s1)
    ctx->pc = 0x30e8f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_30e8fc:
    // 0x30e8fc: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x30e8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x30e900: 0x8e27002c  lw          $a3, 0x2C($s1)
    ctx->pc = 0x30e900u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x30e904: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x30e904u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x30e908: 0x2484bb10  addiu       $a0, $a0, -0x44F0
    ctx->pc = 0x30e908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949648));
    // 0x30e90c: 0xc0c6534  jal         func_3194D0
    ctx->pc = 0x30E90Cu;
    SET_GPR_U32(ctx, 31, 0x30E914u);
    ctx->pc = 0x30E910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E90Cu;
    // 0x30e910: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3194D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3194D0u, 0x30E90Cu, 0x30E914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E914u;
label_30e914:
    // 0x30e914: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x30E914u;
    {
        const bool branch_taken_0x30e914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E914u;
        // 0x30e918: 0x24460010  addiu       $a2, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e914) {
            ctx->pc = 0x30E950u;
            goto label_30e950;
        }
    }
    ctx->pc = 0x30E91Cu;
    // 0x30e91c: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x30e91cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x30e920: 0x78670000  lq          $a3, 0x0($v1)
    ctx->pc = 0x30e920u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30e924: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x30e924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x30e928: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x30e928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x30e92c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x30e92cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e930: 0x7cc70000  sq          $a3, 0x0($a2)
    ctx->pc = 0x30e930u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 7));
    // 0x30e934: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x30e934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x30e938: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30e938u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30e93c: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x30e93cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30e940: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x30e940u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x30e944: 0xa0500034  sb          $s0, 0x34($v0)
    ctx->pc = 0x30e944u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 52), (uint8_t)GPR_U32(ctx, 16));
    // 0x30e948: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x30e948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x30e94c: 0x0  nop
    ctx->pc = 0x30e94cu;
    // NOP
label_30e950:
    // 0x30e950: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x30e950u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x30e954: 0x0  nop
    ctx->pc = 0x30e954u;
    // NOP
label_30e958:
    // 0x30e958: 0x25e182b  sltu        $v1, $s2, $fp
    ctx->pc = 0x30e958u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x30e95c: 0x1460ff60  bnez        $v1, . + 4 + (-0xA0 << 2)
    ctx->pc = 0x30E95Cu;
    {
        const bool branch_taken_0x30e95c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30e95c) {
            ctx->pc = 0x30E6E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30e6e0;
        }
    }
    ctx->pc = 0x30E964u;
    // 0x30e964: 0x92640000  lbu         $a0, 0x0($s3)
    ctx->pc = 0x30e964u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x30e968: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x30e968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30e96c: 0x10830100  beq         $a0, $v1, . + 4 + (0x100 << 2)
    ctx->pc = 0x30E96Cu;
    {
        const bool branch_taken_0x30e96c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x30E970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E96Cu;
        // 0x30e970: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e96c) {
            ctx->pc = 0x30ED70u;
            goto label_30ed70;
        }
    }
    ctx->pc = 0x30E974u;
    // 0x30e974: 0x108300a0  beq         $a0, $v1, . + 4 + (0xA0 << 2)
    ctx->pc = 0x30E974u;
    {
        const bool branch_taken_0x30e974 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x30e974) {
            ctx->pc = 0x30EBF8u;
            goto label_30ebf8;
        }
    }
    ctx->pc = 0x30E97Cu;
    // 0x30e97c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x30e97cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30e980: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x30E980u;
    {
        const bool branch_taken_0x30e980 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x30e980) {
            ctx->pc = 0x30E990u;
            goto label_30e990;
        }
    }
    ctx->pc = 0x30E988u;
    // 0x30e988: 0x10000155  b           . + 4 + (0x155 << 2)
    ctx->pc = 0x30E988u;
    {
        const bool branch_taken_0x30e988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30e988) {
            ctx->pc = 0x30EEE0u;
            goto label_30eee0;
        }
    }
    ctx->pc = 0x30E990u;
label_30e990:
    // 0x30e990: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30E990u;
    {
        const bool branch_taken_0x30e990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E990u;
        // 0x30e994: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e990) {
            ctx->pc = 0x30E9B0u;
            goto label_30e9b0;
        }
    }
    ctx->pc = 0x30E998u;
label_30e998:
    // 0x30e998: 0x8ea40600  lw          $a0, 0x600($s5)
    ctx->pc = 0x30e998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1536)));
    // 0x30e99c: 0x51980  sll         $v1, $a1, 6
    ctx->pc = 0x30e99cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x30e9a0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x30e9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x30e9a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30e9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30e9a8: 0xa4600020  sh          $zero, 0x20($v1)
    ctx->pc = 0x30e9a8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x30e9ac: 0x0  nop
    ctx->pc = 0x30e9acu;
    // NOP
label_30e9b0:
    // 0x30e9b0: 0xbe182b  sltu        $v1, $a1, $fp
    ctx->pc = 0x30e9b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x30e9b4: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x30E9B4u;
    {
        const bool branch_taken_0x30e9b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30E9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E9B4u;
        // 0x30e9b8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e9b4) {
            ctx->pc = 0x30E998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30e998;
        }
    }
    ctx->pc = 0x30E9BCu;
    // 0x30e9bc: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x30E9BCu;
    {
        const bool branch_taken_0x30e9bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30e9bc) {
            ctx->pc = 0x30EBD8u;
            goto label_30ebd8;
        }
    }
    ctx->pc = 0x30E9C4u;
    // 0x30e9c4: 0x0  nop
    ctx->pc = 0x30e9c4u;
    // NOP
label_30e9c8:
    // 0x30e9c8: 0x240322b0  addiu       $v1, $zero, 0x22B0
    ctx->pc = 0x30e9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8880));
    // 0x30e9cc: 0x2432018  mult        $a0, $s2, $v1
    ctx->pc = 0x30e9ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x30e9d0: 0x3c030081  lui         $v1, 0x81
    ctx->pc = 0x30e9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)129 << 16));
    // 0x30e9d4: 0x24639648  addiu       $v1, $v1, -0x69B8
    ctx->pc = 0x30e9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940232));
    // 0x30e9d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30e9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30e9dc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x30e9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30e9e0: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x30e9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x30e9e4: 0x2c8300ff  sltiu       $v1, $a0, 0xFF
    ctx->pc = 0x30e9e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)255) ? 1 : 0);
    // 0x30e9e8: 0x14600079  bnez        $v1, . + 4 + (0x79 << 2)
    ctx->pc = 0x30E9E8u;
    {
        const bool branch_taken_0x30e9e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30e9e8) {
            ctx->pc = 0x30EBD0u;
            goto label_30ebd0;
        }
    }
    ctx->pc = 0x30E9F0u;
    // 0x30e9f0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x30e9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x30e9f4: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x30e9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x30e9f8: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x30e9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x30e9fc: 0x10600074  beqz        $v1, . + 4 + (0x74 << 2)
    ctx->pc = 0x30E9FCu;
    {
        const bool branch_taken_0x30e9fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30EA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E9FCu;
        // 0x30ea00: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e9fc) {
            ctx->pc = 0x30EBD0u;
            goto label_30ebd0;
        }
    }
    ctx->pc = 0x30EA04u;
    // 0x30ea04: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x30EA04u;
    {
        const bool branch_taken_0x30ea04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ea04) {
            ctx->pc = 0x30EBB8u;
            goto label_30ebb8;
        }
    }
    ctx->pc = 0x30EA0Cu;
    // 0x30ea0c: 0x0  nop
    ctx->pc = 0x30ea0cu;
    // NOP
label_30ea10:
    // 0x30ea10: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x30ea10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x30ea14: 0x162180  sll         $a0, $s6, 6
    ctx->pc = 0x30ea14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 22), 6));
    // 0x30ea18: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x30ea18u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ea1c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30ea1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30ea20: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x30EA20u;
    {
        const bool branch_taken_0x30ea20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30EA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EA20u;
        // 0x30ea24: 0x24710010  addiu       $s1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ea20) {
            ctx->pc = 0x30EBA8u;
            goto label_30eba8;
        }
    }
    ctx->pc = 0x30EA28u;
label_30ea28:
    // 0x30ea28: 0x8ea40600  lw          $a0, 0x600($s5)
    ctx->pc = 0x30ea28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1536)));
    // 0x30ea2c: 0x172980  sll         $a1, $s7, 6
    ctx->pc = 0x30ea2cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 23), 6));
    // 0x30ea30: 0x92830000  lbu         $v1, 0x0($s4)
    ctx->pc = 0x30ea30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x30ea34: 0x858021  addu        $s0, $a0, $a1
    ctx->pc = 0x30ea34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x30ea38: 0x92040022  lbu         $a0, 0x22($s0)
    ctx->pc = 0x30ea38u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
    // 0x30ea3c: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x30ea3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x30ea40: 0x31efe  dsrl32      $v1, $v1, 27
    ctx->pc = 0x30ea40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 27));
    // 0x30ea44: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x30ea44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x30ea48: 0x10600055  beqz        $v1, . + 4 + (0x55 << 2)
    ctx->pc = 0x30EA48u;
    {
        const bool branch_taken_0x30ea48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ea48) {
            ctx->pc = 0x30EBA0u;
            goto label_30eba0;
        }
    }
    ctx->pc = 0x30EA50u;
    // 0x30ea50: 0x96040020  lhu         $a0, 0x20($s0)
    ctx->pc = 0x30ea50u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x30ea54: 0x96230030  lhu         $v1, 0x30($s1)
    ctx->pc = 0x30ea54u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x30ea58: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x30ea58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x30ea5c: 0x14600050  bnez        $v1, . + 4 + (0x50 << 2)
    ctx->pc = 0x30EA5Cu;
    {
        const bool branch_taken_0x30ea5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30ea5c) {
            ctx->pc = 0x30EBA0u;
            goto label_30eba0;
        }
    }
    ctx->pc = 0x30EA64u;
    // 0x30ea64: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x30ea64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30ea68: 0xc6030024  lwc1        $f3, 0x24($s0)
    ctx->pc = 0x30ea68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30ea6c: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x30ea6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30ea70: 0x46031040  add.s       $f1, $f2, $f3
    ctx->pc = 0x30ea70u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x30ea74: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x30ea74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30ea78: 0x45010049  bc1t        . + 4 + (0x49 << 2)
    ctx->pc = 0x30EA78u;
    {
        const bool branch_taken_0x30ea78 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30ea78) {
            ctx->pc = 0x30EBA0u;
            goto label_30eba0;
        }
    }
    ctx->pc = 0x30EA80u;
    // 0x30ea80: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x30ea80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30ea84: 0x46031041  sub.s       $f1, $f2, $f3
    ctx->pc = 0x30ea84u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x30ea88: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x30ea88u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30ea8c: 0x45000044  bc1f        . + 4 + (0x44 << 2)
    ctx->pc = 0x30EA8Cu;
    {
        const bool branch_taken_0x30ea8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30ea8c) {
            ctx->pc = 0x30EBA0u;
            goto label_30eba0;
        }
    }
    ctx->pc = 0x30EA94u;
    // 0x30ea94: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x30ea94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30ea98: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x30ea98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30ea9c: 0x46031040  add.s       $f1, $f2, $f3
    ctx->pc = 0x30ea9cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x30eaa0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x30eaa0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30eaa4: 0x4501003e  bc1t        . + 4 + (0x3E << 2)
    ctx->pc = 0x30EAA4u;
    {
        const bool branch_taken_0x30eaa4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30eaa4) {
            ctx->pc = 0x30EBA0u;
            goto label_30eba0;
        }
    }
    ctx->pc = 0x30EAACu;
    // 0x30eaac: 0xc6200028  lwc1        $f0, 0x28($s1)
    ctx->pc = 0x30eaacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30eab0: 0x46031041  sub.s       $f1, $f2, $f3
    ctx->pc = 0x30eab0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x30eab4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x30eab4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30eab8: 0x45000039  bc1f        . + 4 + (0x39 << 2)
    ctx->pc = 0x30EAB8u;
    {
        const bool branch_taken_0x30eab8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30eab8) {
            ctx->pc = 0x30EBA0u;
            goto label_30eba0;
        }
    }
    ctx->pc = 0x30EAC0u;
    // 0x30eac0: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x30eac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30eac4: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x30eac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30eac8: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x30eac8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x30eacc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x30eaccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30ead0: 0x45010033  bc1t        . + 4 + (0x33 << 2)
    ctx->pc = 0x30EAD0u;
    {
        const bool branch_taken_0x30ead0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x30EAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EAD0u;
        // 0x30ead4: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ead0) {
            ctx->pc = 0x30EBA0u;
            goto label_30eba0;
        }
    }
    ctx->pc = 0x30EAD8u;
    // 0x30ead8: 0x26850020  addiu       $a1, $s4, 0x20
    ctx->pc = 0x30ead8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x30eadc: 0xc0414d0  jal         func_105340
    ctx->pc = 0x30EADCu;
    SET_GPR_U32(ctx, 31, 0x30EAE4u);
    ctx->pc = 0x30EAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EADCu;
    // 0x30eae0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x30EADCu, 0x30EAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EAE4u;
label_30eae4:
    // 0x30eae4: 0xc04d7b4  jal         func_135ED0
    ctx->pc = 0x30EAE4u;
    SET_GPR_U32(ctx, 31, 0x30EAECu);
    ctx->pc = 0x30EAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EAE4u;
    // 0x30eae8: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x30EAE4u, 0x30EAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EAECu;
label_30eaec:
    // 0x30eaec: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x30eaecu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x30eaf0: 0xc6800018  lwc1        $f0, 0x18($s4)
    ctx->pc = 0x30eaf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30eaf4: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x30eaf4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30eaf8: 0x45000029  bc1f        . + 4 + (0x29 << 2)
    ctx->pc = 0x30EAF8u;
    {
        const bool branch_taken_0x30eaf8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30EAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EAF8u;
        // 0x30eafc: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30eaf8) {
            ctx->pc = 0x30EBA0u;
            goto label_30eba0;
        }
    }
    ctx->pc = 0x30EB00u;
    // 0x30eb00: 0xc041472  jal         func_1051C8
    ctx->pc = 0x30EB00u;
    SET_GPR_U32(ctx, 31, 0x30EB08u);
    ctx->pc = 0x30EB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EB00u;
    // 0x30eb04: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x30EB00u, 0x30EB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EB08u;
label_30eb08:
    // 0x30eb08: 0xc6810014  lwc1        $f1, 0x14($s4)
    ctx->pc = 0x30eb08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30eb0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x30eb0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30eb10: 0x0  nop
    ctx->pc = 0x30eb10u;
    // NOP
    // 0x30eb14: 0x4601a501  sub.s       $f20, $f20, $f1
    ctx->pc = 0x30eb14u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
    // 0x30eb18: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x30eb18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30eb1c: 0x0  nop
    ctx->pc = 0x30eb1cu;
    // NOP
    // 0x30eb20: 0x96030020  lhu         $v1, 0x20($s0)
    ctx->pc = 0x30eb20u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x30eb24: 0x96220032  lhu         $v0, 0x32($s1)
    ctx->pc = 0x30eb24u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 50)));
    // 0x30eb28: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x30eb28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x30eb2c: 0x2484bb10  addiu       $a0, $a0, -0x44F0
    ctx->pc = 0x30eb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949648));
    // 0x30eb30: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x30eb30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30eb34: 0xa6020020  sh          $v0, 0x20($s0)
    ctx->pc = 0x30eb34u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 2));
    // 0x30eb38: 0x8e060028  lw          $a2, 0x28($s0)
    ctx->pc = 0x30eb38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x30eb3c: 0x8e07002c  lw          $a3, 0x2C($s0)
    ctx->pc = 0x30eb3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x30eb40: 0xc0c6534  jal         func_3194D0
    ctx->pc = 0x30EB40u;
    SET_GPR_U32(ctx, 31, 0x30EB48u);
    ctx->pc = 0x30EB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EB40u;
    // 0x30eb44: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3194D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3194D0u, 0x30EB40u, 0x30EB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EB48u;
label_30eb48:
    // 0x30eb48: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x30EB48u;
    {
        const bool branch_taken_0x30eb48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30EB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EB48u;
        // 0x30eb4c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30eb48) {
            ctx->pc = 0x30EBA0u;
            goto label_30eba0;
        }
    }
    ctx->pc = 0x30EB50u;
    // 0x30eb50: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x30eb50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x30eb54: 0x78670000  lq          $a3, 0x0($v1)
    ctx->pc = 0x30eb54u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30eb58: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x30eb58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30eb5c: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x30eb5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x30eb60: 0x122600  sll         $a0, $s2, 24
    ctx->pc = 0x30eb60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 24));
    // 0x30eb64: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x30eb64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x30eb68: 0x161c00  sll         $v1, $s6, 16
    ctx->pc = 0x30eb68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 16));
    // 0x30eb6c: 0x7cc70000  sq          $a3, 0x0($a2)
    ctx->pc = 0x30eb6cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 7));
    // 0x30eb70: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x30eb70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x30eb74: 0x7a240000  lq          $a0, 0x0($s1)
    ctx->pc = 0x30eb74u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30eb78: 0x2e31825  or          $v1, $s7, $v1
    ctx->pc = 0x30eb78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) | GPR_U64(ctx, 3));
    // 0x30eb7c: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x30eb7cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x30eb80: 0x92640001  lbu         $a0, 0x1($s3)
    ctx->pc = 0x30eb80u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x30eb84: 0xa0440033  sb          $a0, 0x33($v0)
    ctx->pc = 0x30eb84u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 51), (uint8_t)GPR_U32(ctx, 4));
    // 0x30eb88: 0x92240036  lbu         $a0, 0x36($s1)
    ctx->pc = 0x30eb88u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 54)));
    // 0x30eb8c: 0xa0440032  sb          $a0, 0x32($v0)
    ctx->pc = 0x30eb8cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 50), (uint8_t)GPR_U32(ctx, 4));
    // 0x30eb90: 0x96240034  lhu         $a0, 0x34($s1)
    ctx->pc = 0x30eb90u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x30eb94: 0xa4440030  sh          $a0, 0x30($v0)
    ctx->pc = 0x30eb94u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 48), (uint16_t)GPR_U32(ctx, 4));
    // 0x30eb98: 0xac430034  sw          $v1, 0x34($v0)
    ctx->pc = 0x30eb98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 3));
    // 0x30eb9c: 0x0  nop
    ctx->pc = 0x30eb9cu;
    // NOP
label_30eba0:
    // 0x30eba0: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x30eba0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x30eba4: 0x0  nop
    ctx->pc = 0x30eba4u;
    // NOP
label_30eba8:
    // 0x30eba8: 0x2fe182b  sltu        $v1, $s7, $fp
    ctx->pc = 0x30eba8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x30ebac: 0x1460ff9e  bnez        $v1, . + 4 + (-0x62 << 2)
    ctx->pc = 0x30EBACu;
    {
        const bool branch_taken_0x30ebac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30ebac) {
            ctx->pc = 0x30EA28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30ea28;
        }
    }
    ctx->pc = 0x30EBB4u;
    // 0x30ebb4: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x30ebb4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_30ebb8:
    // 0x30ebb8: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x30ebb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x30ebbc: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x30ebbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x30ebc0: 0x2c3182b  sltu        $v1, $s6, $v1
    ctx->pc = 0x30ebc0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x30ebc4: 0x1460ff92  bnez        $v1, . + 4 + (-0x6E << 2)
    ctx->pc = 0x30EBC4u;
    {
        const bool branch_taken_0x30ebc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30ebc4) {
            ctx->pc = 0x30EA10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30ea10;
        }
    }
    ctx->pc = 0x30EBCCu;
    // 0x30ebcc: 0x0  nop
    ctx->pc = 0x30ebccu;
    // NOP
label_30ebd0:
    // 0x30ebd0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x30ebd0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x30ebd4: 0x0  nop
    ctx->pc = 0x30ebd4u;
    // NOP
label_30ebd8:
    // 0x30ebd8: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x30ebd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x30ebdc: 0x902395a1  lbu         $v1, -0x6A5F($at)
    ctx->pc = 0x30ebdcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8095A1u));
    // 0x30ebe0: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x30ebe0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x30ebe4: 0x1460ff78  bnez        $v1, . + 4 + (-0x88 << 2)
    ctx->pc = 0x30EBE4u;
    {
        const bool branch_taken_0x30ebe4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30ebe4) {
            ctx->pc = 0x30E9C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30e9c8;
        }
    }
    ctx->pc = 0x30EBECu;
    // 0x30ebec: 0x100000bc  b           . + 4 + (0xBC << 2)
    ctx->pc = 0x30EBECu;
    {
        const bool branch_taken_0x30ebec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ebec) {
            ctx->pc = 0x30EEE0u;
            goto label_30eee0;
        }
    }
    ctx->pc = 0x30EBF4u;
    // 0x30ebf4: 0x0  nop
    ctx->pc = 0x30ebf4u;
    // NOP
label_30ebf8:
    // 0x30ebf8: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x30EBF8u;
    {
        const bool branch_taken_0x30ebf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30EBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EBF8u;
        // 0x30ebfc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ebf8) {
            ctx->pc = 0x30ED58u;
            goto label_30ed58;
        }
    }
    ctx->pc = 0x30EC00u;
label_30ec00:
    // 0x30ec00: 0x8ea40600  lw          $a0, 0x600($s5)
    ctx->pc = 0x30ec00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1536)));
    // 0x30ec04: 0x112980  sll         $a1, $s1, 6
    ctx->pc = 0x30ec04u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x30ec08: 0x92830000  lbu         $v1, 0x0($s4)
    ctx->pc = 0x30ec08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x30ec0c: 0x858021  addu        $s0, $a0, $a1
    ctx->pc = 0x30ec0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x30ec10: 0x92040022  lbu         $a0, 0x22($s0)
    ctx->pc = 0x30ec10u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
    // 0x30ec14: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x30ec14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x30ec18: 0x31efe  dsrl32      $v1, $v1, 27
    ctx->pc = 0x30ec18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 27));
    // 0x30ec1c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x30ec1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x30ec20: 0x1060004b  beqz        $v1, . + 4 + (0x4B << 2)
    ctx->pc = 0x30EC20u;
    {
        const bool branch_taken_0x30ec20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30EC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EC20u;
        // 0x30ec24: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ec20) {
            ctx->pc = 0x30ED50u;
            goto label_30ed50;
        }
    }
    ctx->pc = 0x30EC28u;
    // 0x30ec28: 0x26850020  addiu       $a1, $s4, 0x20
    ctx->pc = 0x30ec28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x30ec2c: 0xc0414d0  jal         func_105340
    ctx->pc = 0x30EC2Cu;
    SET_GPR_U32(ctx, 31, 0x30EC34u);
    ctx->pc = 0x30EC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EC2Cu;
    // 0x30ec30: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x30EC2Cu, 0x30EC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EC34u;
label_30ec34:
    // 0x30ec34: 0xc04d7b4  jal         func_135ED0
    ctx->pc = 0x30EC34u;
    SET_GPR_U32(ctx, 31, 0x30EC3Cu);
    ctx->pc = 0x30EC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EC34u;
    // 0x30ec38: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x30EC34u, 0x30EC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EC3Cu;
label_30ec3c:
    // 0x30ec3c: 0xc6810018  lwc1        $f1, 0x18($s4)
    ctx->pc = 0x30ec3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30ec40: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x30ec40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x30ec44: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x30ec44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x30ec48: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x30ec48u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30ec4c: 0x45000040  bc1f        . + 4 + (0x40 << 2)
    ctx->pc = 0x30EC4Cu;
    {
        const bool branch_taken_0x30ec4c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30ec4c) {
            ctx->pc = 0x30ED50u;
            goto label_30ed50;
        }
    }
    ctx->pc = 0x30EC54u;
    // 0x30ec54: 0xc6820014  lwc1        $f2, 0x14($s4)
    ctx->pc = 0x30ec54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30ec58: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x30ec58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30ec5c: 0x0  nop
    ctx->pc = 0x30ec5cu;
    // NOP
    // 0x30ec60: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x30ec60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x30ec64: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x30ec64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30ec68: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x30EC68u;
    {
        const bool branch_taken_0x30ec68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30ec68) {
            ctx->pc = 0x30EC80u;
            goto label_30ec80;
        }
    }
    ctx->pc = 0x30EC70u;
    // 0x30ec70: 0xc6810010  lwc1        $f1, 0x10($s4)
    ctx->pc = 0x30ec70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30ec74: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x30ec74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x30ec78: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x30ec78u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x30ec7c: 0x0  nop
    ctx->pc = 0x30ec7cu;
    // NOP
label_30ec80:
    // 0x30ec80: 0x92620001  lbu         $v0, 0x1($s3)
    ctx->pc = 0x30ec80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x30ec84: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30EC84u;
    {
        const bool branch_taken_0x30ec84 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x30EC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EC84u;
        // 0x30ec88: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ec84) {
            ctx->pc = 0x30EC98u;
            goto label_30ec98;
        }
    }
    ctx->pc = 0x30EC8Cu;
    // 0x30ec8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30ec8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30ec90: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30EC90u;
    {
        const bool branch_taken_0x30ec90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30EC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EC90u;
        // 0x30ec94: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ec90) {
            ctx->pc = 0x30ECB0u;
            goto label_30ecb0;
        }
    }
    ctx->pc = 0x30EC98u;
label_30ec98:
    // 0x30ec98: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x30ec98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x30ec9c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x30ec9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30eca0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30eca0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30eca4: 0x0  nop
    ctx->pc = 0x30eca4u;
    // NOP
    // 0x30eca8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x30eca8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x30ecac: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x30ecacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_30ecb0:
    // 0x30ecb0: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x30ecb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30ecb4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x30ecb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x30ecb8: 0x46030082  mul.s       $f2, $f0, $f3
    ctx->pc = 0x30ecb8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x30ecbc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x30ecbcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x30ecc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30ecc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30ecc4: 0x0  nop
    ctx->pc = 0x30ecc4u;
    // NOP
    // 0x30ecc8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x30ecc8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30eccc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x30ECCCu;
    {
        const bool branch_taken_0x30eccc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30eccc) {
            ctx->pc = 0x30ECE4u;
            goto label_30ece4;
        }
    }
    ctx->pc = 0x30ECD4u;
    // 0x30ecd4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30ecd4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x30ecd8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x30ecd8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x30ecdc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x30ECDCu;
    {
        const bool branch_taken_0x30ecdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30ECE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30ECDCu;
        // 0x30ece0: 0x8e060028  lw          $a2, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ecdc) {
            ctx->pc = 0x30ED00u;
            goto label_30ed00;
        }
    }
    ctx->pc = 0x30ECE4u;
label_30ece4:
    // 0x30ece4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x30ece4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x30ece8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x30ece8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x30ecec: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30ececu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x30ecf0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x30ecf0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x30ecf4: 0x0  nop
    ctx->pc = 0x30ecf4u;
    // NOP
    // 0x30ecf8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x30ecf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30ecfc: 0x8e060028  lw          $a2, 0x28($s0)
    ctx->pc = 0x30ecfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_30ed00:
    // 0x30ed00: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x30ed00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x30ed04: 0x8e07002c  lw          $a3, 0x2C($s0)
    ctx->pc = 0x30ed04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x30ed08: 0x307200ff  andi        $s2, $v1, 0xFF
    ctx->pc = 0x30ed08u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x30ed0c: 0x2484bb10  addiu       $a0, $a0, -0x44F0
    ctx->pc = 0x30ed0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949648));
    // 0x30ed10: 0xc0c6534  jal         func_3194D0
    ctx->pc = 0x30ED10u;
    SET_GPR_U32(ctx, 31, 0x30ED18u);
    ctx->pc = 0x30ED14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30ED10u;
    // 0x30ed14: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3194D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3194D0u, 0x30ED10u, 0x30ED18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30ED18u;
label_30ed18:
    // 0x30ed18: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x30ED18u;
    {
        const bool branch_taken_0x30ed18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30ED1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30ED18u;
        // 0x30ed1c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ed18) {
            ctx->pc = 0x30ED50u;
            goto label_30ed50;
        }
    }
    ctx->pc = 0x30ED20u;
    // 0x30ed20: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x30ed20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x30ed24: 0x26830020  addiu       $v1, $s4, 0x20
    ctx->pc = 0x30ed24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x30ed28: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x30ed28u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30ed2c: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x30ed2cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x30ed30: 0xa0400013  sb          $zero, 0x13($v0)
    ctx->pc = 0x30ed30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 19), (uint8_t)GPR_U32(ctx, 0));
    // 0x30ed34: 0xa0520012  sb          $s2, 0x12($v0)
    ctx->pc = 0x30ed34u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 18), (uint8_t)GPR_U32(ctx, 18));
    // 0x30ed38: 0x92630002  lbu         $v1, 0x2($s3)
    ctx->pc = 0x30ed38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x30ed3c: 0xa0430011  sb          $v1, 0x11($v0)
    ctx->pc = 0x30ed3cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 17), (uint8_t)GPR_U32(ctx, 3));
    // 0x30ed40: 0x92630003  lbu         $v1, 0x3($s3)
    ctx->pc = 0x30ed40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
    // 0x30ed44: 0xa0430010  sb          $v1, 0x10($v0)
    ctx->pc = 0x30ed44u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x30ed48: 0xc680001c  lwc1        $f0, 0x1C($s4)
    ctx->pc = 0x30ed48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30ed4c: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x30ed4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
label_30ed50:
    // 0x30ed50: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x30ed50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x30ed54: 0x0  nop
    ctx->pc = 0x30ed54u;
    // NOP
label_30ed58:
    // 0x30ed58: 0x23e182b  sltu        $v1, $s1, $fp
    ctx->pc = 0x30ed58u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x30ed5c: 0x1460ffa8  bnez        $v1, . + 4 + (-0x58 << 2)
    ctx->pc = 0x30ED5Cu;
    {
        const bool branch_taken_0x30ed5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30ed5c) {
            ctx->pc = 0x30EC00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30ec00;
        }
    }
    ctx->pc = 0x30ED64u;
    // 0x30ed64: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x30ED64u;
    {
        const bool branch_taken_0x30ed64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ed64) {
            ctx->pc = 0x30EEE0u;
            goto label_30eee0;
        }
    }
    ctx->pc = 0x30ED6Cu;
    // 0x30ed6c: 0x0  nop
    ctx->pc = 0x30ed6cu;
    // NOP
label_30ed70:
    // 0x30ed70: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x30ED70u;
    {
        const bool branch_taken_0x30ed70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30ED74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30ED70u;
        // 0x30ed74: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ed70) {
            ctx->pc = 0x30EED0u;
            goto label_30eed0;
        }
    }
    ctx->pc = 0x30ED78u;
label_30ed78:
    // 0x30ed78: 0x8ea40600  lw          $a0, 0x600($s5)
    ctx->pc = 0x30ed78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1536)));
    // 0x30ed7c: 0x112980  sll         $a1, $s1, 6
    ctx->pc = 0x30ed7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x30ed80: 0x92830000  lbu         $v1, 0x0($s4)
    ctx->pc = 0x30ed80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x30ed84: 0x858021  addu        $s0, $a0, $a1
    ctx->pc = 0x30ed84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x30ed88: 0x92040022  lbu         $a0, 0x22($s0)
    ctx->pc = 0x30ed88u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
    // 0x30ed8c: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x30ed8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x30ed90: 0x31efe  dsrl32      $v1, $v1, 27
    ctx->pc = 0x30ed90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 27));
    // 0x30ed94: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x30ed94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x30ed98: 0x1060004b  beqz        $v1, . + 4 + (0x4B << 2)
    ctx->pc = 0x30ED98u;
    {
        const bool branch_taken_0x30ed98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30ED9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30ED98u;
        // 0x30ed9c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ed98) {
            ctx->pc = 0x30EEC8u;
            goto label_30eec8;
        }
    }
    ctx->pc = 0x30EDA0u;
    // 0x30eda0: 0x26850020  addiu       $a1, $s4, 0x20
    ctx->pc = 0x30eda0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x30eda4: 0xc0414d0  jal         func_105340
    ctx->pc = 0x30EDA4u;
    SET_GPR_U32(ctx, 31, 0x30EDACu);
    ctx->pc = 0x30EDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EDA4u;
    // 0x30eda8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x30EDA4u, 0x30EDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EDACu;
label_30edac:
    // 0x30edac: 0xc04d7b4  jal         func_135ED0
    ctx->pc = 0x30EDACu;
    SET_GPR_U32(ctx, 31, 0x30EDB4u);
    ctx->pc = 0x30EDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EDACu;
    // 0x30edb0: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x30EDACu, 0x30EDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EDB4u;
label_30edb4:
    // 0x30edb4: 0xc6810018  lwc1        $f1, 0x18($s4)
    ctx->pc = 0x30edb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30edb8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x30edb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x30edbc: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x30edbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x30edc0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x30edc0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30edc4: 0x45000040  bc1f        . + 4 + (0x40 << 2)
    ctx->pc = 0x30EDC4u;
    {
        const bool branch_taken_0x30edc4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30edc4) {
            ctx->pc = 0x30EEC8u;
            goto label_30eec8;
        }
    }
    ctx->pc = 0x30EDCCu;
    // 0x30edcc: 0xc6820014  lwc1        $f2, 0x14($s4)
    ctx->pc = 0x30edccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30edd0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x30edd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30edd4: 0x0  nop
    ctx->pc = 0x30edd4u;
    // NOP
    // 0x30edd8: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x30edd8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x30eddc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x30eddcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30ede0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x30EDE0u;
    {
        const bool branch_taken_0x30ede0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30ede0) {
            ctx->pc = 0x30EDF8u;
            goto label_30edf8;
        }
    }
    ctx->pc = 0x30EDE8u;
    // 0x30ede8: 0xc6810010  lwc1        $f1, 0x10($s4)
    ctx->pc = 0x30ede8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30edec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x30edecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x30edf0: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x30edf0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x30edf4: 0x0  nop
    ctx->pc = 0x30edf4u;
    // NOP
label_30edf8:
    // 0x30edf8: 0x92620001  lbu         $v0, 0x1($s3)
    ctx->pc = 0x30edf8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x30edfc: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30EDFCu;
    {
        const bool branch_taken_0x30edfc = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x30EE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EDFCu;
        // 0x30ee00: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30edfc) {
            ctx->pc = 0x30EE10u;
            goto label_30ee10;
        }
    }
    ctx->pc = 0x30EE04u;
    // 0x30ee04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30ee04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30ee08: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30EE08u;
    {
        const bool branch_taken_0x30ee08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30EE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EE08u;
        // 0x30ee0c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ee08) {
            ctx->pc = 0x30EE28u;
            goto label_30ee28;
        }
    }
    ctx->pc = 0x30EE10u;
label_30ee10:
    // 0x30ee10: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x30ee10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x30ee14: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x30ee14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30ee18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30ee18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30ee1c: 0x0  nop
    ctx->pc = 0x30ee1cu;
    // NOP
    // 0x30ee20: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x30ee20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x30ee24: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x30ee24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_30ee28:
    // 0x30ee28: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x30ee28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30ee2c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x30ee2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x30ee30: 0x46030082  mul.s       $f2, $f0, $f3
    ctx->pc = 0x30ee30u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x30ee34: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x30ee34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x30ee38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30ee38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30ee3c: 0x0  nop
    ctx->pc = 0x30ee3cu;
    // NOP
    // 0x30ee40: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x30ee40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30ee44: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x30EE44u;
    {
        const bool branch_taken_0x30ee44 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30ee44) {
            ctx->pc = 0x30EE5Cu;
            goto label_30ee5c;
        }
    }
    ctx->pc = 0x30EE4Cu;
    // 0x30ee4c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30ee4cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x30ee50: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x30ee50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x30ee54: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x30EE54u;
    {
        const bool branch_taken_0x30ee54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30EE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EE54u;
        // 0x30ee58: 0x8e060028  lw          $a2, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ee54) {
            ctx->pc = 0x30EE78u;
            goto label_30ee78;
        }
    }
    ctx->pc = 0x30EE5Cu;
label_30ee5c:
    // 0x30ee5c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x30ee5cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x30ee60: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x30ee60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x30ee64: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30ee64u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x30ee68: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x30ee68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x30ee6c: 0x0  nop
    ctx->pc = 0x30ee6cu;
    // NOP
    // 0x30ee70: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x30ee70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30ee74: 0x8e060028  lw          $a2, 0x28($s0)
    ctx->pc = 0x30ee74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_30ee78:
    // 0x30ee78: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x30ee78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x30ee7c: 0x8e07002c  lw          $a3, 0x2C($s0)
    ctx->pc = 0x30ee7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x30ee80: 0x307200ff  andi        $s2, $v1, 0xFF
    ctx->pc = 0x30ee80u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x30ee84: 0x2484bb10  addiu       $a0, $a0, -0x44F0
    ctx->pc = 0x30ee84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949648));
    // 0x30ee88: 0xc0c6534  jal         func_3194D0
    ctx->pc = 0x30EE88u;
    SET_GPR_U32(ctx, 31, 0x30EE90u);
    ctx->pc = 0x30EE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EE88u;
    // 0x30ee8c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3194D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3194D0u, 0x30EE88u, 0x30EE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EE90u;
label_30ee90:
    // 0x30ee90: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x30EE90u;
    {
        const bool branch_taken_0x30ee90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30EE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EE90u;
        // 0x30ee94: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ee90) {
            ctx->pc = 0x30EEC8u;
            goto label_30eec8;
        }
    }
    ctx->pc = 0x30EE98u;
    // 0x30ee98: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x30ee98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x30ee9c: 0x26830020  addiu       $v1, $s4, 0x20
    ctx->pc = 0x30ee9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x30eea0: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x30eea0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30eea4: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x30eea4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x30eea8: 0xa0400013  sb          $zero, 0x13($v0)
    ctx->pc = 0x30eea8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 19), (uint8_t)GPR_U32(ctx, 0));
    // 0x30eeac: 0xa0520012  sb          $s2, 0x12($v0)
    ctx->pc = 0x30eeacu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 18), (uint8_t)GPR_U32(ctx, 18));
    // 0x30eeb0: 0x92630002  lbu         $v1, 0x2($s3)
    ctx->pc = 0x30eeb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x30eeb4: 0xa0430011  sb          $v1, 0x11($v0)
    ctx->pc = 0x30eeb4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 17), (uint8_t)GPR_U32(ctx, 3));
    // 0x30eeb8: 0x92630003  lbu         $v1, 0x3($s3)
    ctx->pc = 0x30eeb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
    // 0x30eebc: 0xa0430010  sb          $v1, 0x10($v0)
    ctx->pc = 0x30eebcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x30eec0: 0xc680001c  lwc1        $f0, 0x1C($s4)
    ctx->pc = 0x30eec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30eec4: 0xe680001c  swc1        $f0, 0x1C($s4)
    ctx->pc = 0x30eec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 28), bits); }
label_30eec8:
    // 0x30eec8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x30eec8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x30eecc: 0x0  nop
    ctx->pc = 0x30eeccu;
    // NOP
label_30eed0:
    // 0x30eed0: 0x23e182b  sltu        $v1, $s1, $fp
    ctx->pc = 0x30eed0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x30eed4: 0x1460ffa8  bnez        $v1, . + 4 + (-0x58 << 2)
    ctx->pc = 0x30EED4u;
    {
        const bool branch_taken_0x30eed4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30eed4) {
            ctx->pc = 0x30ED78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30ed78;
        }
    }
    ctx->pc = 0x30EEDCu;
    // 0x30eedc: 0x0  nop
    ctx->pc = 0x30eedcu;
    // NOP
label_30eee0:
    // 0x30eee0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x30eee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x30eee4: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x30eee4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x30eee8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x30eee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x30eeec: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x30eeecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x30eef0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x30eef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x30eef4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x30eef4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x30eef8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x30eef8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x30eefc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x30eefcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30ef00: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x30ef00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30ef04: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x30ef04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30ef08: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x30ef08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30ef0c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x30ef0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30ef10: 0x3e00008  jr          $ra
    ctx->pc = 0x30EF10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30EF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EF10u;
        // 0x30ef14: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30EF10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30EF18u;
}
