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

// Function: sub_0013AAC0
// Address: 0x13aac0 - 0x13b0a0
void sub_0013AAC0_0x13aac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013AAC0_0x13aac0");
#endif

    switch (ctx->pc) {
        case 0x13ab54u: goto label_13ab54;
        case 0x13ab70u: goto label_13ab70;
        case 0x13aba8u: goto label_13aba8;
        case 0x13abc0u: goto label_13abc0;
        case 0x13ac90u: goto label_13ac90;
        case 0x13ace0u: goto label_13ace0;
        case 0x13ada0u: goto label_13ada0;
        case 0x13adccu: goto label_13adcc;
        case 0x13ae40u: goto label_13ae40;
        case 0x13ae58u: goto label_13ae58;
        case 0x13af28u: goto label_13af28;
        case 0x13af40u: goto label_13af40;
        case 0x13afb8u: goto label_13afb8;
        default: break;
    }

    ctx->pc = 0x13aac0u;

    // 0x13aac0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x13aac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x13aac4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x13aac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x13aac8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x13aac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x13aacc: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x13aaccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x13aad0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x13aad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x13aad4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x13aad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x13aad8: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x13aad8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13aadc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x13aadcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x13aae0: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x13aae0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13aae4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x13aae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x13aae8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x13aae8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13aaec: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x13aaecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x13aaf0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x13aaf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x13aaf4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13aaf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13aaf8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x13aaf8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x13aafc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x13aafcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x13ab00: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x13ab00u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x13ab04: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x13ab04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x13ab08: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13AB08u;
    {
        const bool branch_taken_0x13ab08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AB08u;
        // 0x13ab0c: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ab08) {
            ctx->pc = 0x13AB18u;
            goto label_13ab18;
        }
    }
    ctx->pc = 0x13AB10u;
    // 0x13ab10: 0x10000157  b           . + 4 + (0x157 << 2)
    ctx->pc = 0x13AB10u;
    {
        const bool branch_taken_0x13ab10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AB10u;
        // 0x13ab14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ab10) {
            ctx->pc = 0x13B070u;
            goto label_13b070;
        }
    }
    ctx->pc = 0x13AB18u;
label_13ab18:
    // 0x13ab18: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x13ab18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x13ab1c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x13ab1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x13ab20: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13AB20u;
    {
        const bool branch_taken_0x13ab20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AB20u;
        // 0x13ab24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ab20) {
            ctx->pc = 0x13AB30u;
            goto label_13ab30;
        }
    }
    ctx->pc = 0x13AB28u;
    // 0x13ab28: 0x10000151  b           . + 4 + (0x151 << 2)
    ctx->pc = 0x13AB28u;
    {
        const bool branch_taken_0x13ab28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ab28) {
            ctx->pc = 0x13B070u;
            goto label_13b070;
        }
    }
    ctx->pc = 0x13AB30u;
label_13ab30:
    // 0x13ab30: 0x96820004  lhu         $v0, 0x4($s4)
    ctx->pc = 0x13ab30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x13ab34: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13AB34u;
    {
        const bool branch_taken_0x13ab34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13AB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AB34u;
        // 0x13ab38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ab34) {
            ctx->pc = 0x13AB48u;
            goto label_13ab48;
        }
    }
    ctx->pc = 0x13AB3Cu;
    // 0x13ab3c: 0x1000014c  b           . + 4 + (0x14C << 2)
    ctx->pc = 0x13AB3Cu;
    {
        const bool branch_taken_0x13ab3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ab3c) {
            ctx->pc = 0x13B070u;
            goto label_13b070;
        }
    }
    ctx->pc = 0x13AB44u;
    // 0x13ab44: 0x0  nop
    ctx->pc = 0x13ab44u;
    // NOP
label_13ab48:
    // 0x13ab48: 0x26850f60  addiu       $a1, $s4, 0xF60
    ctx->pc = 0x13ab48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 3936));
    // 0x13ab4c: 0xc04ecd0  jal         func_13B340
    ctx->pc = 0x13AB4Cu;
    SET_GPR_U32(ctx, 31, 0x13AB54u);
    ctx->pc = 0x13AB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AB4Cu;
    // 0x13ab50: 0x26860f70  addiu       $a2, $s4, 0xF70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 3952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B340u, 0x13AB4Cu, 0x13AB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AB54u;
