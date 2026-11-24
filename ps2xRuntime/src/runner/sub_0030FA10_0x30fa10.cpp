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

// Function: sub_0030FA10
// Address: 0x30fa10 - 0x3102d8
void sub_0030FA10_0x30fa10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030FA10_0x30fa10");
#endif

    switch (ctx->pc) {
        case 0x30fa90u: goto label_30fa90;
        case 0x30fb10u: goto label_30fb10;
        case 0x30fb18u: goto label_30fb18;
        case 0x30fb40u: goto label_30fb40;
        case 0x30fcccu: goto label_30fccc;
        case 0x30fd50u: goto label_30fd50;
        case 0x30fd80u: goto label_30fd80;
        case 0x30fdc8u: goto label_30fdc8;
        case 0x30fde0u: goto label_30fde0;
        case 0x30fea0u: goto label_30fea0;
        case 0x30fea8u: goto label_30fea8;
        case 0x30fec4u: goto label_30fec4;
        case 0x30ff08u: goto label_30ff08;
        case 0x30ffc0u: goto label_30ffc0;
        case 0x30fff8u: goto label_30fff8;
        case 0x310000u: goto label_310000;
        case 0x3100d8u: goto label_3100d8;
        case 0x3100f0u: goto label_3100f0;
        case 0x310138u: goto label_310138;
        case 0x310170u: goto label_310170;
        case 0x310178u: goto label_310178;
        case 0x310250u: goto label_310250;
        case 0x310268u: goto label_310268;
        default: break;
    }

    ctx->pc = 0x30fa10u;

    // 0x30fa10: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x30fa10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x30fa14: 0x3c01008e  lui         $at, 0x8E
    ctx->pc = 0x30fa14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)142 << 16));
    // 0x30fa18: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x30fa18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x30fa1c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x30fa1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x30fa20: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x30fa20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x30fa24: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x30fa24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x30fa28: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x30fa28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x30fa2c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x30fa2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x30fa30: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x30fa30u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fa34: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x30fa34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x30fa38: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x30fa38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x30fa3c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x30fa3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x30fa40: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x30fa40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x30fa44: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x30fa44u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x30fa48: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x30fa48u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x30fa4c: 0x8c23fd84  lw          $v1, -0x27C($at)
    ctx->pc = 0x30fa4cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8DFD84u));
    // 0x30fa50: 0x90a40003  lbu         $a0, 0x3($a1)
    ctx->pc = 0x30fa50u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x30fa54: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x30FA54u;
    {
        const bool branch_taken_0x30fa54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FA54u;
        // 0x30fa58: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fa54) {
            ctx->pc = 0x30FA78u;
            goto label_30fa78;
        }
    }
    ctx->pc = 0x30FA5Cu;
    // 0x30fa5c: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x30fa5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x30fa60: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x30fa60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x30fa64: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x30fa64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x30fa68: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30fa68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30fa6c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x30FA6Cu;
    {
        const bool branch_taken_0x30fa6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FA6Cu;
        // 0x30fa70: 0x24730004  addiu       $s3, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fa6c) {
            ctx->pc = 0x30FA80u;
            goto label_30fa80;
        }
    }
    ctx->pc = 0x30FA74u;
    // 0x30fa74: 0x0  nop
    ctx->pc = 0x30fa74u;
    // NOP
label_30fa78:
    // 0x30fa78: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x30fa78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fa7c: 0x0  nop
    ctx->pc = 0x30fa7cu;
    // NOP
label_30fa80:
    // 0x30fa80: 0x8ebe0604  lw          $fp, 0x604($s5)
    ctx->pc = 0x30fa80u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1540)));
    // 0x30fa84: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x30FA84u;
    {
        const bool branch_taken_0x30fa84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FA84u;
        // 0x30fa88: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fa84) {
            ctx->pc = 0x30FD10u;
            goto label_30fd10;
        }
    }
    ctx->pc = 0x30FA8Cu;
    // 0x30fa8c: 0x0  nop
    ctx->pc = 0x30fa8cu;
    // NOP
label_30fa90:
    // 0x30fa90: 0x121840  sll         $v1, $s2, 1
    ctx->pc = 0x30fa90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x30fa94: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x30fa94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x30fa98: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x30fa98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30fa9c: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x30fa9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x30faa0: 0x90630008  lbu         $v1, 0x8($v1)
    ctx->pc = 0x30faa0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x30faa4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x30FAA4u;
    {
        const bool branch_taken_0x30faa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30faa4) {
            ctx->pc = 0x30FAC0u;
            goto label_30fac0;
        }
    }
    ctx->pc = 0x30FAACu;
    // 0x30faac: 0x92640000  lbu         $a0, 0x0($s3)
    ctx->pc = 0x30faacu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x30fab0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30fab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30fab4: 0x14830094  bne         $a0, $v1, . + 4 + (0x94 << 2)
    ctx->pc = 0x30FAB4u;
    {
        const bool branch_taken_0x30fab4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x30fab4) {
            ctx->pc = 0x30FD08u;
            goto label_30fd08;
        }
    }
    ctx->pc = 0x30FABCu;
    // 0x30fabc: 0x0  nop
    ctx->pc = 0x30fabcu;
    // NOP
label_30fac0:
    // 0x30fac0: 0x8ea40600  lw          $a0, 0x600($s5)
    ctx->pc = 0x30fac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1536)));
    // 0x30fac4: 0x122980  sll         $a1, $s2, 6
    ctx->pc = 0x30fac4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x30fac8: 0x92830000  lbu         $v1, 0x0($s4)
    ctx->pc = 0x30fac8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x30facc: 0x858821  addu        $s1, $a0, $a1
    ctx->pc = 0x30faccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x30fad0: 0x92240022  lbu         $a0, 0x22($s1)
    ctx->pc = 0x30fad0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 34)));
    // 0x30fad4: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x30fad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x30fad8: 0x31efe  dsrl32      $v1, $v1, 27
    ctx->pc = 0x30fad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 27));
    // 0x30fadc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x30fadcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x30fae0: 0x10600089  beqz        $v1, . + 4 + (0x89 << 2)
    ctx->pc = 0x30FAE0u;
    {
        const bool branch_taken_0x30fae0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30fae0) {
            ctx->pc = 0x30FD08u;
            goto label_30fd08;
        }
    }
    ctx->pc = 0x30FAE8u;
    // 0x30fae8: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x30fae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x30faec: 0x14600086  bnez        $v1, . + 4 + (0x86 << 2)
    ctx->pc = 0x30FAECu;
    {
        const bool branch_taken_0x30faec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30faec) {
            ctx->pc = 0x30FD08u;
            goto label_30fd08;
        }
    }
    ctx->pc = 0x30FAF4u;
    // 0x30faf4: 0x92230034  lbu         $v1, 0x34($s1)
    ctx->pc = 0x30faf4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x30faf8: 0x10600083  beqz        $v1, . + 4 + (0x83 << 2)
    ctx->pc = 0x30FAF8u;
    {
        const bool branch_taken_0x30faf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FAF8u;
        // 0x30fafc: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30faf8) {
            ctx->pc = 0x30FD08u;
            goto label_30fd08;
        }
    }
    ctx->pc = 0x30FB00u;
    // 0x30fb00: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x30fb00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fb04: 0x26860020  addiu       $a2, $s4, 0x20
    ctx->pc = 0x30fb04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x30fb08: 0xc0c3e44  jal         func_30F910
    ctx->pc = 0x30FB08u;
    SET_GPR_U32(ctx, 31, 0x30FB10u);
    ctx->pc = 0x30FB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FB08u;
    // 0x30fb0c: 0x26870030  addiu       $a3, $s4, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30F910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F910u, 0x30FB08u, 0x30FB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FB10u;
