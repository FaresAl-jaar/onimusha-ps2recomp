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

// Function: sub_0012F890
// Address: 0x12f890 - 0x12fd7c
void sub_0012F890_0x12f890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012F890_0x12f890");
#endif

    switch (ctx->pc) {
        case 0x12f8e4u: goto label_12f8e4;
        case 0x12f900u: goto label_12f900;
        case 0x12f910u: goto label_12f910;
        case 0x12f924u: goto label_12f924;
        case 0x12f9b0u: goto label_12f9b0;
        case 0x12fa38u: goto label_12fa38;
        case 0x12fa88u: goto label_12fa88;
        case 0x12fac8u: goto label_12fac8;
        case 0x12fb30u: goto label_12fb30;
        case 0x12fb38u: goto label_12fb38;
        case 0x12fbb0u: goto label_12fbb0;
        case 0x12fbd4u: goto label_12fbd4;
        case 0x12fbe8u: goto label_12fbe8;
        case 0x12fc04u: goto label_12fc04;
        case 0x12fc18u: goto label_12fc18;
        case 0x12fc70u: goto label_12fc70;
        case 0x12fcc0u: goto label_12fcc0;
        case 0x12fd50u: goto label_12fd50;
        default: break;
    }

    ctx->pc = 0x12f890u;

    // 0x12f890: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x12f890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x12f894: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x12f894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12f898: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x12f898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x12f89c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x12f89cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x12f8a0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x12f8a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x12f8a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12f8a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f8a8: 0xe7b90024  swc1        $f25, 0x24($sp)
    ctx->pc = 0x12f8a8u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x12f8ac: 0x3c100069  lui         $s0, 0x69
    ctx->pc = 0x12f8acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
    // 0x12f8b0: 0xe7b80020  swc1        $f24, 0x20($sp)
    ctx->pc = 0x12f8b0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x12f8b4: 0xe7b7001c  swc1        $f23, 0x1C($sp)
    ctx->pc = 0x12f8b4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x12f8b8: 0xe7b60018  swc1        $f22, 0x18($sp)
    ctx->pc = 0x12f8b8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x12f8bc: 0xe7b50014  swc1        $f21, 0x14($sp)
    ctx->pc = 0x12f8bcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x12f8c0: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x12f8c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x12f8c4: 0x84830026  lh          $v1, 0x26($a0)
    ctx->pc = 0x12f8c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 38)));
    // 0x12f8c8: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x12F8C8u;
    {
        const bool branch_taken_0x12f8c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x12F8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F8C8u;
        // 0x12f8cc: 0x261069a0  addiu       $s0, $s0, 0x69A0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f8c8) {
            ctx->pc = 0x12F8F0u;
            goto label_12f8f0;
        }
    }
    ctx->pc = 0x12F8D0u;
    // 0x12f8d0: 0x26040100  addiu       $a0, $s0, 0x100
    ctx->pc = 0x12f8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x12f8d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12f8d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f8d8: 0x26260060  addiu       $a2, $s1, 0x60
    ctx->pc = 0x12f8d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x12f8dc: 0xc0415d0  jal         func_105740
    ctx->pc = 0x12F8DCu;
    SET_GPR_U32(ctx, 31, 0x12F8E4u);
    ctx->pc = 0x12F8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F8DCu;
    // 0x12f8e0: 0x26270050  addiu       $a3, $s1, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105740u, 0x12F8DCu, 0x12F8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F8E4u;
label_12f8e4:
    // 0x12f8e4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x12F8E4u;
    {
        const bool branch_taken_0x12f8e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f8e4) {
            ctx->pc = 0x12F928u;
            goto label_12f928;
        }
    }
    ctx->pc = 0x12F8ECu;
    // 0x12f8ec: 0x0  nop
    ctx->pc = 0x12f8ecu;
    // NOP
label_12f8f0:
    // 0x12f8f0: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x12f8f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x12f8f4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x12f8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x12f8f8: 0xc050d14  jal         func_143450
    ctx->pc = 0x12F8F8u;
    SET_GPR_U32(ctx, 31, 0x12F900u);
    ctx->pc = 0x12F8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F8F8u;
    // 0x12f8fc: 0x24a55a40  addiu       $a1, $a1, 0x5A40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143450u, 0x12F8F8u, 0x12F900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F900u;