label_13ab54:
    // 0x13ab54: 0xff828538  sd          $v0, -0x7AC8($gp)
    ctx->pc = 0x13ab54u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294935864), GPR_U64(ctx, 2));
    // 0x13ab58: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x13ab58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x13ab5c: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x13ab5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
    // 0x13ab60: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x13ab60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x13ab64: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x13ab64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x13ab68: 0x100000e5  b           . + 4 + (0xE5 << 2)
    ctx->pc = 0x13AB68u;
    {
        const bool branch_taken_0x13ab68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AB68u;
        // 0x13ab6c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ab68) {
            ctx->pc = 0x13AF00u;
            goto label_13af00;
        }
    }
    ctx->pc = 0x13AB70u;
label_13ab70:
    // 0x13ab70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13ab70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13ab74: 0x2421814  dsllv       $v1, $v0, $s2
    ctx->pc = 0x13ab74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (GPR_U32(ctx, 18) & 0x3F));
    // 0x13ab78: 0xdf828538  ld          $v0, -0x7AC8($gp)
    ctx->pc = 0x13ab78u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935864)));
    // 0x13ab7c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13ab7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x13ab80: 0x104000dd  beqz        $v0, . + 4 + (0xDD << 2)
    ctx->pc = 0x13AB80u;
    {
        const bool branch_taken_0x13ab80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ab80) {
            ctx->pc = 0x13AEF8u;
            goto label_13aef8;
        }
    }
    ctx->pc = 0x13AB88u;
    // 0x13ab88: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x13ab88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x13ab8c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13ab8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x13ab90: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x13AB90u;
    {
        const bool branch_taken_0x13ab90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AB90u;
        // 0x13ab94: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ab90) {
            ctx->pc = 0x13AC60u;
            goto label_13ac60;
        }
    }
    ctx->pc = 0x13AB98u;
    // 0x13ab98: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x13ab98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x13ab9c: 0x8c500ad0  lw          $s0, 0xAD0($v0)
    ctx->pc = 0x13ab9cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2768)));
    // 0x13aba0: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x13ABA0u;
    {
        const bool branch_taken_0x13aba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13ABA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ABA0u;
        // 0x13aba4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13aba0) {
            ctx->pc = 0x13AC48u;
            goto label_13ac48;
        }
    }
    ctx->pc = 0x13ABA8u;
label_13aba8:
    // 0x13aba8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x13aba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13abac: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x13abacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x13abb0: 0x26060050  addiu       $a2, $s0, 0x50
    ctx->pc = 0x13abb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x13abb4: 0x26870f60  addiu       $a3, $s4, 0xF60
    ctx->pc = 0x13abb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 3936));
    // 0x13abb8: 0xc04e6a8  jal         func_139AA0
    ctx->pc = 0x13ABB8u;
    SET_GPR_U32(ctx, 31, 0x13ABC0u);
    ctx->pc = 0x13ABBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13ABB8u;
    // 0x13abbc: 0x26880f70  addiu       $t0, $s4, 0xF70 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 3952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139AA0u, 0x13ABB8u, 0x13ABC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13ABC0u;
label_13abc0:
    // 0x13abc0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x13abc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13abc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13abc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13abc8: 0x1462001d  bne         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x13ABC8u;
    {
        const bool branch_taken_0x13abc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13abc8) {
            ctx->pc = 0x13AC40u;
            goto label_13ac40;
        }
    }
    ctx->pc = 0x13ABD0u;
    // 0x13abd0: 0xc6650004  lwc1        $f5, 0x4($s3)
    ctx->pc = 0x13abd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x13abd4: 0xc6840f64  lwc1        $f4, 0xF64($s4)
    ctx->pc = 0x13abd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 3940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x13abd8: 0xc6630000  lwc1        $f3, 0x0($s3)
    ctx->pc = 0x13abd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13abdc: 0xc6820f60  lwc1        $f2, 0xF60($s4)
    ctx->pc = 0x13abdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 3936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13abe0: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x13abe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13abe4: 0xc6800f68  lwc1        $f0, 0xF68($s4)
    ctx->pc = 0x13abe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 3944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13abe8: 0x46042901  sub.s       $f4, $f5, $f4
    ctx->pc = 0x13abe8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x13abec: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x13abecu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x13abf0: 0x46042102  mul.s       $f4, $f4, $f4
    ctx->pc = 0x13abf0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x13abf4: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x13abf4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x13abf8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x13abf8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x13abfc: 0x46041018  adda.s      $f2, $f4
    ctx->pc = 0x13abfcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[2], ctx->f[4]));
    // 0x13ac00: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x13ac00u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x13ac04: 0x46000544  c1          0x544
    ctx->pc = 0x13ac04u;
    ctx->f[21] = FPU_SQRT_S(ctx->f[0]);
    // 0x13ac08: 0x0  nop
    ctx->pc = 0x13ac08u;
    // NOP
    // 0x13ac0c: 0x0  nop
    ctx->pc = 0x13ac0cu;
    // NOP
    // 0x13ac10: 0x4614a836  c.le.s      $f21, $f20
    ctx->pc = 0x13ac10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13ac14: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x13AC14u;
    {
        const bool branch_taken_0x13ac14 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13ac14) {
            ctx->pc = 0x13AC40u;
            goto label_13ac40;
        }
    }
    ctx->pc = 0x13AC1Cu;
    // 0x13ac1c: 0x4600ad06  mov.s       $f20, $f21
    ctx->pc = 0x13ac1cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[21]);
    // 0x13ac20: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x13ac20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x13ac24: 0x7a640000  lq          $a0, 0x0($s3)
    ctx->pc = 0x13ac24u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x13ac28: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13ac28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ac2c: 0x26020050  addiu       $v0, $s0, 0x50
    ctx->pc = 0x13ac2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x13ac30: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x13ac30u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x13ac34: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x13ac34u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13ac38: 0x7ec20000  sq          $v0, 0x0($s6)
    ctx->pc = 0x13ac38u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), GPR_VEC(ctx, 2));
    // 0x13ac3c: 0x0  nop
    ctx->pc = 0x13ac3cu;
    // NOP