label_30fb10:
    // 0x30fb10: 0xc04d7b4  jal         func_135ED0
    ctx->pc = 0x30FB10u;
    SET_GPR_U32(ctx, 31, 0x30FB18u);
    ctx->pc = 0x30FB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FB10u;
    // 0x30fb14: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x30FB10u, 0x30FB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FB18u;
label_30fb18:
    // 0x30fb18: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x30fb18u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x30fb1c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x30fb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x30fb20: 0xc6800018  lwc1        $f0, 0x18($s4)
    ctx->pc = 0x30fb20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30fb24: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x30fb24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x30fb28: 0x0  nop
    ctx->pc = 0x30fb28u;
    // NOP
    // 0x30fb2c: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x30fb2cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30fb30: 0x45000075  bc1f        . + 4 + (0x75 << 2)
    ctx->pc = 0x30FB30u;
    {
        const bool branch_taken_0x30fb30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30FB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FB30u;
        // 0x30fb34: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fb30) {
            ctx->pc = 0x30FD08u;
            goto label_30fd08;
        }
    }
    ctx->pc = 0x30FB38u;
    // 0x30fb38: 0xc041472  jal         func_1051C8
    ctx->pc = 0x30FB38u;
    SET_GPR_U32(ctx, 31, 0x30FB40u);
    ctx->pc = 0x30FB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FB38u;
    // 0x30fb3c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x30FB38u, 0x30FB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FB40u;
label_30fb40:
    // 0x30fb40: 0xc6810014  lwc1        $f1, 0x14($s4)
    ctx->pc = 0x30fb40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30fb44: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x30fb44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30fb48: 0x0  nop
    ctx->pc = 0x30fb48u;
    // NOP
    // 0x30fb4c: 0x4601ad41  sub.s       $f21, $f21, $f1
    ctx->pc = 0x30fb4cu;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[1]);
    // 0x30fb50: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x30fb50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30fb54: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x30FB54u;
    {
        const bool branch_taken_0x30fb54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30fb54) {
            ctx->pc = 0x30FB78u;
            goto label_30fb78;
        }
    }
    ctx->pc = 0x30FB5Cu;
    // 0x30fb5c: 0xc6810010  lwc1        $f1, 0x10($s4)
    ctx->pc = 0x30fb5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30fb60: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x30fb60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x30fb64: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30fb64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30fb68: 0x0  nop
    ctx->pc = 0x30fb68u;
    // NOP
    // 0x30fb6c: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x30fb6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x30fb70: 0x46010501  sub.s       $f20, $f0, $f1
    ctx->pc = 0x30fb70u;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x30fb74: 0x0  nop
    ctx->pc = 0x30fb74u;
    // NOP
label_30fb78:
    // 0x30fb78: 0x92630001  lbu         $v1, 0x1($s3)
    ctx->pc = 0x30fb78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x30fb7c: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x30FB7Cu;
    {
        const bool branch_taken_0x30fb7c = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x30FB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FB7Cu;
        // 0x30fb80: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fb7c) {
            ctx->pc = 0x30FB90u;
            goto label_30fb90;
        }
    }
    ctx->pc = 0x30FB84u;
    // 0x30fb84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30fb84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30fb88: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30FB88u;
    {
        const bool branch_taken_0x30fb88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FB88u;
        // 0x30fb8c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fb88) {
            ctx->pc = 0x30FBA8u;
            goto label_30fba8;
        }
    }
    ctx->pc = 0x30FB90u;
label_30fb90:
    // 0x30fb90: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x30fb90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x30fb94: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x30fb94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x30fb98: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x30fb98u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30fb9c: 0x0  nop
    ctx->pc = 0x30fb9cu;
    // NOP
    // 0x30fba0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x30fba0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x30fba4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x30fba4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_30fba8:
    // 0x30fba8: 0xc6210030  lwc1        $f1, 0x30($s1)
    ctx->pc = 0x30fba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30fbac: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x30fbacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x30fbb0: 0x46140082  mul.s       $f2, $f0, $f20
    ctx->pc = 0x30fbb0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x30fbb4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x30fbb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x30fbb8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30fbb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30fbbc: 0x0  nop
    ctx->pc = 0x30fbbcu;
    // NOP
    // 0x30fbc0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x30fbc0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30fbc4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x30FBC4u;
    {
        const bool branch_taken_0x30fbc4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30fbc4) {
            ctx->pc = 0x30FBDCu;
            goto label_30fbdc;
        }
    }
    ctx->pc = 0x30FBCCu;
    // 0x30fbcc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30fbccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x30fbd0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x30fbd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x30fbd4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x30FBD4u;
    {
        const bool branch_taken_0x30fbd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FBD4u;
        // 0x30fbd8: 0x92230023  lbu         $v1, 0x23($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fbd4) {
            ctx->pc = 0x30FBF8u;
            goto label_30fbf8;
        }
    }
    ctx->pc = 0x30FBDCu;
label_30fbdc:
    // 0x30fbdc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x30fbdcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x30fbe0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x30fbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x30fbe4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30fbe4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x30fbe8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x30fbe8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x30fbec: 0x0  nop
    ctx->pc = 0x30fbecu;
    // NOP
    // 0x30fbf0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x30fbf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x30fbf4: 0x92230023  lbu         $v1, 0x23($s1)
    ctx->pc = 0x30fbf4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
label_30fbf8:
    // 0x30fbf8: 0x309000ff  andi        $s0, $a0, 0xFF
    ctx->pc = 0x30fbf8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x30fbfc: 0x70082a  slt         $at, $v1, $s0
    ctx->pc = 0x30fbfcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x30fc00: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x30FC00u;
    {
        const bool branch_taken_0x30fc00 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x30fc00) {
            ctx->pc = 0x30FC10u;
            goto label_30fc10;
        }
    }
    ctx->pc = 0x30FC08u;
    // 0x30fc08: 0xa2300023  sb          $s0, 0x23($s1)
    ctx->pc = 0x30fc08u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 35), (uint8_t)GPR_U32(ctx, 16));
    // 0x30fc0c: 0x0  nop
    ctx->pc = 0x30fc0cu;
    // NOP
