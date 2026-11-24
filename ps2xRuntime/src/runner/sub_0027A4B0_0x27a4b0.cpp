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

// Function: sub_0027A4B0
// Address: 0x27a4b0 - 0x27aafc
void sub_0027A4B0_0x27a4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027A4B0_0x27a4b0");
#endif

    switch (ctx->pc) {
        case 0x27a650u: goto label_27a650;
        case 0x27a6c0u: goto label_27a6c0;
        case 0x27a978u: goto label_27a978;
        case 0x27a9e4u: goto label_27a9e4;
        case 0x27aad0u: goto label_27aad0;
        default: break;
    }

    ctx->pc = 0x27a4b0u;

    // 0x27a4b0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x27a4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x27a4b4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x27a4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x27a4b8: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x27a4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x27a4bc: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x27a4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x27a4c0: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x27a4c0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a4c4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x27a4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x27a4c8: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x27a4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x27a4cc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x27a4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x27a4d0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x27a4d0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a4d4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x27a4d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x27a4d8: 0x24841760  addiu       $a0, $a0, 0x1760
    ctx->pc = 0x27a4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5984));
    // 0x27a4dc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x27a4dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x27a4e0: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x27a4e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a4e4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x27a4e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x27a4e8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x27a4e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x27a4ec: 0x8ca229c0  lw          $v0, 0x29C0($a1)
    ctx->pc = 0x27a4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 10688)));
    // 0x27a4f0: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x27a4f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x27a4f4: 0x9045005f  lbu         $a1, 0x5F($v0)
    ctx->pc = 0x27a4f4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 95)));
    // 0x27a4f8: 0x52a40  sll         $a1, $a1, 9
    ctx->pc = 0x27a4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 9));
    // 0x27a4fc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x27a4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x27a500: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27A500u;
    {
        const bool branch_taken_0x27a500 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27A504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A500u;
        // 0x27a504: 0x24910110  addiu       $s1, $a0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a500) {
            ctx->pc = 0x27A510u;
            goto label_27a510;
        }
    }
    ctx->pc = 0x27A508u;
    // 0x27a508: 0x10000171  b           . + 4 + (0x171 << 2)
    ctx->pc = 0x27A508u;
    {
        const bool branch_taken_0x27a508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A508u;
        // 0x27a50c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a508) {
            ctx->pc = 0x27AAD0u;
            goto label_27aad0;
        }
    }
    ctx->pc = 0x27A510u;
label_27a510:
    // 0x27a510: 0xc6c107b8  lwc1        $f1, 0x7B8($s6)
    ctx->pc = 0x27a510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 1976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27a514: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27a514u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a518: 0x0  nop
    ctx->pc = 0x27a518u;
    // NOP
    // 0x27a51c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x27a51cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27a520: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x27A520u;
    {
        const bool branch_taken_0x27a520 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27a520) {
            ctx->pc = 0x27A530u;
            goto label_27a530;
        }
    }
    ctx->pc = 0x27A528u;
    // 0x27a528: 0x10000169  b           . + 4 + (0x169 << 2)
    ctx->pc = 0x27A528u;
    {
        const bool branch_taken_0x27a528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A528u;
        // 0x27a52c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a528) {
            ctx->pc = 0x27AAD0u;
            goto label_27aad0;
        }
    }
    ctx->pc = 0x27A530u;
label_27a530:
    // 0x27a530: 0x9285000c  lbu         $a1, 0xC($s4)
    ctx->pc = 0x27a530u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x27a534: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x27a534u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x27a538: 0x310300ff  andi        $v1, $t0, 0xFF
    ctx->pc = 0x27a538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x27a53c: 0x24846160  addiu       $a0, $a0, 0x6160
    ctx->pc = 0x27a53cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24928));
    // 0x27a540: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x27a540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x27a544: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x27A544u;
    {
        const bool branch_taken_0x27a544 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27A548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A544u;
        // 0x27a548: 0x90920000  lbu         $s2, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a544) {
            ctx->pc = 0x27A570u;
            goto label_27a570;
        }
    }
    ctx->pc = 0x27A54Cu;
    // 0x27a54c: 0x92a50002  lbu         $a1, 0x2($s5)
    ctx->pc = 0x27a54cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x27a550: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x27a550u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x27a554: 0x24632880  addiu       $v1, $v1, 0x2880
    ctx->pc = 0x27a554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10368));
    // 0x27a558: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x27a558u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x27a55c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x27a55cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x27a560: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x27a560u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x27a564: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27a564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27a568: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x27A568u;
    {
        const bool branch_taken_0x27a568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A568u;
        // 0x27a56c: 0x90730000  lbu         $s3, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a568) {
            ctx->pc = 0x27A590u;
            goto label_27a590;
        }
    }
    ctx->pc = 0x27A570u;
