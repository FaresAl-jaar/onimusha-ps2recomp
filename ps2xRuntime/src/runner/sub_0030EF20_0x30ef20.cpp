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

// Function: sub_0030EF20
// Address: 0x30ef20 - 0x30f90c
void sub_0030EF20_0x30ef20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030EF20_0x30ef20");
#endif

    switch (ctx->pc) {
        case 0x30ef98u: goto label_30ef98;
        case 0x30f014u: goto label_30f014;
        case 0x30f01cu: goto label_30f01c;
        case 0x30f038u: goto label_30f038;
        case 0x30f044u: goto label_30f044;
        case 0x30f214u: goto label_30f214;
        case 0x30f298u: goto label_30f298;
        case 0x30f2c8u: goto label_30f2c8;
        case 0x30f310u: goto label_30f310;
        case 0x30f328u: goto label_30f328;
        case 0x30f3e8u: goto label_30f3e8;
        case 0x30f3f0u: goto label_30f3f0;
        case 0x30f40cu: goto label_30f40c;
        case 0x30f418u: goto label_30f418;
        case 0x30f480u: goto label_30f480;
        case 0x30f538u: goto label_30f538;
        case 0x30f56cu: goto label_30f56c;
        case 0x30f574u: goto label_30f574;
        case 0x30f590u: goto label_30f590;
        case 0x30f59cu: goto label_30f59c;
        case 0x30f6b0u: goto label_30f6b0;
        case 0x30f710u: goto label_30f710;
        case 0x30f744u: goto label_30f744;
        case 0x30f74cu: goto label_30f74c;
        case 0x30f768u: goto label_30f768;
        case 0x30f774u: goto label_30f774;
        case 0x30f888u: goto label_30f888;
        default: break;
    }

    ctx->pc = 0x30ef20u;

    // 0x30ef20: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x30ef20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x30ef24: 0x3c01008e  lui         $at, 0x8E
    ctx->pc = 0x30ef24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)142 << 16));
    // 0x30ef28: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x30ef28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x30ef2c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x30ef2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x30ef30: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x30ef30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x30ef34: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x30ef34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x30ef38: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x30ef38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x30ef3c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x30ef3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x30ef40: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x30ef40u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ef44: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x30ef44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x30ef48: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x30ef48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x30ef4c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x30ef4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x30ef50: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x30ef50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x30ef54: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x30ef54u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x30ef58: 0x8c23fd84  lw          $v1, -0x27C($at)
    ctx->pc = 0x30ef58u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8DFD84u));
    // 0x30ef5c: 0x90a40003  lbu         $a0, 0x3($a1)
    ctx->pc = 0x30ef5cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x30ef60: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x30EF60u;
    {
        const bool branch_taken_0x30ef60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30EF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EF60u;
        // 0x30ef64: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ef60) {
            ctx->pc = 0x30EF80u;
            goto label_30ef80;
        }
    }
    ctx->pc = 0x30EF68u;
    // 0x30ef68: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x30ef68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x30ef6c: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x30ef6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x30ef70: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x30ef70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x30ef74: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30ef74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30ef78: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x30EF78u;
    {
        const bool branch_taken_0x30ef78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30EF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EF78u;
        // 0x30ef7c: 0x24730004  addiu       $s3, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ef78) {
            ctx->pc = 0x30EF88u;
            goto label_30ef88;
        }
    }
    ctx->pc = 0x30EF80u;
label_30ef80:
    // 0x30ef80: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x30ef80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ef84: 0x0  nop
    ctx->pc = 0x30ef84u;
    // NOP
label_30ef88:
    // 0x30ef88: 0x8ebe0604  lw          $fp, 0x604($s5)
    ctx->pc = 0x30ef88u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1540)));
    // 0x30ef8c: 0x100000b2  b           . + 4 + (0xB2 << 2)
    ctx->pc = 0x30EF8Cu;
    {
        const bool branch_taken_0x30ef8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30EF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EF8Cu;
        // 0x30ef90: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ef8c) {
            ctx->pc = 0x30F258u;
            goto label_30f258;
        }
    }
    ctx->pc = 0x30EF94u;
    // 0x30ef94: 0x0  nop
    ctx->pc = 0x30ef94u;
    // NOP
label_30ef98:
    // 0x30ef98: 0x121840  sll         $v1, $s2, 1
    ctx->pc = 0x30ef98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x30ef9c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x30ef9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x30efa0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x30efa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30efa4: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x30efa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x30efa8: 0x90630008  lbu         $v1, 0x8($v1)
    ctx->pc = 0x30efa8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x30efac: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x30EFACu;
    {
        const bool branch_taken_0x30efac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30efac) {
            ctx->pc = 0x30EFC8u;
            goto label_30efc8;
        }
    }
    ctx->pc = 0x30EFB4u;
    // 0x30efb4: 0x92640000  lbu         $a0, 0x0($s3)
    ctx->pc = 0x30efb4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x30efb8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30efb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30efbc: 0x148300a4  bne         $a0, $v1, . + 4 + (0xA4 << 2)
    ctx->pc = 0x30EFBCu;
    {
        const bool branch_taken_0x30efbc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x30efbc) {
            ctx->pc = 0x30F250u;
            goto label_30f250;
        }
    }
    ctx->pc = 0x30EFC4u;
    // 0x30efc4: 0x0  nop
    ctx->pc = 0x30efc4u;
    // NOP
label_30efc8:
    // 0x30efc8: 0x8ea30600  lw          $v1, 0x600($s5)
    ctx->pc = 0x30efc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1536)));
    // 0x30efcc: 0x122180  sll         $a0, $s2, 6
    ctx->pc = 0x30efccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x30efd0: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x30efd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30efd4: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x30efd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x30efd8: 0x1460009d  bnez        $v1, . + 4 + (0x9D << 2)
    ctx->pc = 0x30EFD8u;
    {
        const bool branch_taken_0x30efd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30efd8) {
            ctx->pc = 0x30F250u;
            goto label_30f250;
        }
    }
    ctx->pc = 0x30EFE0u;
    // 0x30efe0: 0x92830000  lbu         $v1, 0x0($s4)
    ctx->pc = 0x30efe0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x30efe4: 0x92240022  lbu         $a0, 0x22($s1)
    ctx->pc = 0x30efe4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 34)));
    // 0x30efe8: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x30efe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x30efec: 0x31efe  dsrl32      $v1, $v1, 27
    ctx->pc = 0x30efecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 27));
    // 0x30eff0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x30eff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x30eff4: 0x10600096  beqz        $v1, . + 4 + (0x96 << 2)
    ctx->pc = 0x30EFF4u;
    {
        const bool branch_taken_0x30eff4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30eff4) {
            ctx->pc = 0x30F250u;
            goto label_30f250;
        }
    }
    ctx->pc = 0x30EFFCu;
    // 0x30effc: 0x92230034  lbu         $v1, 0x34($s1)
    ctx->pc = 0x30effcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x30f000: 0x10600093  beqz        $v1, . + 4 + (0x93 << 2)
    ctx->pc = 0x30F000u;
    {
        const bool branch_taken_0x30f000 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F000u;
        // 0x30f004: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f000) {
            ctx->pc = 0x30F250u;
            goto label_30f250;
        }
    }
    ctx->pc = 0x30F008u;
    // 0x30f008: 0x26850020  addiu       $a1, $s4, 0x20
    ctx->pc = 0x30f008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x30f00c: 0xc0414d0  jal         func_105340
    ctx->pc = 0x30F00Cu;
    SET_GPR_U32(ctx, 31, 0x30F014u);
    ctx->pc = 0x30F010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F00Cu;
    // 0x30f010: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x30F00Cu, 0x30F014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F014u;
label_30f014:
    // 0x30f014: 0xc04d7b4  jal         func_135ED0
    ctx->pc = 0x30F014u;
    SET_GPR_U32(ctx, 31, 0x30F01Cu);
    ctx->pc = 0x30F018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F014u;
    // 0x30f018: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x30F014u, 0x30F01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F01Cu;