label_30fc10:
    // 0x30fc10: 0x121840  sll         $v1, $s2, 1
    ctx->pc = 0x30fc10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x30fc14: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x30fc14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x30fc18: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x30fc18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x30fc1c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x30fc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x30fc20: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x30fc20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    // 0x30fc24: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x30fc24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30fc28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30fc28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30fc2c: 0x0  nop
    ctx->pc = 0x30fc2cu;
    // NOP
    // 0x30fc30: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x30fc30u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30fc34: 0x45010034  bc1t        . + 4 + (0x34 << 2)
    ctx->pc = 0x30FC34u;
    {
        const bool branch_taken_0x30fc34 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30fc34) {
            ctx->pc = 0x30FD08u;
            goto label_30fd08;
        }
    }
    ctx->pc = 0x30FC3Cu;
    // 0x30fc3c: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30FC3Cu;
    {
        const bool branch_taken_0x30fc3c = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x30FC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FC3Cu;
        // 0x30fc40: 0x46010041  sub.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fc3c) {
            ctx->pc = 0x30FC50u;
            goto label_30fc50;
        }
    }
    ctx->pc = 0x30FC44u;
    // 0x30fc44: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x30fc44u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30fc48: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x30FC48u;
    {
        const bool branch_taken_0x30fc48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FC48u;
        // 0x30fc4c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fc48) {
            ctx->pc = 0x30FC6Cu;
            goto label_30fc6c;
        }
    }
    ctx->pc = 0x30FC50u;
label_30fc50:
    // 0x30fc50: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x30fc50u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x30fc54: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x30fc54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x30fc58: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x30fc58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30fc5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30fc5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30fc60: 0x0  nop
    ctx->pc = 0x30fc60u;
    // NOP
    // 0x30fc64: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x30fc64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x30fc68: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x30fc68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_30fc6c:
    // 0x30fc6c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x30fc6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x30fc70: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x30fc70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x30fc74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30fc74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30fc78: 0x0  nop
    ctx->pc = 0x30fc78u;
    // NOP
    // 0x30fc7c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x30fc7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30fc80: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x30FC80u;
    {
        const bool branch_taken_0x30fc80 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30fc80) {
            ctx->pc = 0x30FC98u;
            goto label_30fc98;
        }
    }
    ctx->pc = 0x30FC88u;
    // 0x30fc88: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30fc88u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x30fc8c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x30fc8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x30fc90: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x30FC90u;
    {
        const bool branch_taken_0x30fc90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FC90u;
        // 0x30fc94: 0x8e260028  lw          $a2, 0x28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fc90) {
            ctx->pc = 0x30FCB4u;
            goto label_30fcb4;
        }
    }
    ctx->pc = 0x30FC98u;
label_30fc98:
    // 0x30fc98: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x30fc98u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x30fc9c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x30fc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x30fca0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30fca0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x30fca4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x30fca4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x30fca8: 0x0  nop
    ctx->pc = 0x30fca8u;
    // NOP
    // 0x30fcac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x30fcacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30fcb0: 0x8e260028  lw          $a2, 0x28($s1)
    ctx->pc = 0x30fcb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_30fcb4:
    // 0x30fcb4: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x30fcb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x30fcb8: 0x8e27002c  lw          $a3, 0x2C($s1)
    ctx->pc = 0x30fcb8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x30fcbc: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x30fcbcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x30fcc0: 0x2484bb10  addiu       $a0, $a0, -0x44F0
    ctx->pc = 0x30fcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949648));
    // 0x30fcc4: 0xc0c6534  jal         func_3194D0
    ctx->pc = 0x30FCC4u;
    SET_GPR_U32(ctx, 31, 0x30FCCCu);
    ctx->pc = 0x30FCC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FCC4u;
    // 0x30fcc8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3194D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3194D0u, 0x30FCC4u, 0x30FCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FCCCu;
label_30fccc:
    // 0x30fccc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x30FCCCu;
    {
        const bool branch_taken_0x30fccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FCCCu;
        // 0x30fcd0: 0x24460010  addiu       $a2, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fccc) {
            ctx->pc = 0x30FD08u;
            goto label_30fd08;
        }
    }
    ctx->pc = 0x30FCD4u;
    // 0x30fcd4: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x30fcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x30fcd8: 0x78670000  lq          $a3, 0x0($v1)
    ctx->pc = 0x30fcd8u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30fcdc: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x30fcdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x30fce0: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x30fce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x30fce4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x30fce4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fce8: 0x7cc70000  sq          $a3, 0x0($a2)
    ctx->pc = 0x30fce8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 7));
    // 0x30fcec: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x30fcecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x30fcf0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30fcf0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30fcf4: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x30fcf4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30fcf8: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x30fcf8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x30fcfc: 0xa0500034  sb          $s0, 0x34($v0)
    ctx->pc = 0x30fcfcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 52), (uint8_t)GPR_U32(ctx, 16));
    // 0x30fd00: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x30fd00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x30fd04: 0x0  nop
    ctx->pc = 0x30fd04u;
    // NOP
label_30fd08:
    // 0x30fd08: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x30fd08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x30fd0c: 0x0  nop
    ctx->pc = 0x30fd0cu;
    // NOP
label_30fd10:
    // 0x30fd10: 0x25e182b  sltu        $v1, $s2, $fp
    ctx->pc = 0x30fd10u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x30fd14: 0x1460ff5e  bnez        $v1, . + 4 + (-0xA2 << 2)
    ctx->pc = 0x30FD14u;
    {
        const bool branch_taken_0x30fd14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30fd14) {
            ctx->pc = 0x30FA90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30fa90;
        }
    }
    ctx->pc = 0x30FD1Cu;
    // 0x30fd1c: 0x92640000  lbu         $a0, 0x0($s3)
    ctx->pc = 0x30fd1cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x30fd20: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x30fd20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30fd24: 0x10830102  beq         $a0, $v1, . + 4 + (0x102 << 2)
    ctx->pc = 0x30FD24u;
    {
        const bool branch_taken_0x30fd24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x30FD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FD24u;
        // 0x30fd28: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fd24) {
            ctx->pc = 0x310130u;
            goto label_310130;
        }
    }
    ctx->pc = 0x30FD2Cu;
    // 0x30fd2c: 0x108300a2  beq         $a0, $v1, . + 4 + (0xA2 << 2)
    ctx->pc = 0x30FD2Cu;
    {
        const bool branch_taken_0x30fd2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x30fd2c) {
            ctx->pc = 0x30FFB8u;
            goto label_30ffb8;
        }
    }
    ctx->pc = 0x30FD34u;
    // 0x30fd34: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x30fd34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30fd38: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x30FD38u;
    {
        const bool branch_taken_0x30fd38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x30fd38) {
            ctx->pc = 0x30FD48u;
            goto label_30fd48;
        }
    }
    ctx->pc = 0x30FD40u;
    // 0x30fd40: 0x10000157  b           . + 4 + (0x157 << 2)
    ctx->pc = 0x30FD40u;
    {
        const bool branch_taken_0x30fd40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30fd40) {
            ctx->pc = 0x3102A0u;
            goto label_3102a0;
        }
    }
    ctx->pc = 0x30FD48u;
label_30fd48:
    // 0x30fd48: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30FD48u;
    {
        const bool branch_taken_0x30fd48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FD48u;
        // 0x30fd4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fd48) {
            ctx->pc = 0x30FD68u;
            goto label_30fd68;
        }
    }
    ctx->pc = 0x30FD50u;