label_12f900:
    // 0x12f900: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x12f900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x12f904: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x12f904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x12f908: 0xc041442  jal         func_105108
    ctx->pc = 0x12F908u;
    SET_GPR_U32(ctx, 31, 0x12F910u);
    ctx->pc = 0x12F90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F908u;
    // 0x12f90c: 0x26260050  addiu       $a2, $s1, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x12F908u, 0x12F910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F910u;
label_12f910:
    // 0x12f910: 0x26040100  addiu       $a0, $s0, 0x100
    ctx->pc = 0x12f910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x12f914: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12f914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f918: 0x26260060  addiu       $a2, $s1, 0x60
    ctx->pc = 0x12f918u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x12f91c: 0xc0415d0  jal         func_105740
    ctx->pc = 0x12F91Cu;
    SET_GPR_U32(ctx, 31, 0x12F924u);
    ctx->pc = 0x12F920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F91Cu;
    // 0x12f920: 0x27a700e0  addiu       $a3, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105740u, 0x12F91Cu, 0x12F924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F924u;
label_12f924:
    // 0x12f924: 0x0  nop
    ctx->pc = 0x12f924u;
    // NOP
label_12f928:
    // 0x12f928: 0x3c02491f  lui         $v0, 0x491F
    ctx->pc = 0x12f928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18719 << 16));
    // 0x12f92c: 0xc6390044  lwc1        $f25, 0x44($s1)
    ctx->pc = 0x12f92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x12f930: 0x3c044180  lui         $a0, 0x4180
    ctx->pc = 0x12f930u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16768 << 16));
    // 0x12f934: 0x3443ff60  ori         $v1, $v0, 0xFF60
    ctx->pc = 0x12f934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65376);
    // 0x12f938: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x12f938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x12f93c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x12f93cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x12f940: 0xae240074  sw          $a0, 0x74($s1)
    ctx->pc = 0x12f940u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 4));
    // 0x12f944: 0xae230078  sw          $v1, 0x78($s1)
    ctx->pc = 0x12f944u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 3));
    // 0x12f948: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x12f948u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x12f94c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x12f94cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x12f950: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12F950u;
    {
        const bool branch_taken_0x12f950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F950u;
        // 0x12f954: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f950) {
            ctx->pc = 0x12F960u;
            goto label_12f960;
        }
    }
    ctx->pc = 0x12F958u;
    // 0x12f958: 0xae220074  sw          $v0, 0x74($s1)
    ctx->pc = 0x12f958u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
    // 0x12f95c: 0x0  nop
    ctx->pc = 0x12f95cu;
    // NOP
label_12f960:
    // 0x12f960: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x12f960u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x12f964: 0xc6200078  lwc1        $f0, 0x78($s1)
    ctx->pc = 0x12f964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12f968: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x12f968u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x12f96c: 0x3c023eee  lui         $v0, 0x3EEE
    ctx->pc = 0x12f96cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16110 << 16));
    // 0x12f970: 0x3443eeef  ori         $v1, $v0, 0xEEEF
    ctx->pc = 0x12f970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61167);
    // 0x12f974: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x12f974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x12f978: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x12f978u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x12f97c: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x12f97cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x12f980: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x12f980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x12f984: 0x3c02477f  lui         $v0, 0x477F
    ctx->pc = 0x12f984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18303 << 16));
    // 0x12f988: 0xc6330074  lwc1        $f19, 0x74($s1)
    ctx->pc = 0x12f988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x12f98c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x12f98cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x12f990: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x12f990u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x12f994: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x12f994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
    // 0x12f998: 0x44838800  mtc1        $v1, $f17
    ctx->pc = 0x12f998u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x12f99c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x12f99cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x12f9a0: 0x260401c0  addiu       $a0, $s0, 0x1C0
    ctx->pc = 0x12f9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
    // 0x12f9a4: 0x46007c06  mov.s       $f16, $f15
    ctx->pc = 0x12f9a4u;
    ctx->f[16] = FPU_MOV_S(ctx->f[15]);
    // 0x12f9a8: 0xc041646  jal         func_105918
    ctx->pc = 0x12F9A8u;
    SET_GPR_U32(ctx, 31, 0x12F9B0u);
    ctx->pc = 0x12F9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F9A8u;
    // 0x12f9ac: 0x4600cb06  mov.s       $f12, $f25 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105918u, 0x12F9A8u, 0x12F9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F9B0u;
