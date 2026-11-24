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

// Function: sub_001B04B0
// Address: 0x1b04b0 - 0x1b0ae0
void sub_001B04B0_0x1b04b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B04B0_0x1b04b0");
#endif

    switch (ctx->pc) {
        case 0x1b0500u: goto label_1b0500;
        case 0x1b0510u: goto label_1b0510;
        case 0x1b0554u: goto label_1b0554;
        case 0x1b0560u: goto label_1b0560;
        case 0x1b068cu: goto label_1b068c;
        case 0x1b06c8u: goto label_1b06c8;
        case 0x1b06e4u: goto label_1b06e4;
        case 0x1b06fcu: goto label_1b06fc;
        case 0x1b072cu: goto label_1b072c;
        case 0x1b0750u: goto label_1b0750;
        case 0x1b0774u: goto label_1b0774;
        case 0x1b07c0u: goto label_1b07c0;
        case 0x1b07d8u: goto label_1b07d8;
        case 0x1b08e0u: goto label_1b08e0;
        case 0x1b08e8u: goto label_1b08e8;
        case 0x1b0900u: goto label_1b0900;
        case 0x1b0908u: goto label_1b0908;
        case 0x1b0910u: goto label_1b0910;
        case 0x1b0958u: goto label_1b0958;
        default: break;
    }

    ctx->pc = 0x1b04b0u;

    // 0x1b04b0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x1b04b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x1b04b4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1b04b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1b04b8: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1b04b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x1b04bc: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1b04bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x1b04c0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1b04c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1b04c4: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x1b04c4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b04c8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1b04c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1b04cc: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1b04ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1b04d0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1b04d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1b04d4: 0x24a56aa0  addiu       $a1, $a1, 0x6AA0
    ctx->pc = 0x1b04d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27296));
    // 0x1b04d8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1b04d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1b04dc: 0x26e60010  addiu       $a2, $s7, 0x10
    ctx->pc = 0x1b04dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
    // 0x1b04e0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1b04e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1b04e4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1b04e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1b04e8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b04e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b04ec: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1b04ecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1b04f0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1b04f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1b04f4: 0xafa400bc  sw          $a0, 0xBC($sp)
    ctx->pc = 0x1b04f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 4));
    // 0x1b04f8: 0xc041442  jal         func_105108
    ctx->pc = 0x1B04F8u;
    SET_GPR_U32(ctx, 31, 0x1B0500u);
    ctx->pc = 0x1B04FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B04F8u;
    // 0x1b04fc: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1B04F8u, 0x1B0500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0500u;
label_1b0500:
    // 0x1b0500: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1b0500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1b0504: 0x26e50010  addiu       $a1, $s7, 0x10
    ctx->pc = 0x1b0504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
    // 0x1b0508: 0xc04d748  jal         func_135D20
    ctx->pc = 0x1B0508u;
    SET_GPR_U32(ctx, 31, 0x1B0510u);
    ctx->pc = 0x1B050Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0508u;
    // 0x1b050c: 0x27a600fc  addiu       $a2, $sp, 0xFC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135D20u, 0x1B0508u, 0x1B0510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0510u;
label_1b0510:
    // 0x1b0510: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B0510u;
    {
        const bool branch_taken_0x1b0510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b0510) {
            ctx->pc = 0x1B0528u;
            goto label_1b0528;
        }
    }
    ctx->pc = 0x1B0518u;
    // 0x1b0518: 0x96e30004  lhu         $v1, 0x4($s7)
    ctx->pc = 0x1b0518u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x1b051c: 0x34630800  ori         $v1, $v1, 0x800
    ctx->pc = 0x1b051cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
    // 0x1b0520: 0x10000161  b           . + 4 + (0x161 << 2)
    ctx->pc = 0x1B0520u;
    {
        const bool branch_taken_0x1b0520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0520u;
        // 0x1b0524: 0xa6e30004  sh          $v1, 0x4($s7) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 23), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0520) {
            ctx->pc = 0x1B0AA8u;
            goto label_1b0aa8;
        }
    }
    ctx->pc = 0x1B0528u;
label_1b0528:
    // 0x1b0528: 0x96e60004  lhu         $a2, 0x4($s7)
    ctx->pc = 0x1b0528u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x1b052c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1b052cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1b0530: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1b0530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1b0534: 0x2442f430  addiu       $v0, $v0, -0xBD0
    ctx->pc = 0x1b0534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964272));
    // 0x1b0538: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x1b0538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1b053c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1b053cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0540: 0x30c6f7ff  andi        $a2, $a2, 0xF7FF
    ctx->pc = 0x1b0540u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)63487);
    // 0x1b0544: 0xa6e60004  sh          $a2, 0x4($s7)
    ctx->pc = 0x1b0544u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 4), (uint16_t)GPR_U32(ctx, 6));
    // 0x1b0548: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1b0548u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x40F430u));
    // 0x1b054c: 0xc041472  jal         func_1051C8
    ctx->pc = 0x1B054Cu;
    SET_GPR_U32(ctx, 31, 0x1B0554u);
    ctx->pc = 0x1B0550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B054Cu;
    // 0x1b0550: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x1B054Cu, 0x1B0554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0554u;