label_30fd50:
    // 0x30fd50: 0x8ea40600  lw          $a0, 0x600($s5)
    ctx->pc = 0x30fd50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1536)));
    // 0x30fd54: 0x51980  sll         $v1, $a1, 6
    ctx->pc = 0x30fd54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x30fd58: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x30fd58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x30fd5c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30fd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30fd60: 0xa4600020  sh          $zero, 0x20($v1)
    ctx->pc = 0x30fd60u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x30fd64: 0x0  nop
    ctx->pc = 0x30fd64u;
    // NOP
label_30fd68:
    // 0x30fd68: 0xbe182b  sltu        $v1, $a1, $fp
    ctx->pc = 0x30fd68u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x30fd6c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x30FD6Cu;
    {
        const bool branch_taken_0x30fd6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30FD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FD6Cu;
        // 0x30fd70: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fd6c) {
            ctx->pc = 0x30FD50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30fd50;
        }
    }
    ctx->pc = 0x30FD74u;
    // 0x30fd74: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x30FD74u;
    {
        const bool branch_taken_0x30fd74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30fd74) {
            ctx->pc = 0x30FF98u;
            goto label_30ff98;
        }
    }
    ctx->pc = 0x30FD7Cu;
    // 0x30fd7c: 0x0  nop
    ctx->pc = 0x30fd7cu;
    // NOP
label_30fd80:
    // 0x30fd80: 0x240322b0  addiu       $v1, $zero, 0x22B0
    ctx->pc = 0x30fd80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8880));
    // 0x30fd84: 0x2432018  mult        $a0, $s2, $v1
    ctx->pc = 0x30fd84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x30fd88: 0x3c030081  lui         $v1, 0x81
    ctx->pc = 0x30fd88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)129 << 16));
    // 0x30fd8c: 0x24639648  addiu       $v1, $v1, -0x69B8
    ctx->pc = 0x30fd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940232));
    // 0x30fd90: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30fd90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30fd94: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x30fd94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30fd98: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x30fd98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x30fd9c: 0x2c8300ff  sltiu       $v1, $a0, 0xFF
    ctx->pc = 0x30fd9cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)255) ? 1 : 0);
    // 0x30fda0: 0x1460007b  bnez        $v1, . + 4 + (0x7B << 2)
    ctx->pc = 0x30FDA0u;
    {
        const bool branch_taken_0x30fda0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30fda0) {
            ctx->pc = 0x30FF90u;
            goto label_30ff90;
        }
    }
    ctx->pc = 0x30FDA8u;
    // 0x30fda8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x30fda8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x30fdac: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x30fdacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x30fdb0: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x30fdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x30fdb4: 0x10600076  beqz        $v1, . + 4 + (0x76 << 2)
    ctx->pc = 0x30FDB4u;
    {
        const bool branch_taken_0x30fdb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FDB4u;
        // 0x30fdb8: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fdb4) {
            ctx->pc = 0x30FF90u;
            goto label_30ff90;
        }
    }
    ctx->pc = 0x30FDBCu;
    // 0x30fdbc: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x30FDBCu;
    {
        const bool branch_taken_0x30fdbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30fdbc) {
            ctx->pc = 0x30FF78u;
            goto label_30ff78;
        }
    }
    ctx->pc = 0x30FDC4u;
    // 0x30fdc4: 0x0  nop
    ctx->pc = 0x30fdc4u;
    // NOP
label_30fdc8:
    // 0x30fdc8: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x30fdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x30fdcc: 0x162180  sll         $a0, $s6, 6
    ctx->pc = 0x30fdccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 22), 6));
    // 0x30fdd0: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x30fdd0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fdd4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30fdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30fdd8: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x30FDD8u;
    {
        const bool branch_taken_0x30fdd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FDD8u;
        // 0x30fddc: 0x24710010  addiu       $s1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fdd8) {
            ctx->pc = 0x30FF68u;
            goto label_30ff68;
        }
    }
    ctx->pc = 0x30FDE0u;
label_30fde0:
    // 0x30fde0: 0x8ea40600  lw          $a0, 0x600($s5)
    ctx->pc = 0x30fde0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1536)));
    // 0x30fde4: 0x172980  sll         $a1, $s7, 6
    ctx->pc = 0x30fde4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 23), 6));
    // 0x30fde8: 0x92830000  lbu         $v1, 0x0($s4)
    ctx->pc = 0x30fde8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x30fdec: 0x858021  addu        $s0, $a0, $a1
    ctx->pc = 0x30fdecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x30fdf0: 0x92040022  lbu         $a0, 0x22($s0)
    ctx->pc = 0x30fdf0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
    // 0x30fdf4: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x30fdf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x30fdf8: 0x31efe  dsrl32      $v1, $v1, 27
    ctx->pc = 0x30fdf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 27));
    // 0x30fdfc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x30fdfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x30fe00: 0x10600057  beqz        $v1, . + 4 + (0x57 << 2)
    ctx->pc = 0x30FE00u;
    {
        const bool branch_taken_0x30fe00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30fe00) {
            ctx->pc = 0x30FF60u;
            goto label_30ff60;
        }
    }
    ctx->pc = 0x30FE08u;
    // 0x30fe08: 0x96040020  lhu         $a0, 0x20($s0)
    ctx->pc = 0x30fe08u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x30fe0c: 0x96230030  lhu         $v1, 0x30($s1)
    ctx->pc = 0x30fe0cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x30fe10: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x30fe10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x30fe14: 0x14600052  bnez        $v1, . + 4 + (0x52 << 2)
    ctx->pc = 0x30FE14u;
    {
        const bool branch_taken_0x30fe14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30fe14) {
            ctx->pc = 0x30FF60u;
            goto label_30ff60;
        }
    }
    ctx->pc = 0x30FE1Cu;
    // 0x30fe1c: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x30fe1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30fe20: 0xc6030024  lwc1        $f3, 0x24($s0)
    ctx->pc = 0x30fe20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30fe24: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x30fe24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30fe28: 0x46031040  add.s       $f1, $f2, $f3
    ctx->pc = 0x30fe28u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x30fe2c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x30fe2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30fe30: 0x4501004b  bc1t        . + 4 + (0x4B << 2)
    ctx->pc = 0x30FE30u;
    {
        const bool branch_taken_0x30fe30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30fe30) {
            ctx->pc = 0x30FF60u;
            goto label_30ff60;
        }
    }
    ctx->pc = 0x30FE38u;
    // 0x30fe38: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x30fe38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30fe3c: 0x46031041  sub.s       $f1, $f2, $f3
    ctx->pc = 0x30fe3cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x30fe40: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x30fe40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30fe44: 0x45000046  bc1f        . + 4 + (0x46 << 2)
    ctx->pc = 0x30FE44u;
    {
        const bool branch_taken_0x30fe44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30fe44) {
            ctx->pc = 0x30FF60u;
            goto label_30ff60;
        }
    }
    ctx->pc = 0x30FE4Cu;
    // 0x30fe4c: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x30fe4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30fe50: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x30fe50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30fe54: 0x46031040  add.s       $f1, $f2, $f3
    ctx->pc = 0x30fe54u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x30fe58: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x30fe58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30fe5c: 0x45010040  bc1t        . + 4 + (0x40 << 2)
    ctx->pc = 0x30FE5Cu;
    {
        const bool branch_taken_0x30fe5c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30fe5c) {
            ctx->pc = 0x30FF60u;
            goto label_30ff60;
        }
    }
    ctx->pc = 0x30FE64u;
    // 0x30fe64: 0xc6200028  lwc1        $f0, 0x28($s1)
    ctx->pc = 0x30fe64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30fe68: 0x46031041  sub.s       $f1, $f2, $f3
    ctx->pc = 0x30fe68u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x30fe6c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x30fe6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30fe70: 0x4500003b  bc1f        . + 4 + (0x3B << 2)
    ctx->pc = 0x30FE70u;
    {
        const bool branch_taken_0x30fe70 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30fe70) {
            ctx->pc = 0x30FF60u;
            goto label_30ff60;
        }
    }
    ctx->pc = 0x30FE78u;
    // 0x30fe78: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x30fe78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30fe7c: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x30fe7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30fe80: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x30fe80u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x30fe84: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x30fe84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30fe88: 0x45010035  bc1t        . + 4 + (0x35 << 2)
    ctx->pc = 0x30FE88u;
    {
        const bool branch_taken_0x30fe88 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x30FE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FE88u;
        // 0x30fe8c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fe88) {
            ctx->pc = 0x30FF60u;
            goto label_30ff60;
        }
    }
    ctx->pc = 0x30FE90u;
    // 0x30fe90: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30fe90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fe94: 0x26860020  addiu       $a2, $s4, 0x20
    ctx->pc = 0x30fe94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x30fe98: 0xc0c3e44  jal         func_30F910
    ctx->pc = 0x30FE98u;
    SET_GPR_U32(ctx, 31, 0x30FEA0u);
    ctx->pc = 0x30FE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FE98u;
    // 0x30fe9c: 0x26870030  addiu       $a3, $s4, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30F910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F910u, 0x30FE98u, 0x30FEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FEA0u;