label_27a570:
    // 0x27a570: 0x8ea329cc  lw          $v1, 0x29CC($s5)
    ctx->pc = 0x27a570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 10700)));
    // 0x27a574: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27A574u;
    {
        const bool branch_taken_0x27a574 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a574) {
            ctx->pc = 0x27A584u;
            goto label_27a584;
        }
    }
    ctx->pc = 0x27A57Cu;
    // 0x27a57c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27A57Cu;
    {
        const bool branch_taken_0x27a57c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A57Cu;
        // 0x27a580: 0x90630010  lbu         $v1, 0x10($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a57c) {
            ctx->pc = 0x27A588u;
            goto label_27a588;
        }
    }
    ctx->pc = 0x27A584u;
label_27a584:
    // 0x27a584: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x27a584u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27a588:
    // 0x27a588: 0x307300ff  andi        $s3, $v1, 0xFF
    ctx->pc = 0x27a588u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x27a58c: 0x0  nop
    ctx->pc = 0x27a58cu;
    // NOP
label_27a590:
    // 0x27a590: 0x92c50002  lbu         $a1, 0x2($s6)
    ctx->pc = 0x27a590u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 2)));
    // 0x27a594: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x27a594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x27a598: 0x90420004  lbu         $v0, 0x4($v0)
    ctx->pc = 0x27a598u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x27a59c: 0x24632880  addiu       $v1, $v1, 0x2880
    ctx->pc = 0x27a59cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10368));
    // 0x27a5a0: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x27a5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x27a5a4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x27a5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x27a5a8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x27a5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x27a5ac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27a5acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27a5b0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27A5B0u;
    {
        const bool branch_taken_0x27a5b0 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x27A5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A5B0u;
        // 0x27a5b4: 0x90700000  lbu         $s0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a5b0) {
            ctx->pc = 0x27A5C4u;
            goto label_27a5c4;
        }
    }
    ctx->pc = 0x27A5B8u;
    // 0x27a5b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27a5b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a5bc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x27A5BCu;
    {
        const bool branch_taken_0x27a5bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A5BCu;
        // 0x27a5c0: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a5bc) {
            ctx->pc = 0x27A5E0u;
            goto label_27a5e0;
        }
    }
    ctx->pc = 0x27A5C4u;
label_27a5c4:
    // 0x27a5c4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x27a5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x27a5c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x27a5c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x27a5cc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x27a5ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x27a5d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27a5d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a5d4: 0x0  nop
    ctx->pc = 0x27a5d4u;
    // NOP
    // 0x27a5d8: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x27a5d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x27a5dc: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x27a5dcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_27a5e0:
    // 0x27a5e0: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x27a5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x27a5e4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x27a5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x27a5e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27a5e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27a5ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27a5ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a5f0: 0x0  nop
    ctx->pc = 0x27a5f0u;
    // NOP
    // 0x27a5f4: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x27a5f4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x27a5f8: 0x96a229d6  lhu         $v0, 0x29D6($s5)
    ctx->pc = 0x27a5f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 10710)));
    // 0x27a5fc: 0x0  nop
    ctx->pc = 0x27a5fcu;
    // NOP
    // 0x27a600: 0x0  nop
    ctx->pc = 0x27a600u;
    // NOP
    // 0x27a604: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27A604u;
    {
        const bool branch_taken_0x27a604 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x27A608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A604u;
        // 0x27a608: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a604) {
            ctx->pc = 0x27A618u;
            goto label_27a618;
        }
    }
    ctx->pc = 0x27A60Cu;
    // 0x27a60c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27a60cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a610: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x27A610u;
    {
        const bool branch_taken_0x27a610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A610u;
        // 0x27a614: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a610) {
            ctx->pc = 0x27A634u;
            goto label_27a634;
        }
    }
    ctx->pc = 0x27A618u;