label_1b0554:
    // 0x1b0554: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1b0554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1b0558: 0xc041468  jal         func_1051A0
    ctx->pc = 0x1B0558u;
    SET_GPR_U32(ctx, 31, 0x1B0560u);
    ctx->pc = 0x1B055Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0558u;
    // 0x1b055c: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x1B0558u, 0x1B0560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0560u;
label_1b0560:
    // 0x1b0560: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1b0560u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1b0564: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b0564u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b0568: 0x0  nop
    ctx->pc = 0x1b0568u;
    // NOP
    // 0x1b056c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1b056cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b0570: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1B0570u;
    {
        const bool branch_taken_0x1b0570 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b0570) {
            ctx->pc = 0x1B0580u;
            goto label_1b0580;
        }
    }
    ctx->pc = 0x1B0578u;
    // 0x1b0578: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1b0578u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1b057c: 0x0  nop
    ctx->pc = 0x1b057cu;
    // NOP
label_1b0580:
    // 0x1b0580: 0x8ee40034  lw          $a0, 0x34($s7)
    ctx->pc = 0x1b0580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 52)));
    // 0x1b0584: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x1b0584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1b0588: 0x27a200e4  addiu       $v0, $sp, 0xE4
    ctx->pc = 0x1b0588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x1b058c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b058cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b0590: 0x43042  srl         $a2, $a0, 1
    ctx->pc = 0x1b0590u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x1b0594: 0x42882  srl         $a1, $a0, 2
    ctx->pc = 0x1b0594u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
    // 0x1b0598: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x1b0598u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x1b059c: 0x2464f900  addiu       $a0, $v1, -0x700
    ctx->pc = 0x1b059cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965504));
    // 0x1b05a0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1b05a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1b05a4: 0x2443f870  addiu       $v1, $v0, -0x790
    ctx->pc = 0x1b05a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965360));
    // 0x1b05a8: 0x861023  subu        $v0, $a0, $a2
    ctx->pc = 0x1b05a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1b05ac: 0x2a100  sll         $s4, $v0, 4
    ctx->pc = 0x1b05acu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1b05b0: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x1b05b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1b05b4: 0x29900  sll         $s3, $v0, 4
    ctx->pc = 0x1b05b4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1b05b8: 0x651023  subu        $v0, $v1, $a1
    ctx->pc = 0x1b05b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1b05bc: 0x29100  sll         $s2, $v0, 4
    ctx->pc = 0x1b05bcu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1b05c0: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x1b05c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1b05c4: 0x6810002  bgez        $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B05C4u;
    {
        const bool branch_taken_0x1b05c4 = (GPR_S64(ctx, 20) >= 0);
        ctx->pc = 0x1B05C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B05C4u;
        // 0x1b05c8: 0x28900  sll         $s1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b05c4) {
            ctx->pc = 0x1B05D0u;
            goto label_1b05d0;
        }
    }
    ctx->pc = 0x1B05CCu;
    // 0x1b05cc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1b05ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b05d0:
    // 0x1b05d0: 0x6410003  bgez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B05D0u;
    {
        const bool branch_taken_0x1b05d0 = (GPR_S64(ctx, 18) >= 0);
        if (branch_taken_0x1b05d0) {
            ctx->pc = 0x1B05E0u;
            goto label_1b05e0;
        }
    }
    ctx->pc = 0x1B05D8u;
    // 0x1b05d8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1b05d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b05dc: 0x0  nop
    ctx->pc = 0x1b05dcu;
    // NOP
label_1b05e0:
    // 0x1b05e0: 0x1e600003  bgtz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B05E0u;
    {
        const bool branch_taken_0x1b05e0 = (GPR_S64(ctx, 19) > 0);
        if (branch_taken_0x1b05e0) {
            ctx->pc = 0x1B05F0u;
            goto label_1b05f0;
        }
    }
    ctx->pc = 0x1B05E8u;
    // 0x1b05e8: 0x69940  sll         $s3, $a2, 5
    ctx->pc = 0x1b05e8u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x1b05ec: 0x0  nop
    ctx->pc = 0x1b05ecu;
    // NOP
label_1b05f0:
    // 0x1b05f0: 0x1e200003  bgtz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B05F0u;
    {
        const bool branch_taken_0x1b05f0 = (GPR_S64(ctx, 17) > 0);
        if (branch_taken_0x1b05f0) {
            ctx->pc = 0x1B0600u;
            goto label_1b0600;
        }
    }
    ctx->pc = 0x1B05F8u;
    // 0x1b05f8: 0x58940  sll         $s1, $a1, 5
    ctx->pc = 0x1b05f8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x1b05fc: 0x0  nop
    ctx->pc = 0x1b05fcu;
    // NOP
label_1b0600:
    // 0x1b0600: 0x2a822000  slti        $v0, $s4, 0x2000
    ctx->pc = 0x1b0600u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)8192) ? 1 : 0);
    // 0x1b0604: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B0604u;
    {
        const bool branch_taken_0x1b0604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0604u;
        // 0x1b0608: 0x61940  sll         $v1, $a2, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0604) {
            ctx->pc = 0x1B0618u;
            goto label_1b0618;
        }
    }
    ctx->pc = 0x1B060Cu;
    // 0x1b060c: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x1b060cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x1b0610: 0x43a023  subu        $s4, $v0, $v1
    ctx->pc = 0x1b0610u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b0614: 0x0  nop
    ctx->pc = 0x1b0614u;
    // NOP
