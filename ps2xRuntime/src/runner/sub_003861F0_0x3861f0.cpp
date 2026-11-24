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

// Function: sub_003861F0
// Address: 0x3861f0 - 0x386614
void sub_003861F0_0x3861f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003861F0_0x3861f0");
#endif

    switch (ctx->pc) {
        case 0x386280u: goto label_386280;
        case 0x386294u: goto label_386294;
        case 0x3862b8u: goto label_3862b8;
        case 0x3862e0u: goto label_3862e0;
        case 0x386348u: goto label_386348;
        case 0x386358u: goto label_386358;
        case 0x386364u: goto label_386364;
        case 0x3864f4u: goto label_3864f4;
        case 0x386504u: goto label_386504;
        case 0x386514u: goto label_386514;
        case 0x386524u: goto label_386524;
        case 0x386540u: goto label_386540;
        case 0x386558u: goto label_386558;
        case 0x386568u: goto label_386568;
        default: break;
    }

    ctx->pc = 0x3861f0u;

    // 0x3861f0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3861f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x3861f4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x3861f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x3861f8: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x3861f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x3861fc: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x3861fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x386200: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x386200u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386204: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x386204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x386208: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x386208u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38620c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x38620cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x386210: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x386210u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386214: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x386214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x386218: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x386218u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38621c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x38621cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x386220: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x386220u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386224: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x386224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x386228: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x386228u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38622c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x38622cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x386230: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x386230u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386234: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x386234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x386238: 0x160882d  daddu       $s1, $t3, $zero
    ctx->pc = 0x386238u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38623c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x38623cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x386240: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x386240u;
    {
        const bool branch_taken_0x386240 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x386244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386240u;
        // 0x386244: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x386240) {
            ctx->pc = 0x386250u;
            goto label_386250;
        }
    }
    ctx->pc = 0x386248u;
    // 0x386248: 0x100000e5  b           . + 4 + (0xE5 << 2)
    ctx->pc = 0x386248u;
    {
        const bool branch_taken_0x386248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38624Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386248u;
        // 0x38624c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386248) {
            ctx->pc = 0x3865E0u;
            goto label_3865e0;
        }
    }
    ctx->pc = 0x386250u;
label_386250:
    // 0x386250: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x386250u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x386254: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x386254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x386258: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x386258u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x38625c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x38625Cu;
    {
        const bool branch_taken_0x38625c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x386260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38625Cu;
        // 0x386260: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38625c) {
            ctx->pc = 0x386268u;
            goto label_386268;
        }
    }
    ctx->pc = 0x386264u;
    // 0x386264: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x386264u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_386268:
    // 0x386268: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x386268u;
    {
        const bool branch_taken_0x386268 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x38626Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386268u;
        // 0x38626c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386268) {
            ctx->pc = 0x386278u;
            goto label_386278;
        }
    }
    ctx->pc = 0x386270u;
    // 0x386270: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x386270u;
    {
        const bool branch_taken_0x386270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x386270) {
            ctx->pc = 0x3865E0u;
            goto label_3865e0;
        }
    }
    ctx->pc = 0x386278u;
label_386278:
    // 0x386278: 0xc0741a4  jal         func_1D0690
    ctx->pc = 0x386278u;
    SET_GPR_U32(ctx, 31, 0x386280u);
    ctx->pc = 0x38627Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386278u;
    // 0x38627c: 0x24040120  addiu       $a0, $zero, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0690u, 0x386278u, 0x386280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386280u;
label_386280:
    // 0x386280: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x386280u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386284: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x386284u;
    {
        const bool branch_taken_0x386284 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x386288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386284u;
        // 0x386288: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386284) {
            ctx->pc = 0x3862A8u;
            goto label_3862a8;
        }
    }
    ctx->pc = 0x38628Cu;
    // 0x38628c: 0xc096b00  jal         func_25AC00
    ctx->pc = 0x38628Cu;
    SET_GPR_U32(ctx, 31, 0x386294u);
    ctx->pc = 0x25AC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AC00u, 0x38628Cu, 0x386294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386294u;
label_386294:
    // 0x386294: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x386294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x386298: 0x24429ad0  addiu       $v0, $v0, -0x6530
    ctx->pc = 0x386298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941392));
    // 0x38629c: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x38629cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x3862a0: 0xae000110  sw          $zero, 0x110($s0)
    ctx->pc = 0x3862a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
    // 0x3862a4: 0x0  nop
    ctx->pc = 0x3862a4u;
    // NOP