label_30fea0:
    // 0x30fea0: 0xc04d7b4  jal         func_135ED0
    ctx->pc = 0x30FEA0u;
    SET_GPR_U32(ctx, 31, 0x30FEA8u);
    ctx->pc = 0x30FEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FEA0u;
    // 0x30fea4: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x30FEA0u, 0x30FEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FEA8u;
label_30fea8:
    // 0x30fea8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x30fea8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x30feac: 0xc6800018  lwc1        $f0, 0x18($s4)
    ctx->pc = 0x30feacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30feb0: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x30feb0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30feb4: 0x4500002a  bc1f        . + 4 + (0x2A << 2)
    ctx->pc = 0x30FEB4u;
    {
        const bool branch_taken_0x30feb4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30FEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FEB4u;
        // 0x30feb8: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30feb4) {
            ctx->pc = 0x30FF60u;
            goto label_30ff60;
        }
    }
    ctx->pc = 0x30FEBCu;
    // 0x30febc: 0xc041472  jal         func_1051C8
    ctx->pc = 0x30FEBCu;
    SET_GPR_U32(ctx, 31, 0x30FEC4u);
    ctx->pc = 0x30FEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FEBCu;
    // 0x30fec0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x30FEBCu, 0x30FEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FEC4u;
label_30fec4:
    // 0x30fec4: 0xc6810014  lwc1        $f1, 0x14($s4)
    ctx->pc = 0x30fec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30fec8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x30fec8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30fecc: 0x0  nop
    ctx->pc = 0x30feccu;
    // NOP
    // 0x30fed0: 0x4601a501  sub.s       $f20, $f20, $f1
    ctx->pc = 0x30fed0u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
    // 0x30fed4: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x30fed4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30fed8: 0x0  nop
    ctx->pc = 0x30fed8u;
    // NOP
    // 0x30fedc: 0x0  nop
    ctx->pc = 0x30fedcu;
    // NOP
    // 0x30fee0: 0x96030020  lhu         $v1, 0x20($s0)
    ctx->pc = 0x30fee0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x30fee4: 0x96220032  lhu         $v0, 0x32($s1)
    ctx->pc = 0x30fee4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 50)));
    // 0x30fee8: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x30fee8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x30feec: 0x2484bb10  addiu       $a0, $a0, -0x44F0
    ctx->pc = 0x30feecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949648));
    // 0x30fef0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x30fef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30fef4: 0xa6020020  sh          $v0, 0x20($s0)
    ctx->pc = 0x30fef4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 2));
    // 0x30fef8: 0x8e060028  lw          $a2, 0x28($s0)
    ctx->pc = 0x30fef8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x30fefc: 0x8e07002c  lw          $a3, 0x2C($s0)
    ctx->pc = 0x30fefcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x30ff00: 0xc0c6534  jal         func_3194D0
    ctx->pc = 0x30FF00u;
    SET_GPR_U32(ctx, 31, 0x30FF08u);
    ctx->pc = 0x30FF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FF00u;
    // 0x30ff04: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3194D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3194D0u, 0x30FF00u, 0x30FF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FF08u;
label_30ff08:
    // 0x30ff08: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x30FF08u;
    {
        const bool branch_taken_0x30ff08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FF08u;
        // 0x30ff0c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ff08) {
            ctx->pc = 0x30FF60u;
            goto label_30ff60;
        }
    }
    ctx->pc = 0x30FF10u;
    // 0x30ff10: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x30ff10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x30ff14: 0x78670000  lq          $a3, 0x0($v1)
    ctx->pc = 0x30ff14u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30ff18: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x30ff18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ff1c: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x30ff1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x30ff20: 0x122600  sll         $a0, $s2, 24
    ctx->pc = 0x30ff20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 24));
    // 0x30ff24: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x30ff24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x30ff28: 0x161c00  sll         $v1, $s6, 16
    ctx->pc = 0x30ff28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 16));
    // 0x30ff2c: 0x7cc70000  sq          $a3, 0x0($a2)
    ctx->pc = 0x30ff2cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 7));
    // 0x30ff30: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x30ff30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x30ff34: 0x7a240000  lq          $a0, 0x0($s1)
    ctx->pc = 0x30ff34u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30ff38: 0x2e31825  or          $v1, $s7, $v1
    ctx->pc = 0x30ff38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) | GPR_U64(ctx, 3));
    // 0x30ff3c: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x30ff3cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x30ff40: 0x92640001  lbu         $a0, 0x1($s3)
    ctx->pc = 0x30ff40u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x30ff44: 0xa0440033  sb          $a0, 0x33($v0)
    ctx->pc = 0x30ff44u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 51), (uint8_t)GPR_U32(ctx, 4));
    // 0x30ff48: 0x92240036  lbu         $a0, 0x36($s1)
    ctx->pc = 0x30ff48u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 54)));
    // 0x30ff4c: 0xa0440032  sb          $a0, 0x32($v0)
    ctx->pc = 0x30ff4cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 50), (uint8_t)GPR_U32(ctx, 4));
    // 0x30ff50: 0x96240034  lhu         $a0, 0x34($s1)
    ctx->pc = 0x30ff50u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x30ff54: 0xa4440030  sh          $a0, 0x30($v0)
    ctx->pc = 0x30ff54u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 48), (uint16_t)GPR_U32(ctx, 4));
    // 0x30ff58: 0xac430034  sw          $v1, 0x34($v0)
    ctx->pc = 0x30ff58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 3));
    // 0x30ff5c: 0x0  nop
    ctx->pc = 0x30ff5cu;
    // NOP