label_1b0618:
    // 0x1b0618: 0x2a420e00  slti        $v0, $s2, 0xE00
    ctx->pc = 0x1b0618u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3584) ? 1 : 0);
    // 0x1b061c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B061Cu;
    {
        const bool branch_taken_0x1b061c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B061Cu;
        // 0x1b0620: 0x51940  sll         $v1, $a1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b061c) {
            ctx->pc = 0x1B0630u;
            goto label_1b0630;
        }
    }
    ctx->pc = 0x1B0624u;
    // 0x1b0624: 0x24020e00  addiu       $v0, $zero, 0xE00
    ctx->pc = 0x1b0624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3584));
    // 0x1b0628: 0x439023  subu        $s2, $v0, $v1
    ctx->pc = 0x1b0628u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b062c: 0x0  nop
    ctx->pc = 0x1b062cu;
    // NOP
label_1b0630:
    // 0x1b0630: 0x2a612001  slti        $at, $s3, 0x2001
    ctx->pc = 0x1b0630u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)8193) ? 1 : 0);
    // 0x1b0634: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B0634u;
    {
        const bool branch_taken_0x1b0634 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b0634) {
            ctx->pc = 0x1B0640u;
            goto label_1b0640;
        }
    }
    ctx->pc = 0x1B063Cu;
    // 0x1b063c: 0x24132000  addiu       $s3, $zero, 0x2000
    ctx->pc = 0x1b063cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_1b0640:
    // 0x1b0640: 0x2a210e01  slti        $at, $s1, 0xE01
    ctx->pc = 0x1b0640u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3585) ? 1 : 0);
    // 0x1b0644: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B0644u;
    {
        const bool branch_taken_0x1b0644 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b0644) {
            ctx->pc = 0x1B0650u;
            goto label_1b0650;
        }
    }
    ctx->pc = 0x1B064Cu;
    // 0x1b064c: 0x24110e00  addiu       $s1, $zero, 0xE00
    ctx->pc = 0x1b064cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3584));
label_1b0650:
    // 0x1b0650: 0x26827000  addiu       $v0, $s4, 0x7000
    ctx->pc = 0x1b0650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 28672));
    // 0x1b0654: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1b0654u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b0658: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1b0658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1b065c: 0x26427900  addiu       $v0, $s2, 0x7900
    ctx->pc = 0x1b065cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 30976));
    // 0x1b0660: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1b0660u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1b0664: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1b0664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b0668: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1b0668u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1b066c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b066cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b0670: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1b0670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1b0674: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b0674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b0678: 0x838025  or          $s0, $a0, $v1
    ctx->pc = 0x1b0678u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1b067c: 0x8fa400bc  lw          $a0, 0xBC($sp)
    ctx->pc = 0x1b067cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x1b0680: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x1b0680u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1b0684: 0xc070808  jal         func_1C2020
    ctx->pc = 0x1B0684u;
    SET_GPR_U32(ctx, 31, 0x1B068Cu);
    ctx->pc = 0x1B0688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0684u;
    // 0x1b0688: 0x2023025  or          $a2, $s0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2020u, 0x1B0684u, 0x1B068Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B068Cu;
label_1b068c:
    // 0x1b068c: 0x26227900  addiu       $v0, $s1, 0x7900
    ctx->pc = 0x1b068cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 30976));
    // 0x1b0690: 0x26637000  addiu       $v1, $s3, 0x7000
    ctx->pc = 0x1b0690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 28672));
    // 0x1b0694: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b0694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b0698: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1b0698u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b069c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1b069cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1b06a0: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1b06a0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1b06a4: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x1b06a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x1b06a8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1b06a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b06ac: 0x83a825  or          $s5, $a0, $v1
    ctx->pc = 0x1b06acu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1b06b0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b06b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b06b4: 0x8fa400bc  lw          $a0, 0xBC($sp)
    ctx->pc = 0x1b06b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x1b06b8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b06b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b06bc: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x1b06bcu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1b06c0: 0xc070808  jal         func_1C2020
    ctx->pc = 0x1B06C0u;
    SET_GPR_U32(ctx, 31, 0x1B06C8u);
    ctx->pc = 0x1B06C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B06C0u;
    // 0x1b06c4: 0x2a23025  or          $a2, $s5, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 21) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2020u, 0x1B06C0u, 0x1B06C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B06C8u;
label_1b06c8:
    // 0x1b06c8: 0x27b600e8  addiu       $s6, $sp, 0xE8
    ctx->pc = 0x1b06c8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x1b06cc: 0x8fa400bc  lw          $a0, 0xBC($sp)
    ctx->pc = 0x1b06ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x1b06d0: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x1b06d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1b06d4: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1b06d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1b06d8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b06d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b06dc: 0xc070808  jal         func_1C2020
    ctx->pc = 0x1B06DCu;
    SET_GPR_U32(ctx, 31, 0x1B06E4u);
    ctx->pc = 0x1B06E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B06DCu;
    // 0x1b06e0: 0x503025  or          $a2, $v0, $s0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2020u, 0x1B06DCu, 0x1B06E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B06E4u;