label_12f9b0:
    // 0x12f9b0: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x12f9b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x12f9b4: 0x0  nop
    ctx->pc = 0x12f9b4u;
    // NOP
    // 0x12f9b8: 0x46191832  c.eq.s      $f3, $f25
    ctx->pc = 0x12f9b8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12f9bc: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
    ctx->pc = 0x12F9BCu;
    {
        const bool branch_taken_0x12f9bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12f9bc) {
            ctx->pc = 0x12FA28u;
            goto label_12fa28;
        }
    }
    ctx->pc = 0x12F9C4u;
    // 0x12f9c4: 0xc6200070  lwc1        $f0, 0x70($s1)
    ctx->pc = 0x12f9c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12f9c8: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x12f9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x12f9cc: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x12f9ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x12f9d0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x12f9d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12f9d4: 0x3c023eee  lui         $v0, 0x3EEE
    ctx->pc = 0x12f9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16110 << 16));
    // 0x12f9d8: 0x3442eeef  ori         $v0, $v0, 0xEEEF
    ctx->pc = 0x12f9d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61167);
    // 0x12f9dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x12f9dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12f9e0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x12f9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x12f9e4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x12f9e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x12f9e8: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x12f9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x12f9ec: 0xe60001c0  swc1        $f0, 0x1C0($s0)
    ctx->pc = 0x12f9ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 448), bits); }
    // 0x12f9f0: 0xe60301c4  swc1        $f3, 0x1C4($s0)
    ctx->pc = 0x12f9f0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 452), bits); }
    // 0x12f9f4: 0xe60301cc  swc1        $f3, 0x1CC($s0)
    ctx->pc = 0x12f9f4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 460), bits); }
    // 0x12f9f8: 0xe60301d0  swc1        $f3, 0x1D0($s0)
    ctx->pc = 0x12f9f8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 464), bits); }
    // 0x12f9fc: 0xc6200070  lwc1        $f0, 0x70($s1)
    ctx->pc = 0x12f9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12fa00: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x12fa00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x12fa04: 0xe60001d4  swc1        $f0, 0x1D4($s0)
    ctx->pc = 0x12fa04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 468), bits); }
    // 0x12fa08: 0xe60301dc  swc1        $f3, 0x1DC($s0)
    ctx->pc = 0x12fa08u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 476), bits); }
    // 0x12fa0c: 0xe60301e0  swc1        $f3, 0x1E0($s0)
    ctx->pc = 0x12fa0cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 480), bits); }
    // 0x12fa10: 0xe60301e4  swc1        $f3, 0x1E4($s0)
    ctx->pc = 0x12fa10u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 484), bits); }
    // 0x12fa14: 0xae0301ec  sw          $v1, 0x1EC($s0)
    ctx->pc = 0x12fa14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 492), GPR_U32(ctx, 3));
    // 0x12fa18: 0xae0201f0  sw          $v0, 0x1F0($s0)
    ctx->pc = 0x12fa18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 496), GPR_U32(ctx, 2));
    // 0x12fa1c: 0xae0201f4  sw          $v0, 0x1F4($s0)
    ctx->pc = 0x12fa1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 500), GPR_U32(ctx, 2));
    // 0x12fa20: 0xe60301fc  swc1        $f3, 0x1FC($s0)
    ctx->pc = 0x12fa20u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 508), bits); }
    // 0x12fa24: 0x0  nop
    ctx->pc = 0x12fa24u;
    // NOP
label_12fa28:
    // 0x12fa28: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x12fa28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x12fa2c: 0x260501c0  addiu       $a1, $s0, 0x1C0
    ctx->pc = 0x12fa2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
    // 0x12fa30: 0xc04144e  jal         func_105138
    ctx->pc = 0x12FA30u;
    SET_GPR_U32(ctx, 31, 0x12FA38u);
    ctx->pc = 0x12FA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FA30u;
    // 0x12fa34: 0x26060100  addiu       $a2, $s0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x12FA30u, 0x12FA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FA38u;