label_27a618:
    // 0x27a618: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x27a618u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x27a61c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x27a61cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x27a620: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x27a620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x27a624: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27a624u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a628: 0x0  nop
    ctx->pc = 0x27a628u;
    // NOP
    // 0x27a62c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27a62cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x27a630: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x27a630u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_27a634:
    // 0x27a634: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x27a634u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x27a638: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x27a638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x27a63c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x27a63cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x27a640: 0x92a429d0  lbu         $a0, 0x29D0($s5)
    ctx->pc = 0x27a640u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 10704)));
    // 0x27a644: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27a644u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a648: 0xc0bd0e8  jal         func_2F43A0
    ctx->pc = 0x27A648u;
    SET_GPR_U32(ctx, 31, 0x27A650u);
    ctx->pc = 0x27A64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A648u;
    // 0x27a64c: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F43A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F43A0u, 0x27A648u, 0x27A650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A650u;
label_27a650:
    // 0x27a650: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x27a650u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x27a654: 0x8ea229cc  lw          $v0, 0x29CC($s5)
    ctx->pc = 0x27a654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 10700)));
    // 0x27a658: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27A658u;
    {
        const bool branch_taken_0x27a658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a658) {
            ctx->pc = 0x27A668u;
            goto label_27a668;
        }
    }
    ctx->pc = 0x27A660u;
    // 0x27a660: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27A660u;
    {
        const bool branch_taken_0x27a660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A660u;
        // 0x27a664: 0x90420014  lbu         $v0, 0x14($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a660) {
            ctx->pc = 0x27A66Cu;
            goto label_27a66c;
        }
    }
    ctx->pc = 0x27A668u;
label_27a668:
    // 0x27a668: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x27a668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_27a66c:
    // 0x27a66c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27A66Cu;
    {
        const bool branch_taken_0x27a66c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x27A670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A66Cu;
        // 0x27a670: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a66c) {
            ctx->pc = 0x27A680u;
            goto label_27a680;
        }
    }
    ctx->pc = 0x27A674u;
    // 0x27a674: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27a674u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a678: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x27A678u;
    {
        const bool branch_taken_0x27a678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A678u;
        // 0x27a67c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a678) {
            ctx->pc = 0x27A698u;
            goto label_27a698;
        }
    }
    ctx->pc = 0x27A680u;
label_27a680:
    // 0x27a680: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x27a680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x27a684: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x27a684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x27a688: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27a688u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a68c: 0x0  nop
    ctx->pc = 0x27a68cu;
    // NOP
    // 0x27a690: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x27a690u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x27a694: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x27a694u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_27a698:
    // 0x27a698: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x27a698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x27a69c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x27a69cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x27a6a0: 0x24426130  addiu       $v0, $v0, 0x6130
    ctx->pc = 0x27a6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24880));
    // 0x27a6a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x27a6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27a6a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27a6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27a6ac: 0x92a429d0  lbu         $a0, 0x29D0($s5)
    ctx->pc = 0x27a6acu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 10704)));
    // 0x27a6b0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x27a6b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27a6b4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x27a6b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27a6b8: 0xc0bd0e8  jal         func_2F43A0
    ctx->pc = 0x27A6B8u;
    SET_GPR_U32(ctx, 31, 0x27A6C0u);
    ctx->pc = 0x27A6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A6B8u;
    // 0x27a6bc: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F43A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F43A0u, 0x27A6B8u, 0x27A6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A6C0u;