label_3862a8:
    // 0x3862a8: 0x120000cb  beqz        $s0, . + 4 + (0xCB << 2)
    ctx->pc = 0x3862A8u;
    {
        const bool branch_taken_0x3862a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3862ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3862A8u;
        // 0x3862ac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3862a8) {
            ctx->pc = 0x3865D8u;
            goto label_3865d8;
        }
    }
    ctx->pc = 0x3862B0u;
    // 0x3862b0: 0xc096c94  jal         func_25B250
    ctx->pc = 0x3862B0u;
    SET_GPR_U32(ctx, 31, 0x3862B8u);
    ctx->pc = 0x3862B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3862B0u;
    // 0x3862b4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B250u, 0x3862B0u, 0x3862B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3862B8u;
label_3862b8:
    // 0x3862b8: 0x90450021  lbu         $a1, 0x21($v0)
    ctx->pc = 0x3862b8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 33)));
    // 0x3862bc: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x3862bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3862c0: 0x90460022  lbu         $a2, 0x22($v0)
    ctx->pc = 0x3862c0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 34)));
    // 0x3862c4: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x3862c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3862c8: 0x8fab00c8  lw          $t3, 0xC8($sp)
    ctx->pc = 0x3862c8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x3862cc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3862ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3862d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3862d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3862d4: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x3862d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3862d8: 0xc096b38  jal         func_25ACE0
    ctx->pc = 0x3862D8u;
    SET_GPR_U32(ctx, 31, 0x3862E0u);
    ctx->pc = 0x3862DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3862D8u;
    // 0x3862dc: 0x240502d  daddu       $t2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25ACE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25ACE0u, 0x3862D8u, 0x3862E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3862E0u;
label_3862e0:
    // 0x3862e0: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x3862e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x3862e4: 0xa2110114  sb          $s1, 0x114($s0)
    ctx->pc = 0x3862e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 276), (uint8_t)GPR_U32(ctx, 17));
    // 0x3862e8: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x3862e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x3862ec: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3862ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3862f0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x3862f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3862f4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x3862f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3862f8: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3862f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3862fc: 0x7e0200f0  sq          $v0, 0xF0($s0)
    ctx->pc = 0x3862fcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 240), GPR_VEC(ctx, 2));
    // 0x386300: 0x78225c20  lq          $v0, 0x5C20($at)
    ctx->pc = 0x386300u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C20u));
    // 0x386304: 0x7e0200b0  sq          $v0, 0xB0($s0)
    ctx->pc = 0x386304u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 176), GPR_VEC(ctx, 2));
    // 0x386308: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x386308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x38630c: 0x78225c30  lq          $v0, 0x5C30($at)
    ctx->pc = 0x38630cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C30u));
    // 0x386310: 0x7e0200c0  sq          $v0, 0xC0($s0)
    ctx->pc = 0x386310u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 192), GPR_VEC(ctx, 2));
    // 0x386314: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x386314u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x386318: 0x78225c40  lq          $v0, 0x5C40($at)
    ctx->pc = 0x386318u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C40u));
    // 0x38631c: 0x7e0200d0  sq          $v0, 0xD0($s0)
    ctx->pc = 0x38631cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 208), GPR_VEC(ctx, 2));
    // 0x386320: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x386320u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x386324: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x386324u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x386328: 0x7e0200e0  sq          $v0, 0xE0($s0)
    ctx->pc = 0x386328u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 224), GPR_VEC(ctx, 2));
    // 0x38632c: 0x7a020040  lq          $v0, 0x40($s0)
    ctx->pc = 0x38632cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x386330: 0x7e0200e0  sq          $v0, 0xE0($s0)
    ctx->pc = 0x386330u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 224), GPR_VEC(ctx, 2));
    // 0x386334: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x386334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x386338: 0x8fa600c0  lw          $a2, 0xC0($sp)
    ctx->pc = 0x386338u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x38633c: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x38633cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x386340: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x386340u;
    SET_GPR_U32(ctx, 31, 0x386348u);
    ctx->pc = 0x386344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386340u;
    // 0x386344: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x386340u, 0x386348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386348u;
label_386348:
    // 0x386348: 0x8fa600c8  lw          $a2, 0xC8($sp)
    ctx->pc = 0x386348u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x38634c: 0x26040100  addiu       $a0, $s0, 0x100
    ctx->pc = 0x38634cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x386350: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x386350u;
    SET_GPR_U32(ctx, 31, 0x386358u);
    ctx->pc = 0x386354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386350u;
    // 0x386354: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x386350u, 0x386358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386358u;
