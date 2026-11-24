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

// Function: sub_0025F7D0
// Address: 0x25f7d0 - 0x25f9e8
void sub_0025F7D0_0x25f7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025F7D0_0x25f7d0");
#endif

    switch (ctx->pc) {
        case 0x25f838u: goto label_25f838;
        case 0x25f848u: goto label_25f848;
        case 0x25f860u: goto label_25f860;
        case 0x25f89cu: goto label_25f89c;
        case 0x25f93cu: goto label_25f93c;
        case 0x25f94cu: goto label_25f94c;
        case 0x25f95cu: goto label_25f95c;
        case 0x25f978u: goto label_25f978;
        case 0x25f990u: goto label_25f990;
        case 0x25f9a0u: goto label_25f9a0;
        default: break;
    }

    ctx->pc = 0x25f7d0u;

    // 0x25f7d0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x25f7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x25f7d4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x25f7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x25f7d8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x25f7d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x25f7dc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x25f7dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x25f7e0: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x25f7e0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f7e4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x25f7e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x25f7e8: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x25f7e8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f7ec: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x25f7ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x25f7f0: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x25f7f0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f7f4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x25f7f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x25f7f8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x25f7f8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f7fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x25f7fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x25f800: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x25f800u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f804: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25f804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x25f808: 0x140982d  daddu       $s3, $t2, $zero
    ctx->pc = 0x25f808u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f80c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25f80cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25f810: 0x160902d  daddu       $s2, $t3, $zero
    ctx->pc = 0x25f810u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f814: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25f814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25f818: 0x8fb100b8  lw          $s1, 0xB8($sp)
    ctx->pc = 0x25f818u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x25f81c: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x25F81Cu;
    {
        const bool branch_taken_0x25f81c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x25F820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F81Cu;
        // 0x25f820: 0xafa600ac  sw          $a2, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f81c) {
            ctx->pc = 0x25F830u;
            goto label_25f830;
        }
    }
    ctx->pc = 0x25F824u;
    // 0x25f824: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x25F824u;
    {
        const bool branch_taken_0x25f824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F824u;
        // 0x25f828: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f824) {
            ctx->pc = 0x25F9B8u;
            goto label_25f9b8;
        }
    }
    ctx->pc = 0x25F82Cu;
    // 0x25f82c: 0x0  nop
    ctx->pc = 0x25f82cu;
    // NOP
label_25f830:
    // 0x25f830: 0xc0741a4  jal         func_1D0690
    ctx->pc = 0x25F830u;
    SET_GPR_U32(ctx, 31, 0x25F838u);
    ctx->pc = 0x25F834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F830u;
    // 0x25f834: 0x240400e0  addiu       $a0, $zero, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0690u, 0x25F830u, 0x25F838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F838u;
label_25f838:
    // 0x25f838: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25F838u;
    {
        const bool branch_taken_0x25f838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F838u;
        // 0x25f83c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f838) {
            ctx->pc = 0x25F850u;
            goto label_25f850;
        }
    }
    ctx->pc = 0x25F840u;
    // 0x25f840: 0xc097a84  jal         func_25EA10
    ctx->pc = 0x25F840u;
    SET_GPR_U32(ctx, 31, 0x25F848u);
    ctx->pc = 0x25F844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F840u;
    // 0x25f844: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EA10u, 0x25F840u, 0x25F848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F848u;
label_25f848:
    // 0x25f848: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25f848u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f84c: 0x0  nop
    ctx->pc = 0x25f84cu;
    // NOP
label_25f850:
    // 0x25f850: 0x12000057  beqz        $s0, . + 4 + (0x57 << 2)
    ctx->pc = 0x25F850u;
    {
        const bool branch_taken_0x25f850 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F850u;
        // 0x25f854: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f850) {
            ctx->pc = 0x25F9B0u;
            goto label_25f9b0;
        }
    }
    ctx->pc = 0x25F858u;
    // 0x25f858: 0xc096c94  jal         func_25B250
    ctx->pc = 0x25F858u;
    SET_GPR_U32(ctx, 31, 0x25F860u);
    ctx->pc = 0x25F85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F858u;
    // 0x25f85c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B250u, 0x25F858u, 0x25F860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F860u;
label_25f860:
    // 0x25f860: 0x8e6b004c  lw          $t3, 0x4C($s3)
    ctx->pc = 0x25f860u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x25f864: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x25f864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x25f868: 0x90450021  lbu         $a1, 0x21($v0)
    ctx->pc = 0x25f868u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 33)));
    // 0x25f86c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x25f86cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f870: 0x90460022  lbu         $a2, 0x22($v0)
    ctx->pc = 0x25f870u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 34)));
    // 0x25f874: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x25f874u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x25f878: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x25f878u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f87c: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x25f87cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f880: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25f880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f884: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x25f884u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f888: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x25f888u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f88c: 0x8d620094  lw          $v0, 0x94($t3)
    ctx->pc = 0x25f88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 148)));
    // 0x25f890: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25f890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25f894: 0xc096b38  jal         func_25ACE0
    ctx->pc = 0x25F894u;
    SET_GPR_U32(ctx, 31, 0x25F89Cu);
    ctx->pc = 0x25F898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F894u;
    // 0x25f898: 0x244b0030  addiu       $t3, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25ACE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25ACE0u, 0x25F894u, 0x25F89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F89Cu;