label_30f01c:
    // 0x30f01c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x30f01cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x30f020: 0xc6800018  lwc1        $f0, 0x18($s4)
    ctx->pc = 0x30f020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30f024: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x30f024u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30f028: 0x45000089  bc1f        . + 4 + (0x89 << 2)
    ctx->pc = 0x30F028u;
    {
        const bool branch_taken_0x30f028 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30F02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F028u;
        // 0x30f02c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f028) {
            ctx->pc = 0x30F250u;
            goto label_30f250;
        }
    }
    ctx->pc = 0x30F030u;
    // 0x30f030: 0xc041472  jal         func_1051C8
    ctx->pc = 0x30F030u;
    SET_GPR_U32(ctx, 31, 0x30F038u);
    ctx->pc = 0x30F034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F030u;
    // 0x30f034: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x30F030u, 0x30F038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F038u;
label_30f038:
    // 0x30f038: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x30f038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x30f03c: 0xc041468  jal         func_1051A0
    ctx->pc = 0x30F03Cu;
    SET_GPR_U32(ctx, 31, 0x30F044u);
    ctx->pc = 0x30F040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F03Cu;
    // 0x30f040: 0x26850030  addiu       $a1, $s4, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x30F03Cu, 0x30F044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F044u;
label_30f044:
    // 0x30f044: 0xc6810058  lwc1        $f1, 0x58($s4)
    ctx->pc = 0x30f044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30f048: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x30f048u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30f04c: 0x45010080  bc1t        . + 4 + (0x80 << 2)
    ctx->pc = 0x30F04Cu;
    {
        const bool branch_taken_0x30f04c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30f04c) {
            ctx->pc = 0x30F250u;
            goto label_30f250;
        }
    }
    ctx->pc = 0x30F054u;
    // 0x30f054: 0xc6820014  lwc1        $f2, 0x14($s4)
    ctx->pc = 0x30f054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30f058: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x30f058u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30f05c: 0x4602a501  sub.s       $f20, $f20, $f2
    ctx->pc = 0x30f05cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[2]);
    // 0x30f060: 0x4601a036  c.le.s      $f20, $f1
    ctx->pc = 0x30f060u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30f064: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x30F064u;
    {
        const bool branch_taken_0x30f064 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30F068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F064u;
        // 0x30f068: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f064) {
            ctx->pc = 0x30F078u;
            goto label_30f078;
        }
    }
    ctx->pc = 0x30F06Cu;
    // 0x30f06c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x30f06cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x30f070: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30F070u;
    {
        const bool branch_taken_0x30f070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30f070) {
            ctx->pc = 0x30F090u;
            goto label_30f090;
        }
    }
    ctx->pc = 0x30F078u;
label_30f078:
    // 0x30f078: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x30f078u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x30f07c: 0xc6820010  lwc1        $f2, 0x10($s4)
    ctx->pc = 0x30f07cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30f080: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x30f080u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30f084: 0x4602a082  mul.s       $f2, $f20, $f2
    ctx->pc = 0x30f084u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x30f088: 0x460208c1  sub.s       $f3, $f1, $f2
    ctx->pc = 0x30f088u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x30f08c: 0x0  nop
    ctx->pc = 0x30f08cu;
    // NOP
label_30f090:
    // 0x30f090: 0xc6810054  lwc1        $f1, 0x54($s4)
    ctx->pc = 0x30f090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30f094: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x30f094u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30f098: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x30F098u;
    {
        const bool branch_taken_0x30f098 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30F09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F098u;
        // 0x30f09c: 0x46010081  sub.s       $f2, $f0, $f1 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f098) {
            ctx->pc = 0x30F0C0u;
            goto label_30f0c0;
        }
    }
    ctx->pc = 0x30F0A0u;
    // 0x30f0a0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x30f0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x30f0a4: 0xc6810050  lwc1        $f1, 0x50($s4)
    ctx->pc = 0x30f0a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30f0a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30f0a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30f0ac: 0x0  nop
    ctx->pc = 0x30f0acu;
    // NOP
    // 0x30f0b0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x30f0b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x30f0b4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x30f0b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x30f0b8: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x30f0b8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x30f0bc: 0x0  nop
    ctx->pc = 0x30f0bcu;
    // NOP
label_30f0c0:
    // 0x30f0c0: 0x92630001  lbu         $v1, 0x1($s3)
    ctx->pc = 0x30f0c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x30f0c4: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x30F0C4u;
    {
        const bool branch_taken_0x30f0c4 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x30F0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F0C4u;
        // 0x30f0c8: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f0c4) {
            ctx->pc = 0x30F0D8u;
            goto label_30f0d8;
        }
    }
    ctx->pc = 0x30F0CCu;
    // 0x30f0cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30f0ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30f0d0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30F0D0u;
    {
        const bool branch_taken_0x30f0d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F0D0u;
        // 0x30f0d4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f0d0) {
            ctx->pc = 0x30F0F0u;
            goto label_30f0f0;
        }
    }
    ctx->pc = 0x30F0D8u;
label_30f0d8:
    // 0x30f0d8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x30f0d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x30f0dc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x30f0dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x30f0e0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x30f0e0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30f0e4: 0x0  nop
    ctx->pc = 0x30f0e4u;
    // NOP
    // 0x30f0e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x30f0e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x30f0ec: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x30f0ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_30f0f0:
    // 0x30f0f0: 0xc6210030  lwc1        $f1, 0x30($s1)
    ctx->pc = 0x30f0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30f0f4: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x30f0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x30f0f8: 0x46030082  mul.s       $f2, $f0, $f3
    ctx->pc = 0x30f0f8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x30f0fc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x30f0fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x30f100: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30f100u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30f104: 0x0  nop
    ctx->pc = 0x30f104u;
    // NOP
    // 0x30f108: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x30f108u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30f10c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x30F10Cu;
    {
        const bool branch_taken_0x30f10c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30f10c) {
            ctx->pc = 0x30F124u;
            goto label_30f124;
        }
    }
    ctx->pc = 0x30F114u;
    // 0x30f114: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30f114u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x30f118: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x30f118u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x30f11c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x30F11Cu;
    {
        const bool branch_taken_0x30f11c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F11Cu;
        // 0x30f120: 0x92230023  lbu         $v1, 0x23($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f11c) {
            ctx->pc = 0x30F140u;
            goto label_30f140;
        }
    }
    ctx->pc = 0x30F124u;
label_30f124:
    // 0x30f124: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x30f124u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x30f128: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x30f128u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x30f12c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30f12cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x30f130: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x30f130u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x30f134: 0x0  nop
    ctx->pc = 0x30f134u;
    // NOP
    // 0x30f138: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x30f138u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x30f13c: 0x92230023  lbu         $v1, 0x23($s1)
    ctx->pc = 0x30f13cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
label_30f140:
    // 0x30f140: 0x309000ff  andi        $s0, $a0, 0xFF
    ctx->pc = 0x30f140u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x30f144: 0x70082a  slt         $at, $v1, $s0
    ctx->pc = 0x30f144u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x30f148: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x30F148u;
    {
        const bool branch_taken_0x30f148 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x30f148) {
            ctx->pc = 0x30F158u;
            goto label_30f158;
        }
    }
    ctx->pc = 0x30F150u;
    // 0x30f150: 0xa2300023  sb          $s0, 0x23($s1)
    ctx->pc = 0x30f150u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 35), (uint8_t)GPR_U32(ctx, 16));
    // 0x30f154: 0x0  nop
    ctx->pc = 0x30f154u;
    // NOP
label_30f158:
    // 0x30f158: 0x121840  sll         $v1, $s2, 1
    ctx->pc = 0x30f158u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x30f15c: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x30f15cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x30f160: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x30f160u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x30f164: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x30f164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x30f168: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x30f168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    // 0x30f16c: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x30f16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30f170: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30f170u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30f174: 0x0  nop
    ctx->pc = 0x30f174u;
    // NOP
    // 0x30f178: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x30f178u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30f17c: 0x45010034  bc1t        . + 4 + (0x34 << 2)
    ctx->pc = 0x30F17Cu;
    {
        const bool branch_taken_0x30f17c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30f17c) {
            ctx->pc = 0x30F250u;
            goto label_30f250;
        }
    }
    ctx->pc = 0x30F184u;
    // 0x30f184: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30F184u;
    {
        const bool branch_taken_0x30f184 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x30F188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F184u;
        // 0x30f188: 0x46010041  sub.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f184) {
            ctx->pc = 0x30F198u;
            goto label_30f198;
        }
    }
    ctx->pc = 0x30F18Cu;
    // 0x30f18c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x30f18cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30f190: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x30F190u;
    {
        const bool branch_taken_0x30f190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F190u;
        // 0x30f194: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f190) {
            ctx->pc = 0x30F1B4u;
            goto label_30f1b4;
        }
    }
    ctx->pc = 0x30F198u;