label_27a6c0:
    // 0x27a6c0: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x27a6c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x27a6c4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27A6C4u;
    {
        const bool branch_taken_0x27a6c4 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x27A6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A6C4u;
        // 0x27a6c8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a6c4) {
            ctx->pc = 0x27A6D8u;
            goto label_27a6d8;
        }
    }
    ctx->pc = 0x27A6CCu;
    // 0x27a6cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27a6ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a6d0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x27A6D0u;
    {
        const bool branch_taken_0x27a6d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A6D0u;
        // 0x27a6d4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a6d0) {
            ctx->pc = 0x27A6F0u;
            goto label_27a6f0;
        }
    }
    ctx->pc = 0x27A6D8u;
label_27a6d8:
    // 0x27a6d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x27a6d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x27a6dc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x27a6dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x27a6e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27a6e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a6e4: 0x0  nop
    ctx->pc = 0x27a6e4u;
    // NOP
    // 0x27a6e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27a6e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x27a6ec: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x27a6ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_27a6f0:
    // 0x27a6f0: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x27a6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x27a6f4: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x27a6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x27a6f8: 0x3444d70a  ori         $a0, $v0, 0xD70A
    ctx->pc = 0x27a6f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x27a6fc: 0x246360f0  addiu       $v1, $v1, 0x60F0
    ctx->pc = 0x27a6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24816));
    // 0x27a700: 0x9282000c  lbu         $v0, 0xC($s4)
    ctx->pc = 0x27a700u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x27a704: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x27a704u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x27a708: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x27a708u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x27a70c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x27a70cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27a710: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x27a710u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27a714: 0x4800014  bltz        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x27A714u;
    {
        const bool branch_taken_0x27a714 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x27A718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A714u;
        // 0x27a718: 0x4602a502  mul.s       $f20, $f20, $f2 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a714) {
            ctx->pc = 0x27A768u;
            goto label_27a768;
        }
    }
    ctx->pc = 0x27A71Cu;
    // 0x27a71c: 0x8ea329c0  lw          $v1, 0x29C0($s5)
    ctx->pc = 0x27a71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 10688)));
    // 0x27a720: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x27a720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x27a724: 0x80650028  lb          $a1, 0x28($v1)
    ctx->pc = 0x27a724u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x27a728: 0x4a0000f  bltz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x27A728u;
    {
        const bool branch_taken_0x27a728 = (GPR_S64(ctx, 5) < 0);
        if (branch_taken_0x27a728) {
            ctx->pc = 0x27A768u;
            goto label_27a768;
        }
    }
    ctx->pc = 0x27A730u;
    // 0x27a730: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x27a730u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x27a734: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x27a734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x27a738: 0x24846110  addiu       $a0, $a0, 0x6110
    ctx->pc = 0x27a738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24848));
    // 0x27a73c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x27a73cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x27a740: 0x80840000  lb          $a0, 0x0($a0)
    ctx->pc = 0x27a740u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x27a744: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27a744u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a748: 0x851818  mult        $v1, $a0, $a1
    ctx->pc = 0x27a748u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x27a74c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x27a74cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27a750: 0x0  nop
    ctx->pc = 0x27a750u;
    // NOP
    // 0x27a754: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x27a754u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x27a758: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27a758u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27a75c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x27a75cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x27a760: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x27a760u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x27a764: 0x0  nop
    ctx->pc = 0x27a764u;
    // NOP