label_25f89c:
    // 0x25f89c: 0x92030064  lbu         $v1, 0x64($s0)
    ctx->pc = 0x25f89cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x25f8a0: 0x93a200c0  lbu         $v0, 0xC0($sp)
    ctx->pc = 0x25f8a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x25f8a4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x25f8a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x25f8a8: 0xa2020064  sb          $v0, 0x64($s0)
    ctx->pc = 0x25f8a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 2));
    // 0x25f8ac: 0xa21200b0  sb          $s2, 0xB0($s0)
    ctx->pc = 0x25f8acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 176), (uint8_t)GPR_U32(ctx, 18));
    // 0x25f8b0: 0x93a200b0  lbu         $v0, 0xB0($sp)
    ctx->pc = 0x25f8b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x25f8b4: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x25F8B4u;
    {
        const bool branch_taken_0x25f8b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F8B4u;
        // 0x25f8b8: 0xa20200b1  sb          $v0, 0xB1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 177), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f8b4) {
            ctx->pc = 0x25F918u;
            goto label_25f918;
        }
    }
    ctx->pc = 0x25F8BCu;
    // 0x25f8bc: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x25f8bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x25f8c0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x25f8c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25f8c4: 0x7e0200c0  sq          $v0, 0xC0($s0)
    ctx->pc = 0x25f8c4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 192), GPR_VEC(ctx, 2));
    // 0x25f8c8: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x25f8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25f8cc: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x25f8ccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25f8d0: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x25F8D0u;
    {
        const bool branch_taken_0x25f8d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25f8d0) {
            ctx->pc = 0x25F930u;
            goto label_25f930;
        }
    }
    ctx->pc = 0x25F8D8u;
    // 0x25f8d8: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x25f8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25f8dc: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x25f8dcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25f8e0: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x25F8E0u;
    {
        const bool branch_taken_0x25f8e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25f8e0) {
            ctx->pc = 0x25F930u;
            goto label_25f930;
        }
    }
    ctx->pc = 0x25F8E8u;
    // 0x25f8e8: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x25f8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25f8ec: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x25f8ecu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25f8f0: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x25F8F0u;
    {
        const bool branch_taken_0x25f8f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25f8f0) {
            ctx->pc = 0x25F930u;
            goto label_25f930;
        }
    }
    ctx->pc = 0x25F8F8u;
    // 0x25f8f8: 0x920200b1  lbu         $v0, 0xB1($s0)
    ctx->pc = 0x25f8f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 177)));
    // 0x25f8fc: 0x304200fd  andi        $v0, $v0, 0xFD
    ctx->pc = 0x25f8fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)253);
    // 0x25f900: 0xa20200b1  sb          $v0, 0xB1($s0)
    ctx->pc = 0x25f900u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 177), (uint8_t)GPR_U32(ctx, 2));
    // 0x25f904: 0x920200b1  lbu         $v0, 0xB1($s0)
    ctx->pc = 0x25f904u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 177)));
    // 0x25f908: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x25f908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x25f90c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25F90Cu;
    {
        const bool branch_taken_0x25f90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F90Cu;
        // 0x25f910: 0xa20200b1  sb          $v0, 0xB1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 177), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f90c) {
            ctx->pc = 0x25F930u;
            goto label_25f930;
        }
    }
    ctx->pc = 0x25F914u;
    // 0x25f914: 0x0  nop
    ctx->pc = 0x25f914u;
    // NOP
label_25f918:
    // 0x25f918: 0x920200b1  lbu         $v0, 0xB1($s0)
    ctx->pc = 0x25f918u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 177)));
    // 0x25f91c: 0x304200fd  andi        $v0, $v0, 0xFD
    ctx->pc = 0x25f91cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)253);
    // 0x25f920: 0xa20200b1  sb          $v0, 0xB1($s0)
    ctx->pc = 0x25f920u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 177), (uint8_t)GPR_U32(ctx, 2));
    // 0x25f924: 0x920200b1  lbu         $v0, 0xB1($s0)
    ctx->pc = 0x25f924u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 177)));
    // 0x25f928: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x25f928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x25f92c: 0xa20200b1  sb          $v0, 0xB1($s0)
    ctx->pc = 0x25f92cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 177), (uint8_t)GPR_U32(ctx, 2));