label_1b06e4:
    // 0x1b06e4: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x1b06e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1b06e8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1b06e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b06ec: 0x8fa400bc  lw          $a0, 0xBC($sp)
    ctx->pc = 0x1b06ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x1b06f0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b06f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b06f4: 0xc070808  jal         func_1C2020
    ctx->pc = 0x1B06F4u;
    SET_GPR_U32(ctx, 31, 0x1B06FCu);
    ctx->pc = 0x1B06F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B06F4u;
    // 0x1b06f8: 0x553025  or          $a2, $v0, $s5 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2020u, 0x1B06F4u, 0x1B06FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B06FCu;
label_1b06fc:
    // 0x1b06fc: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x1b06fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x1b0700: 0x8fa400bc  lw          $a0, 0xBC($sp)
    ctx->pc = 0x1b0700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x1b0704: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b0704u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b0708: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x1b0708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x1b070c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1b070cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1b0710: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b0710u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1b0714: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1b0714u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1b0718: 0x0  nop
    ctx->pc = 0x1b0718u;
    // NOP
    // 0x1b071c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b071cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b0720: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1b0720u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1b0724: 0xc070808  jal         func_1C2020
    ctx->pc = 0x1B0724u;
    SET_GPR_U32(ctx, 31, 0x1B072Cu);
    ctx->pc = 0x1B0728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0724u;
    // 0x1b0728: 0x2303c  dsll32      $a2, $v0, 0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2020u, 0x1B0724u, 0x1B072Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B072Cu;
label_1b072c:
    // 0x1b072c: 0x8fa400bc  lw          $a0, 0xBC($sp)
    ctx->pc = 0x1b072cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x1b0730: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x1b0730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1b0734: 0x14183c  dsll32      $v1, $s4, 0
    ctx->pc = 0x1b0734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 0));
    // 0x1b0738: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1b0738u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1b073c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1b073cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1b0740: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1b0740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1b0744: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x1b0744u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b0748: 0xc070808  jal         func_1C2020
    ctx->pc = 0x1B0748u;
    SET_GPR_U32(ctx, 31, 0x1B0750u);
    ctx->pc = 0x1B074Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0748u;
    // 0x1b074c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2020u, 0x1B0748u, 0x1B0750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0750u;
label_1b0750:
    // 0x1b0750: 0x8fa400bc  lw          $a0, 0xBC($sp)
    ctx->pc = 0x1b0750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x1b0754: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x1b0754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1b0758: 0x13183c  dsll32      $v1, $s3, 0
    ctx->pc = 0x1b0758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 0));
    // 0x1b075c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1b075cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1b0760: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1b0760u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1b0764: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1b0764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1b0768: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x1b0768u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b076c: 0xc070808  jal         func_1C2020
    ctx->pc = 0x1B076Cu;
    SET_GPR_U32(ctx, 31, 0x1B0774u);
    ctx->pc = 0x1B0770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B076Cu;
    // 0x1b0770: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2020u, 0x1B076Cu, 0x1B0774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0774u;
label_1b0774:
    // 0x1b0774: 0x27a200e4  addiu       $v0, $sp, 0xE4
    ctx->pc = 0x1b0774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x1b0778: 0x8fa800e0  lw          $t0, 0xE0($sp)
    ctx->pc = 0x1b0778u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1b077c: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1b077cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b0780: 0x24091000  addiu       $t1, $zero, 0x1000
    ctx->pc = 0x1b0780u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1b0784: 0x24030700  addiu       $v1, $zero, 0x700
    ctx->pc = 0x1b0784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1792));
    // 0x1b0788: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x1b0788u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x1b078c: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x1b078cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1b0790: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x1b0790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x1b0794: 0x24457900  addiu       $a1, $v0, 0x7900
    ctx->pc = 0x1b0794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x1b0798: 0x25029000  addiu       $v0, $t0, -0x7000
    ctx->pc = 0x1b0798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294938624));
    // 0x1b079c: 0x1224023  subu        $t0, $t1, $v0
    ctx->pc = 0x1b079cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x1b07a0: 0x24e28700  addiu       $v0, $a3, -0x7900
    ctx->pc = 0x1b07a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294936320));
    // 0x1b07a4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1b07a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b07a8: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x1b07a8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b07ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b07acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b07b0: 0x0  nop
    ctx->pc = 0x1b07b0u;
    // NOP
    // 0x1b07b4: 0x46800d60  cvt.s.w     $f21, $f1
    ctx->pc = 0x1b07b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x1b07b8: 0xc049522  jal         func_125488
    ctx->pc = 0x1B07B8u;
    SET_GPR_U32(ctx, 31, 0x1B07C0u);
    ctx->pc = 0x1B07BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B07B8u;
    // 0x1b07bc: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x1B07B8u, 0x1B07C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B07C0u;
label_1b07c0:
    // 0x1b07c0: 0x8ee30038  lw          $v1, 0x38($s7)
    ctx->pc = 0x1b07c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 56)));
    // 0x1b07c4: 0x3082b  sltu        $at, $zero, $v1
    ctx->pc = 0x1b07c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1b07c8: 0x102000b7  beqz        $at, . + 4 + (0xB7 << 2)
    ctx->pc = 0x1B07C8u;
    {
        const bool branch_taken_0x1b07c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B07CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B07C8u;
        // 0x1b07cc: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b07c8) {
            ctx->pc = 0x1B0AA8u;
            goto label_1b0aa8;
        }
    }
    ctx->pc = 0x1B07D0u;
    // 0x1b07d0: 0x2e0b02d  daddu       $s6, $s7, $zero
    ctx->pc = 0x1b07d0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b07d4: 0x0  nop
    ctx->pc = 0x1b07d4u;
    // NOP