label_30f198:
    // 0x30f198: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x30f198u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x30f19c: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x30f19cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x30f1a0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x30f1a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30f1a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30f1a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30f1a8: 0x0  nop
    ctx->pc = 0x30f1a8u;
    // NOP
    // 0x30f1ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x30f1acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x30f1b0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x30f1b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_30f1b4:
    // 0x30f1b4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x30f1b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x30f1b8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x30f1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x30f1bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30f1bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30f1c0: 0x0  nop
    ctx->pc = 0x30f1c0u;
    // NOP
    // 0x30f1c4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x30f1c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30f1c8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x30F1C8u;
    {
        const bool branch_taken_0x30f1c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30f1c8) {
            ctx->pc = 0x30F1E0u;
            goto label_30f1e0;
        }
    }
    ctx->pc = 0x30F1D0u;
    // 0x30f1d0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30f1d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x30f1d4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x30f1d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x30f1d8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x30F1D8u;
    {
        const bool branch_taken_0x30f1d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F1D8u;
        // 0x30f1dc: 0x8e260028  lw          $a2, 0x28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f1d8) {
            ctx->pc = 0x30F1FCu;
            goto label_30f1fc;
        }
    }
    ctx->pc = 0x30F1E0u;
label_30f1e0:
    // 0x30f1e0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x30f1e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x30f1e4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x30f1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x30f1e8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30f1e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x30f1ec: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x30f1ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x30f1f0: 0x0  nop
    ctx->pc = 0x30f1f0u;
    // NOP
    // 0x30f1f4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x30f1f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30f1f8: 0x8e260028  lw          $a2, 0x28($s1)
    ctx->pc = 0x30f1f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_30f1fc:
    // 0x30f1fc: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x30f1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x30f200: 0x8e27002c  lw          $a3, 0x2C($s1)
    ctx->pc = 0x30f200u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x30f204: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x30f204u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x30f208: 0x2484bb10  addiu       $a0, $a0, -0x44F0
    ctx->pc = 0x30f208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949648));
    // 0x30f20c: 0xc0c6534  jal         func_3194D0
    ctx->pc = 0x30F20Cu;
    SET_GPR_U32(ctx, 31, 0x30F214u);
    ctx->pc = 0x30F210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F20Cu;
    // 0x30f210: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3194D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3194D0u, 0x30F20Cu, 0x30F214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F214u;
label_30f214:
    // 0x30f214: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x30F214u;
    {
        const bool branch_taken_0x30f214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F214u;
        // 0x30f218: 0x24460010  addiu       $a2, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f214) {
            ctx->pc = 0x30F250u;
            goto label_30f250;
        }
    }
    ctx->pc = 0x30F21Cu;
    // 0x30f21c: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x30f21cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x30f220: 0x78670000  lq          $a3, 0x0($v1)
    ctx->pc = 0x30f220u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30f224: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x30f224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x30f228: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x30f228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x30f22c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x30f22cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f230: 0x7cc70000  sq          $a3, 0x0($a2)
    ctx->pc = 0x30f230u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 7));
    // 0x30f234: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x30f234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x30f238: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30f238u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30f23c: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x30f23cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30f240: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x30f240u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x30f244: 0xa0500034  sb          $s0, 0x34($v0)
    ctx->pc = 0x30f244u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 52), (uint8_t)GPR_U32(ctx, 16));
    // 0x30f248: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x30f248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x30f24c: 0x0  nop
    ctx->pc = 0x30f24cu;
    // NOP
label_30f250:
    // 0x30f250: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x30f250u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x30f254: 0x0  nop
    ctx->pc = 0x30f254u;
    // NOP
label_30f258:
    // 0x30f258: 0x25e182b  sltu        $v1, $s2, $fp
    ctx->pc = 0x30f258u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x30f25c: 0x1460ff4e  bnez        $v1, . + 4 + (-0xB2 << 2)
    ctx->pc = 0x30F25Cu;
    {
        const bool branch_taken_0x30f25c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30f25c) {
            ctx->pc = 0x30EF98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30ef98;
        }
    }
    ctx->pc = 0x30F264u;
    // 0x30f264: 0x92640000  lbu         $a0, 0x0($s3)
    ctx->pc = 0x30f264u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x30f268: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x30f268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30f26c: 0x10830126  beq         $a0, $v1, . + 4 + (0x126 << 2)
    ctx->pc = 0x30F26Cu;
    {
        const bool branch_taken_0x30f26c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x30F270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F26Cu;
        // 0x30f270: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f26c) {
            ctx->pc = 0x30F708u;
            goto label_30f708;
        }
    }
    ctx->pc = 0x30F274u;
    // 0x30f274: 0x108300ae  beq         $a0, $v1, . + 4 + (0xAE << 2)
    ctx->pc = 0x30F274u;
    {
        const bool branch_taken_0x30f274 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x30f274) {
            ctx->pc = 0x30F530u;
            goto label_30f530;
        }
    }
    ctx->pc = 0x30F27Cu;
    // 0x30f27c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x30f27cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30f280: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x30F280u;
    {
        const bool branch_taken_0x30f280 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x30f280) {
            ctx->pc = 0x30F290u;
            goto label_30f290;
        }
    }
    ctx->pc = 0x30F288u;
    // 0x30f288: 0x10000193  b           . + 4 + (0x193 << 2)
    ctx->pc = 0x30F288u;
    {
        const bool branch_taken_0x30f288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30f288) {
            ctx->pc = 0x30F8D8u;
            goto label_30f8d8;
        }
    }
    ctx->pc = 0x30F290u;
label_30f290:
    // 0x30f290: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30F290u;
    {
        const bool branch_taken_0x30f290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F290u;
        // 0x30f294: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f290) {
            ctx->pc = 0x30F2B0u;
            goto label_30f2b0;
        }
    }
    ctx->pc = 0x30F298u;
label_30f298:
    // 0x30f298: 0x8ea40600  lw          $a0, 0x600($s5)
    ctx->pc = 0x30f298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1536)));
    // 0x30f29c: 0x51980  sll         $v1, $a1, 6
    ctx->pc = 0x30f29cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x30f2a0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x30f2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x30f2a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30f2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30f2a8: 0xa4600020  sh          $zero, 0x20($v1)
    ctx->pc = 0x30f2a8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x30f2ac: 0x0  nop
    ctx->pc = 0x30f2acu;
    // NOP
label_30f2b0:
    // 0x30f2b0: 0xbe182b  sltu        $v1, $a1, $fp
    ctx->pc = 0x30f2b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x30f2b4: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x30F2B4u;
    {
        const bool branch_taken_0x30f2b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30F2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F2B4u;
        // 0x30f2b8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f2b4) {
            ctx->pc = 0x30F298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30f298;
        }
    }
    ctx->pc = 0x30F2BCu;
    // 0x30f2bc: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x30F2BCu;
    {
        const bool branch_taken_0x30f2bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30f2bc) {
            ctx->pc = 0x30F510u;
            goto label_30f510;
        }
    }
    ctx->pc = 0x30F2C4u;
    // 0x30f2c4: 0x0  nop
    ctx->pc = 0x30f2c4u;
    // NOP