label_30ff60:
    // 0x30ff60: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x30ff60u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x30ff64: 0x0  nop
    ctx->pc = 0x30ff64u;
    // NOP
label_30ff68:
    // 0x30ff68: 0x2fe182b  sltu        $v1, $s7, $fp
    ctx->pc = 0x30ff68u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x30ff6c: 0x1460ff9c  bnez        $v1, . + 4 + (-0x64 << 2)
    ctx->pc = 0x30FF6Cu;
    {
        const bool branch_taken_0x30ff6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30ff6c) {
            ctx->pc = 0x30FDE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30fde0;
        }
    }
    ctx->pc = 0x30FF74u;
    // 0x30ff74: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x30ff74u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_30ff78:
    // 0x30ff78: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x30ff78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x30ff7c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x30ff7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x30ff80: 0x2c3182b  sltu        $v1, $s6, $v1
    ctx->pc = 0x30ff80u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x30ff84: 0x1460ff90  bnez        $v1, . + 4 + (-0x70 << 2)
    ctx->pc = 0x30FF84u;
    {
        const bool branch_taken_0x30ff84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30ff84) {
            ctx->pc = 0x30FDC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30fdc8;
        }
    }
    ctx->pc = 0x30FF8Cu;
    // 0x30ff8c: 0x0  nop
    ctx->pc = 0x30ff8cu;
    // NOP
label_30ff90:
    // 0x30ff90: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x30ff90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x30ff94: 0x0  nop
    ctx->pc = 0x30ff94u;
    // NOP
label_30ff98:
    // 0x30ff98: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x30ff98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x30ff9c: 0x902395a1  lbu         $v1, -0x6A5F($at)
    ctx->pc = 0x30ff9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8095A1u));
    // 0x30ffa0: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x30ffa0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x30ffa4: 0x1460ff76  bnez        $v1, . + 4 + (-0x8A << 2)
    ctx->pc = 0x30FFA4u;
    {
        const bool branch_taken_0x30ffa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30ffa4) {
            ctx->pc = 0x30FD80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30fd80;
        }
    }
    ctx->pc = 0x30FFACu;
    // 0x30ffac: 0x100000bc  b           . + 4 + (0xBC << 2)
    ctx->pc = 0x30FFACu;
    {
        const bool branch_taken_0x30ffac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ffac) {
            ctx->pc = 0x3102A0u;
            goto label_3102a0;
        }
    }
    ctx->pc = 0x30FFB4u;
    // 0x30ffb4: 0x0  nop
    ctx->pc = 0x30ffb4u;
    // NOP
label_30ffb8:
    // 0x30ffb8: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x30FFB8u;
    {
        const bool branch_taken_0x30ffb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FFB8u;
        // 0x30ffbc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ffb8) {
            ctx->pc = 0x310118u;
            goto label_310118;
        }
    }
    ctx->pc = 0x30FFC0u;
label_30ffc0:
    // 0x30ffc0: 0x8ea40600  lw          $a0, 0x600($s5)
    ctx->pc = 0x30ffc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1536)));
    // 0x30ffc4: 0x122980  sll         $a1, $s2, 6
    ctx->pc = 0x30ffc4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x30ffc8: 0x92830000  lbu         $v1, 0x0($s4)
    ctx->pc = 0x30ffc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x30ffcc: 0x858821  addu        $s1, $a0, $a1
    ctx->pc = 0x30ffccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x30ffd0: 0x92240022  lbu         $a0, 0x22($s1)
    ctx->pc = 0x30ffd0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 34)));
    // 0x30ffd4: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x30ffd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x30ffd8: 0x31efe  dsrl32      $v1, $v1, 27
    ctx->pc = 0x30ffd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 27));
    // 0x30ffdc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x30ffdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x30ffe0: 0x1060004b  beqz        $v1, . + 4 + (0x4B << 2)
    ctx->pc = 0x30FFE0u;
    {
        const bool branch_taken_0x30ffe0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FFE0u;
        // 0x30ffe4: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ffe0) {
            ctx->pc = 0x310110u;
            goto label_310110;
        }
    }
    ctx->pc = 0x30FFE8u;
    // 0x30ffe8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x30ffe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ffec: 0x26860020  addiu       $a2, $s4, 0x20
    ctx->pc = 0x30ffecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x30fff0: 0xc0c3e44  jal         func_30F910
    ctx->pc = 0x30FFF0u;
    SET_GPR_U32(ctx, 31, 0x30FFF8u);
    ctx->pc = 0x30FFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FFF0u;
    // 0x30fff4: 0x26870030  addiu       $a3, $s4, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30F910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F910u, 0x30FFF0u, 0x30FFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FFF8u;
label_30fff8:
    // 0x30fff8: 0xc04d7b4  jal         func_135ED0
    ctx->pc = 0x30FFF8u;
    SET_GPR_U32(ctx, 31, 0x310000u);
    ctx->pc = 0x30FFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FFF8u;
    // 0x30fffc: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x30FFF8u, 0x310000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310000u;
label_310000:
    // 0x310000: 0xc6810018  lwc1        $f1, 0x18($s4)
    ctx->pc = 0x310000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x310004: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x310004u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x310008: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x310008u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x31000c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x31000cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x310010: 0x4500003f  bc1f        . + 4 + (0x3F << 2)
    ctx->pc = 0x310010u;
    {
        const bool branch_taken_0x310010 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x310010) {
            ctx->pc = 0x310110u;
            goto label_310110;
        }
    }
    ctx->pc = 0x310018u;
    // 0x310018: 0xc6820014  lwc1        $f2, 0x14($s4)
    ctx->pc = 0x310018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31001c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x31001cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x310020: 0x0  nop
    ctx->pc = 0x310020u;
    // NOP
    // 0x310024: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x310024u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x310028: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x310028u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31002c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x31002Cu;
    {
        const bool branch_taken_0x31002c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31002c) {
            ctx->pc = 0x310040u;
            goto label_310040;
        }
    }
    ctx->pc = 0x310034u;
    // 0x310034: 0xc6810010  lwc1        $f1, 0x10($s4)
    ctx->pc = 0x310034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x310038: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x310038u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x31003c: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x31003cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_310040:
    // 0x310040: 0x92620001  lbu         $v0, 0x1($s3)
    ctx->pc = 0x310040u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x310044: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x310044u;
    {
        const bool branch_taken_0x310044 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x310048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310044u;
        // 0x310048: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310044) {
            ctx->pc = 0x310058u;
            goto label_310058;
        }
    }
    ctx->pc = 0x31004Cu;
    // 0x31004c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31004cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x310050: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x310050u;
    {
        const bool branch_taken_0x310050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310050u;
        // 0x310054: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x310050) {
            ctx->pc = 0x310070u;
            goto label_310070;
        }
    }
    ctx->pc = 0x310058u;