label_1b07d8:
    // 0x1b07d8: 0x92c4003e  lbu         $a0, 0x3E($s6)
    ctx->pc = 0x1b07d8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 62)));
    // 0x1b07dc: 0x92c2003d  lbu         $v0, 0x3D($s6)
    ctx->pc = 0x1b07dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 61)));
    // 0x1b07e0: 0x26c5003c  addiu       $a1, $s6, 0x3C
    ctx->pc = 0x1b07e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 60));
    // 0x1b07e4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1b07e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1b07e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b07e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b07ec: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1b07ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1b07f0: 0x2e31821  addu        $v1, $s7, $v1
    ctx->pc = 0x1b07f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x1b07f4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B07F4u;
    {
        const bool branch_taken_0x1b07f4 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1B07F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B07F4u;
        // 0x1b07f8: 0x247400bc  addiu       $s4, $v1, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 188));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b07f4) {
            ctx->pc = 0x1B0808u;
            goto label_1b0808;
        }
    }
    ctx->pc = 0x1B07FCu;
    // 0x1b07fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b07fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b0800: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B0800u;
    {
        const bool branch_taken_0x1b0800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0800u;
        // 0x1b0804: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0800) {
            ctx->pc = 0x1B0824u;
            goto label_1b0824;
        }
    }
    ctx->pc = 0x1B0808u;
label_1b0808:
    // 0x1b0808: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1b0808u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1b080c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b080cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b0810: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1b0810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b0814: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b0814u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b0818: 0x0  nop
    ctx->pc = 0x1b0818u;
    // NOP
    // 0x1b081c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1b081cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b0820: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1b0820u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1b0824:
    // 0x1b0824: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x1b0824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x1b0828: 0x90a60003  lbu         $a2, 0x3($a1)
    ctx->pc = 0x1b0828u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x1b082c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b082cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b0830: 0x92830014  lbu         $v1, 0x14($s4)
    ctx->pc = 0x1b0830u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x1b0834: 0x8fa800e0  lw          $t0, 0xE0($sp)
    ctx->pc = 0x1b0834u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1b0838: 0x3c023c12  lui         $v0, 0x3C12
    ctx->pc = 0x1b0838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15378 << 16));
    // 0x1b083c: 0x34494925  ori         $t1, $v0, 0x4925
    ctx->pc = 0x1b083cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18725);
    // 0x1b0840: 0x27a200e4  addiu       $v0, $sp, 0xE4
    ctx->pc = 0x1b0840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x1b0844: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1b0844u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b0848: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1b0848u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b084c: 0x62b40  sll         $a1, $a2, 13
    ctx->pc = 0x1b084cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 13));
    // 0x1b0850: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x1b0850u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1b0854: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x1b0854u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1b0858: 0x58a43  sra         $s1, $a1, 9
    ctx->pc = 0x1b0858u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 5), 9));
    // 0x1b085c: 0x4827c  dsll32      $s0, $a0, 9
    ctx->pc = 0x1b085cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) << (32 + 9));
    // 0x1b0860: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x1b0860u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b0864: 0x10827f  dsra32      $s0, $s0, 9
    ctx->pc = 0x1b0864u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 9));
    // 0x1b0868: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1b0868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1b086c: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1b086cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1b0870: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1b0870u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b0874: 0x4601a802  mul.s       $f0, $f21, $f1
    ctx->pc = 0x1b0874u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x1b0878: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b0878u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1b087c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1b087cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1b0880: 0xf012  mflo        $fp
    ctx->pc = 0x1b0880u;
    SET_GPR_U64(ctx, 30, ctx->lo);
    // 0x1b0884: 0x4601a002  mul.s       $f0, $f20, $f1
    ctx->pc = 0x1b0884u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x1b0888: 0x1029821  addu        $s3, $t0, $v0
    ctx->pc = 0x1b0888u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1b088c: 0x2711021  addu        $v0, $s3, $s1
    ctx->pc = 0x1b088cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x1b0890: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b0890u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1b0894: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1b0894u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1b0898: 0x440000d  bltz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B0898u;
    {
        const bool branch_taken_0x1b0898 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1B089Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0898u;
        // 0x1b089c: 0xe39021  addu        $s2, $a3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0898) {
            ctx->pc = 0x1B08D0u;
            goto label_1b08d0;
        }
    }
    ctx->pc = 0x1B08A0u;
    // 0x1b08a0: 0x2501021  addu        $v0, $s2, $s0
    ctx->pc = 0x1b08a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1b08a4: 0x440000a  bltz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B08A4u;
    {
        const bool branch_taken_0x1b08a4 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1B08A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B08A4u;
        // 0x1b08a8: 0x2711023  subu        $v0, $s3, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b08a4) {
            ctx->pc = 0x1B08D0u;
            goto label_1b08d0;
        }
    }
    ctx->pc = 0x1B08ACu;
    // 0x1b08ac: 0x34019001  ori         $at, $zero, 0x9001
    ctx->pc = 0x1b08acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36865);
    // 0x1b08b0: 0x41082a  slt         $at, $v0, $at
    ctx->pc = 0x1b08b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1b08b4: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B08B4u;
    {
        const bool branch_taken_0x1b08b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b08b4) {
            ctx->pc = 0x1B08D0u;
            goto label_1b08d0;
        }
    }
    ctx->pc = 0x1B08BCu;
    // 0x1b08bc: 0x2501023  subu        $v0, $s2, $s0
    ctx->pc = 0x1b08bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1b08c0: 0x34018701  ori         $at, $zero, 0x8701
    ctx->pc = 0x1b08c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34561);
    // 0x1b08c4: 0x41082a  slt         $at, $v0, $at
    ctx->pc = 0x1b08c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1b08c8: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B08C8u;
    {
        const bool branch_taken_0x1b08c8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b08c8) {
            ctx->pc = 0x1B08F0u;
            goto label_1b08f0;
        }
    }
    ctx->pc = 0x1B08D0u;