label_30f2c8:
    // 0x30f2c8: 0x240322b0  addiu       $v1, $zero, 0x22B0
    ctx->pc = 0x30f2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8880));
    // 0x30f2cc: 0x2432018  mult        $a0, $s2, $v1
    ctx->pc = 0x30f2ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x30f2d0: 0x3c030081  lui         $v1, 0x81
    ctx->pc = 0x30f2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)129 << 16));
    // 0x30f2d4: 0x24639648  addiu       $v1, $v1, -0x69B8
    ctx->pc = 0x30f2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940232));
    // 0x30f2d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30f2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30f2dc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x30f2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30f2e0: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x30f2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x30f2e4: 0x2c8300ff  sltiu       $v1, $a0, 0xFF
    ctx->pc = 0x30f2e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)255) ? 1 : 0);
    // 0x30f2e8: 0x14600087  bnez        $v1, . + 4 + (0x87 << 2)
    ctx->pc = 0x30F2E8u;
    {
        const bool branch_taken_0x30f2e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30f2e8) {
            ctx->pc = 0x30F508u;
            goto label_30f508;
        }
    }
    ctx->pc = 0x30F2F0u;
    // 0x30f2f0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x30f2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x30f2f4: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x30f2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x30f2f8: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x30f2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x30f2fc: 0x10600082  beqz        $v1, . + 4 + (0x82 << 2)
    ctx->pc = 0x30F2FCu;
    {
        const bool branch_taken_0x30f2fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F2FCu;
        // 0x30f300: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f2fc) {
            ctx->pc = 0x30F508u;
            goto label_30f508;
        }
    }
    ctx->pc = 0x30F304u;
    // 0x30f304: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x30F304u;
    {
        const bool branch_taken_0x30f304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30f304) {
            ctx->pc = 0x30F4F0u;
            goto label_30f4f0;
        }
    }
    ctx->pc = 0x30F30Cu;
    // 0x30f30c: 0x0  nop
    ctx->pc = 0x30f30cu;
    // NOP
label_30f310:
    // 0x30f310: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x30f310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x30f314: 0x162180  sll         $a0, $s6, 6
    ctx->pc = 0x30f314u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 22), 6));
    // 0x30f318: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x30f318u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f31c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30f31cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30f320: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x30F320u;
    {
        const bool branch_taken_0x30f320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F320u;
        // 0x30f324: 0x24710010  addiu       $s1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f320) {
            ctx->pc = 0x30F4E0u;
            goto label_30f4e0;
        }
    }
    ctx->pc = 0x30F328u;
label_30f328:
    // 0x30f328: 0x8ea40600  lw          $a0, 0x600($s5)
    ctx->pc = 0x30f328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1536)));
    // 0x30f32c: 0x172980  sll         $a1, $s7, 6
    ctx->pc = 0x30f32cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 23), 6));
    // 0x30f330: 0x92830000  lbu         $v1, 0x0($s4)
    ctx->pc = 0x30f330u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x30f334: 0x858021  addu        $s0, $a0, $a1
    ctx->pc = 0x30f334u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x30f338: 0x92040022  lbu         $a0, 0x22($s0)
    ctx->pc = 0x30f338u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
    // 0x30f33c: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x30f33cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x30f340: 0x31efe  dsrl32      $v1, $v1, 27
    ctx->pc = 0x30f340u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 27));
    // 0x30f344: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x30f344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x30f348: 0x10600063  beqz        $v1, . + 4 + (0x63 << 2)
    ctx->pc = 0x30F348u;
    {
        const bool branch_taken_0x30f348 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30f348) {
            ctx->pc = 0x30F4D8u;
            goto label_30f4d8;
        }
    }
    ctx->pc = 0x30F350u;
    // 0x30f350: 0x96040020  lhu         $a0, 0x20($s0)
    ctx->pc = 0x30f350u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x30f354: 0x96230030  lhu         $v1, 0x30($s1)
    ctx->pc = 0x30f354u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x30f358: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x30f358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x30f35c: 0x1460005e  bnez        $v1, . + 4 + (0x5E << 2)
    ctx->pc = 0x30F35Cu;
    {
        const bool branch_taken_0x30f35c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30f35c) {
            ctx->pc = 0x30F4D8u;
            goto label_30f4d8;
        }
    }
    ctx->pc = 0x30F364u;
    // 0x30f364: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x30f364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30f368: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x30f368u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x30f36c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x30f36cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x30f370: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x30f370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30f374: 0x46031040  add.s       $f1, $f2, $f3
    ctx->pc = 0x30f374u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x30f378: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x30f378u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30f37c: 0x45010056  bc1t        . + 4 + (0x56 << 2)
    ctx->pc = 0x30F37Cu;
    {
        const bool branch_taken_0x30f37c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30f37c) {
            ctx->pc = 0x30F4D8u;
            goto label_30f4d8;
        }
    }
    ctx->pc = 0x30F384u;
    // 0x30f384: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x30f384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30f388: 0x46031041  sub.s       $f1, $f2, $f3
    ctx->pc = 0x30f388u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x30f38c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x30f38cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30f390: 0x45000051  bc1f        . + 4 + (0x51 << 2)
    ctx->pc = 0x30F390u;
    {
        const bool branch_taken_0x30f390 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30f390) {
            ctx->pc = 0x30F4D8u;
            goto label_30f4d8;
        }
    }
    ctx->pc = 0x30F398u;
    // 0x30f398: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x30f398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30f39c: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x30f39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30f3a0: 0x46031040  add.s       $f1, $f2, $f3
    ctx->pc = 0x30f3a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x30f3a4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x30f3a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30f3a8: 0x4501004b  bc1t        . + 4 + (0x4B << 2)
    ctx->pc = 0x30F3A8u;
    {
        const bool branch_taken_0x30f3a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30f3a8) {
            ctx->pc = 0x30F4D8u;
            goto label_30f4d8;
        }
    }
    ctx->pc = 0x30F3B0u;
    // 0x30f3b0: 0xc6200028  lwc1        $f0, 0x28($s1)
    ctx->pc = 0x30f3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30f3b4: 0x46031041  sub.s       $f1, $f2, $f3
    ctx->pc = 0x30f3b4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x30f3b8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x30f3b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30f3bc: 0x45000046  bc1f        . + 4 + (0x46 << 2)
    ctx->pc = 0x30F3BCu;
    {
        const bool branch_taken_0x30f3bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30f3bc) {
            ctx->pc = 0x30F4D8u;
            goto label_30f4d8;
        }
    }
    ctx->pc = 0x30F3C4u;
    // 0x30f3c4: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x30f3c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30f3c8: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x30f3c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30f3cc: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x30f3ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x30f3d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x30f3d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30f3d4: 0x45010040  bc1t        . + 4 + (0x40 << 2)
    ctx->pc = 0x30F3D4u;
    {
        const bool branch_taken_0x30f3d4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x30F3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F3D4u;
        // 0x30f3d8: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f3d4) {
            ctx->pc = 0x30F4D8u;
            goto label_30f4d8;
        }
    }
    ctx->pc = 0x30F3DCu;
    // 0x30f3dc: 0x26850020  addiu       $a1, $s4, 0x20
    ctx->pc = 0x30f3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x30f3e0: 0xc0414d0  jal         func_105340
    ctx->pc = 0x30F3E0u;
    SET_GPR_U32(ctx, 31, 0x30F3E8u);
    ctx->pc = 0x30F3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F3E0u;
    // 0x30f3e4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x30F3E0u, 0x30F3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F3E8u;
label_30f3e8:
    // 0x30f3e8: 0xc04d7b4  jal         func_135ED0
    ctx->pc = 0x30F3E8u;
    SET_GPR_U32(ctx, 31, 0x30F3F0u);
    ctx->pc = 0x30F3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F3E8u;
    // 0x30f3ec: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x30F3E8u, 0x30F3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F3F0u;
label_30f3f0:
    // 0x30f3f0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x30f3f0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x30f3f4: 0xc6800018  lwc1        $f0, 0x18($s4)
    ctx->pc = 0x30f3f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30f3f8: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x30f3f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30f3fc: 0x45000036  bc1f        . + 4 + (0x36 << 2)
    ctx->pc = 0x30F3FCu;
    {
        const bool branch_taken_0x30f3fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30F400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F3FCu;
        // 0x30f400: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f3fc) {
            ctx->pc = 0x30F4D8u;
            goto label_30f4d8;
        }
    }
    ctx->pc = 0x30F404u;
    // 0x30f404: 0xc041472  jal         func_1051C8
    ctx->pc = 0x30F404u;
    SET_GPR_U32(ctx, 31, 0x30F40Cu);
    ctx->pc = 0x30F408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F404u;
    // 0x30f408: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x30F404u, 0x30F40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F40Cu;