label_13ac40:
    // 0x13ac40: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x13ac40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x13ac44: 0x26100070  addiu       $s0, $s0, 0x70
    ctx->pc = 0x13ac44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_13ac48:
    // 0x13ac48: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x13ac48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x13ac4c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x13ac4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x13ac50: 0x9442085c  lhu         $v0, 0x85C($v0)
    ctx->pc = 0x13ac50u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2140)));
    // 0x13ac54: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x13ac54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x13ac58: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x13AC58u;
    {
        const bool branch_taken_0x13ac58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ac58) {
            ctx->pc = 0x13ABA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13aba8;
        }
    }
    ctx->pc = 0x13AC60u;
label_13ac60:
    // 0x13ac60: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x13ac60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x13ac64: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x13ac64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x13ac68: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13AC68u;
    {
        const bool branch_taken_0x13ac68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13AC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AC68u;
        // 0x13ac6c: 0x30622000  andi        $v0, $v1, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ac68) {
            ctx->pc = 0x13AC78u;
            goto label_13ac78;
        }
    }
    ctx->pc = 0x13AC70u;
    // 0x13ac70: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x13AC70u;
    {
        const bool branch_taken_0x13ac70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ac70) {
            ctx->pc = 0x13AD80u;
            goto label_13ad80;
        }
    }
    ctx->pc = 0x13AC78u;
label_13ac78:
    // 0x13ac78: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x13ac78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x13ac7c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x13ac7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x13ac80: 0x8c500bd0  lw          $s0, 0xBD0($v0)
    ctx->pc = 0x13ac80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3024)));
    // 0x13ac84: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x13AC84u;
    {
        const bool branch_taken_0x13ac84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AC84u;
        // 0x13ac88: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ac84) {
            ctx->pc = 0x13AD68u;
            goto label_13ad68;
        }
    }
    ctx->pc = 0x13AC8Cu;
    // 0x13ac8c: 0x0  nop
    ctx->pc = 0x13ac8cu;
    // NOP
label_13ac90:
    // 0x13ac90: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x13ac90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x13ac94: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x13ac94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x13ac98: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13AC98u;
    {
        const bool branch_taken_0x13ac98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ac98) {
            ctx->pc = 0x13ACB8u;
            goto label_13acb8;
        }
    }
    ctx->pc = 0x13ACA0u;
    // 0x13aca0: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x13ACA0u;
    {
        const bool branch_taken_0x13aca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13aca0) {
            ctx->pc = 0x13AD60u;
            goto label_13ad60;
        }
    }
    ctx->pc = 0x13ACA8u;
    // 0x13aca8: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x13aca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x13acac: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x13acacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x13acb0: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x13ACB0u;
    {
        const bool branch_taken_0x13acb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13acb0) {
            ctx->pc = 0x13AD60u;
            goto label_13ad60;
        }
    }
    ctx->pc = 0x13ACB8u;