label_12fa38:
    // 0x12fa38: 0x260700c0  addiu       $a3, $s0, 0xC0
    ctx->pc = 0x12fa38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x12fa3c: 0x260301c0  addiu       $v1, $s0, 0x1C0
    ctx->pc = 0x12fa3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
    // 0x12fa40: 0x78680000  lq          $t0, 0x0($v1)
    ctx->pc = 0x12fa40u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12fa44: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x12fa44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x12fa48: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x12fa48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12fa4c: 0x260400c0  addiu       $a0, $s0, 0xC0
    ctx->pc = 0x12fa4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x12fa50: 0x260500c0  addiu       $a1, $s0, 0xC0
    ctx->pc = 0x12fa50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x12fa54: 0x26060100  addiu       $a2, $s0, 0x100
    ctx->pc = 0x12fa54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x12fa58: 0x3c0242e0  lui         $v0, 0x42E0
    ctx->pc = 0x12fa58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17120 << 16));
    // 0x12fa5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12fa5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12fa60: 0x7ce80000  sq          $t0, 0x0($a3)
    ctx->pc = 0x12fa60u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 8));
    // 0x12fa64: 0x78680010  lq          $t0, 0x10($v1)
    ctx->pc = 0x12fa64u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x12fa68: 0x7ce80010  sq          $t0, 0x10($a3)
    ctx->pc = 0x12fa68u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 8));
    // 0x12fa6c: 0x78680020  lq          $t0, 0x20($v1)
    ctx->pc = 0x12fa6cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x12fa70: 0x7ce80020  sq          $t0, 0x20($a3)
    ctx->pc = 0x12fa70u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), GPR_VEC(ctx, 8));
    // 0x12fa74: 0x78680030  lq          $t0, 0x30($v1)
    ctx->pc = 0x12fa74u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x12fa78: 0x7ce80030  sq          $t0, 0x30($a3)
    ctx->pc = 0x12fa78u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 48), GPR_VEC(ctx, 8));
    // 0x12fa7c: 0xe60100e0  swc1        $f1, 0xE0($s0)
    ctx->pc = 0x12fa7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
    // 0x12fa80: 0xc04144e  jal         func_105138
    ctx->pc = 0x12FA80u;
    SET_GPR_U32(ctx, 31, 0x12FA88u);
    ctx->pc = 0x12FA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FA80u;
    // 0x12fa84: 0xe60000e4  swc1        $f0, 0xE4($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x12FA80u, 0x12FA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FA88u;
label_12fa88:
    // 0x12fa88: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x12fa88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x12fa8c: 0x3c03477f  lui         $v1, 0x477F
    ctx->pc = 0x12fa8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18303 << 16));
    // 0x12fa90: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x12fa90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x12fa94: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x12fa94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
    // 0x12fa98: 0xc6370074  lwc1        $f23, 0x74($s1)
    ctx->pc = 0x12fa98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x12fa9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12fa9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12faa0: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x12faa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x12faa4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12faa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12faa8: 0xc6360078  lwc1        $f22, 0x78($s1)
    ctx->pc = 0x12faa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x12faac: 0x4483a800  mtc1        $v1, $f21
    ctx->pc = 0x12faacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x12fab0: 0x4600b802  mul.s       $f0, $f23, $f0
    ctx->pc = 0x12fab0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x12fab4: 0x46190603  div.s       $f24, $f0, $f25
    ctx->pc = 0x12fab4u;
    { if (ctx->f[25] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[24] = FPU_DIV_S(ctx->f[0], ctx->f[25]); }
    // 0x12fab8: 0x0  nop
    ctx->pc = 0x12fab8u;
    // NOP
    // 0x12fabc: 0x0  nop
    ctx->pc = 0x12fabcu;
    // NOP
    // 0x12fac0: 0xc04150c  jal         func_105430
    ctx->pc = 0x12FAC0u;
    SET_GPR_U32(ctx, 31, 0x12FAC8u);
    ctx->pc = 0x105430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105430u, 0x12FAC0u, 0x12FAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FAC8u;
label_12fac8:
    // 0x12fac8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x12fac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x12facc: 0x3c03c000  lui         $v1, 0xC000
    ctx->pc = 0x12faccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49152 << 16));
    // 0x12fad0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x12fad0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12fad4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12fad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fad8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12fad8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12fadc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12fadcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fae0: 0x46170882  mul.s       $f2, $f1, $f23
    ctx->pc = 0x12fae0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[23]);
    // 0x12fae4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x12fae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x12fae8: 0x26060100  addiu       $a2, $s0, 0x100
    ctx->pc = 0x12fae8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x12faec: 0x4618c040  add.s       $f1, $f24, $f24
    ctx->pc = 0x12faecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[24], ctx->f[24]);
    // 0x12faf0: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x12faf0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x12faf4: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x12faf4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x12faf8: 0x4618c040  add.s       $f1, $f24, $f24
    ctx->pc = 0x12faf8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[24], ctx->f[24]);
    // 0x12fafc: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x12fafcu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x12fb00: 0xe6010014  swc1        $f1, 0x14($s0)
    ctx->pc = 0x12fb00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x12fb04: 0x4617b040  add.s       $f1, $f22, $f23
    ctx->pc = 0x12fb04u;
    ctx->f[1] = FPU_ADD_S(ctx->f[22], ctx->f[23]);
    // 0x12fb08: 0x4617b081  sub.s       $f2, $f22, $f23
    ctx->pc = 0x12fb08u;
    ctx->f[2] = FPU_SUB_S(ctx->f[22], ctx->f[23]);
    // 0x12fb0c: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x12fb0cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x12fb10: 0xe6010028  swc1        $f1, 0x28($s0)
    ctx->pc = 0x12fb10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x12fb14: 0x4617b042  mul.s       $f1, $f22, $f23
    ctx->pc = 0x12fb14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[22], ctx->f[23]);
    // 0x12fb18: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x12fb18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x12fb1c: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x12fb1cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x12fb20: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x12fb20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x12fb24: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x12fb24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x12fb28: 0xc04144e  jal         func_105138
    ctx->pc = 0x12FB28u;
    SET_GPR_U32(ctx, 31, 0x12FB30u);
    ctx->pc = 0x12FB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FB28u;
    // 0x12fb2c: 0xae00003c  sw          $zero, 0x3C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x12FB28u, 0x12FB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FB30u;