label_30f40c:
    // 0x30f40c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x30f40cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x30f410: 0xc041468  jal         func_1051A0
    ctx->pc = 0x30F410u;
    SET_GPR_U32(ctx, 31, 0x30F418u);
    ctx->pc = 0x30F414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F410u;
    // 0x30f414: 0x26850030  addiu       $a1, $s4, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x30F410u, 0x30F418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F418u;
label_30f418:
    // 0x30f418: 0xc6810058  lwc1        $f1, 0x58($s4)
    ctx->pc = 0x30f418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30f41c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x30f41cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30f420: 0x4501002d  bc1t        . + 4 + (0x2D << 2)
    ctx->pc = 0x30F420u;
    {
        const bool branch_taken_0x30f420 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30f420) {
            ctx->pc = 0x30F4D8u;
            goto label_30f4d8;
        }
    }
    ctx->pc = 0x30F428u;
    // 0x30f428: 0xc6820014  lwc1        $f2, 0x14($s4)
    ctx->pc = 0x30f428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30f42c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x30f42cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30f430: 0x4602a501  sub.s       $f20, $f20, $f2
    ctx->pc = 0x30f430u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[2]);
    // 0x30f434: 0x4601a036  c.le.s      $f20, $f1
    ctx->pc = 0x30f434u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30f438: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x30F438u;
    {
        const bool branch_taken_0x30f438 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30f438) {
            ctx->pc = 0x30F448u;
            goto label_30f448;
        }
    }
    ctx->pc = 0x30F440u;
    // 0x30f440: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x30F440u;
    {
        const bool branch_taken_0x30f440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30f440) {
            ctx->pc = 0x30F448u;
            goto label_30f448;
        }
    }
    ctx->pc = 0x30F448u;
label_30f448:
    // 0x30f448: 0xc6810054  lwc1        $f1, 0x54($s4)
    ctx->pc = 0x30f448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30f44c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x30f44cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30f450: 0x0  nop
    ctx->pc = 0x30f450u;
    // NOP
    // 0x30f454: 0x0  nop
    ctx->pc = 0x30f454u;
    // NOP
    // 0x30f458: 0x96030020  lhu         $v1, 0x20($s0)
    ctx->pc = 0x30f458u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x30f45c: 0x96220032  lhu         $v0, 0x32($s1)
    ctx->pc = 0x30f45cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 50)));
    // 0x30f460: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x30f460u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x30f464: 0x2484bb10  addiu       $a0, $a0, -0x44F0
    ctx->pc = 0x30f464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949648));
    // 0x30f468: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x30f468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30f46c: 0xa6020020  sh          $v0, 0x20($s0)
    ctx->pc = 0x30f46cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 2));
    // 0x30f470: 0x8e060028  lw          $a2, 0x28($s0)
    ctx->pc = 0x30f470u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x30f474: 0x8e07002c  lw          $a3, 0x2C($s0)
    ctx->pc = 0x30f474u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x30f478: 0xc0c6534  jal         func_3194D0
    ctx->pc = 0x30F478u;
    SET_GPR_U32(ctx, 31, 0x30F480u);
    ctx->pc = 0x30F47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F478u;
    // 0x30f47c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3194D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3194D0u, 0x30F478u, 0x30F480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F480u;
label_30f480:
    // 0x30f480: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x30F480u;
    {
        const bool branch_taken_0x30f480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F480u;
        // 0x30f484: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f480) {
            ctx->pc = 0x30F4D8u;
            goto label_30f4d8;
        }
    }
    ctx->pc = 0x30F488u;
    // 0x30f488: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x30f488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x30f48c: 0x78670000  lq          $a3, 0x0($v1)
    ctx->pc = 0x30f48cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30f490: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x30f490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f494: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x30f494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x30f498: 0x122600  sll         $a0, $s2, 24
    ctx->pc = 0x30f498u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 24));
    // 0x30f49c: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x30f49cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x30f4a0: 0x161c00  sll         $v1, $s6, 16
    ctx->pc = 0x30f4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 16));
    // 0x30f4a4: 0x7cc70000  sq          $a3, 0x0($a2)
    ctx->pc = 0x30f4a4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 7));
    // 0x30f4a8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x30f4a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x30f4ac: 0x7a240000  lq          $a0, 0x0($s1)
    ctx->pc = 0x30f4acu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30f4b0: 0x2e31825  or          $v1, $s7, $v1
    ctx->pc = 0x30f4b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) | GPR_U64(ctx, 3));
    // 0x30f4b4: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x30f4b4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x30f4b8: 0x92640001  lbu         $a0, 0x1($s3)
    ctx->pc = 0x30f4b8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x30f4bc: 0xa0440033  sb          $a0, 0x33($v0)
    ctx->pc = 0x30f4bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 51), (uint8_t)GPR_U32(ctx, 4));
    // 0x30f4c0: 0x92240036  lbu         $a0, 0x36($s1)
    ctx->pc = 0x30f4c0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 54)));
    // 0x30f4c4: 0xa0440032  sb          $a0, 0x32($v0)
    ctx->pc = 0x30f4c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 50), (uint8_t)GPR_U32(ctx, 4));
    // 0x30f4c8: 0x96240034  lhu         $a0, 0x34($s1)
    ctx->pc = 0x30f4c8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x30f4cc: 0xa4440030  sh          $a0, 0x30($v0)
    ctx->pc = 0x30f4ccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 48), (uint16_t)GPR_U32(ctx, 4));
    // 0x30f4d0: 0xac430034  sw          $v1, 0x34($v0)
    ctx->pc = 0x30f4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 3));
    // 0x30f4d4: 0x0  nop
    ctx->pc = 0x30f4d4u;
    // NOP
label_30f4d8:
    // 0x30f4d8: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x30f4d8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x30f4dc: 0x0  nop
    ctx->pc = 0x30f4dcu;
    // NOP
label_30f4e0:
    // 0x30f4e0: 0x2fe182b  sltu        $v1, $s7, $fp
    ctx->pc = 0x30f4e0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x30f4e4: 0x1460ff90  bnez        $v1, . + 4 + (-0x70 << 2)
    ctx->pc = 0x30F4E4u;
    {
        const bool branch_taken_0x30f4e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30f4e4) {
            ctx->pc = 0x30F328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30f328;
        }
    }
    ctx->pc = 0x30F4ECu;
    // 0x30f4ec: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x30f4ecu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_30f4f0:
    // 0x30f4f0: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x30f4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x30f4f4: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x30f4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x30f4f8: 0x2c3182b  sltu        $v1, $s6, $v1
    ctx->pc = 0x30f4f8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x30f4fc: 0x1460ff84  bnez        $v1, . + 4 + (-0x7C << 2)
    ctx->pc = 0x30F4FCu;
    {
        const bool branch_taken_0x30f4fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30f4fc) {
            ctx->pc = 0x30F310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30f310;
        }
    }
    ctx->pc = 0x30F504u;
    // 0x30f504: 0x0  nop
    ctx->pc = 0x30f504u;
    // NOP
label_30f508:
    // 0x30f508: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x30f508u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x30f50c: 0x0  nop
    ctx->pc = 0x30f50cu;
    // NOP
label_30f510:
    // 0x30f510: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x30f510u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x30f514: 0x902395a1  lbu         $v1, -0x6A5F($at)
    ctx->pc = 0x30f514u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8095A1u));
    // 0x30f518: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x30f518u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x30f51c: 0x1460ff6a  bnez        $v1, . + 4 + (-0x96 << 2)
    ctx->pc = 0x30F51Cu;
    {
        const bool branch_taken_0x30f51c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30f51c) {
            ctx->pc = 0x30F2C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30f2c8;
        }
    }
    ctx->pc = 0x30F524u;
    // 0x30f524: 0x100000ec  b           . + 4 + (0xEC << 2)
    ctx->pc = 0x30F524u;
    {
        const bool branch_taken_0x30f524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30f524) {
            ctx->pc = 0x30F8D8u;
            goto label_30f8d8;
        }
    }
    ctx->pc = 0x30F52Cu;
    // 0x30f52c: 0x0  nop
    ctx->pc = 0x30f52cu;
    // NOP