label_13acb8:
    // 0x13acb8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x13acb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x13acbc: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x13acbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x13acc0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x13acc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x13acc4: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x13ACC4u;
    {
        const bool branch_taken_0x13acc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13ACC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ACC4u;
        // 0x13acc8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13acc4) {
            ctx->pc = 0x13AD60u;
            goto label_13ad60;
        }
    }
    ctx->pc = 0x13ACCCu;
    // 0x13accc: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x13acccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x13acd0: 0x26060050  addiu       $a2, $s0, 0x50
    ctx->pc = 0x13acd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x13acd4: 0x26870f60  addiu       $a3, $s4, 0xF60
    ctx->pc = 0x13acd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 3936));
    // 0x13acd8: 0xc04e6a8  jal         func_139AA0
    ctx->pc = 0x13ACD8u;
    SET_GPR_U32(ctx, 31, 0x13ACE0u);
    ctx->pc = 0x13ACDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13ACD8u;
    // 0x13acdc: 0x26880f70  addiu       $t0, $s4, 0xF70 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 3952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139AA0u, 0x13ACD8u, 0x13ACE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13ACE0u;
label_13ace0:
    // 0x13ace0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x13ace0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13ace4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13ace4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13ace8: 0x1462001d  bne         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x13ACE8u;
    {
        const bool branch_taken_0x13ace8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13ace8) {
            ctx->pc = 0x13AD60u;
            goto label_13ad60;
        }
    }
    ctx->pc = 0x13ACF0u;
    // 0x13acf0: 0xc6650004  lwc1        $f5, 0x4($s3)
    ctx->pc = 0x13acf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x13acf4: 0xc6840f64  lwc1        $f4, 0xF64($s4)
    ctx->pc = 0x13acf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 3940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x13acf8: 0xc6630000  lwc1        $f3, 0x0($s3)
    ctx->pc = 0x13acf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13acfc: 0xc6820f60  lwc1        $f2, 0xF60($s4)
    ctx->pc = 0x13acfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 3936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13ad00: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x13ad00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13ad04: 0xc6800f68  lwc1        $f0, 0xF68($s4)
    ctx->pc = 0x13ad04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 3944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ad08: 0x46042901  sub.s       $f4, $f5, $f4
    ctx->pc = 0x13ad08u;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x13ad0c: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x13ad0cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x13ad10: 0x46042102  mul.s       $f4, $f4, $f4
    ctx->pc = 0x13ad10u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x13ad14: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x13ad14u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x13ad18: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x13ad18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x13ad1c: 0x46041018  adda.s      $f2, $f4
    ctx->pc = 0x13ad1cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[2], ctx->f[4]));
    // 0x13ad20: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x13ad20u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x13ad24: 0x46000544  c1          0x544
    ctx->pc = 0x13ad24u;
    ctx->f[21] = FPU_SQRT_S(ctx->f[0]);
    // 0x13ad28: 0x0  nop
    ctx->pc = 0x13ad28u;
    // NOP
    // 0x13ad2c: 0x0  nop
    ctx->pc = 0x13ad2cu;
    // NOP
    // 0x13ad30: 0x4614a836  c.le.s      $f21, $f20
    ctx->pc = 0x13ad30u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13ad34: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x13AD34u;
    {
        const bool branch_taken_0x13ad34 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13AD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AD34u;
        // 0x13ad38: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ad34) {
            ctx->pc = 0x13AD60u;
            goto label_13ad60;
        }
    }
    ctx->pc = 0x13AD3Cu;
    // 0x13ad3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13ad3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ad40: 0x7a640000  lq          $a0, 0x0($s3)
    ctx->pc = 0x13ad40u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x13ad44: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x13ad44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x13ad48: 0x26020050  addiu       $v0, $s0, 0x50
    ctx->pc = 0x13ad48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x13ad4c: 0x4600ad06  mov.s       $f20, $f21
    ctx->pc = 0x13ad4cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[21]);
    // 0x13ad50: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x13ad50u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x13ad54: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x13ad54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13ad58: 0x7ec20000  sq          $v0, 0x0($s6)
    ctx->pc = 0x13ad58u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), GPR_VEC(ctx, 2));
    // 0x13ad5c: 0x0  nop
    ctx->pc = 0x13ad5cu;
    // NOP
label_13ad60:
    // 0x13ad60: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x13ad60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x13ad64: 0x26100070  addiu       $s0, $s0, 0x70
    ctx->pc = 0x13ad64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_13ad68:
    // 0x13ad68: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x13ad68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x13ad6c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x13ad6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x13ad70: 0x944208dc  lhu         $v0, 0x8DC($v0)
    ctx->pc = 0x13ad70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2268)));
    // 0x13ad74: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x13ad74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x13ad78: 0x1440ffc5  bnez        $v0, . + 4 + (-0x3B << 2)
    ctx->pc = 0x13AD78u;
    {
        const bool branch_taken_0x13ad78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ad78) {
            ctx->pc = 0x13AC90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13ac90;
        }
    }
    ctx->pc = 0x13AD80u;