label_12fb30:
    // 0x12fb30: 0xc04150c  jal         func_105430
    ctx->pc = 0x12FB30u;
    SET_GPR_U32(ctx, 31, 0x12FB38u);
    ctx->pc = 0x12FB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FB30u;
    // 0x12fb34: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105430u, 0x12FB30u, 0x12FB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FB38u;
label_12fb38:
    // 0x12fb38: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x12fb38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x12fb3c: 0x3c023eee  lui         $v0, 0x3EEE
    ctx->pc = 0x12fb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16110 << 16));
    // 0x12fb40: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x12fb40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x12fb44: 0x3442eeef  ori         $v0, $v0, 0xEEEF
    ctx->pc = 0x12fb44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61167);
    // 0x12fb48: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x12fb48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12fb4c: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x12fb4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x12fb50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12fb50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12fb54: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x12fb54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x12fb58: 0x46190842  mul.s       $f1, $f1, $f25
    ctx->pc = 0x12fb58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[25]);
    // 0x12fb5c: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x12fb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x12fb60: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x12fb60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x12fb64: 0x46190002  mul.s       $f0, $f0, $f25
    ctx->pc = 0x12fb64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[25]);
    // 0x12fb68: 0x46180842  mul.s       $f1, $f1, $f24
    ctx->pc = 0x12fb68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[24]);
    // 0x12fb6c: 0x46180002  mul.s       $f0, $f0, $f24
    ctx->pc = 0x12fb6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
    // 0x12fb70: 0x46170843  div.s       $f1, $f1, $f23
    ctx->pc = 0x12fb70u;
    { if (ctx->f[23] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[23]); }
    // 0x12fb74: 0x46170003  div.s       $f0, $f0, $f23
    ctx->pc = 0x12fb74u;
    { if (ctx->f[23] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[23]); }
    // 0x12fb78: 0xe6010040  swc1        $f1, 0x40($s0)
    ctx->pc = 0x12fb78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x12fb7c: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x12fb7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x12fb80: 0x4600a807  neg.s       $f0, $f21
    ctx->pc = 0x12fb80u;
    ctx->f[0] = FPU_NEG_S(ctx->f[21]);
    // 0x12fb84: 0x46140040  add.s       $f1, $f0, $f20
    ctx->pc = 0x12fb84u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x12fb88: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x12fb88u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12fb8c: 0x4614a800  add.s       $f0, $f21, $f20
    ctx->pc = 0x12fb8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
    // 0x12fb90: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x12fb90u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x12fb94: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x12fb94u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x12fb98: 0xe6010068  swc1        $f1, 0x68($s0)
    ctx->pc = 0x12fb98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x12fb9c: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x12fb9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x12fba0: 0xae030070  sw          $v1, 0x70($s0)
    ctx->pc = 0x12fba0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 3));
    // 0x12fba4: 0xae030074  sw          $v1, 0x74($s0)
    ctx->pc = 0x12fba4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 3));
    // 0x12fba8: 0xc04150c  jal         func_105430
    ctx->pc = 0x12FBA8u;
    SET_GPR_U32(ctx, 31, 0x12FBB0u);
    ctx->pc = 0x12FBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FBA8u;
    // 0x12fbac: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105430u, 0x12FBA8u, 0x12FBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FBB0u;