label_386358:
    // 0x386358: 0x26040100  addiu       $a0, $s0, 0x100
    ctx->pc = 0x386358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x38635c: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x38635Cu;
    SET_GPR_U32(ctx, 31, 0x386364u);
    ctx->pc = 0x386360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38635Cu;
    // 0x386360: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x38635Cu, 0x386364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386364u;
label_386364:
    // 0x386364: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x386364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x386368: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x386368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x38636c: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x38636cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x386370: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x386370u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x386374: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x386374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x386378: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x386378u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x38637c: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x38637cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x386380: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x386380u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x386384: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x386384u;
    {
        const bool branch_taken_0x386384 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x386388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386384u;
        // 0x386388: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386384) {
            ctx->pc = 0x386398u;
            goto label_386398;
        }
    }
    ctx->pc = 0x38638Cu;
    // 0x38638c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x38638cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x386390: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x386390u;
    {
        const bool branch_taken_0x386390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x386394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386390u;
        // 0x386394: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x386390) {
            ctx->pc = 0x3863B0u;
            goto label_3863b0;
        }
    }
    ctx->pc = 0x386398u;
label_386398:
    // 0x386398: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x386398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x38639c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x38639cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3863a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3863a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3863a4: 0x0  nop
    ctx->pc = 0x3863a4u;
    // NOP
    // 0x3863a8: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x3863a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x3863ac: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x3863acu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_3863b0:
    // 0x3863b0: 0x3c033600  lui         $v1, 0x3600
    ctx->pc = 0x3863b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13824 << 16));
    // 0x3863b4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3863b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3863b8: 0x34640008  ori         $a0, $v1, 0x8
    ctx->pc = 0x3863b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x3863bc: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x3863bcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3863c0: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x3863c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x3863c4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3863c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3863c8: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x3863c8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x3863cc: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3863ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3863d0: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x3863d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x3863d4: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x3863d4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x3863d8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3863d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3863dc: 0xc6000100  lwc1        $f0, 0x100($s0)
    ctx->pc = 0x3863dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3863e0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3863e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3863e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3863e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3863e8: 0xe6000100  swc1        $f0, 0x100($s0)
    ctx->pc = 0x3863e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 256), bits); }
    // 0x3863ec: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x3863ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3863f0: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x3863f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3863f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3863f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3863f8: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x3863f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x3863fc: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x3863fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x386400: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x386400u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x386404: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x386404u;
    {
        const bool branch_taken_0x386404 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x386408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386404u;
        // 0x386408: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386404) {
            ctx->pc = 0x386418u;
            goto label_386418;
        }
    }
    ctx->pc = 0x38640Cu;
    // 0x38640c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x38640cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x386410: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x386410u;
    {
        const bool branch_taken_0x386410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x386414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386410u;
        // 0x386414: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x386410) {
            ctx->pc = 0x386430u;
            goto label_386430;
        }
    }
    ctx->pc = 0x386418u;
label_386418:
    // 0x386418: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x386418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x38641c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x38641cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x386420: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x386420u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x386424: 0x0  nop
    ctx->pc = 0x386424u;
    // NOP
    // 0x386428: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x386428u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x38642c: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x38642cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_386430:
    // 0x386430: 0x3c033600  lui         $v1, 0x3600
    ctx->pc = 0x386430u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13824 << 16));
    // 0x386434: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x386434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x386438: 0x34640008  ori         $a0, $v1, 0x8
    ctx->pc = 0x386438u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x38643c: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x38643cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x386440: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x386440u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x386444: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x386444u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x386448: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x386448u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x38644c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x38644cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x386450: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x386450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x386454: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x386454u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x386458: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x386458u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x38645c: 0xc6000104  lwc1        $f0, 0x104($s0)
    ctx->pc = 0x38645cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x386460: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x386460u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x386464: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x386464u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x386468: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x386468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x38646c: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x38646cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x386470: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x386470u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x386474: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x386474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x386478: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x386478u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x38647c: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x38647cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x386480: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x386480u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x386484: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x386484u;
    {
        const bool branch_taken_0x386484 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x386488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386484u;
        // 0x386488: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386484) {
            ctx->pc = 0x386498u;
            goto label_386498;
        }
    }
    ctx->pc = 0x38648Cu;
    // 0x38648c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x38648cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x386490: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x386490u;
    {
        const bool branch_taken_0x386490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x386494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386490u;
        // 0x386494: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x386490) {
            ctx->pc = 0x3864B0u;
            goto label_3864b0;
        }
    }
    ctx->pc = 0x386498u;
