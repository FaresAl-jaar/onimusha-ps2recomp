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

// Function: sub_001756E0
// Address: 0x1756e0 - 0x1758c8
void sub_001756E0_0x1756e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001756E0_0x1756e0");
#endif

    switch (ctx->pc) {
        case 0x175734u: goto label_175734;
        case 0x175744u: goto label_175744;
        case 0x1757a8u: goto label_1757a8;
        default: break;
    }

    ctx->pc = 0x1756e0u;

    // 0x1756e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1756e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1756e4: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x1756e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1756e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1756e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1756ec: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1756ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1756f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1756f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1756f4: 0x28410400  slti        $at, $v0, 0x400
    ctx->pc = 0x1756f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1756f8: 0xa3838624  sb          $v1, -0x79DC($gp)
    ctx->pc = 0x1756f8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936100), (uint8_t)GPR_U32(ctx, 3));
    // 0x1756fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1756fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175700: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x175700u;
    {
        const bool branch_taken_0x175700 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x175704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175700u;
        // 0x175704: 0xa4850220  sh          $a1, 0x220($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 544), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175700) {
            ctx->pc = 0x175710u;
            goto label_175710;
        }
    }
    ctx->pc = 0x175708u;
    // 0x175708: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x175708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x17570c: 0xa6020220  sh          $v0, 0x220($s0)
    ctx->pc = 0x17570cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 544), (uint16_t)GPR_U32(ctx, 2));
label_175710:
    // 0x175710: 0x96030220  lhu         $v1, 0x220($s0)
    ctx->pc = 0x175710u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x175714: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x175714u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x175718: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x175718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x17571c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x17571cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x175720: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x175720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x175724: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x175724u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x175728: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x175728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17572c: 0xc05e3a4  jal         func_178E90
    ctx->pc = 0x17572Cu;
    SET_GPR_U32(ctx, 31, 0x175734u);
    ctx->pc = 0x175730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17572Cu;
    // 0x175730: 0x22900  sll         $a1, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178E90u, 0x17572Cu, 0x175734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175734u;
label_175734:
    // 0x175734: 0xae020208  sw          $v0, 0x208($s0)
    ctx->pc = 0x175734u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 520), GPR_U32(ctx, 2));
    // 0x175738: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x175738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17573c: 0xc05d458  jal         func_175160
    ctx->pc = 0x17573Cu;
    SET_GPR_U32(ctx, 31, 0x175744u);
    ctx->pc = 0x175740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17573Cu;
    // 0x175740: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175160u, 0x17573Cu, 0x175744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175744u;
label_175744:
    // 0x175744: 0x96030220  lhu         $v1, 0x220($s0)
    ctx->pc = 0x175744u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x175748: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x175748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17574c: 0xae000264  sw          $zero, 0x264($s0)
    ctx->pc = 0x17574cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 0));
    // 0x175750: 0x2465ffff  addiu       $a1, $v1, -0x1
    ctx->pc = 0x175750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x175754: 0xae000260  sw          $zero, 0x260($s0)
    ctx->pc = 0x175754u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 608), GPR_U32(ctx, 0));
    // 0x175758: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x175758u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x17575c: 0x8e070208  lw          $a3, 0x208($s0)
    ctx->pc = 0x17575cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 520)));
    // 0x175760: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x175760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x175764: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x175764u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x175768: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x175768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x17576c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x17576cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x175770: 0xae070268  sw          $a3, 0x268($s0)
    ctx->pc = 0x175770u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 7));
    // 0x175774: 0x24e300b0  addiu       $v1, $a3, 0xB0
    ctx->pc = 0x175774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 176));
    // 0x175778: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x175778u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x17577c: 0xace3000c  sw          $v1, 0xC($a3)
    ctx->pc = 0x17577cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
    // 0x175780: 0xace00038  sw          $zero, 0x38($a3)
    ctx->pc = 0x175780u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 56), GPR_U32(ctx, 0));
    // 0x175784: 0x8e030208  lw          $v1, 0x208($s0)
    ctx->pc = 0x175784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 520)));
    // 0x175788: 0x643821  addu        $a3, $v1, $a0
    ctx->pc = 0x175788u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17578c: 0xae07026c  sw          $a3, 0x26C($s0)
    ctx->pc = 0x17578cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 7));
    // 0x175790: 0x24e3ff50  addiu       $v1, $a3, -0xB0
    ctx->pc = 0x175790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967120));
    // 0x175794: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x175794u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x175798: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x175798u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x17579c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x17579Cu;
    {
        const bool branch_taken_0x17579c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1757A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17579Cu;
        // 0x1757a0: 0xace00038  sw          $zero, 0x38($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17579c) {
            ctx->pc = 0x1757E0u;
            goto label_1757e0;
        }
    }
    ctx->pc = 0x1757A4u;
    // 0x1757a4: 0x0  nop
    ctx->pc = 0x1757a4u;
    // NOP