label_12fbb0:
    // 0x12fbb0: 0x3c02c3a0  lui         $v0, 0xC3A0
    ctx->pc = 0x12fbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50080 << 16));
    // 0x12fbb4: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x12fbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x12fbb8: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x12fbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x12fbbc: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x12fbbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x12fbc0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x12fbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x12fbc4: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x12fbc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
    // 0x12fbc8: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x12fbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x12fbcc: 0xc041472  jal         func_1051C8
    ctx->pc = 0x12FBCCu;
    SET_GPR_U32(ctx, 31, 0x12FBD4u);
    ctx->pc = 0x12FBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FBCCu;
    // 0x12fbd0: 0xe7b900a0  swc1        $f25, 0xA0($sp) (Delay Slot)
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x12FBCCu, 0x12FBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FBD4u;
label_12fbd4:
    // 0x12fbd4: 0x4600c807  neg.s       $f0, $f25
    ctx->pc = 0x12fbd4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[25]);
    // 0x12fbd8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x12fbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x12fbdc: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x12fbdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x12fbe0: 0xc041472  jal         func_1051C8
    ctx->pc = 0x12FBE0u;
    SET_GPR_U32(ctx, 31, 0x12FBE8u);
    ctx->pc = 0x12FBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FBE0u;
    // 0x12fbe4: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x12FBE0u, 0x12FBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FBE8u;
label_12fbe8:
    // 0x12fbe8: 0x3c02c370  lui         $v0, 0xC370
    ctx->pc = 0x12fbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50032 << 16));
    // 0x12fbec: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x12fbecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x12fbf0: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x12fbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x12fbf4: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x12fbf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x12fbf8: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x12fbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x12fbfc: 0xc041472  jal         func_1051C8
    ctx->pc = 0x12FBFCu;
    SET_GPR_U32(ctx, 31, 0x12FC04u);
    ctx->pc = 0x12FC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FBFCu;
    // 0x12fc00: 0xe7b900a4  swc1        $f25, 0xA4($sp) (Delay Slot)
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x12FBFCu, 0x12FC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FC04u;
label_12fc04:
    // 0x12fc04: 0x4600c807  neg.s       $f0, $f25
    ctx->pc = 0x12fc04u;
    ctx->f[0] = FPU_NEG_S(ctx->f[25]);
    // 0x12fc08: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x12fc08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x12fc0c: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x12fc0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x12fc10: 0xc041472  jal         func_1051C8
    ctx->pc = 0x12FC10u;
    SET_GPR_U32(ctx, 31, 0x12FC18u);
    ctx->pc = 0x12FC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FC10u;
    // 0x12fc14: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x12FC10u, 0x12FC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FC18u;