label_30f530:
    // 0x30f530: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x30F530u;
    {
        const bool branch_taken_0x30f530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F530u;
        // 0x30f534: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f530) {
            ctx->pc = 0x30F6F0u;
            goto label_30f6f0;
        }
    }
    ctx->pc = 0x30F538u;
label_30f538:
    // 0x30f538: 0x8ea40600  lw          $a0, 0x600($s5)
    ctx->pc = 0x30f538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1536)));
    // 0x30f53c: 0x112980  sll         $a1, $s1, 6
    ctx->pc = 0x30f53cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x30f540: 0x92830000  lbu         $v1, 0x0($s4)
    ctx->pc = 0x30f540u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x30f544: 0x858021  addu        $s0, $a0, $a1
    ctx->pc = 0x30f544u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x30f548: 0x92040022  lbu         $a0, 0x22($s0)
    ctx->pc = 0x30f548u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
    // 0x30f54c: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x30f54cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x30f550: 0x31efe  dsrl32      $v1, $v1, 27
    ctx->pc = 0x30f550u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 27));
    // 0x30f554: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x30f554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x30f558: 0x10600063  beqz        $v1, . + 4 + (0x63 << 2)
    ctx->pc = 0x30F558u;
    {
        const bool branch_taken_0x30f558 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F558u;
        // 0x30f55c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f558) {
            ctx->pc = 0x30F6E8u;
            goto label_30f6e8;
        }
    }
    ctx->pc = 0x30F560u;
    // 0x30f560: 0x26850020  addiu       $a1, $s4, 0x20
    ctx->pc = 0x30f560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x30f564: 0xc0414d0  jal         func_105340
    ctx->pc = 0x30F564u;
    SET_GPR_U32(ctx, 31, 0x30F56Cu);
    ctx->pc = 0x30F568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F564u;
    // 0x30f568: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x30F564u, 0x30F56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F56Cu;
label_30f56c:
    // 0x30f56c: 0xc04d7b4  jal         func_135ED0
    ctx->pc = 0x30F56Cu;
    SET_GPR_U32(ctx, 31, 0x30F574u);
    ctx->pc = 0x30F570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F56Cu;
    // 0x30f570: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x30F56Cu, 0x30F574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F574u;
label_30f574:
    // 0x30f574: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x30f574u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x30f578: 0xc6800018  lwc1        $f0, 0x18($s4)
    ctx->pc = 0x30f578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30f57c: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x30f57cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30f580: 0x45000059  bc1f        . + 4 + (0x59 << 2)
    ctx->pc = 0x30F580u;
    {
        const bool branch_taken_0x30f580 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30F584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F580u;
        // 0x30f584: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f580) {
            ctx->pc = 0x30F6E8u;
            goto label_30f6e8;
        }
    }
    ctx->pc = 0x30F588u;
    // 0x30f588: 0xc041472  jal         func_1051C8
    ctx->pc = 0x30F588u;
    SET_GPR_U32(ctx, 31, 0x30F590u);
    ctx->pc = 0x30F58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F588u;
    // 0x30f58c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x30F588u, 0x30F590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F590u;
label_30f590:
    // 0x30f590: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x30f590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x30f594: 0xc041468  jal         func_1051A0
    ctx->pc = 0x30F594u;
    SET_GPR_U32(ctx, 31, 0x30F59Cu);
    ctx->pc = 0x30F598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F594u;
    // 0x30f598: 0x26850030  addiu       $a1, $s4, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x30F594u, 0x30F59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F59Cu;
label_30f59c:
    // 0x30f59c: 0xc6810058  lwc1        $f1, 0x58($s4)
    ctx->pc = 0x30f59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30f5a0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x30f5a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30f5a4: 0x45010050  bc1t        . + 4 + (0x50 << 2)
    ctx->pc = 0x30F5A4u;
    {
        const bool branch_taken_0x30f5a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30f5a4) {
            ctx->pc = 0x30F6E8u;
            goto label_30f6e8;
        }
    }
    ctx->pc = 0x30F5ACu;
    // 0x30f5ac: 0xc6820014  lwc1        $f2, 0x14($s4)
    ctx->pc = 0x30f5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30f5b0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x30f5b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30f5b4: 0x4602a501  sub.s       $f20, $f20, $f2
    ctx->pc = 0x30f5b4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[2]);
    // 0x30f5b8: 0x4601a036  c.le.s      $f20, $f1
    ctx->pc = 0x30f5b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30f5bc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x30F5BCu;
    {
        const bool branch_taken_0x30f5bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30F5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F5BCu;
        // 0x30f5c0: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f5bc) {
            ctx->pc = 0x30F5D0u;
            goto label_30f5d0;
        }
    }
    ctx->pc = 0x30F5C4u;
    // 0x30f5c4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x30f5c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x30f5c8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30F5C8u;
    {
        const bool branch_taken_0x30f5c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30f5c8) {
            ctx->pc = 0x30F5E8u;
            goto label_30f5e8;
        }
    }
    ctx->pc = 0x30F5D0u;
label_30f5d0:
    // 0x30f5d0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x30f5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x30f5d4: 0xc6820010  lwc1        $f2, 0x10($s4)
    ctx->pc = 0x30f5d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30f5d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x30f5d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30f5dc: 0x4602a082  mul.s       $f2, $f20, $f2
    ctx->pc = 0x30f5dcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x30f5e0: 0x460208c1  sub.s       $f3, $f1, $f2
    ctx->pc = 0x30f5e0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x30f5e4: 0x0  nop
    ctx->pc = 0x30f5e4u;
    // NOP
label_30f5e8:
    // 0x30f5e8: 0xc6810054  lwc1        $f1, 0x54($s4)
    ctx->pc = 0x30f5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30f5ec: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x30f5ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30f5f0: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x30F5F0u;
    {
        const bool branch_taken_0x30f5f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30F5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F5F0u;
        // 0x30f5f4: 0x46010081  sub.s       $f2, $f0, $f1 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f5f0) {
            ctx->pc = 0x30F618u;
            goto label_30f618;
        }
    }
    ctx->pc = 0x30F5F8u;
    // 0x30f5f8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x30f5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x30f5fc: 0xc6810050  lwc1        $f1, 0x50($s4)
    ctx->pc = 0x30f5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30f600: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30f600u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30f604: 0x0  nop
    ctx->pc = 0x30f604u;
    // NOP
    // 0x30f608: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x30f608u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x30f60c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x30f60cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x30f610: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x30f610u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x30f614: 0x0  nop
    ctx->pc = 0x30f614u;
    // NOP
label_30f618:
    // 0x30f618: 0x92620001  lbu         $v0, 0x1($s3)
    ctx->pc = 0x30f618u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x30f61c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30F61Cu;
    {
        const bool branch_taken_0x30f61c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x30F620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F61Cu;
        // 0x30f620: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f61c) {
            ctx->pc = 0x30F630u;
            goto label_30f630;
        }
    }
    ctx->pc = 0x30F624u;
    // 0x30f624: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30f624u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30f628: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30F628u;
    {
        const bool branch_taken_0x30f628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F628u;
        // 0x30f62c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f628) {
            ctx->pc = 0x30F648u;
            goto label_30f648;
        }
    }
    ctx->pc = 0x30F630u;
label_30f630:
    // 0x30f630: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x30f630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x30f634: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x30f634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30f638: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30f638u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30f63c: 0x0  nop
    ctx->pc = 0x30f63cu;
    // NOP
    // 0x30f640: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x30f640u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x30f644: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x30f644u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_30f648:
    // 0x30f648: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x30f648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30f64c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x30f64cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x30f650: 0x46030082  mul.s       $f2, $f0, $f3
    ctx->pc = 0x30f650u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x30f654: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x30f654u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x30f658: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30f658u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30f65c: 0x0  nop
    ctx->pc = 0x30f65cu;
    // NOP
    // 0x30f660: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x30f660u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30f664: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x30F664u;
    {
        const bool branch_taken_0x30f664 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30f664) {
            ctx->pc = 0x30F67Cu;
            goto label_30f67c;
        }
    }
    ctx->pc = 0x30F66Cu;
    // 0x30f66c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30f66cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x30f670: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x30f670u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x30f674: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x30F674u;
    {
        const bool branch_taken_0x30f674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F674u;
        // 0x30f678: 0x8e060028  lw          $a2, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f674) {
            ctx->pc = 0x30F698u;
            goto label_30f698;
        }
    }
    ctx->pc = 0x30F67Cu;