label_25f930:
    // 0x25f930: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x25f930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f934: 0xc097abc  jal         func_25EAF0
    ctx->pc = 0x25F934u;
    SET_GPR_U32(ctx, 31, 0x25F93Cu);
    ctx->pc = 0x25F938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F934u;
    // 0x25f938: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EAF0u, 0x25F934u, 0x25F93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F93Cu;
label_25f93c:
    // 0x25f93c: 0x24027ffd  addiu       $v0, $zero, 0x7FFD
    ctx->pc = 0x25f93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x25f940: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x25f940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x25f944: 0xc0741a4  jal         func_1D0690
    ctx->pc = 0x25F944u;
    SET_GPR_U32(ctx, 31, 0x25F94Cu);
    ctx->pc = 0x25F948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F944u;
    // 0x25f948: 0xa6020056  sh          $v0, 0x56($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 86), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0690u, 0x25F944u, 0x25F94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F94Cu;
label_25f94c:
    // 0x25f94c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25F94Cu;
    {
        const bool branch_taken_0x25f94c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F94Cu;
        // 0x25f950: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f94c) {
            ctx->pc = 0x25F960u;
            goto label_25f960;
        }
    }
    ctx->pc = 0x25F954u;
    // 0x25f954: 0xc07b98c  jal         func_1EE630
    ctx->pc = 0x25F954u;
    SET_GPR_U32(ctx, 31, 0x25F95Cu);
    ctx->pc = 0x1EE630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE630u, 0x25F954u, 0x25F95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F95Cu;
label_25f95c:
    // 0x25f95c: 0x0  nop
    ctx->pc = 0x25f95cu;
    // NOP
label_25f960:
    // 0x25f960: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x25f960u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
    // 0x25f964: 0x8e0400d0  lw          $a0, 0xD0($s0)
    ctx->pc = 0x25f964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x25f968: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25F968u;
    {
        const bool branch_taken_0x25f968 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x25f968) {
            ctx->pc = 0x25F980u;
            goto label_25f980;
        }
    }
    ctx->pc = 0x25F970u;
    // 0x25f970: 0xc074268  jal         func_1D09A0
    ctx->pc = 0x25F970u;
    SET_GPR_U32(ctx, 31, 0x25F978u);
    ctx->pc = 0x25F974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F970u;
    // 0x25f974: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D09A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D09A0u, 0x25F970u, 0x25F978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F978u;
label_25f978:
    // 0x25f978: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x25F978u;
    {
        const bool branch_taken_0x25f978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F978u;
        // 0x25f97c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f978) {
            ctx->pc = 0x25F9B8u;
            goto label_25f9b8;
        }
    }
    ctx->pc = 0x25F980u;
label_25f980:
    // 0x25f980: 0x8fa600ac  lw          $a2, 0xAC($sp)
    ctx->pc = 0x25f980u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x25f984: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x25f984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f988: 0xc096c9c  jal         func_25B270
    ctx->pc = 0x25F988u;
    SET_GPR_U32(ctx, 31, 0x25F990u);
    ctx->pc = 0x25F98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F988u;
    // 0x25f98c: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B270u, 0x25F988u, 0x25F990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F990u;
label_25f990:
    // 0x25f990: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25F990u;
    {
        const bool branch_taken_0x25f990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25F994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F990u;
        // 0x25f994: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f990) {
            ctx->pc = 0x25F9A8u;
            goto label_25f9a8;
        }
    }
    ctx->pc = 0x25F998u;
    // 0x25f998: 0xc074268  jal         func_1D09A0
    ctx->pc = 0x25F998u;
    SET_GPR_U32(ctx, 31, 0x25F9A0u);
    ctx->pc = 0x1D09A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D09A0u, 0x25F998u, 0x25F9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F9A0u;
label_25f9a0:
    // 0x25f9a0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x25F9A0u;
    {
        const bool branch_taken_0x25f9a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F9A0u;
        // 0x25f9a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f9a0) {
            ctx->pc = 0x25F9B8u;
            goto label_25f9b8;
        }
    }
    ctx->pc = 0x25F9A8u;
label_25f9a8:
    // 0x25f9a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25F9A8u;
    {
        const bool branch_taken_0x25f9a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F9A8u;
        // 0x25f9ac: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f9a8) {
            ctx->pc = 0x25F9B8u;
            goto label_25f9b8;
        }
    }
    ctx->pc = 0x25F9B0u;
label_25f9b0:
    // 0x25f9b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25f9b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f9b4: 0x0  nop
    ctx->pc = 0x25f9b4u;
    // NOP
label_25f9b8:
    // 0x25f9b8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x25f9b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x25f9bc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x25f9bcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25f9c0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x25f9c0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25f9c4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x25f9c4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25f9c8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x25f9c8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25f9cc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x25f9ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25f9d0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x25f9d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25f9d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25f9d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25f9d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25f9d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25f9dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25f9dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25f9e0: 0x3e00008  jr          $ra
    ctx->pc = 0x25F9E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25F9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F9E0u;
        // 0x25f9e4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25F9E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25F9E8u;
}