label_12fc18:
    // 0x12fc18: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x12fc18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12fc1c: 0x26040200  addiu       $a0, $s0, 0x200
    ctx->pc = 0x12fc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
    // 0x12fc20: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x12fc20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12fc24: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x12fc24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x12fc28: 0xc7a500d0  lwc1        $f5, 0xD0($sp)
    ctx->pc = 0x12fc28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x12fc2c: 0x26060100  addiu       $a2, $s0, 0x100
    ctx->pc = 0x12fc2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x12fc30: 0xc7a400d8  lwc1        $f4, 0xD8($sp)
    ctx->pc = 0x12fc30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x12fc34: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x12fc34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    // 0x12fc38: 0xc7a300c0  lwc1        $f3, 0xC0($sp)
    ctx->pc = 0x12fc38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12fc3c: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x12fc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
    // 0x12fc40: 0xc7a200c8  lwc1        $f2, 0xC8($sp)
    ctx->pc = 0x12fc40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12fc44: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x12fc44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x12fc48: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x12fc48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x12fc4c: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x12fc4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12fc50: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x12fc50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12fc54: 0xe7a50060  swc1        $f5, 0x60($sp)
    ctx->pc = 0x12fc54u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x12fc58: 0xe7a40080  swc1        $f4, 0x80($sp)
    ctx->pc = 0x12fc58u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x12fc5c: 0xe7a30064  swc1        $f3, 0x64($sp)
    ctx->pc = 0x12fc5cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x12fc60: 0xe7a20084  swc1        $f2, 0x84($sp)
    ctx->pc = 0x12fc60u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x12fc64: 0xe7a1007c  swc1        $f1, 0x7C($sp)
    ctx->pc = 0x12fc64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x12fc68: 0xc04144e  jal         func_105138
    ctx->pc = 0x12FC68u;
    SET_GPR_U32(ctx, 31, 0x12FC70u);
    ctx->pc = 0x12FC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FC68u;
    // 0x12fc6c: 0xe7a0008c  swc1        $f0, 0x8C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x12FC68u, 0x12FC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FC70u;
label_12fc70:
    // 0x12fc70: 0x26030100  addiu       $v1, $s0, 0x100
    ctx->pc = 0x12fc70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x12fc74: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x12fc74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x12fc78: 0x78670000  lq          $a3, 0x0($v1)
    ctx->pc = 0x12fc78u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12fc7c: 0x26060280  addiu       $a2, $s0, 0x280
    ctx->pc = 0x12fc7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 640));
    // 0x12fc80: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x12fc80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12fc84: 0x26040280  addiu       $a0, $s0, 0x280
    ctx->pc = 0x12fc84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 640));
    // 0x12fc88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12fc88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12fc8c: 0x26050280  addiu       $a1, $s0, 0x280
    ctx->pc = 0x12fc8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 640));
    // 0x12fc90: 0x7cc70000  sq          $a3, 0x0($a2)
    ctx->pc = 0x12fc90u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 7));
    // 0x12fc94: 0x78670010  lq          $a3, 0x10($v1)
    ctx->pc = 0x12fc94u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x12fc98: 0x7cc70010  sq          $a3, 0x10($a2)
    ctx->pc = 0x12fc98u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 7));
    // 0x12fc9c: 0x78670020  lq          $a3, 0x20($v1)
    ctx->pc = 0x12fc9cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x12fca0: 0x7cc70020  sq          $a3, 0x20($a2)
    ctx->pc = 0x12fca0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 7));
    // 0x12fca4: 0x78670030  lq          $a3, 0x30($v1)
    ctx->pc = 0x12fca4u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x12fca8: 0x7cc70030  sq          $a3, 0x30($a2)
    ctx->pc = 0x12fca8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 7));
    // 0x12fcac: 0xe60102b8  swc1        $f1, 0x2B8($s0)
    ctx->pc = 0x12fcacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 696), bits); }
    // 0x12fcb0: 0xe60102b4  swc1        $f1, 0x2B4($s0)
    ctx->pc = 0x12fcb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 692), bits); }
    // 0x12fcb4: 0xe60102b0  swc1        $f1, 0x2B0($s0)
    ctx->pc = 0x12fcb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 688), bits); }
    // 0x12fcb8: 0xc041482  jal         func_105208
    ctx->pc = 0x12FCB8u;
    SET_GPR_U32(ctx, 31, 0x12FCC0u);
    ctx->pc = 0x12FCBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FCB8u;
    // 0x12fcbc: 0xe60002bc  swc1        $f0, 0x2BC($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 700), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105208u, 0x12FCB8u, 0x12FCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FCC0u;