label_386498:
    // 0x386498: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x386498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x38649c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x38649cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3864a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3864a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3864a4: 0x0  nop
    ctx->pc = 0x3864a4u;
    // NOP
    // 0x3864a8: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x3864a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x3864ac: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x3864acu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_3864b0:
    // 0x3864b0: 0x3c023600  lui         $v0, 0x3600
    ctx->pc = 0x3864b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13824 << 16));
    // 0x3864b4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3864b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3864b8: 0x34440008  ori         $a0, $v0, 0x8
    ctx->pc = 0x3864b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x3864bc: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x3864bcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3864c0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3864c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x3864c4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3864c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3864c8: 0x460310c2  mul.s       $f3, $f2, $f3
    ctx->pc = 0x3864c8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x3864cc: 0x26040100  addiu       $a0, $s0, 0x100
    ctx->pc = 0x3864ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x3864d0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3864d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3864d4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3864d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3864d8: 0xc6000108  lwc1        $f0, 0x108($s0)
    ctx->pc = 0x3864d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3864dc: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x3864dcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x3864e0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3864e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3864e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3864e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3864e8: 0xe6000108  swc1        $f0, 0x108($s0)
    ctx->pc = 0x3864e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
    // 0x3864ec: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x3864ECu;
    SET_GPR_U32(ctx, 31, 0x3864F4u);
    ctx->pc = 0x3864F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3864ECu;
    // 0x3864f0: 0xae03010c  sw          $v1, 0x10C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x3864ECu, 0x3864F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3864F4u;
label_3864f4:
    // 0x3864f4: 0x26040100  addiu       $a0, $s0, 0x100
    ctx->pc = 0x3864f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x3864f8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3864f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3864fc: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x3864FCu;
    SET_GPR_U32(ctx, 31, 0x386504u);
    ctx->pc = 0x386500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3864FCu;
    // 0x386500: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x3864FCu, 0x386504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386504u;
label_386504:
    // 0x386504: 0x24027ffd  addiu       $v0, $zero, 0x7FFD
    ctx->pc = 0x386504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x386508: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x386508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x38650c: 0xc0741a4  jal         func_1D0690
    ctx->pc = 0x38650Cu;
    SET_GPR_U32(ctx, 31, 0x386514u);
    ctx->pc = 0x386510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38650Cu;
    // 0x386510: 0xa6020056  sh          $v0, 0x56($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 86), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0690u, 0x38650Cu, 0x386514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386514u;
label_386514:
    // 0x386514: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x386514u;
    {
        const bool branch_taken_0x386514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x386518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386514u;
        // 0x386518: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386514) {
            ctx->pc = 0x386528u;
            goto label_386528;
        }
    }
    ctx->pc = 0x38651Cu;
    // 0x38651c: 0xc07b98c  jal         func_1EE630
    ctx->pc = 0x38651Cu;
    SET_GPR_U32(ctx, 31, 0x386524u);
    ctx->pc = 0x1EE630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE630u, 0x38651Cu, 0x386524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386524u;
label_386524:
    // 0x386524: 0x0  nop
    ctx->pc = 0x386524u;
    // NOP
label_386528:
    // 0x386528: 0xae020110  sw          $v0, 0x110($s0)
    ctx->pc = 0x386528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
    // 0x38652c: 0x8e040110  lw          $a0, 0x110($s0)
    ctx->pc = 0x38652cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x386530: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x386530u;
    {
        const bool branch_taken_0x386530 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x386530) {
            ctx->pc = 0x386548u;
            goto label_386548;
        }
    }
    ctx->pc = 0x386538u;
    // 0x386538: 0xc074268  jal         func_1D09A0
    ctx->pc = 0x386538u;
    SET_GPR_U32(ctx, 31, 0x386540u);
    ctx->pc = 0x38653Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386538u;
    // 0x38653c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D09A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D09A0u, 0x386538u, 0x386540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386540u;
label_386540:
    // 0x386540: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x386540u;
    {
        const bool branch_taken_0x386540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x386544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386540u;
        // 0x386544: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386540) {
            ctx->pc = 0x3865E0u;
            goto label_3865e0;
        }
    }
    ctx->pc = 0x386548u;