label_1b08d0:
    // 0x1b08d0: 0x8fa400bc  lw          $a0, 0xBC($sp)
    ctx->pc = 0x1b08d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x1b08d4: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1b08d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1b08d8: 0xc070808  jal         func_1C2020
    ctx->pc = 0x1B08D8u;
    SET_GPR_U32(ctx, 31, 0x1B08E0u);
    ctx->pc = 0x1B08DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B08D8u;
    // 0x1b08dc: 0x3c060001  lui         $a2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2020u, 0x1B08D8u, 0x1B08E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B08E0u;
label_1b08e0:
    // 0x1b08e0: 0xc0707fc  jal         func_1C1FF0
    ctx->pc = 0x1B08E0u;
    SET_GPR_U32(ctx, 31, 0x1B08E8u);
    ctx->pc = 0x1B08E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B08E0u;
    // 0x1b08e4: 0x8fa400bc  lw          $a0, 0xBC($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FF0u, 0x1B08E0u, 0x1B08E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B08E8u;
label_1b08e8:
    // 0x1b08e8: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x1B08E8u;
    {
        const bool branch_taken_0x1b08e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b08e8) {
            ctx->pc = 0x1B0A90u;
            goto label_1b0a90;
        }
    }
    ctx->pc = 0x1B08F0u;
label_1b08f0:
    // 0x1b08f0: 0x8fa400bc  lw          $a0, 0xBC($sp)
    ctx->pc = 0x1b08f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x1b08f4: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1b08f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1b08f8: 0xc070808  jal         func_1C2020
    ctx->pc = 0x1B08F8u;
    SET_GPR_U32(ctx, 31, 0x1B0900u);
    ctx->pc = 0x1B08FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B08F8u;
    // 0x1b08fc: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2020u, 0x1B08F8u, 0x1B0900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0900u;
label_1b0900:
    // 0x1b0900: 0xc0707fc  jal         func_1C1FF0
    ctx->pc = 0x1B0900u;
    SET_GPR_U32(ctx, 31, 0x1B0908u);
    ctx->pc = 0x1B0904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0900u;
    // 0x1b0904: 0x8fa400bc  lw          $a0, 0xBC($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FF0u, 0x1B0900u, 0x1B0908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0908u;
label_1b0908:
    // 0x1b0908: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x1b0908u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b090c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1b090cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0910:
    // 0x1b0910: 0x28a1821  addu        $v1, $s4, $t2
    ctx->pc = 0x1b0910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 10)));
    // 0x1b0914: 0x906c0010  lbu         $t4, 0x10($v1)
    ctx->pc = 0x1b0914u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1b0918: 0x90640011  lbu         $a0, 0x11($v1)
    ctx->pc = 0x1b0918u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 17)));
    // 0x1b091c: 0x11840058  beq         $t4, $a0, . + 4 + (0x58 << 2)
    ctx->pc = 0x1B091Cu;
    {
        const bool branch_taken_0x1b091c = (GPR_U64(ctx, 12) == GPR_U64(ctx, 4));
        ctx->pc = 0x1B0920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B091Cu;
        // 0x1b0920: 0x72241818  mult1       $v1, $s1, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b091c) {
            ctx->pc = 0x1B0A80u;
            goto label_1b0a80;
        }
    }
    ctx->pc = 0x1B0924u;
    // 0x1b0924: 0x22c3818  mult        $a3, $s1, $t4
    ctx->pc = 0x1b0924u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1b0928: 0x34203  sra         $t0, $v1, 8
    ctx->pc = 0x1b0928u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 3), 8));
    // 0x1b092c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b092cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0930: 0x72041818  mult1       $v1, $s0, $a0
    ctx->pc = 0x1b0930u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1b0934: 0x33203  sra         $a2, $v1, 8
    ctx->pc = 0x1b0934u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 8));
    // 0x1b0938: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b0938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b093c: 0x92830014  lbu         $v1, 0x14($s4)
    ctx->pc = 0x1b093cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x1b0940: 0x74a03  sra         $t1, $a3, 8
    ctx->pc = 0x1b0940u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 7), 8));
    // 0x1b0944: 0x20c3818  mult        $a3, $s0, $t4
    ctx->pc = 0x1b0944u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1b0948: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x1b0948u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1b094c: 0x1020002c  beqz        $at, . + 4 + (0x2C << 2)
    ctx->pc = 0x1B094Cu;
    {
        const bool branch_taken_0x1b094c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B094Cu;
        // 0x1b0950: 0x73a03  sra         $a3, $a3, 8 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b094c) {
            ctx->pc = 0x1B0A00u;
            goto label_1b0a00;
        }
    }
    ctx->pc = 0x1B0954u;
    // 0x1b0954: 0x0  nop
    ctx->pc = 0x1b0954u;
    // NOP