label_12fcc0:
    // 0x12fcc0: 0xc6000280  lwc1        $f0, 0x280($s0)
    ctx->pc = 0x12fcc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12fcc4: 0x3c02414c  lui         $v0, 0x414C
    ctx->pc = 0x12fcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16716 << 16));
    // 0x12fcc8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x12fcc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x12fccc: 0x260402c0  addiu       $a0, $s0, 0x2C0
    ctx->pc = 0x12fcccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
    // 0x12fcd0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x12fcd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12fcd4: 0x26050100  addiu       $a1, $s0, 0x100
    ctx->pc = 0x12fcd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x12fcd8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x12fcd8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x12fcdc: 0xe6000280  swc1        $f0, 0x280($s0)
    ctx->pc = 0x12fcdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 640), bits); }
    // 0x12fce0: 0xc6000284  lwc1        $f0, 0x284($s0)
    ctx->pc = 0x12fce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12fce4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x12fce4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x12fce8: 0xe6000284  swc1        $f0, 0x284($s0)
    ctx->pc = 0x12fce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 644), bits); }
    // 0x12fcec: 0xc6000288  lwc1        $f0, 0x288($s0)
    ctx->pc = 0x12fcecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12fcf0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x12fcf0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x12fcf4: 0xe6000288  swc1        $f0, 0x288($s0)
    ctx->pc = 0x12fcf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 648), bits); }
    // 0x12fcf8: 0xc6000290  lwc1        $f0, 0x290($s0)
    ctx->pc = 0x12fcf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12fcfc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x12fcfcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x12fd00: 0xe6000290  swc1        $f0, 0x290($s0)
    ctx->pc = 0x12fd00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 656), bits); }
    // 0x12fd04: 0xc6000294  lwc1        $f0, 0x294($s0)
    ctx->pc = 0x12fd04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12fd08: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x12fd08u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x12fd0c: 0xe6000294  swc1        $f0, 0x294($s0)
    ctx->pc = 0x12fd0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 660), bits); }
    // 0x12fd10: 0xc6000298  lwc1        $f0, 0x298($s0)
    ctx->pc = 0x12fd10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12fd14: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x12fd14u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x12fd18: 0xe6000298  swc1        $f0, 0x298($s0)
    ctx->pc = 0x12fd18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 664), bits); }
    // 0x12fd1c: 0xc60002a0  lwc1        $f0, 0x2A0($s0)
    ctx->pc = 0x12fd1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12fd20: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x12fd20u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x12fd24: 0xe60002a0  swc1        $f0, 0x2A0($s0)
    ctx->pc = 0x12fd24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 672), bits); }
    // 0x12fd28: 0xc60002a4  lwc1        $f0, 0x2A4($s0)
    ctx->pc = 0x12fd28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12fd2c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x12fd2cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x12fd30: 0xe60002a4  swc1        $f0, 0x2A4($s0)
    ctx->pc = 0x12fd30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 676), bits); }
    // 0x12fd34: 0xc60002a8  lwc1        $f0, 0x2A8($s0)
    ctx->pc = 0x12fd34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12fd38: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x12fd38u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x12fd3c: 0xe60002a8  swc1        $f0, 0x2A8($s0)
    ctx->pc = 0x12fd3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 680), bits); }
    // 0x12fd40: 0xc6200044  lwc1        $f0, 0x44($s1)
    ctx->pc = 0x12fd40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12fd44: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x12fd44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x12fd48: 0xc041494  jal         func_105250
    ctx->pc = 0x12FD48u;
    SET_GPR_U32(ctx, 31, 0x12FD50u);
    ctx->pc = 0x12FD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FD48u;
    // 0x12fd4c: 0xe6200048  swc1        $f0, 0x48($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 72), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105250u, 0x12FD48u, 0x12FD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FD50u;
label_12fd50:
    // 0x12fd50: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x12fd50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12fd54: 0xc7b90024  lwc1        $f25, 0x24($sp)
    ctx->pc = 0x12fd54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x12fd58: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x12fd58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12fd5c: 0xc7b80020  lwc1        $f24, 0x20($sp)
    ctx->pc = 0x12fd5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x12fd60: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x12fd60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12fd64: 0xc7b7001c  lwc1        $f23, 0x1C($sp)
    ctx->pc = 0x12fd64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x12fd68: 0xc7b60018  lwc1        $f22, 0x18($sp)
    ctx->pc = 0x12fd68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x12fd6c: 0xc7b50014  lwc1        $f21, 0x14($sp)
    ctx->pc = 0x12fd6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x12fd70: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x12fd70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x12fd74: 0x3e00008  jr          $ra
    ctx->pc = 0x12FD74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12FD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FD74u;
        // 0x12fd78: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12FD74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12FD7Cu;
}