label_13ad80:
    // 0x13ad80: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x13ad80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x13ad84: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x13ad84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x13ad88: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x13AD88u;
    {
        const bool branch_taken_0x13ad88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AD88u;
        // 0x13ad8c: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ad88) {
            ctx->pc = 0x13AE18u;
            goto label_13ae18;
        }
    }
    ctx->pc = 0x13AD90u;
    // 0x13ad90: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x13ad90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x13ad94: 0x8c500bd0  lw          $s0, 0xBD0($v0)
    ctx->pc = 0x13ad94u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3024)));
    // 0x13ad98: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x13AD98u;
    {
        const bool branch_taken_0x13ad98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AD98u;
        // 0x13ad9c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ad98) {
            ctx->pc = 0x13AE00u;
            goto label_13ae00;
        }
    }
    ctx->pc = 0x13ADA0u;
label_13ada0:
    // 0x13ada0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x13ada0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x13ada4: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x13ada4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x13ada8: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x13ADA8u;
    {
        const bool branch_taken_0x13ada8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13ADACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ADA8u;
        // 0x13adac: 0x30620800  andi        $v0, $v1, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ada8) {
            ctx->pc = 0x13ADF8u;
            goto label_13adf8;
        }
    }
    ctx->pc = 0x13ADB0u;
    // 0x13adb0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x13ADB0u;
    {
        const bool branch_taken_0x13adb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13ADB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ADB0u;
        // 0x13adb4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13adb0) {
            ctx->pc = 0x13ADF8u;
            goto label_13adf8;
        }
    }
    ctx->pc = 0x13ADB8u;
    // 0x13adb8: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x13adb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x13adbc: 0x26060050  addiu       $a2, $s0, 0x50
    ctx->pc = 0x13adbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x13adc0: 0x26870f60  addiu       $a3, $s4, 0xF60
    ctx->pc = 0x13adc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 3936));
    // 0x13adc4: 0xc04e6a8  jal         func_139AA0
    ctx->pc = 0x13ADC4u;
    SET_GPR_U32(ctx, 31, 0x13ADCCu);
    ctx->pc = 0x13ADC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13ADC4u;
    // 0x13adc8: 0x26880f70  addiu       $t0, $s4, 0xF70 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 3952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139AA0u, 0x13ADC4u, 0x13ADCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13ADCCu;
label_13adcc:
    // 0x13adcc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x13adccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13add0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13add0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13add4: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13ADD4u;
    {
        const bool branch_taken_0x13add4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13add4) {
            ctx->pc = 0x13ADF8u;
            goto label_13adf8;
        }
    }
    ctx->pc = 0x13ADDCu;
    // 0x13addc: 0x26020050  addiu       $v0, $s0, 0x50
    ctx->pc = 0x13addcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x13ade0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x13ade0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ade4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x13ade4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13ade8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13ade8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13adec: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x13ADECu;
    {
        const bool branch_taken_0x13adec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13ADF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ADECu;
        // 0x13adf0: 0x7ec30000  sq          $v1, 0x0($s6) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 22), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13adec) {
            ctx->pc = 0x13B070u;
            goto label_13b070;
        }
    }
    ctx->pc = 0x13ADF4u;
    // 0x13adf4: 0x0  nop
    ctx->pc = 0x13adf4u;
    // NOP
label_13adf8:
    // 0x13adf8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x13adf8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x13adfc: 0x26100070  addiu       $s0, $s0, 0x70
    ctx->pc = 0x13adfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_13ae00:
    // 0x13ae00: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x13ae00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x13ae04: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x13ae04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x13ae08: 0x944208dc  lhu         $v0, 0x8DC($v0)
    ctx->pc = 0x13ae08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2268)));
    // 0x13ae0c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x13ae0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x13ae10: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x13AE10u;
    {
        const bool branch_taken_0x13ae10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ae10) {
            ctx->pc = 0x13ADA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13ada0;
        }
    }
    ctx->pc = 0x13AE18u;
label_13ae18:
    // 0x13ae18: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x13ae18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x13ae1c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x13ae1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x13ae20: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x13ae20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x13ae24: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x13AE24u;
    {
        const bool branch_taken_0x13ae24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AE24u;
        // 0x13ae28: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ae24) {
            ctx->pc = 0x13AEF8u;
            goto label_13aef8;
        }
    }
    ctx->pc = 0x13AE2Cu;
    // 0x13ae2c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x13ae2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x13ae30: 0x8c500cd0  lw          $s0, 0xCD0($v0)
    ctx->pc = 0x13ae30u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3280)));
    // 0x13ae34: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x13AE34u;
    {
        const bool branch_taken_0x13ae34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AE34u;
        // 0x13ae38: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ae34) {
            ctx->pc = 0x13AEE0u;
            goto label_13aee0;
        }
    }
    ctx->pc = 0x13AE3Cu;
    // 0x13ae3c: 0x0  nop
    ctx->pc = 0x13ae3cu;
    // NOP