label_27a768:
    // 0x27a768: 0x86230070  lh          $v1, 0x70($s1)
    ctx->pc = 0x27a768u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x27a76c: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x27a76cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27a770: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x27a770u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x27a774: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27a774u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a778: 0x0  nop
    ctx->pc = 0x27a778u;
    // NOP
    // 0x27a77c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27a77cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x27a780: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x27A780u;
    {
        const bool branch_taken_0x27a780 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A780u;
        // 0x27a784: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a780) {
            ctx->pc = 0x27A7B8u;
            goto label_27a7b8;
        }
    }
    ctx->pc = 0x27A788u;
    // 0x27a788: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x27a788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x27a78c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x27a78cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27a790: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x27a790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x27a794: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x27a794u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x27a798: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x27a798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27a79c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x27a79cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x27a7a0: 0x84630070  lh          $v1, 0x70($v1)
    ctx->pc = 0x27a7a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x27a7a4: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x27a7a4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x27a7a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27a7a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a7ac: 0x0  nop
    ctx->pc = 0x27a7acu;
    // NOP
    // 0x27a7b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27a7b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x27a7b4: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x27a7b4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_27a7b8:
    // 0x27a7b8: 0x82a307bc  lb          $v1, 0x7BC($s5)
    ctx->pc = 0x27a7b8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 1980)));
    // 0x27a7bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27a7bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a7c0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x27a7c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27a7c4: 0x0  nop
    ctx->pc = 0x27a7c4u;
    // NOP
    // 0x27a7c8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x27a7c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x27a7cc: 0x4601a500  add.s       $f20, $f20, $f1
    ctx->pc = 0x27a7ccu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x27a7d0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x27a7d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27a7d4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x27A7D4u;
    {
        const bool branch_taken_0x27a7d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27a7d4) {
            ctx->pc = 0x27A7E0u;
            goto label_27a7e0;
        }
    }
    ctx->pc = 0x27A7DCu;
    // 0x27a7dc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x27a7dcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_27a7e0:
    // 0x27a7e0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x27a7e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x27a7e4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x27a7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x27a7e8: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x27A7E8u;
    {
        const bool branch_taken_0x27a7e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x27A7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A7E8u;
        // 0x27a7ec: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a7e8) {
            ctx->pc = 0x27A810u;
            goto label_27a810;
        }
    }
    ctx->pc = 0x27A7F0u;
    // 0x27a7f0: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x27A7F0u;
    {
        const bool branch_taken_0x27a7f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x27a7f0) {
            ctx->pc = 0x27A810u;
            goto label_27a810;
        }
    }
    ctx->pc = 0x27A7F8u;
    // 0x27a7f8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x27a7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x27a7fc: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x27A7FCu;
    {
        const bool branch_taken_0x27a7fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x27A800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A7FCu;
        // 0x27a800: 0x2403000b  addiu       $v1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a7fc) {
            ctx->pc = 0x27A810u;
            goto label_27a810;
        }
    }
    ctx->pc = 0x27A804u;
    // 0x27a804: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x27A804u;
    {
        const bool branch_taken_0x27a804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x27a804) {
            ctx->pc = 0x27A820u;
            goto label_27a820;
        }
    }
    ctx->pc = 0x27A80Cu;
    // 0x27a80c: 0x0  nop
    ctx->pc = 0x27a80cu;
    // NOP
label_27a810:
    // 0x27a810: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x27a810u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x27a814: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x27a814u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27a818: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x27A818u;
    {
        const bool branch_taken_0x27a818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a818) {
            ctx->pc = 0x27A880u;
            goto label_27a880;
        }
    }
    ctx->pc = 0x27A820u;
label_27a820:
    // 0x27a820: 0x92c50002  lbu         $a1, 0x2($s6)
    ctx->pc = 0x27a820u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 2)));
    // 0x27a824: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x27a824u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x27a828: 0x24632876  addiu       $v1, $v1, 0x2876
    ctx->pc = 0x27a828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10358));
    // 0x27a82c: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x27a82cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x27a830: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x27a830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x27a834: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x27a834u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x27a838: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27a838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27a83c: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x27a83cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27a840: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x27A840u;
    {
        const bool branch_taken_0x27a840 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x27A844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A840u;
        // 0x27a844: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a840) {
            ctx->pc = 0x27A854u;
            goto label_27a854;
        }
    }
    ctx->pc = 0x27A848u;
    // 0x27a848: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27a848u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a84c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x27A84Cu;
    {
        const bool branch_taken_0x27a84c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A84Cu;
        // 0x27a850: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a84c) {
            ctx->pc = 0x27A86Cu;
            goto label_27a86c;
        }
    }
    ctx->pc = 0x27A854u;