label_30f67c:
    // 0x30f67c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x30f67cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x30f680: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x30f680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x30f684: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30f684u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x30f688: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x30f688u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x30f68c: 0x0  nop
    ctx->pc = 0x30f68cu;
    // NOP
    // 0x30f690: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x30f690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30f694: 0x8e060028  lw          $a2, 0x28($s0)
    ctx->pc = 0x30f694u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_30f698:
    // 0x30f698: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x30f698u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x30f69c: 0x8e07002c  lw          $a3, 0x2C($s0)
    ctx->pc = 0x30f69cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x30f6a0: 0x307200ff  andi        $s2, $v1, 0xFF
    ctx->pc = 0x30f6a0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x30f6a4: 0x2484bb10  addiu       $a0, $a0, -0x44F0
    ctx->pc = 0x30f6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949648));
    // 0x30f6a8: 0xc0c6534  jal         func_3194D0
    ctx->pc = 0x30F6A8u;
    SET_GPR_U32(ctx, 31, 0x30F6B0u);
    ctx->pc = 0x30F6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F6A8u;
    // 0x30f6ac: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3194D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3194D0u, 0x30F6A8u, 0x30F6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F6B0u;
label_30f6b0:
    // 0x30f6b0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x30F6B0u;
    {
        const bool branch_taken_0x30f6b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F6B0u;
        // 0x30f6b4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f6b0) {
            ctx->pc = 0x30F6E8u;
            goto label_30f6e8;
        }
    }
    ctx->pc = 0x30F6B8u;
    // 0x30f6b8: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x30f6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x30f6bc: 0x26830020  addiu       $v1, $s4, 0x20
    ctx->pc = 0x30f6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x30f6c0: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x30f6c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30f6c4: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x30f6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x30f6c8: 0xa0400013  sb          $zero, 0x13($v0)
    ctx->pc = 0x30f6c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 19), (uint8_t)GPR_U32(ctx, 0));
    // 0x30f6cc: 0xa0520012  sb          $s2, 0x12($v0)
    ctx->pc = 0x30f6ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 18), (uint8_t)GPR_U32(ctx, 18));
    // 0x30f6d0: 0x92630002  lbu         $v1, 0x2($s3)
    ctx->pc = 0x30f6d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x30f6d4: 0xa0430011  sb          $v1, 0x11($v0)
    ctx->pc = 0x30f6d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 17), (uint8_t)GPR_U32(ctx, 3));
    // 0x30f6d8: 0x92630003  lbu         $v1, 0x3($s3)
    ctx->pc = 0x30f6d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
    // 0x30f6dc: 0xa0430010  sb          $v1, 0x10($v0)
    ctx->pc = 0x30f6dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x30f6e0: 0xc680001c  lwc1        $f0, 0x1C($s4)
    ctx->pc = 0x30f6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30f6e4: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x30f6e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
label_30f6e8:
    // 0x30f6e8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x30f6e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x30f6ec: 0x0  nop
    ctx->pc = 0x30f6ecu;
    // NOP
label_30f6f0:
    // 0x30f6f0: 0x23e182b  sltu        $v1, $s1, $fp
    ctx->pc = 0x30f6f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x30f6f4: 0x1460ff90  bnez        $v1, . + 4 + (-0x70 << 2)
    ctx->pc = 0x30F6F4u;
    {
        const bool branch_taken_0x30f6f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30f6f4) {
            ctx->pc = 0x30F538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30f538;
        }
    }
    ctx->pc = 0x30F6FCu;
    // 0x30f6fc: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x30F6FCu;
    {
        const bool branch_taken_0x30f6fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30f6fc) {
            ctx->pc = 0x30F8D8u;
            goto label_30f8d8;
        }
    }
    ctx->pc = 0x30F704u;
    // 0x30f704: 0x0  nop
    ctx->pc = 0x30f704u;
    // NOP
label_30f708:
    // 0x30f708: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x30F708u;
    {
        const bool branch_taken_0x30f708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F708u;
        // 0x30f70c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f708) {
            ctx->pc = 0x30F8C8u;
            goto label_30f8c8;
        }
    }
    ctx->pc = 0x30F710u;
label_30f710:
    // 0x30f710: 0x8ea40600  lw          $a0, 0x600($s5)
    ctx->pc = 0x30f710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1536)));
    // 0x30f714: 0x112980  sll         $a1, $s1, 6
    ctx->pc = 0x30f714u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x30f718: 0x92830000  lbu         $v1, 0x0($s4)
    ctx->pc = 0x30f718u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x30f71c: 0x858021  addu        $s0, $a0, $a1
    ctx->pc = 0x30f71cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x30f720: 0x92040022  lbu         $a0, 0x22($s0)
    ctx->pc = 0x30f720u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
    // 0x30f724: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x30f724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x30f728: 0x31efe  dsrl32      $v1, $v1, 27
    ctx->pc = 0x30f728u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 27));
    // 0x30f72c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x30f72cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x30f730: 0x10600063  beqz        $v1, . + 4 + (0x63 << 2)
    ctx->pc = 0x30F730u;
    {
        const bool branch_taken_0x30f730 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F730u;
        // 0x30f734: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f730) {
            ctx->pc = 0x30F8C0u;
            goto label_30f8c0;
        }
    }
    ctx->pc = 0x30F738u;
    // 0x30f738: 0x26850020  addiu       $a1, $s4, 0x20
    ctx->pc = 0x30f738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x30f73c: 0xc0414d0  jal         func_105340
    ctx->pc = 0x30F73Cu;
    SET_GPR_U32(ctx, 31, 0x30F744u);
    ctx->pc = 0x30F740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F73Cu;
    // 0x30f740: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x30F73Cu, 0x30F744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F744u;
label_30f744:
    // 0x30f744: 0xc04d7b4  jal         func_135ED0
    ctx->pc = 0x30F744u;
    SET_GPR_U32(ctx, 31, 0x30F74Cu);
    ctx->pc = 0x30F748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F744u;
    // 0x30f748: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x30F744u, 0x30F74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F74Cu;
label_30f74c:
    // 0x30f74c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x30f74cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x30f750: 0xc6800018  lwc1        $f0, 0x18($s4)
    ctx->pc = 0x30f750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30f754: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x30f754u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30f758: 0x45000059  bc1f        . + 4 + (0x59 << 2)
    ctx->pc = 0x30F758u;
    {
        const bool branch_taken_0x30f758 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30F75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F758u;
        // 0x30f75c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f758) {
            ctx->pc = 0x30F8C0u;
            goto label_30f8c0;
        }
    }
    ctx->pc = 0x30F760u;
    // 0x30f760: 0xc041472  jal         func_1051C8
    ctx->pc = 0x30F760u;
    SET_GPR_U32(ctx, 31, 0x30F768u);
    ctx->pc = 0x30F764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F760u;
    // 0x30f764: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x30F760u, 0x30F768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F768u;
label_30f768:
    // 0x30f768: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x30f768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x30f76c: 0xc041468  jal         func_1051A0
    ctx->pc = 0x30F76Cu;
    SET_GPR_U32(ctx, 31, 0x30F774u);
    ctx->pc = 0x30F770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F76Cu;
    // 0x30f770: 0x26850030  addiu       $a1, $s4, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x30F76Cu, 0x30F774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F774u;
label_30f774:
    // 0x30f774: 0xc6810058  lwc1        $f1, 0x58($s4)
    ctx->pc = 0x30f774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30f778: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x30f778u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30f77c: 0x45010050  bc1t        . + 4 + (0x50 << 2)
    ctx->pc = 0x30F77Cu;
    {
        const bool branch_taken_0x30f77c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30f77c) {
            ctx->pc = 0x30F8C0u;
            goto label_30f8c0;
        }
    }
    ctx->pc = 0x30F784u;
    // 0x30f784: 0xc6820014  lwc1        $f2, 0x14($s4)
    ctx->pc = 0x30f784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30f788: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x30f788u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30f78c: 0x4602a501  sub.s       $f20, $f20, $f2
    ctx->pc = 0x30f78cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[2]);
    // 0x30f790: 0x4601a036  c.le.s      $f20, $f1
    ctx->pc = 0x30f790u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30f794: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x30F794u;
    {
        const bool branch_taken_0x30f794 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30F798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F794u;
        // 0x30f798: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f794) {
            ctx->pc = 0x30F7A8u;
            goto label_30f7a8;
        }
    }
    ctx->pc = 0x30F79Cu;
    // 0x30f79c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x30f79cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x30f7a0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30F7A0u;
    {
        const bool branch_taken_0x30f7a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30f7a0) {
            ctx->pc = 0x30F7C0u;
            goto label_30f7c0;
        }
    }
    ctx->pc = 0x30F7A8u;