label_13ae40:
    // 0x13ae40: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x13ae40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ae44: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x13ae44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x13ae48: 0x26060050  addiu       $a2, $s0, 0x50
    ctx->pc = 0x13ae48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x13ae4c: 0x26870f60  addiu       $a3, $s4, 0xF60
    ctx->pc = 0x13ae4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 3936));
    // 0x13ae50: 0xc04e6a8  jal         func_139AA0
    ctx->pc = 0x13AE50u;
    SET_GPR_U32(ctx, 31, 0x13AE58u);
    ctx->pc = 0x13AE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AE50u;
    // 0x13ae54: 0x26880f70  addiu       $t0, $s4, 0xF70 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 3952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139AA0u, 0x13AE50u, 0x13AE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AE58u;
label_13ae58:
    // 0x13ae58: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x13ae58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13ae5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13ae5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13ae60: 0x1462001d  bne         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x13AE60u;
    {
        const bool branch_taken_0x13ae60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13ae60) {
            ctx->pc = 0x13AED8u;
            goto label_13aed8;
        }
    }
    ctx->pc = 0x13AE68u;
    // 0x13ae68: 0xc6650004  lwc1        $f5, 0x4($s3)
    ctx->pc = 0x13ae68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x13ae6c: 0xc6840f64  lwc1        $f4, 0xF64($s4)
    ctx->pc = 0x13ae6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 3940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x13ae70: 0xc6630000  lwc1        $f3, 0x0($s3)
    ctx->pc = 0x13ae70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13ae74: 0xc6820f60  lwc1        $f2, 0xF60($s4)
    ctx->pc = 0x13ae74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 3936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13ae78: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x13ae78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13ae7c: 0xc6800f68  lwc1        $f0, 0xF68($s4)
    ctx->pc = 0x13ae7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 3944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ae80: 0x46042901  sub.s       $f4, $f5, $f4
    ctx->pc = 0x13ae80u;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x13ae84: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x13ae84u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x13ae88: 0x46042102  mul.s       $f4, $f4, $f4
    ctx->pc = 0x13ae88u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x13ae8c: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x13ae8cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x13ae90: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x13ae90u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x13ae94: 0x46041018  adda.s      $f2, $f4
    ctx->pc = 0x13ae94u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[2], ctx->f[4]));
    // 0x13ae98: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x13ae98u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x13ae9c: 0x46000544  c1          0x544
    ctx->pc = 0x13ae9cu;
    ctx->f[21] = FPU_SQRT_S(ctx->f[0]);
    // 0x13aea0: 0x0  nop
    ctx->pc = 0x13aea0u;
    // NOP
    // 0x13aea4: 0x0  nop
    ctx->pc = 0x13aea4u;
    // NOP
    // 0x13aea8: 0x4614a836  c.le.s      $f21, $f20
    ctx->pc = 0x13aea8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13aeac: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x13AEACu;
    {
        const bool branch_taken_0x13aeac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13AEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AEACu;
        // 0x13aeb0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13aeac) {
            ctx->pc = 0x13AED8u;
            goto label_13aed8;
        }
    }
    ctx->pc = 0x13AEB4u;
    // 0x13aeb4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13aeb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13aeb8: 0x7a640000  lq          $a0, 0x0($s3)
    ctx->pc = 0x13aeb8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x13aebc: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x13aebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x13aec0: 0x26020050  addiu       $v0, $s0, 0x50
    ctx->pc = 0x13aec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x13aec4: 0x4600ad06  mov.s       $f20, $f21
    ctx->pc = 0x13aec4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[21]);
    // 0x13aec8: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x13aec8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x13aecc: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x13aeccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13aed0: 0x7ec20000  sq          $v0, 0x0($s6)
    ctx->pc = 0x13aed0u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), GPR_VEC(ctx, 2));
    // 0x13aed4: 0x0  nop
    ctx->pc = 0x13aed4u;
    // NOP