label_310058:
    // 0x310058: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x310058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x31005c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x31005cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x310060: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x310060u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x310064: 0x0  nop
    ctx->pc = 0x310064u;
    // NOP
    // 0x310068: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x310068u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x31006c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x31006cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_310070:
    // 0x310070: 0xc6210030  lwc1        $f1, 0x30($s1)
    ctx->pc = 0x310070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x310074: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x310074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x310078: 0x46030082  mul.s       $f2, $f0, $f3
    ctx->pc = 0x310078u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x31007c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x31007cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x310080: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x310080u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x310084: 0x0  nop
    ctx->pc = 0x310084u;
    // NOP
    // 0x310088: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x310088u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31008c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x31008Cu;
    {
        const bool branch_taken_0x31008c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31008c) {
            ctx->pc = 0x3100A4u;
            goto label_3100a4;
        }
    }
    ctx->pc = 0x310094u;
    // 0x310094: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x310094u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x310098: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x310098u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x31009c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x31009Cu;
    {
        const bool branch_taken_0x31009c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3100A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31009Cu;
        // 0x3100a0: 0x8e260028  lw          $a2, 0x28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31009c) {
            ctx->pc = 0x3100C0u;
            goto label_3100c0;
        }
    }
    ctx->pc = 0x3100A4u;
label_3100a4:
    // 0x3100a4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3100a4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3100a8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3100a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3100ac: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3100acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3100b0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3100b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3100b4: 0x0  nop
    ctx->pc = 0x3100b4u;
    // NOP
    // 0x3100b8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3100b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3100bc: 0x8e260028  lw          $a2, 0x28($s1)
    ctx->pc = 0x3100bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_3100c0:
    // 0x3100c0: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x3100c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x3100c4: 0x8e27002c  lw          $a3, 0x2C($s1)
    ctx->pc = 0x3100c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x3100c8: 0x307600ff  andi        $s6, $v1, 0xFF
    ctx->pc = 0x3100c8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3100cc: 0x2484bb10  addiu       $a0, $a0, -0x44F0
    ctx->pc = 0x3100ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949648));
    // 0x3100d0: 0xc0c6534  jal         func_3194D0
    ctx->pc = 0x3100D0u;
    SET_GPR_U32(ctx, 31, 0x3100D8u);
    ctx->pc = 0x3100D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3100D0u;
    // 0x3100d4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3194D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3194D0u, 0x3100D0u, 0x3100D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3100D8u;
label_3100d8:
    // 0x3100d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3100d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3100dc: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x3100DCu;
    {
        const bool branch_taken_0x3100dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3100E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3100DCu;
        // 0x3100e0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3100dc) {
            ctx->pc = 0x310110u;
            goto label_310110;
        }
    }
    ctx->pc = 0x3100E4u;
    // 0x3100e4: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x3100e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3100e8: 0xc0414ca  jal         func_105328
    ctx->pc = 0x3100E8u;
    SET_GPR_U32(ctx, 31, 0x3100F0u);
    ctx->pc = 0x3100ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3100E8u;
    // 0x3100ec: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x3100E8u, 0x3100F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3100F0u;
label_3100f0:
    // 0x3100f0: 0xa2000013  sb          $zero, 0x13($s0)
    ctx->pc = 0x3100f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 19), (uint8_t)GPR_U32(ctx, 0));
    // 0x3100f4: 0xa2160012  sb          $s6, 0x12($s0)
    ctx->pc = 0x3100f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 18), (uint8_t)GPR_U32(ctx, 22));
    // 0x3100f8: 0x92630002  lbu         $v1, 0x2($s3)
    ctx->pc = 0x3100f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x3100fc: 0xa2030011  sb          $v1, 0x11($s0)
    ctx->pc = 0x3100fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 17), (uint8_t)GPR_U32(ctx, 3));
    // 0x310100: 0x92630003  lbu         $v1, 0x3($s3)
    ctx->pc = 0x310100u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
    // 0x310104: 0xa2030010  sb          $v1, 0x10($s0)
    ctx->pc = 0x310104u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x310108: 0xc680001c  lwc1        $f0, 0x1C($s4)
    ctx->pc = 0x310108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31010c: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x31010cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_310110:
    // 0x310110: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x310110u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x310114: 0x0  nop
    ctx->pc = 0x310114u;
    // NOP
label_310118:
    // 0x310118: 0x25e182b  sltu        $v1, $s2, $fp
    ctx->pc = 0x310118u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x31011c: 0x1460ffa8  bnez        $v1, . + 4 + (-0x58 << 2)
    ctx->pc = 0x31011Cu;
    {
        const bool branch_taken_0x31011c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31011c) {
            ctx->pc = 0x30FFC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30ffc0;
        }
    }
    ctx->pc = 0x310124u;
    // 0x310124: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x310124u;
    {
        const bool branch_taken_0x310124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310124) {
            ctx->pc = 0x3102A0u;
            goto label_3102a0;
        }
    }
    ctx->pc = 0x31012Cu;
    // 0x31012c: 0x0  nop
    ctx->pc = 0x31012cu;
    // NOP
label_310130:
    // 0x310130: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x310130u;
    {
        const bool branch_taken_0x310130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310130u;
        // 0x310134: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310130) {
            ctx->pc = 0x310290u;
            goto label_310290;
        }
    }
    ctx->pc = 0x310138u;
label_310138:
    // 0x310138: 0x8ea40600  lw          $a0, 0x600($s5)
    ctx->pc = 0x310138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1536)));
    // 0x31013c: 0x122980  sll         $a1, $s2, 6
    ctx->pc = 0x31013cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x310140: 0x92830000  lbu         $v1, 0x0($s4)
    ctx->pc = 0x310140u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x310144: 0x858821  addu        $s1, $a0, $a1
    ctx->pc = 0x310144u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x310148: 0x92240022  lbu         $a0, 0x22($s1)
    ctx->pc = 0x310148u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 34)));
    // 0x31014c: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x31014cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x310150: 0x31efe  dsrl32      $v1, $v1, 27
    ctx->pc = 0x310150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 27));
    // 0x310154: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x310154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x310158: 0x1060004b  beqz        $v1, . + 4 + (0x4B << 2)
    ctx->pc = 0x310158u;
    {
        const bool branch_taken_0x310158 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31015Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310158u;
        // 0x31015c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310158) {
            ctx->pc = 0x310288u;
            goto label_310288;
        }
    }
    ctx->pc = 0x310160u;
    // 0x310160: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x310160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310164: 0x26860020  addiu       $a2, $s4, 0x20
    ctx->pc = 0x310164u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x310168: 0xc0c3e44  jal         func_30F910
    ctx->pc = 0x310168u;
    SET_GPR_U32(ctx, 31, 0x310170u);
    ctx->pc = 0x31016Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310168u;
    // 0x31016c: 0x26870030  addiu       $a3, $s4, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30F910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F910u, 0x310168u, 0x310170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310170u;
label_310170:
    // 0x310170: 0xc04d7b4  jal         func_135ED0
    ctx->pc = 0x310170u;
    SET_GPR_U32(ctx, 31, 0x310178u);
    ctx->pc = 0x310174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310170u;
    // 0x310174: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x310170u, 0x310178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310178u;