label_27a854:
    // 0x27a854: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x27a854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x27a858: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x27a858u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x27a85c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x27a85cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a860: 0x0  nop
    ctx->pc = 0x27a860u;
    // NOP
    // 0x27a864: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x27a864u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x27a868: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x27a868u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_27a86c:
    // 0x27a86c: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x27a86cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x27a870: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x27a870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x27a874: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27a874u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a878: 0x0  nop
    ctx->pc = 0x27a878u;
    // NOP
    // 0x27a87c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x27a87cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_27a880:
    // 0x27a880: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x27a880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x27a884: 0x4601a503  div.s       $f20, $f20, $f1
    ctx->pc = 0x27a884u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[20], ctx->f[1]); }
    // 0x27a888: 0x0  nop
    ctx->pc = 0x27a888u;
    // NOP
    // 0x27a88c: 0x0  nop
    ctx->pc = 0x27a88cu;
    // NOP
    // 0x27a890: 0x10430015  beq         $v0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x27A890u;
    {
        const bool branch_taken_0x27a890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x27a890) {
            ctx->pc = 0x27A8E8u;
            goto label_27a8e8;
        }
    }
    ctx->pc = 0x27A898u;
    // 0x27a898: 0x92c70002  lbu         $a3, 0x2($s6)
    ctx->pc = 0x27a898u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 2)));
    // 0x27a89c: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x27a89cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x27a8a0: 0x92830007  lbu         $v1, 0x7($s4)
    ctx->pc = 0x27a8a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 7)));
    // 0x27a8a4: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x27a8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x27a8a8: 0x24a5287f  addiu       $a1, $a1, 0x287F
    ctx->pc = 0x27a8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10367));
    // 0x27a8ac: 0x24844290  addiu       $a0, $a0, 0x4290
    ctx->pc = 0x27a8acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17040));
    // 0x27a8b0: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x27a8b0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x27a8b4: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x27a8b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x27a8b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x27a8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27a8bc: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x27a8bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x27a8c0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x27a8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x27a8c4: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x27a8c4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x27a8c8: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x27a8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x27a8cc: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x27a8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x27a8d0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x27a8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x27a8d4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x27a8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x27a8d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27a8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27a8dc: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x27a8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27a8e0: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x27a8e0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x27a8e4: 0x0  nop
    ctx->pc = 0x27a8e4u;
    // NOP
label_27a8e8:
    // 0x27a8e8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x27a8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x27a8ec: 0x10430026  beq         $v0, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x27A8ECu;
    {
        const bool branch_taken_0x27a8ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x27A8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A8ECu;
        // 0x27a8f0: 0x326300ff  andi        $v1, $s3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a8ec) {
            ctx->pc = 0x27A988u;
            goto label_27a988;
        }
    }
    ctx->pc = 0x27A8F4u;
    // 0x27a8f4: 0x92c50002  lbu         $a1, 0x2($s6)
    ctx->pc = 0x27a8f4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 2)));
    // 0x27a8f8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x27a8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x27a8fc: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x27a8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x27a900: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x27a900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27a904: 0x24842880  addiu       $a0, $a0, 0x2880
    ctx->pc = 0x27a904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10368));
    // 0x27a908: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x27a908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x27a90c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x27a90cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27a910: 0x24424390  addiu       $v0, $v0, 0x4390
    ctx->pc = 0x27a910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17296));
    // 0x27a914: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27a914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27a918: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x27a918u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x27a91c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x27a91cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x27a920: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x27a920u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27a924: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x27a924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x27a928: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x27a928u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27a92c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x27a92cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27a930: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x27a930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27a934: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x27A934u;
    {
        const bool branch_taken_0x27a934 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A934u;
        // 0x27a938: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a934) {
            ctx->pc = 0x27A980u;
            goto label_27a980;
        }
    }
    ctx->pc = 0x27A93Cu;
    // 0x27a93c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x27a93cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x27a940: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x27a940u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x27a944: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x27a944u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x27a948: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x27a948u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x27a94c: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x27a94cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x27a950: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x27a950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27a954: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x27a954u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x27a958: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x27a958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x27a95c: 0x84420070  lh          $v0, 0x70($v0)
    ctx->pc = 0x27a95cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x27a960: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x27a960u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x27a964: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27a964u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a968: 0x0  nop
    ctx->pc = 0x27a968u;
    // NOP
    // 0x27a96c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27a96cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x27a970: 0xc096964  jal         func_25A590
    ctx->pc = 0x27A970u;
    SET_GPR_U32(ctx, 31, 0x27A978u);
    ctx->pc = 0x27A974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A970u;
    // 0x27a974: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A590u, 0x27A970u, 0x27A978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A978u;