label_13aed8:
    // 0x13aed8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x13aed8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x13aedc: 0x26100070  addiu       $s0, $s0, 0x70
    ctx->pc = 0x13aedcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_13aee0:
    // 0x13aee0: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x13aee0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x13aee4: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x13aee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x13aee8: 0x9442095c  lhu         $v0, 0x95C($v0)
    ctx->pc = 0x13aee8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2396)));
    // 0x13aeec: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x13aeecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x13aef0: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x13AEF0u;
    {
        const bool branch_taken_0x13aef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13aef0) {
            ctx->pc = 0x13AE40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13ae40;
        }
    }
    ctx->pc = 0x13AEF8u;
label_13aef8:
    // 0x13aef8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x13aef8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x13aefc: 0x0  nop
    ctx->pc = 0x13aefcu;
    // NOP
label_13af00:
    // 0x13af00: 0x2a420040  slti        $v0, $s2, 0x40
    ctx->pc = 0x13af00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x13af04: 0x1440ff1a  bnez        $v0, . + 4 + (-0xE6 << 2)
    ctx->pc = 0x13AF04u;
    {
        const bool branch_taken_0x13af04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13af04) {
            ctx->pc = 0x13AB70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13ab70;
        }
    }
    ctx->pc = 0x13AF0Cu;
    // 0x13af0c: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x13af0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x13af10: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x13af10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x13af14: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x13af14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x13af18: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x13AF18u;
    {
        const bool branch_taken_0x13af18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AF18u;
        // 0x13af1c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13af18) {
            ctx->pc = 0x13B018u;
            goto label_13b018;
        }
    }
    ctx->pc = 0x13AF20u;
    // 0x13af20: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x13AF20u;
    {
        const bool branch_taken_0x13af20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13af20) {
            ctx->pc = 0x13B008u;
            goto label_13b008;
        }
    }
    ctx->pc = 0x13AF28u;
label_13af28:
    // 0x13af28: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x13af28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x13af2c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x13af2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x13af30: 0x8c500ed0  lw          $s0, 0xED0($v0)
    ctx->pc = 0x13af30u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
    // 0x13af34: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x13AF34u;
    {
        const bool branch_taken_0x13af34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AF34u;
        // 0x13af38: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13af34) {
            ctx->pc = 0x13AFE8u;
            goto label_13afe8;
        }
    }
    ctx->pc = 0x13AF3Cu;
    // 0x13af3c: 0x0  nop
    ctx->pc = 0x13af3cu;
    // NOP
label_13af40:
    // 0x13af40: 0xdf838538  ld          $v1, -0x7AC8($gp)
    ctx->pc = 0x13af40u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294935864)));
    // 0x13af44: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x13af44u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13af48: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x13af48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x13af4c: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x13AF4Cu;
    {
        const bool branch_taken_0x13af4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13af4c) {
            ctx->pc = 0x13AFE0u;
            goto label_13afe0;
        }
    }
    ctx->pc = 0x13AF54u;
    // 0x13af54: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x13af54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x13af58: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x13af58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x13af5c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x13af5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x13af60: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x13AF60u;
    {
        const bool branch_taken_0x13af60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13af60) {
            ctx->pc = 0x13AFE0u;
            goto label_13afe0;
        }
    }
    ctx->pc = 0x13AF68u;
    // 0x13af68: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x13af68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x13af6c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13af6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x13af70: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13AF70u;
    {
        const bool branch_taken_0x13af70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AF70u;
        // 0x13af74: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13af70) {
            ctx->pc = 0x13AF80u;
            goto label_13af80;
        }
    }
    ctx->pc = 0x13AF78u;
    // 0x13af78: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x13AF78u;
    {
        const bool branch_taken_0x13af78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13af78) {
            ctx->pc = 0x13AFA0u;
            goto label_13afa0;
        }
    }
    ctx->pc = 0x13AF80u;
label_13af80:
    // 0x13af80: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x13af80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x13af84: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x13af84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x13af88: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x13AF88u;
    {
        const bool branch_taken_0x13af88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13af88) {
            ctx->pc = 0x13AFE0u;
            goto label_13afe0;
        }
    }
    ctx->pc = 0x13AF90u;
    // 0x13af90: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x13af90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x13af94: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x13af94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x13af98: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x13AF98u;
    {
        const bool branch_taken_0x13af98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13af98) {
            ctx->pc = 0x13AFE0u;
            goto label_13afe0;
        }
    }
    ctx->pc = 0x13AFA0u;
label_13afa0:
    // 0x13afa0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x13afa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13afa4: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x13afa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x13afa8: 0x26060050  addiu       $a2, $s0, 0x50
    ctx->pc = 0x13afa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x13afac: 0x26870f60  addiu       $a3, $s4, 0xF60
    ctx->pc = 0x13afacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 3936));
    // 0x13afb0: 0xc04e6a8  jal         func_139AA0
    ctx->pc = 0x13AFB0u;
    SET_GPR_U32(ctx, 31, 0x13AFB8u);
    ctx->pc = 0x13AFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AFB0u;
    // 0x13afb4: 0x26880f70  addiu       $t0, $s4, 0xF70 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 3952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139AA0u, 0x13AFB0u, 0x13AFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AFB8u;