label_310178:
    // 0x310178: 0xc6810018  lwc1        $f1, 0x18($s4)
    ctx->pc = 0x310178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31017c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x31017cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x310180: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x310180u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x310184: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x310184u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x310188: 0x4500003f  bc1f        . + 4 + (0x3F << 2)
    ctx->pc = 0x310188u;
    {
        const bool branch_taken_0x310188 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x310188) {
            ctx->pc = 0x310288u;
            goto label_310288;
        }
    }
    ctx->pc = 0x310190u;
    // 0x310190: 0xc6820014  lwc1        $f2, 0x14($s4)
    ctx->pc = 0x310190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x310194: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x310194u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x310198: 0x0  nop
    ctx->pc = 0x310198u;
    // NOP
    // 0x31019c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x31019cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x3101a0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3101a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3101a4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x3101A4u;
    {
        const bool branch_taken_0x3101a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3101a4) {
            ctx->pc = 0x3101B8u;
            goto label_3101b8;
        }
    }
    ctx->pc = 0x3101ACu;
    // 0x3101ac: 0xc6810010  lwc1        $f1, 0x10($s4)
    ctx->pc = 0x3101acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3101b0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3101b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3101b4: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x3101b4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_3101b8:
    // 0x3101b8: 0x92620001  lbu         $v0, 0x1($s3)
    ctx->pc = 0x3101b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x3101bc: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3101BCu;
    {
        const bool branch_taken_0x3101bc = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3101C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3101BCu;
        // 0x3101c0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3101bc) {
            ctx->pc = 0x3101D0u;
            goto label_3101d0;
        }
    }
    ctx->pc = 0x3101C4u;
    // 0x3101c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3101c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3101c8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3101C8u;
    {
        const bool branch_taken_0x3101c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3101CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3101C8u;
        // 0x3101cc: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3101c8) {
            ctx->pc = 0x3101E8u;
            goto label_3101e8;
        }
    }
    ctx->pc = 0x3101D0u;
label_3101d0:
    // 0x3101d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3101d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3101d4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3101d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3101d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3101d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3101dc: 0x0  nop
    ctx->pc = 0x3101dcu;
    // NOP
    // 0x3101e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3101e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3101e4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3101e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3101e8:
    // 0x3101e8: 0xc6210030  lwc1        $f1, 0x30($s1)
    ctx->pc = 0x3101e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3101ec: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3101ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3101f0: 0x46030082  mul.s       $f2, $f0, $f3
    ctx->pc = 0x3101f0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x3101f4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3101f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3101f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3101f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3101fc: 0x0  nop
    ctx->pc = 0x3101fcu;
    // NOP
    // 0x310200: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x310200u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x310204: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x310204u;
    {
        const bool branch_taken_0x310204 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x310204) {
            ctx->pc = 0x31021Cu;
            goto label_31021c;
        }
    }
    ctx->pc = 0x31020Cu;
    // 0x31020c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31020cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x310210: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x310210u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x310214: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x310214u;
    {
        const bool branch_taken_0x310214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310214u;
        // 0x310218: 0x8e260028  lw          $a2, 0x28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310214) {
            ctx->pc = 0x310238u;
            goto label_310238;
        }
    }
    ctx->pc = 0x31021Cu;
label_31021c:
    // 0x31021c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x31021cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x310220: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x310220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x310224: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x310224u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x310228: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x310228u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x31022c: 0x0  nop
    ctx->pc = 0x31022cu;
    // NOP
    // 0x310230: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x310230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x310234: 0x8e260028  lw          $a2, 0x28($s1)
    ctx->pc = 0x310234u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_310238:
    // 0x310238: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x310238u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x31023c: 0x8e27002c  lw          $a3, 0x2C($s1)
    ctx->pc = 0x31023cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x310240: 0x307600ff  andi        $s6, $v1, 0xFF
    ctx->pc = 0x310240u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x310244: 0x2484bb10  addiu       $a0, $a0, -0x44F0
    ctx->pc = 0x310244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949648));
    // 0x310248: 0xc0c6534  jal         func_3194D0
    ctx->pc = 0x310248u;
    SET_GPR_U32(ctx, 31, 0x310250u);
    ctx->pc = 0x31024Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310248u;
    // 0x31024c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3194D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3194D0u, 0x310248u, 0x310250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310250u;
label_310250:
    // 0x310250: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x310250u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310254: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x310254u;
    {
        const bool branch_taken_0x310254 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x310258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310254u;
        // 0x310258: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310254) {
            ctx->pc = 0x310288u;
            goto label_310288;
        }
    }
    ctx->pc = 0x31025Cu;
    // 0x31025c: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x31025cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x310260: 0xc0414ca  jal         func_105328
    ctx->pc = 0x310260u;
    SET_GPR_U32(ctx, 31, 0x310268u);
    ctx->pc = 0x310264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310260u;
    // 0x310264: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x310260u, 0x310268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310268u;
label_310268:
    // 0x310268: 0xa2000013  sb          $zero, 0x13($s0)
    ctx->pc = 0x310268u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 19), (uint8_t)GPR_U32(ctx, 0));
    // 0x31026c: 0xa2160012  sb          $s6, 0x12($s0)
    ctx->pc = 0x31026cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 18), (uint8_t)GPR_U32(ctx, 22));
    // 0x310270: 0x92630002  lbu         $v1, 0x2($s3)
    ctx->pc = 0x310270u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x310274: 0xa2030011  sb          $v1, 0x11($s0)
    ctx->pc = 0x310274u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 17), (uint8_t)GPR_U32(ctx, 3));
    // 0x310278: 0x92630003  lbu         $v1, 0x3($s3)
    ctx->pc = 0x310278u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
    // 0x31027c: 0xa2030010  sb          $v1, 0x10($s0)
    ctx->pc = 0x31027cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x310280: 0xc680001c  lwc1        $f0, 0x1C($s4)
    ctx->pc = 0x310280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x310284: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x310284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_310288:
    // 0x310288: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x310288u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x31028c: 0x0  nop
    ctx->pc = 0x31028cu;
    // NOP
label_310290:
    // 0x310290: 0x25e182b  sltu        $v1, $s2, $fp
    ctx->pc = 0x310290u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x310294: 0x1460ffa8  bnez        $v1, . + 4 + (-0x58 << 2)
    ctx->pc = 0x310294u;
    {
        const bool branch_taken_0x310294 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x310294) {
            ctx->pc = 0x310138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_310138;
        }
    }
    ctx->pc = 0x31029Cu;
    // 0x31029c: 0x0  nop
    ctx->pc = 0x31029cu;
    // NOP
label_3102a0:
    // 0x3102a0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x3102a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3102a4: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x3102a4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3102a8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3102a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3102ac: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x3102acu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3102b0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3102b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3102b4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x3102b4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3102b8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3102b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3102bc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3102bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3102c0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3102c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3102c4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3102c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3102c8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3102c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3102cc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3102ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3102d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3102D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3102D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3102D0u;
        // 0x3102d4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3102D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3102D8u;
}