label_1b0958:
    // 0x1b0958: 0x46203  sra         $t4, $a0, 8
    ctx->pc = 0x1b0958u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 4), 8));
    // 0x1b095c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1b095cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1b0960: 0x25830040  addiu       $v1, $t4, 0x40
    ctx->pc = 0x1b0960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 64));
    // 0x1b0964: 0x1810821  addu        $at, $t4, $at
    ctx->pc = 0x1b0964u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 1)));
    // 0x1b0968: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1b0968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1b096c: 0x802e0000  lb          $t6, 0x0($at)
    ctx->pc = 0x1b096cu;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 0)));
    // 0x1b0970: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1b0970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1b0974: 0x9e2021  addu        $a0, $a0, $fp
    ctx->pc = 0x1b0974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
    // 0x1b0978: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1b0978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1b097c: 0x71c76018  mult1       $t4, $t6, $a3
    ctx->pc = 0x1b097cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 7); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x1b0980: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x1b0980u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x1b0984: 0xc69c3  sra         $t5, $t4, 7
    ctx->pc = 0x1b0984u;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 12), 7));
    // 0x1b0988: 0x80230000  lb          $v1, 0x0($at)
    ctx->pc = 0x1b0988u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 0)));
    // 0x1b098c: 0x71c66018  mult1       $t4, $t6, $a2
    ctx->pc = 0x1b098cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 6); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x1b0990: 0x24d6821  addu        $t5, $s2, $t5
    ctx->pc = 0x1b0990u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 13)));
    // 0x1b0994: 0xc61c3  sra         $t4, $t4, 7
    ctx->pc = 0x1b0994u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 12), 7));
    // 0x1b0998: 0xd683c  dsll32      $t5, $t5, 0
    ctx->pc = 0x1b0998u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << (32 + 0));
    // 0x1b099c: 0x24c6021  addu        $t4, $s2, $t4
    ctx->pc = 0x1b099cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 12)));
    // 0x1b09a0: 0xd683f  dsra32      $t5, $t5, 0
    ctx->pc = 0x1b09a0u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 13) >> (32 + 0));
    // 0x1b09a4: 0xc603c  dsll32      $t4, $t4, 0
    ctx->pc = 0x1b09a4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 0));
    // 0x1b09a8: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x1b09a8u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
    // 0x1b09ac: 0xd6c38  dsll        $t5, $t5, 16
    ctx->pc = 0x1b09acu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 16);
    // 0x1b09b0: 0xc6438  dsll        $t4, $t4, 16
    ctx->pc = 0x1b09b0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 16);
    // 0x1b09b4: 0x697018  mult        $t6, $v1, $t1
    ctx->pc = 0x1b09b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x1b09b8: 0x681818  mult        $v1, $v1, $t0
    ctx->pc = 0x1b09b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1b09bc: 0xe71c3  sra         $t6, $t6, 7
    ctx->pc = 0x1b09bcu;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 14), 7));
    // 0x1b09c0: 0x26e7021  addu        $t6, $s3, $t6
    ctx->pc = 0x1b09c0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 14)));
    // 0x1b09c4: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x1b09c4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x1b09c8: 0xe703f  dsra32      $t6, $t6, 0
    ctx->pc = 0x1b09c8u;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 14) >> (32 + 0));
    // 0x1b09cc: 0x319c3  sra         $v1, $v1, 7
    ctx->pc = 0x1b09ccu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 7));
    // 0x1b09d0: 0x1cd6825  or          $t5, $t6, $t5
    ctx->pc = 0x1b09d0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x1b09d4: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1b09d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1b09d8: 0xfd6d0008  sd          $t5, 0x8($t3)
    ctx->pc = 0x1b09d8u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 8), GPR_U64(ctx, 13));
    // 0x1b09dc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b09dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b09e0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1b09e0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1b09e4: 0x6c1825  or          $v1, $v1, $t4
    ctx->pc = 0x1b09e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 12));
    // 0x1b09e8: 0xfd630018  sd          $v1, 0x18($t3)
    ctx->pc = 0x1b09e8u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 24), GPR_U64(ctx, 3));
    // 0x1b09ec: 0x92830014  lbu         $v1, 0x14($s4)
    ctx->pc = 0x1b09ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x1b09f0: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x1b09f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1b09f4: 0x1460ffd8  bnez        $v1, . + 4 + (-0x28 << 2)
    ctx->pc = 0x1B09F4u;
    {
        const bool branch_taken_0x1b09f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B09F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B09F4u;
        // 0x1b09f8: 0x256b0020  addiu       $t3, $t3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b09f4) {
            ctx->pc = 0x1B0958u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b0958;
        }
    }
    ctx->pc = 0x1B09FCu;
    // 0x1b09fc: 0x0  nop
    ctx->pc = 0x1b09fcu;
    // NOP