label_13afb8:
    // 0x13afb8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x13afb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13afbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13afbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13afc0: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13AFC0u;
    {
        const bool branch_taken_0x13afc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13afc0) {
            ctx->pc = 0x13AFE0u;
            goto label_13afe0;
        }
    }
    ctx->pc = 0x13AFC8u;
    // 0x13afc8: 0x26020050  addiu       $v0, $s0, 0x50
    ctx->pc = 0x13afc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x13afcc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x13afccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13afd0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x13afd0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13afd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13afd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13afd8: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x13AFD8u;
    {
        const bool branch_taken_0x13afd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AFD8u;
        // 0x13afdc: 0x7ec30000  sq          $v1, 0x0($s6) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 22), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13afd8) {
            ctx->pc = 0x13B070u;
            goto label_13b070;
        }
    }
    ctx->pc = 0x13AFE0u;
label_13afe0:
    // 0x13afe0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x13afe0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x13afe4: 0x26100070  addiu       $s0, $s0, 0x70
    ctx->pc = 0x13afe4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_13afe8:
    // 0x13afe8: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x13afe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x13afec: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x13afecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x13aff0: 0x8c420a5c  lw          $v0, 0xA5C($v0)
    ctx->pc = 0x13aff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2652)));
    // 0x13aff4: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x13aff4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x13aff8: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
    ctx->pc = 0x13AFF8u;
    {
        const bool branch_taken_0x13aff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13aff8) {
            ctx->pc = 0x13AF40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13af40;
        }
    }
    ctx->pc = 0x13B000u;
    // 0x13b000: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x13b000u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x13b004: 0x0  nop
    ctx->pc = 0x13b004u;
    // NOP
label_13b008:
    // 0x13b008: 0x2a420018  slti        $v0, $s2, 0x18
    ctx->pc = 0x13b008u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x13b00c: 0x1440ffc6  bnez        $v0, . + 4 + (-0x3A << 2)
    ctx->pc = 0x13B00Cu;
    {
        const bool branch_taken_0x13b00c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13b00c) {
            ctx->pc = 0x13AF28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13af28;
        }
    }
    ctx->pc = 0x13B014u;
    // 0x13b014: 0x0  nop
    ctx->pc = 0x13b014u;
    // NOP
label_13b018:
    // 0x13b018: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x13b018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
    // 0x13b01c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x13b01cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x13b020: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13b020u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13b024: 0x0  nop
    ctx->pc = 0x13b024u;
    // NOP
    // 0x13b028: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x13b028u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13b02c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x13B02Cu;
    {
        const bool branch_taken_0x13b02c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13b02c) {
            ctx->pc = 0x13B050u;
            goto label_13b050;
        }
    }
    ctx->pc = 0x13B034u;
    // 0x13b034: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13b034u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13b038: 0x0  nop
    ctx->pc = 0x13b038u;
    // NOP
    // 0x13b03c: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x13b03cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13b040: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x13B040u;
    {
        const bool branch_taken_0x13b040 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13B044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B040u;
        // 0x13b044: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b040) {
            ctx->pc = 0x13B050u;
            goto label_13b050;
        }
    }
    ctx->pc = 0x13B048u;
    // 0x13b048: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x13B048u;
    {
        const bool branch_taken_0x13b048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b048) {
            ctx->pc = 0x13B070u;
            goto label_13b070;
        }
    }
    ctx->pc = 0x13B050u;
label_13b050:
    // 0x13b050: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x13b050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b054: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x13b054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x13b058: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x13b058u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x13b05c: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x13b05cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13b060: 0x7e640000  sq          $a0, 0x0($s3)
    ctx->pc = 0x13b060u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 4));
    // 0x13b064: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13b064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13b068: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x13b068u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x13b06c: 0x0  nop
    ctx->pc = 0x13b06cu;
    // NOP
label_13b070:
    // 0x13b070: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x13b070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x13b074: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x13b074u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13b078: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x13b078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x13b07c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x13b07cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13b080: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x13b080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13b084: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x13b084u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13b088: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x13b088u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13b08c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x13b08cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13b090: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x13b090u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13b094: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13b094u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13b098: 0x3e00008  jr          $ra
    ctx->pc = 0x13B098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B098u;
        // 0x13b09c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13B0A0u;
}
