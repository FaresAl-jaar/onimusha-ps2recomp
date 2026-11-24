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

// Function: sub_002C0470
// Address: 0x2c0470 - 0x2c05f0
void sub_002C0470_0x2c0470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C0470_0x2c0470");
#endif

    switch (ctx->pc) {
        case 0x2c04f8u: goto label_2c04f8;
        case 0x2c0518u: goto label_2c0518;
        case 0x2c0558u: goto label_2c0558;
        case 0x2c05b4u: goto label_2c05b4;
        default: break;
    }

    ctx->pc = 0x2c0470u;

    // 0x2c0470: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c0470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2c0474: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2c0474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2c0478: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2c0478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2c047c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2c047cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2c0480: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2c0480u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0484: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2c0484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2c0488: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2c0488u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c048c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2c048cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2c0490: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2c0490u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2c0494: 0x948200e2  lhu         $v0, 0xE2($a0)
    ctx->pc = 0x2c0494u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 226)));
    // 0x2c0498: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x2C0498u;
    {
        const bool branch_taken_0x2c0498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C049Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0498u;
        // 0x2c049c: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0498) {
            ctx->pc = 0x2C05C0u;
            goto label_2c05c0;
        }
    }
    ctx->pc = 0x2C04A0u;
    // 0x2c04a0: 0x864400e4  lh          $a0, 0xE4($s2)
    ctx->pc = 0x2c04a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 228)));
    // 0x2c04a4: 0x3c023ac9  lui         $v0, 0x3AC9
    ctx->pc = 0x2c04a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15049 << 16));
    // 0x2c04a8: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x2c04a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2c04ac: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x2c04acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2c04b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c04b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c04b4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2c04b4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c04b8: 0x0  nop
    ctx->pc = 0x2c04b8u;
    // NOP
    // 0x2c04bc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2c04bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2c04c0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C04C0u;
    {
        const bool branch_taken_0x2c04c0 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2C04C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C04C0u;
        // 0x2c04c4: 0x46010542  mul.s       $f21, $f0, $f1 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c04c0) {
            ctx->pc = 0x2C04D4u;
            goto label_2c04d4;
        }
    }
    ctx->pc = 0x2C04C8u;
    // 0x2c04c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c04c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c04cc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C04CCu;
    {
        const bool branch_taken_0x2c04cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C04D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C04CCu;
        // 0x2c04d0: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c04cc) {
            ctx->pc = 0x2C04F0u;
            goto label_2c04f0;
        }
    }
    ctx->pc = 0x2C04D4u;
label_2c04d4:
    // 0x2c04d4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2c04d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2c04d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c04d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c04dc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2c04dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2c04e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c04e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c04e4: 0x0  nop
    ctx->pc = 0x2c04e4u;
    // NOP
    // 0x2c04e8: 0x46800520  cvt.s.w     $f20, $f0
    ctx->pc = 0x2c04e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x2c04ec: 0x4614a500  add.s       $f20, $f20, $f20
    ctx->pc = 0x2c04ecu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
label_2c04f0:
    // 0x2c04f0: 0xc047b2c  jal         func_11ECB0
    ctx->pc = 0x2C04F0u;
    SET_GPR_U32(ctx, 31, 0x2C04F8u);
    ctx->pc = 0x2C04F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C04F0u;
    // 0x2c04f4: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ECB0u, 0x2C04F0u, 0x2C04F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C04F8u;
label_2c04f8:
    // 0x2c04f8: 0xc6210020  lwc1        $f1, 0x20($s1)
    ctx->pc = 0x2c04f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c04fc: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x2c04fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2c0500: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2c0500u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c0504: 0xe64000b0  swc1        $f0, 0xB0($s2)
    ctx->pc = 0x2c0504u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 176), bits); }
    // 0x2c0508: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x2c0508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c050c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2c050cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x2c0510: 0xc047a98  jal         func_11EA60
    ctx->pc = 0x2C0510u;
    SET_GPR_U32(ctx, 31, 0x2C0518u);
    ctx->pc = 0x2C0514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0510u;
    // 0x2c0514: 0xe64000b4  swc1        $f0, 0xB4($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 180), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EA60u, 0x2C0510u, 0x2C0518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0518u;