label_386548:
    // 0x386548: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x386548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38654c: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x38654cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386550: 0xc096c9c  jal         func_25B270
    ctx->pc = 0x386550u;
    SET_GPR_U32(ctx, 31, 0x386558u);
    ctx->pc = 0x386554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386550u;
    // 0x386554: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B270u, 0x386550u, 0x386558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386558u;
label_386558:
    // 0x386558: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x386558u;
    {
        const bool branch_taken_0x386558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38655Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386558u;
        // 0x38655c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386558) {
            ctx->pc = 0x386570u;
            goto label_386570;
        }
    }
    ctx->pc = 0x386560u;
    // 0x386560: 0xc074268  jal         func_1D09A0
    ctx->pc = 0x386560u;
    SET_GPR_U32(ctx, 31, 0x386568u);
    ctx->pc = 0x1D09A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D09A0u, 0x386560u, 0x386568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386568u;
label_386568:
    // 0x386568: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x386568u;
    {
        const bool branch_taken_0x386568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38656Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386568u;
        // 0x38656c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386568) {
            ctx->pc = 0x3865E0u;
            goto label_3865e0;
        }
    }
    ctx->pc = 0x386570u;
label_386570:
    // 0x386570: 0x26020040  addiu       $v0, $s0, 0x40
    ctx->pc = 0x386570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x386574: 0xae020098  sw          $v0, 0x98($s0)
    ctx->pc = 0x386574u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 2));
    // 0x386578: 0x26020100  addiu       $v0, $s0, 0x100
    ctx->pc = 0x386578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x38657c: 0xae02009c  sw          $v0, 0x9C($s0)
    ctx->pc = 0x38657cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 2));
    // 0x386580: 0x3c02457a  lui         $v0, 0x457A
    ctx->pc = 0x386580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17786 << 16));
    // 0x386584: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x386584u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
    // 0x386588: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x386588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x38658c: 0xae020084  sw          $v0, 0x84($s0)
    ctx->pc = 0x38658cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
    // 0x386590: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x386590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x386594: 0xae020088  sw          $v0, 0x88($s0)
    ctx->pc = 0x386594u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 2));
    // 0x386598: 0x26020051  addiu       $v0, $s0, 0x51
    ctx->pc = 0x386598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 81));
    // 0x38659c: 0xae0200a0  sw          $v0, 0xA0($s0)
    ctx->pc = 0x38659cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
    // 0x3865a0: 0x26020054  addiu       $v0, $s0, 0x54
    ctx->pc = 0x3865a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
    // 0x3865a4: 0xae0200a4  sw          $v0, 0xA4($s0)
    ctx->pc = 0x3865a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 2));
    // 0x3865a8: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x3865a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x3865ac: 0xa602008c  sh          $v0, 0x8C($s0)
    ctx->pc = 0x3865acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 140), (uint16_t)GPR_U32(ctx, 2));
    // 0x3865b0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3865b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3865b4: 0xa602008e  sh          $v0, 0x8E($s0)
    ctx->pc = 0x3865b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 142), (uint16_t)GPR_U32(ctx, 2));
    // 0x3865b8: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x3865b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x3865bc: 0xa6020090  sh          $v0, 0x90($s0)
    ctx->pc = 0x3865bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 144), (uint16_t)GPR_U32(ctx, 2));
    // 0x3865c0: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x3865c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x3865c4: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x3865c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x3865c8: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x3865c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
    // 0x3865cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3865CCu;
    {
        const bool branch_taken_0x3865cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3865D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3865CCu;
        // 0x3865d0: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3865cc) {
            ctx->pc = 0x3865E0u;
            goto label_3865e0;
        }
    }
    ctx->pc = 0x3865D4u;
    // 0x3865d4: 0x0  nop
    ctx->pc = 0x3865d4u;
    // NOP
label_3865d8:
    // 0x3865d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3865d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3865dc: 0x0  nop
    ctx->pc = 0x3865dcu;
    // NOP
label_3865e0:
    // 0x3865e0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x3865e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3865e4: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x3865e4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3865e8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3865e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3865ec: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x3865ecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3865f0: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x3865f0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3865f4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3865f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3865f8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3865f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3865fc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3865fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x386600: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x386600u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x386604: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x386604u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x386608: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x386608u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38660c: 0x3e00008  jr          $ra
    ctx->pc = 0x38660Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x386610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38660Cu;
        // 0x386610: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38660Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x386614u;
}