label_1b0a00:
    // 0x1b0a00: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1b0a00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1b0a04: 0x80230040  lb          $v1, 0x40($at)
    ctx->pc = 0x1b0a04u;
    SET_GPR_S32(ctx, 3, (int8_t)runtime->Load8(rdram, ctx, 0x70000040u));
    // 0x1b0a08: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1b0a08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1b0a0c: 0x80240000  lb          $a0, 0x0($at)
    ctx->pc = 0x1b0a0cu;
    SET_GPR_S32(ctx, 4, (int8_t)runtime->Load8(rdram, ctx, 0x70000000u));
    // 0x1b0a10: 0x694818  mult        $t1, $v1, $t1
    ctx->pc = 0x1b0a10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x1b0a14: 0x70872818  mult1       $a1, $a0, $a3
    ctx->pc = 0x1b0a14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1b0a18: 0x70862018  mult1       $a0, $a0, $a2
    ctx->pc = 0x1b0a18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1b0a1c: 0x529c3  sra         $a1, $a1, 7
    ctx->pc = 0x1b0a1cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 7));
    // 0x1b0a20: 0x2453021  addu        $a2, $s2, $a1
    ctx->pc = 0x1b0a20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1b0a24: 0x421c3  sra         $a0, $a0, 7
    ctx->pc = 0x1b0a24u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 7));
    // 0x1b0a28: 0x682818  mult        $a1, $v1, $t0
    ctx->pc = 0x1b0a28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1b0a2c: 0x919c3  sra         $v1, $t1, 7
    ctx->pc = 0x1b0a2cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 9), 7));
    // 0x1b0a30: 0x2633821  addu        $a3, $s3, $v1
    ctx->pc = 0x1b0a30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1b0a34: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x1b0a34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1b0a38: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1b0a38u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1b0a3c: 0x7303c  dsll32      $a2, $a3, 0
    ctx->pc = 0x1b0a3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 0));
    // 0x1b0a40: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x1b0a40u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x1b0a44: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1b0a44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1b0a48: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1b0a48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1b0a4c: 0x2441821  addu        $v1, $s2, $a0
    ctx->pc = 0x1b0a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x1b0a50: 0xfd660008  sd          $a2, 0x8($t3)
    ctx->pc = 0x1b0a50u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 8), GPR_U64(ctx, 6));
    // 0x1b0a54: 0x521c3  sra         $a0, $a1, 7
    ctx->pc = 0x1b0a54u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 7));
    // 0x1b0a58: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b0a58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b0a5c: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x1b0a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x1b0a60: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1b0a60u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1b0a64: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1b0a64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1b0a68: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1b0a68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1b0a6c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1b0a6cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1b0a70: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1b0a70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1b0a74: 0xfd630018  sd          $v1, 0x18($t3)
    ctx->pc = 0x1b0a74u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 24), GPR_U64(ctx, 3));
    // 0x1b0a78: 0x256b0020  addiu       $t3, $t3, 0x20
    ctx->pc = 0x1b0a78u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
    // 0x1b0a7c: 0x0  nop
    ctx->pc = 0x1b0a7cu;
    // NOP
label_1b0a80:
    // 0x1b0a80: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1b0a80u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1b0a84: 0x2d430003  sltiu       $v1, $t2, 0x3
    ctx->pc = 0x1b0a84u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1b0a88: 0x1460ffa1  bnez        $v1, . + 4 + (-0x5F << 2)
    ctx->pc = 0x1B0A88u;
    {
        const bool branch_taken_0x1b0a88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b0a88) {
            ctx->pc = 0x1B0910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b0910;
        }
    }
    ctx->pc = 0x1B0A90u;
label_1b0a90:
    // 0x1b0a90: 0x8ee30038  lw          $v1, 0x38($s7)
    ctx->pc = 0x1b0a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 56)));
    // 0x1b0a94: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1b0a94u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1b0a98: 0x2a3182b  sltu        $v1, $s5, $v1
    ctx->pc = 0x1b0a98u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1b0a9c: 0x1460ff4e  bnez        $v1, . + 4 + (-0xB2 << 2)
    ctx->pc = 0x1B0A9Cu;
    {
        const bool branch_taken_0x1b0a9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0A9Cu;
        // 0x1b0aa0: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0a9c) {
            ctx->pc = 0x1B07D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b07d8;
        }
    }
    ctx->pc = 0x1B0AA4u;
    // 0x1b0aa4: 0x0  nop
    ctx->pc = 0x1b0aa4u;
    // NOP
label_1b0aa8:
    // 0x1b0aa8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1b0aa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b0aac: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1b0aacu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b0ab0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1b0ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1b0ab4: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1b0ab4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b0ab8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1b0ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b0abc: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1b0abcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b0ac0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1b0ac0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b0ac4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1b0ac4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b0ac8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1b0ac8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b0acc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1b0accu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b0ad0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1b0ad0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b0ad4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b0ad4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b0ad8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0AD8u;
        // 0x1b0adc: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0AD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B0AE0u;
}