label_1757a8:
    // 0x1757a8: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1757a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1757ac: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x1757acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1757b0: 0x8e030208  lw          $v1, 0x208($s0)
    ctx->pc = 0x1757b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 520)));
    // 0x1757b4: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x1757b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1757b8: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1757b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1757bc: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1757bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1757c0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1757c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1757c4: 0x643821  addu        $a3, $v1, $a0
    ctx->pc = 0x1757c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1757c8: 0x24e4ff50  addiu       $a0, $a3, -0xB0
    ctx->pc = 0x1757c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967120));
    // 0x1757cc: 0x24e300b0  addiu       $v1, $a3, 0xB0
    ctx->pc = 0x1757ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 176));
    // 0x1757d0: 0xace40008  sw          $a0, 0x8($a3)
    ctx->pc = 0x1757d0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
    // 0x1757d4: 0xace3000c  sw          $v1, 0xC($a3)
    ctx->pc = 0x1757d4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
    // 0x1757d8: 0xace00038  sw          $zero, 0x38($a3)
    ctx->pc = 0x1757d8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 56), GPR_U32(ctx, 0));
    // 0x1757dc: 0x0  nop
    ctx->pc = 0x1757dcu;
    // NOP
label_1757e0:
    // 0x1757e0: 0xc5182b  sltu        $v1, $a2, $a1
    ctx->pc = 0x1757e0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1757e4: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1757E4u;
    {
        const bool branch_taken_0x1757e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1757e4) {
            ctx->pc = 0x1757A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1757a8;
        }
    }
    ctx->pc = 0x1757ECu;
    // 0x1757ec: 0xae000218  sw          $zero, 0x218($s0)
    ctx->pc = 0x1757ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 0));
    // 0x1757f0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1757f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1757f4: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x1757f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
    // 0x1757f8: 0x26040240  addiu       $a0, $s0, 0x240
    ctx->pc = 0x1757f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 576));
    // 0x1757fc: 0xae03021c  sw          $v1, 0x21C($s0)
    ctx->pc = 0x1757fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 540), GPR_U32(ctx, 3));
    // 0x175800: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x175800u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175804: 0xae000238  sw          $zero, 0x238($s0)
    ctx->pc = 0x175804u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 568), GPR_U32(ctx, 0));
    // 0x175808: 0x8e030200  lw          $v1, 0x200($s0)
    ctx->pc = 0x175808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x17580c: 0xae030204  sw          $v1, 0x204($s0)
    ctx->pc = 0x17580cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 516), GPR_U32(ctx, 3));
    // 0x175810: 0xa2000211  sb          $zero, 0x211($s0)
    ctx->pc = 0x175810u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 529), (uint8_t)GPR_U32(ctx, 0));
    // 0x175814: 0xa2000212  sb          $zero, 0x212($s0)
    ctx->pc = 0x175814u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 530), (uint8_t)GPR_U32(ctx, 0));
    // 0x175818: 0xae000224  sw          $zero, 0x224($s0)
    ctx->pc = 0x175818u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 548), GPR_U32(ctx, 0));
    // 0x17581c: 0xae00022c  sw          $zero, 0x22C($s0)
    ctx->pc = 0x17581cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 556), GPR_U32(ctx, 0));
    // 0x175820: 0xf8800000  sqc2        $vf0, 0x0($a0)
    ctx->pc = 0x175820u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x175824: 0x44010000  mfc1        $at, $f0
    ctx->pc = 0x175824u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 1, bits); }
    // 0x175828: 0x0  nop
    ctx->pc = 0x175828u;
    // NOP
    // 0x17582c: 0xac810000  sw          $at, 0x0($a0)
    ctx->pc = 0x17582cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 1));
    // 0x175830: 0x44010000  mfc1        $at, $f0
    ctx->pc = 0x175830u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 1, bits); }
    // 0x175834: 0x0  nop
    ctx->pc = 0x175834u;
    // NOP
    // 0x175838: 0xac810004  sw          $at, 0x4($a0)
    ctx->pc = 0x175838u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 1));
    // 0x17583c: 0x44010000  mfc1        $at, $f0
    ctx->pc = 0x17583cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 1, bits); }
    // 0x175840: 0x0  nop
    ctx->pc = 0x175840u;
    // NOP
    // 0x175844: 0xac810008  sw          $at, 0x8($a0)
    ctx->pc = 0x175844u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 1));
    // 0x175848: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x175848u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17584c: 0x26030250  addiu       $v1, $s0, 0x250
    ctx->pc = 0x17584cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
    // 0x175850: 0xe600024c  swc1        $f0, 0x24C($s0)
    ctx->pc = 0x175850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 588), bits); }
    // 0x175854: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x175854u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x175858: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x175858u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17585c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17585cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175860: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x175860u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x175864: 0x44011000  mfc1        $at, $f2
    ctx->pc = 0x175864u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 1, bits); }
    // 0x175868: 0x0  nop
    ctx->pc = 0x175868u;
    // NOP
    // 0x17586c: 0xac610000  sw          $at, 0x0($v1)
    ctx->pc = 0x17586cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 1));
    // 0x175870: 0x44010800  mfc1        $at, $f1
    ctx->pc = 0x175870u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 1, bits); }
    // 0x175874: 0x0  nop
    ctx->pc = 0x175874u;
    // NOP
    // 0x175878: 0xac610004  sw          $at, 0x4($v1)
    ctx->pc = 0x175878u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 1));
    // 0x17587c: 0x44010000  mfc1        $at, $f0
    ctx->pc = 0x17587cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 1, bits); }
    // 0x175880: 0x0  nop
    ctx->pc = 0x175880u;
    // NOP
    // 0x175884: 0xac610008  sw          $at, 0x8($v1)
    ctx->pc = 0x175884u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 1));
    // 0x175888: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x175888u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17588c: 0x3c04459c  lui         $a0, 0x459C
    ctx->pc = 0x17588cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17820 << 16));
    // 0x175890: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x175890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x175894: 0xe600025c  swc1        $f0, 0x25C($s0)
    ctx->pc = 0x175894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 604), bits); }
    // 0x175898: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x175898u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x17589c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x17589cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1758a0: 0x0  nop
    ctx->pc = 0x1758a0u;
    // NOP
    // 0x1758a4: 0xe600020c  swc1        $f0, 0x20C($s0)
    ctx->pc = 0x1758a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 524), bits); }
    // 0x1758a8: 0xa6030230  sh          $v1, 0x230($s0)
    ctx->pc = 0x1758a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 560), (uint16_t)GPR_U32(ctx, 3));
    // 0x1758ac: 0xa2000232  sb          $zero, 0x232($s0)
    ctx->pc = 0x1758acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 562), (uint8_t)GPR_U32(ctx, 0));
    // 0x1758b0: 0xa2000213  sb          $zero, 0x213($s0)
    ctx->pc = 0x1758b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 531), (uint8_t)GPR_U32(ctx, 0));
    // 0x1758b4: 0xae000234  sw          $zero, 0x234($s0)
    ctx->pc = 0x1758b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 564), GPR_U32(ctx, 0));
    // 0x1758b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1758b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1758bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1758bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1758c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1758C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1758C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1758C0u;
        // 0x1758c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1758C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1758C8u;
}