label_27a978:
    // 0x27a978: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x27a978u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x27a97c: 0x0  nop
    ctx->pc = 0x27a97cu;
    // NOP
label_27a980:
    // 0x27a980: 0x460ca502  mul.s       $f20, $f20, $f12
    ctx->pc = 0x27a980u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    // 0x27a984: 0x0  nop
    ctx->pc = 0x27a984u;
    // NOP
label_27a988:
    // 0x27a988: 0x92a3065c  lbu         $v1, 0x65C($s5)
    ctx->pc = 0x27a988u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1628)));
    // 0x27a98c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x27a98cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27a990: 0x14620021  bne         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x27A990u;
    {
        const bool branch_taken_0x27a990 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x27a990) {
            ctx->pc = 0x27AA18u;
            goto label_27aa18;
        }
    }
    ctx->pc = 0x27A998u;
    // 0x27a998: 0x96a20826  lhu         $v0, 0x826($s5)
    ctx->pc = 0x27a998u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 2086)));
    // 0x27a99c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27A99Cu;
    {
        const bool branch_taken_0x27a99c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x27A9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A99Cu;
        // 0x27a9a0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a99c) {
            ctx->pc = 0x27A9B0u;
            goto label_27a9b0;
        }
    }
    ctx->pc = 0x27A9A4u;
    // 0x27a9a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27a9a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a9a8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x27A9A8u;
    {
        const bool branch_taken_0x27a9a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A9A8u;
        // 0x27a9ac: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a9a8) {
            ctx->pc = 0x27A9C8u;
            goto label_27a9c8;
        }
    }
    ctx->pc = 0x27A9B0u;
label_27a9b0:
    // 0x27a9b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x27a9b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x27a9b4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x27a9b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x27a9b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27a9b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a9bc: 0x0  nop
    ctx->pc = 0x27a9bcu;
    // NOP
    // 0x27a9c0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x27a9c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x27a9c4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x27a9c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_27a9c8:
    // 0x27a9c8: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x27a9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x27a9cc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x27a9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x27a9d0: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x27a9d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x27a9d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27a9d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a9d8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x27a9d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x27a9dc: 0xc096964  jal         func_25A590
    ctx->pc = 0x27A9DCu;
    SET_GPR_U32(ctx, 31, 0x27A9E4u);
    ctx->pc = 0x27A9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A9DCu;
    // 0x27a9e0: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A590u, 0x27A9DCu, 0x27A9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A9E4u;
label_27a9e4:
    // 0x27a9e4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x27a9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x27a9e8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x27a9e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x27a9ec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x27a9ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27a9f0: 0x8c22cebc  lw          $v0, -0x3144($at)
    ctx->pc = 0x27a9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x27a9f4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x27a9f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27a9f8: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x27a9f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x27a9fc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27A9FCu;
    {
        const bool branch_taken_0x27a9fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A9FCu;
        // 0x27aa00: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a9fc) {
            ctx->pc = 0x27AA18u;
            goto label_27aa18;
        }
    }
    ctx->pc = 0x27AA04u;
    // 0x27aa04: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x27aa04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x27aa08: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x27aa08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x27aa0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27aa0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27aa10: 0x0  nop
    ctx->pc = 0x27aa10u;
    // NOP
    // 0x27aa14: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x27aa14u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_27aa18:
    // 0x27aa18: 0x8ea206c8  lw          $v0, 0x6C8($s5)
    ctx->pc = 0x27aa18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1736)));
    // 0x27aa1c: 0xc6a107b4  lwc1        $f1, 0x7B4($s5)
    ctx->pc = 0x27aa1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 1972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27aa20: 0xc6c007b8  lwc1        $f0, 0x7B8($s6)
    ctx->pc = 0x27aa20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 1976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27aa24: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x27aa24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x27aa28: 0x4601a502  mul.s       $f20, $f20, $f1
    ctx->pc = 0x27aa28u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x27aa2c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x27AA2Cu;
    {
        const bool branch_taken_0x27aa2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AA2Cu;
        // 0x27aa30: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27aa2c) {
            ctx->pc = 0x27AA78u;
            goto label_27aa78;
        }
    }
    ctx->pc = 0x27AA34u;
    // 0x27aa34: 0x92c229dd  lbu         $v0, 0x29DD($s6)
    ctx->pc = 0x27aa34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 10717)));
    // 0x27aa38: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27AA38u;
    {
        const bool branch_taken_0x27aa38 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x27AA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AA38u;
        // 0x27aa3c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27aa38) {
            ctx->pc = 0x27AA4Cu;
            goto label_27aa4c;
        }
    }
    ctx->pc = 0x27AA40u;
    // 0x27aa40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27aa40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27aa44: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x27AA44u;
    {
        const bool branch_taken_0x27aa44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AA44u;
        // 0x27aa48: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27aa44) {
            ctx->pc = 0x27AA64u;
            goto label_27aa64;
        }
    }
    ctx->pc = 0x27AA4Cu;