label_30f7a8:
    // 0x30f7a8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x30f7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x30f7ac: 0xc6820010  lwc1        $f2, 0x10($s4)
    ctx->pc = 0x30f7acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30f7b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x30f7b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30f7b4: 0x4602a082  mul.s       $f2, $f20, $f2
    ctx->pc = 0x30f7b4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x30f7b8: 0x460208c1  sub.s       $f3, $f1, $f2
    ctx->pc = 0x30f7b8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x30f7bc: 0x0  nop
    ctx->pc = 0x30f7bcu;
    // NOP
label_30f7c0:
    // 0x30f7c0: 0xc6810054  lwc1        $f1, 0x54($s4)
    ctx->pc = 0x30f7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30f7c4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x30f7c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30f7c8: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x30F7C8u;
    {
        const bool branch_taken_0x30f7c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30F7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F7C8u;
        // 0x30f7cc: 0x46010081  sub.s       $f2, $f0, $f1 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f7c8) {
            ctx->pc = 0x30F7F0u;
            goto label_30f7f0;
        }
    }
    ctx->pc = 0x30F7D0u;
    // 0x30f7d0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x30f7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x30f7d4: 0xc6810050  lwc1        $f1, 0x50($s4)
    ctx->pc = 0x30f7d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30f7d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30f7d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30f7dc: 0x0  nop
    ctx->pc = 0x30f7dcu;
    // NOP
    // 0x30f7e0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x30f7e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x30f7e4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x30f7e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x30f7e8: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x30f7e8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x30f7ec: 0x0  nop
    ctx->pc = 0x30f7ecu;
    // NOP
label_30f7f0:
    // 0x30f7f0: 0x92620001  lbu         $v0, 0x1($s3)
    ctx->pc = 0x30f7f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x30f7f4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30F7F4u;
    {
        const bool branch_taken_0x30f7f4 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x30F7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F7F4u;
        // 0x30f7f8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f7f4) {
            ctx->pc = 0x30F808u;
            goto label_30f808;
        }
    }
    ctx->pc = 0x30F7FCu;
    // 0x30f7fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30f7fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30f800: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30F800u;
    {
        const bool branch_taken_0x30f800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F800u;
        // 0x30f804: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f800) {
            ctx->pc = 0x30F820u;
            goto label_30f820;
        }
    }
    ctx->pc = 0x30F808u;
label_30f808:
    // 0x30f808: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x30f808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x30f80c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x30f80cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30f810: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30f810u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30f814: 0x0  nop
    ctx->pc = 0x30f814u;
    // NOP
    // 0x30f818: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x30f818u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x30f81c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x30f81cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_30f820:
    // 0x30f820: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x30f820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30f824: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x30f824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x30f828: 0x46030082  mul.s       $f2, $f0, $f3
    ctx->pc = 0x30f828u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x30f82c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x30f82cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x30f830: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30f830u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30f834: 0x0  nop
    ctx->pc = 0x30f834u;
    // NOP
    // 0x30f838: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x30f838u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30f83c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x30F83Cu;
    {
        const bool branch_taken_0x30f83c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30f83c) {
            ctx->pc = 0x30F854u;
            goto label_30f854;
        }
    }
    ctx->pc = 0x30F844u;
    // 0x30f844: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30f844u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x30f848: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x30f848u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x30f84c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x30F84Cu;
    {
        const bool branch_taken_0x30f84c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F84Cu;
        // 0x30f850: 0x8e060028  lw          $a2, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f84c) {
            ctx->pc = 0x30F870u;
            goto label_30f870;
        }
    }
    ctx->pc = 0x30F854u;
label_30f854:
    // 0x30f854: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x30f854u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x30f858: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x30f858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x30f85c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30f85cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x30f860: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x30f860u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x30f864: 0x0  nop
    ctx->pc = 0x30f864u;
    // NOP
    // 0x30f868: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x30f868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30f86c: 0x8e060028  lw          $a2, 0x28($s0)
    ctx->pc = 0x30f86cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_30f870:
    // 0x30f870: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x30f870u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x30f874: 0x8e07002c  lw          $a3, 0x2C($s0)
    ctx->pc = 0x30f874u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x30f878: 0x307200ff  andi        $s2, $v1, 0xFF
    ctx->pc = 0x30f878u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x30f87c: 0x2484bb10  addiu       $a0, $a0, -0x44F0
    ctx->pc = 0x30f87cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949648));
    // 0x30f880: 0xc0c6534  jal         func_3194D0
    ctx->pc = 0x30F880u;
    SET_GPR_U32(ctx, 31, 0x30F888u);
    ctx->pc = 0x30F884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F880u;
    // 0x30f884: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3194D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3194D0u, 0x30F880u, 0x30F888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F888u;
label_30f888:
    // 0x30f888: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x30F888u;
    {
        const bool branch_taken_0x30f888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F888u;
        // 0x30f88c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f888) {
            ctx->pc = 0x30F8C0u;
            goto label_30f8c0;
        }
    }
    ctx->pc = 0x30F890u;
    // 0x30f890: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x30f890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x30f894: 0x26830020  addiu       $v1, $s4, 0x20
    ctx->pc = 0x30f894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x30f898: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x30f898u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30f89c: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x30f89cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x30f8a0: 0xa0400013  sb          $zero, 0x13($v0)
    ctx->pc = 0x30f8a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 19), (uint8_t)GPR_U32(ctx, 0));
    // 0x30f8a4: 0xa0520012  sb          $s2, 0x12($v0)
    ctx->pc = 0x30f8a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 18), (uint8_t)GPR_U32(ctx, 18));
    // 0x30f8a8: 0x92630002  lbu         $v1, 0x2($s3)
    ctx->pc = 0x30f8a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x30f8ac: 0xa0430011  sb          $v1, 0x11($v0)
    ctx->pc = 0x30f8acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 17), (uint8_t)GPR_U32(ctx, 3));
    // 0x30f8b0: 0x92630003  lbu         $v1, 0x3($s3)
    ctx->pc = 0x30f8b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
    // 0x30f8b4: 0xa0430010  sb          $v1, 0x10($v0)
    ctx->pc = 0x30f8b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x30f8b8: 0xc680001c  lwc1        $f0, 0x1C($s4)
    ctx->pc = 0x30f8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30f8bc: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x30f8bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
label_30f8c0:
    // 0x30f8c0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x30f8c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x30f8c4: 0x0  nop
    ctx->pc = 0x30f8c4u;
    // NOP
label_30f8c8:
    // 0x30f8c8: 0x23e182b  sltu        $v1, $s1, $fp
    ctx->pc = 0x30f8c8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x30f8cc: 0x1460ff90  bnez        $v1, . + 4 + (-0x70 << 2)
    ctx->pc = 0x30F8CCu;
    {
        const bool branch_taken_0x30f8cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30f8cc) {
            ctx->pc = 0x30F710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30f710;
        }
    }
    ctx->pc = 0x30F8D4u;
    // 0x30f8d4: 0x0  nop
    ctx->pc = 0x30f8d4u;
    // NOP
label_30f8d8:
    // 0x30f8d8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x30f8d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x30f8dc: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x30f8dcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x30f8e0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x30f8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x30f8e4: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x30f8e4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x30f8e8: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x30f8e8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x30f8ec: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x30f8ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x30f8f0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x30f8f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30f8f4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x30f8f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30f8f8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x30f8f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30f8fc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x30f8fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30f900: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x30f900u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30f904: 0x3e00008  jr          $ra
    ctx->pc = 0x30F904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30F908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F904u;
        // 0x30f908: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30F904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30F90Cu;
}