label_2c0518:
    // 0x2c0518: 0x4600a042  mul.s       $f1, $f20, $f0
    ctx->pc = 0x2c0518u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2c051c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2c051cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2c0520: 0x264400b0  addiu       $a0, $s2, 0xB0
    ctx->pc = 0x2c0520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
    // 0x2c0524: 0x2442f388  addiu       $v0, $v0, -0xC78
    ctx->pc = 0x2c0524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964104));
    // 0x2c0528: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2c0528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c052c: 0xc6200028  lwc1        $f0, 0x28($s1)
    ctx->pc = 0x2c052cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c0530: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c0530u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c0534: 0xe64000b8  swc1        $f0, 0xB8($s2)
    ctx->pc = 0x2c0534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 184), bits); }
    // 0x2c0538: 0x92270002  lbu         $a3, 0x2($s1)
    ctx->pc = 0x2c0538u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2c053c: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x2c053cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x2c0540: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2c0540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2c0544: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2c0544u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2c0548: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c0548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c054c: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2c054cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c0550: 0xc0ae874  jal         func_2BA1D0
    ctx->pc = 0x2C0550u;
    SET_GPR_U32(ctx, 31, 0x2C0558u);
    ctx->pc = 0x2C0554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0550u;
    // 0x2c0554: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA1D0u, 0x2C0550u, 0x2C0558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0558u;
label_2c0558:
    // 0x2c0558: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2c0558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2c055c: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x2c055cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x2c0560: 0xae42009c  sw          $v0, 0x9C($s2)
    ctx->pc = 0x2c0560u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 2));
    // 0x2c0564: 0x24635180  addiu       $v1, $v1, 0x5180
    ctx->pc = 0x2c0564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20864));
    // 0x2c0568: 0x92060001  lbu         $a2, 0x1($s0)
    ctx->pc = 0x2c0568u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x2c056c: 0x26020004  addiu       $v0, $s0, 0x4
    ctx->pc = 0x2c056cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c0570: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c0570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0574: 0x26590008  addiu       $t9, $s2, 0x8
    ctx->pc = 0x2c0574u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x2c0578: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c0578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c057c: 0xa246005e  sb          $a2, 0x5E($s2)
    ctx->pc = 0x2c057cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 94), (uint8_t)GPR_U32(ctx, 6));
    // 0x2c0580: 0x96460080  lhu         $a2, 0x80($s2)
    ctx->pc = 0x2c0580u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x2c0584: 0xa6460022  sh          $a2, 0x22($s2)
    ctx->pc = 0x2c0584u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 34), (uint16_t)GPR_U32(ctx, 6));
    // 0x2c0588: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2c0588u;
    { uint32_t bits = FAST_READ32(0x4E5180u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c058c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2c058cu;
    { uint32_t bits = FAST_READ32(0x4E5184u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c0590: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2c0590u;
    { uint32_t bits = FAST_READ32(0x4E5188u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c0594: 0xe6420008  swc1        $f2, 0x8($s2)
    ctx->pc = 0x2c0594u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x2c0598: 0xe641000c  swc1        $f1, 0xC($s2)
    ctx->pc = 0x2c0598u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x2c059c: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x2c059cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x2c05a0: 0xae42002c  sw          $v0, 0x2C($s2)
    ctx->pc = 0x2c05a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 2));
    // 0x2c05a4: 0xa6400058  sh          $zero, 0x58($s2)
    ctx->pc = 0x2c05a4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 88), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c05a8: 0xa6400056  sh          $zero, 0x56($s2)
    ctx->pc = 0x2c05a8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 86), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c05ac: 0xc040250  jal         func_100940
    ctx->pc = 0x2C05ACu;
    SET_GPR_U32(ctx, 31, 0x2C05B4u);
    ctx->pc = 0x2C05B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C05ACu;
    // 0x2c05b0: 0xa2400107  sb          $zero, 0x107($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 263), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100940u, 0x2C05ACu, 0x2C05B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C05B4u;
label_2c05b4:
    // 0x2c05b4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C05B4u;
    {
        const bool branch_taken_0x2c05b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C05B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C05B4u;
        // 0x2c05b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c05b4) {
            ctx->pc = 0x2C05D0u;
            goto label_2c05d0;
        }
    }
    ctx->pc = 0x2C05BCu;
    // 0x2c05bc: 0x0  nop
    ctx->pc = 0x2c05bcu;
    // NOP
label_2c05c0:
    // 0x2c05c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c05c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c05c4: 0x26020004  addiu       $v0, $s0, 0x4
    ctx->pc = 0x2c05c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c05c8: 0xa38389d4  sb          $v1, -0x762C($gp)
    ctx->pc = 0x2c05c8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937044), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c05cc: 0x0  nop
    ctx->pc = 0x2c05ccu;
    // NOP
label_2c05d0:
    // 0x2c05d0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2c05d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c05d4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2c05d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c05d8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2c05d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2c05dc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2c05dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c05e0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2c05e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c05e4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2c05e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c05e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C05E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C05ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C05E8u;
        // 0x2c05ec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C05E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C05F0u;
}