label_27aa4c:
    // 0x27aa4c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x27aa4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x27aa50: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x27aa50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x27aa54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27aa54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27aa58: 0x0  nop
    ctx->pc = 0x27aa58u;
    // NOP
    // 0x27aa5c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x27aa5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x27aa60: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x27aa60u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_27aa64:
    // 0x27aa64: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x27aa64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x27aa68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27aa68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27aa6c: 0x0  nop
    ctx->pc = 0x27aa6cu;
    // NOP
    // 0x27aa70: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x27aa70u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x27aa74: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x27aa74u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_27aa78:
    // 0x27aa78: 0x9283000c  lbu         $v1, 0xC($s4)
    ctx->pc = 0x27aa78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x27aa7c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x27aa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x27aa80: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x27AA80u;
    {
        const bool branch_taken_0x27aa80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27AA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AA80u;
        // 0x27aa84: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27aa80) {
            ctx->pc = 0x27AAB0u;
            goto label_27aab0;
        }
    }
    ctx->pc = 0x27AA88u;
    // 0x27aa88: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x27AA88u;
    {
        const bool branch_taken_0x27aa88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27AA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AA88u;
        // 0x27aa8c: 0x3c01008d  lui         $at, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27aa88) {
            ctx->pc = 0x27AAB0u;
            goto label_27aab0;
        }
    }
    ctx->pc = 0x27AA90u;
    // 0x27aa90: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x27aa90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x27aa94: 0x90236c10  lbu         $v1, 0x6C10($at)
    ctx->pc = 0x27aa94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27664)));
    // 0x27aa98: 0x244260b0  addiu       $v0, $v0, 0x60B0
    ctx->pc = 0x27aa98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24752));
    // 0x27aa9c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x27aa9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27aaa0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27aaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27aaa4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x27aaa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27aaa8: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x27aaa8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x27aaac: 0x0  nop
    ctx->pc = 0x27aaacu;
    // NOP
label_27aab0:
    // 0x27aab0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x27aab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x27aab4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27aab4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27aab8: 0x0  nop
    ctx->pc = 0x27aab8u;
    // NOP
    // 0x27aabc: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x27aabcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x27aac0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27aac0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x27aac4: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x27aac4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x27aac8: 0xc096974  jal         func_25A5D0
    ctx->pc = 0x27AAC8u;
    SET_GPR_U32(ctx, 31, 0x27AAD0u);
    ctx->pc = 0x27AACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AAC8u;
    // 0x27aacc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5D0u, 0x27AAC8u, 0x27AAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AAD0u;
label_27aad0:
    // 0x27aad0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x27aad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x27aad4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x27aad4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x27aad8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x27aad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27aadc: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x27aadcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27aae0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x27aae0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27aae4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x27aae4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27aae8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x27aae8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27aaec: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x27aaecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27aaf0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x27aaf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27aaf4: 0x3e00008  jr          $ra
    ctx->pc = 0x27AAF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27AAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AAF4u;
        // 0x27aaf8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27AAF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27AAFCu;
}
