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

// Function: sub_00286760
// Address: 0x286760 - 0x286db0
void sub_00286760_0x286760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00286760_0x286760");
#endif

    switch (ctx->pc) {
        case 0x2867d0u: goto label_2867d0;
        case 0x2868fcu: goto label_2868fc;
        case 0x286d44u: goto label_286d44;
        case 0x286d5cu: goto label_286d5c;
        default: break;
    }

    ctx->pc = 0x286760u;

    // 0x286760: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x286760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x286764: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x286764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x286768: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x286768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x28676c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x28676cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x286770: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x286770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x286774: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x286774u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286778: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x286778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x28677c: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x28677cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286780: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x286780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x286784: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x286784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x286788: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x286788u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28678c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x28678cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x286790: 0x84840054  lh          $a0, 0x54($a0)
    ctx->pc = 0x286790u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x286794: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x286794u;
    {
        const bool branch_taken_0x286794 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x286798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286794u;
        // 0x286798: 0x30830001  andi        $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x286794) {
            ctx->pc = 0x2867A8u;
            goto label_2867a8;
        }
    }
    ctx->pc = 0x28679Cu;
    // 0x28679c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x28679Cu;
    {
        const bool branch_taken_0x28679c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28679c) {
            ctx->pc = 0x2867A8u;
            goto label_2867a8;
        }
    }
    ctx->pc = 0x2867A4u;
    // 0x2867a4: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x2867a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_2867a8:
    // 0x2867a8: 0x14600177  bnez        $v1, . + 4 + (0x177 << 2)
    ctx->pc = 0x2867A8u;
    {
        const bool branch_taken_0x2867a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2867a8) {
            ctx->pc = 0x286D88u;
            goto label_286d88;
        }
    }
    ctx->pc = 0x2867B0u;
    // 0x2867b0: 0x9263001c  lbu         $v1, 0x1C($s3)
    ctx->pc = 0x2867b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x2867b4: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x2867b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2867b8: 0x10200173  beqz        $at, . + 4 + (0x173 << 2)
    ctx->pc = 0x2867B8u;
    {
        const bool branch_taken_0x2867b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2867BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2867B8u;
        // 0x2867bc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2867b8) {
            ctx->pc = 0x286D88u;
            goto label_286d88;
        }
    }
    ctx->pc = 0x2867C0u;
    // 0x2867c0: 0x6ac3c  dsll32      $s5, $a2, 16
    ctx->pc = 0x2867c0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 6) << (32 + 16));
    // 0x2867c4: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2867c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2867c8: 0x15ac3f  dsra32      $s5, $s5, 16
    ctx->pc = 0x2867c8u;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 16));
    // 0x2867cc: 0x0  nop
    ctx->pc = 0x2867ccu;
    // NOP
label_2867d0:
    // 0x2867d0: 0x92030013  lbu         $v1, 0x13($s0)
    ctx->pc = 0x2867d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 19)));
    // 0x2867d4: 0x14600166  bnez        $v1, . + 4 + (0x166 << 2)
    ctx->pc = 0x2867D4u;
    {
        const bool branch_taken_0x2867d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2867d4) {
            ctx->pc = 0x286D70u;
            goto label_286d70;
        }
    }
    ctx->pc = 0x2867DCu;
    // 0x2867dc: 0x86040010  lh          $a0, 0x10($s0)
    ctx->pc = 0x2867dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2867e0: 0x24037ffe  addiu       $v1, $zero, 0x7FFE
    ctx->pc = 0x2867e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x2867e4: 0x14830162  bne         $a0, $v1, . + 4 + (0x162 << 2)
    ctx->pc = 0x2867E4u;
    {
        const bool branch_taken_0x2867e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2867e4) {
            ctx->pc = 0x286D70u;
            goto label_286d70;
        }
    }
    ctx->pc = 0x2867ECu;
    // 0x2867ec: 0xa6000010  sh          $zero, 0x10($s0)
    ctx->pc = 0x2867ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x2867f0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2867f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2867f4: 0x8f8480e0  lw          $a0, -0x7F20($gp)
    ctx->pc = 0x2867f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x2867f8: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x2867f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x2867fc: 0x8663000a  lh          $v1, 0xA($s3)
    ctx->pc = 0x2867fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
    // 0x286800: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x286800u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x286804: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x286804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x286808: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x286808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28680c: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x28680cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x286810: 0x8f8480e0  lw          $a0, -0x7F20($gp)
    ctx->pc = 0x286810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x286814: 0x86620008  lh          $v0, 0x8($s3)
    ctx->pc = 0x286814u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x286818: 0x42302  srl         $a0, $a0, 12
    ctx->pc = 0x286818u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 12));
    // 0x28681c: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x28681cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x286820: 0x0  nop
    ctx->pc = 0x286820u;
    // NOP
    // 0x286824: 0x0  nop
    ctx->pc = 0x286824u;
    // NOP
    // 0x286828: 0x1810  mfhi        $v1
    ctx->pc = 0x286828u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x28682c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28682cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x286830: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x286830u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x286834: 0x8602000c  lh          $v0, 0xC($s0)
    ctx->pc = 0x286834u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x286838: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x286838u;
    {
        const bool branch_taken_0x286838 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x28683Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286838u;
        // 0x28683c: 0x28417ff1  slti        $at, $v0, 0x7FF1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32753) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x286838) {
            ctx->pc = 0x286848u;
            goto label_286848;
        }
    }
    ctx->pc = 0x286840u;
    // 0x286840: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x286840u;
    {
        const bool branch_taken_0x286840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286840u;
        // 0x286844: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286840) {
            ctx->pc = 0x286858u;
            goto label_286858;
        }
    }
    ctx->pc = 0x286848u;
label_286848:
    // 0x286848: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x286848u;
    {
        const bool branch_taken_0x286848 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x286848) {
            ctx->pc = 0x286858u;
            goto label_286858;
        }
    }
    ctx->pc = 0x286850u;
    // 0x286850: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x286850u;
    {
        const bool branch_taken_0x286850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286850u;
        // 0x286854: 0x24027ff0  addiu       $v0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286850) {
            ctx->pc = 0x286858u;
            goto label_286858;
        }
    }
    ctx->pc = 0x286858u;
label_286858:
    // 0x286858: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x286858u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x28685c: 0x240a0100  addiu       $t2, $zero, 0x100
    ctx->pc = 0x28685cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x286860: 0x926b0040  lbu         $t3, 0x40($s3)
    ctx->pc = 0x286860u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x286864: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x286864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x286868: 0x34436667  ori         $v1, $v0, 0x6667
    ctx->pc = 0x286868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x28686c: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x28686cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x286870: 0x8602000c  lh          $v0, 0xC($s0)
    ctx->pc = 0x286870u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x286874: 0x27a50088  addiu       $a1, $sp, 0x88
    ctx->pc = 0x286874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x286878: 0x26660010  addiu       $a2, $s3, 0x10
    ctx->pc = 0x286878u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x28687c: 0x26670012  addiu       $a3, $s3, 0x12
    ctx->pc = 0x28687cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 18));
    // 0x286880: 0x26680014  addiu       $t0, $s3, 0x14
    ctx->pc = 0x286880u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    // 0x286884: 0x26690018  addiu       $t1, $s3, 0x18
    ctx->pc = 0x286884u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x286888: 0x316b000f  andi        $t3, $t3, 0xF
    ctx->pc = 0x286888u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)15);
    // 0x28688c: 0xb5c3c  dsll32      $t3, $t3, 16
    ctx->pc = 0x28688cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 16));
    // 0x286890: 0xb5c3f  dsra32      $t3, $t3, 16
    ctx->pc = 0x286890u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 16));
    // 0x286894: 0x4b1018  mult        $v0, $v0, $t3
    ctx->pc = 0x286894u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x286898: 0x620018  mult        $zero, $v1, $v0
    ctx->pc = 0x286898u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x28689c: 0x25fc2  srl         $t3, $v0, 31
    ctx->pc = 0x28689cu;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2868a0: 0x0  nop
    ctx->pc = 0x2868a0u;
    // NOP
    // 0x2868a4: 0x1010  mfhi        $v0
    ctx->pc = 0x2868a4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2868a8: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x2868a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x2868ac: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x2868acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x2868b0: 0xa6020008  sh          $v0, 0x8($s0)
    ctx->pc = 0x2868b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x2868b4: 0x926b0040  lbu         $t3, 0x40($s3)
    ctx->pc = 0x2868b4u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x2868b8: 0x8602000c  lh          $v0, 0xC($s0)
    ctx->pc = 0x2868b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2868bc: 0xb5903  sra         $t3, $t3, 4
    ctx->pc = 0x2868bcu;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 4));
    // 0x2868c0: 0x316b000f  andi        $t3, $t3, 0xF
    ctx->pc = 0x2868c0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)15);
    // 0x2868c4: 0xb5c3c  dsll32      $t3, $t3, 16
    ctx->pc = 0x2868c4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 16));
    // 0x2868c8: 0xb5c3f  dsra32      $t3, $t3, 16
    ctx->pc = 0x2868c8u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 16));
    // 0x2868cc: 0x704b5818  mult1       $t3, $v0, $t3
    ctx->pc = 0x2868ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x2868d0: 0x6b0018  mult        $zero, $v1, $t3
    ctx->pc = 0x2868d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2868d4: 0x0  nop
    ctx->pc = 0x2868d4u;
    // NOP
    // 0x2868d8: 0x0  nop
    ctx->pc = 0x2868d8u;
    // NOP
    // 0x2868dc: 0x1810  mfhi        $v1
    ctx->pc = 0x2868dcu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2868e0: 0xb5fc2  srl         $t3, $t3, 31
    ctx->pc = 0x2868e0u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 31));
    // 0x2868e4: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x2868e4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x2868e8: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x2868e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x2868ec: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2868ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2868f0: 0xa602000a  sh          $v0, 0xA($s0)
    ctx->pc = 0x2868f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x2868f4: 0xc096da0  jal         func_25B680
    ctx->pc = 0x2868F4u;
    SET_GPR_U32(ctx, 31, 0x2868FCu);
    ctx->pc = 0x2868F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2868F4u;
    // 0x2868f8: 0xa60a000e  sh          $t2, 0xE($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B680u, 0x2868F4u, 0x2868FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2868FCu;
label_2868fc:
    // 0x2868fc: 0x8f8480e0  lw          $a0, -0x7F20($gp)
    ctx->pc = 0x2868fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x286900: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x286900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x286904: 0x34430dcd  ori         $v1, $v0, 0xDCD
    ctx->pc = 0x286904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x286908: 0x831018  mult        $v0, $a0, $v1
    ctx->pc = 0x286908u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x28690c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28690cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x286910: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x286910u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x286914: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x286914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x286918: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x286918u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x28691c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28691cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x286920: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x286920u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x286924: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x286924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x286928: 0xa2020012  sb          $v0, 0x12($s0)
    ctx->pc = 0x286928u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 18), (uint8_t)GPR_U32(ctx, 2));
    // 0x28692c: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x28692cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x286930: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x286930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x286934: 0xc664000c  lwc1        $f4, 0xC($s3)
    ctx->pc = 0x286934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x286938: 0x70431018  mult1       $v0, $v0, $v1
    ctx->pc = 0x286938u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x28693c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28693cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x286940: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x286940u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x286944: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x286944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x286948: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x286948u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x28694c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28694Cu;
    {
        const bool branch_taken_0x28694c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x286950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28694Cu;
        // 0x286950: 0x460400c1  sub.s       $f3, $f0, $f4 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28694c) {
            ctx->pc = 0x286960u;
            goto label_286960;
        }
    }
    ctx->pc = 0x286954u;
    // 0x286954: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x286954u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286958: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x286958u;
    {
        const bool branch_taken_0x286958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28695Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286958u;
        // 0x28695c: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x286958) {
            ctx->pc = 0x28697Cu;
            goto label_28697c;
        }
    }
    ctx->pc = 0x286960u;
label_286960:
    // 0x286960: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x286960u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x286964: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x286964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x286968: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x286968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28696c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28696cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286970: 0x0  nop
    ctx->pc = 0x286970u;
    // NOP
    // 0x286974: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x286974u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x286978: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x286978u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_28697c:
    // 0x28697c: 0x3c023580  lui         $v0, 0x3580
    ctx->pc = 0x28697cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13696 << 16));
    // 0x286980: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x286980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x286984: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x286984u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x286988: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x286988u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28698c: 0x0  nop
    ctx->pc = 0x28698cu;
    // NOP
    // 0x286990: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x286990u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x286994: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x286994u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x286998: 0x46012040  add.s       $f1, $f4, $f1
    ctx->pc = 0x286998u;
    ctx->f[1] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x28699c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x28699cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2869a0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2869A0u;
    {
        const bool branch_taken_0x2869a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2869A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2869A0u;
        // 0x2869a4: 0xe6010000  swc1        $f1, 0x0($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2869a0) {
            ctx->pc = 0x2869B0u;
            goto label_2869b0;
        }
    }
    ctx->pc = 0x2869A8u;
    // 0x2869a8: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2869a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2869ac: 0x0  nop
    ctx->pc = 0x2869acu;
    // NOP
label_2869b0:
    // 0x2869b0: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x2869b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x2869b4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2869b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2869b8: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x2869b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x2869bc: 0xc660002c  lwc1        $f0, 0x2C($s3)
    ctx->pc = 0x2869bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2869c0: 0xc6640028  lwc1        $f4, 0x28($s3)
    ctx->pc = 0x2869c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2869c4: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x2869c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2869c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2869c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2869cc: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x2869ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x2869d0: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x2869d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x2869d4: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x2869d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x2869d8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2869D8u;
    {
        const bool branch_taken_0x2869d8 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2869DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2869D8u;
        // 0x2869dc: 0x460400c1  sub.s       $f3, $f0, $f4 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2869d8) {
            ctx->pc = 0x2869ECu;
            goto label_2869ec;
        }
    }
    ctx->pc = 0x2869E0u;
    // 0x2869e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2869e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2869e4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2869E4u;
    {
        const bool branch_taken_0x2869e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2869E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2869E4u;
        // 0x2869e8: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2869e4) {
            ctx->pc = 0x286A08u;
            goto label_286a08;
        }
    }
    ctx->pc = 0x2869ECu;
label_2869ec:
    // 0x2869ec: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2869ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2869f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2869f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2869f4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2869f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2869f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2869f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2869fc: 0x0  nop
    ctx->pc = 0x2869fcu;
    // NOP
    // 0x286a00: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x286a00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x286a04: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x286a04u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_286a08:
    // 0x286a08: 0x3c023580  lui         $v0, 0x3580
    ctx->pc = 0x286a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13696 << 16));
    // 0x286a0c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x286a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x286a10: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x286a10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x286a14: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x286a14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286a18: 0x0  nop
    ctx->pc = 0x286a18u;
    // NOP
    // 0x286a1c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x286a1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x286a20: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x286a20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x286a24: 0x46012040  add.s       $f1, $f4, $f1
    ctx->pc = 0x286a24u;
    ctx->f[1] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x286a28: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x286a28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x286a2c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x286A2Cu;
    {
        const bool branch_taken_0x286a2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x286A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286A2Cu;
        // 0x286a30: 0xe6010004  swc1        $f1, 0x4($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x286a2c) {
            ctx->pc = 0x286A38u;
            goto label_286a38;
        }
    }
    ctx->pc = 0x286A34u;
    // 0x286a34: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x286a34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_286a38:
    // 0x286a38: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x286a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x286a3c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x286a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x286a40: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x286a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x286a44: 0xc664003c  lwc1        $f4, 0x3C($s3)
    ctx->pc = 0x286a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x286a48: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x286a48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x286a4c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x286a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x286a50: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x286a50u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x286a54: 0x8f8480e0  lw          $a0, -0x7F20($gp)
    ctx->pc = 0x286a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x286a58: 0x41302  srl         $v0, $a0, 12
    ctx->pc = 0x286a58u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 12));
    // 0x286a5c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x286A5Cu;
    {
        const bool branch_taken_0x286a5c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x286A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286A5Cu;
        // 0x286a60: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286a5c) {
            ctx->pc = 0x286A70u;
            goto label_286a70;
        }
    }
    ctx->pc = 0x286A64u;
    // 0x286a64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x286a64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286a68: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x286A68u;
    {
        const bool branch_taken_0x286a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286A68u;
        // 0x286a6c: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x286a68) {
            ctx->pc = 0x286A88u;
            goto label_286a88;
        }
    }
    ctx->pc = 0x286A70u;
label_286a70:
    // 0x286a70: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x286a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x286a74: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x286a74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x286a78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x286a78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286a7c: 0x0  nop
    ctx->pc = 0x286a7cu;
    // NOP
    // 0x286a80: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x286a80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x286a84: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x286a84u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_286a88:
    // 0x286a88: 0x3c033600  lui         $v1, 0x3600
    ctx->pc = 0x286a88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13824 << 16));
    // 0x286a8c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x286a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x286a90: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x286a90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x286a94: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x286a94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x286a98: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x286a98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x286a9c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x286a9cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x286aa0: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x286aa0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x286aa4: 0xc6600038  lwc1        $f0, 0x38($s3)
    ctx->pc = 0x286aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x286aa8: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x286aa8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x286aac: 0x46010500  add.s       $f20, $f0, $f1
    ctx->pc = 0x286aacu;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x286ab0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x286ab0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286ab4: 0x0  nop
    ctx->pc = 0x286ab4u;
    // NOP
    // 0x286ab8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x286ab8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x286abc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x286ABCu;
    {
        const bool branch_taken_0x286abc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x286abc) {
            ctx->pc = 0x286AC8u;
            goto label_286ac8;
        }
    }
    ctx->pc = 0x286AC4u;
    // 0x286ac4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x286ac4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_286ac8:
    // 0x286ac8: 0x9262001f  lbu         $v0, 0x1F($s3)
    ctx->pc = 0x286ac8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 31)));
    // 0x286acc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x286accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x286ad0: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x286AD0u;
    {
        const bool branch_taken_0x286ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286AD0u;
        // 0x286ad4: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286ad0) {
            ctx->pc = 0x286BD8u;
            goto label_286bd8;
        }
    }
    ctx->pc = 0x286AD8u;
    // 0x286ad8: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x286ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x286adc: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x286adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x286ae0: 0x96670002  lhu         $a3, 0x2($s3)
    ctx->pc = 0x286ae0u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x286ae4: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x286ae4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x286ae8: 0x24a56540  addiu       $a1, $a1, 0x6540
    ctx->pc = 0x286ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25920));
    // 0x286aec: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x286aecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x286af0: 0x24860001  addiu       $a2, $a0, 0x1
    ctx->pc = 0x286af0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x286af4: 0xaf8680e0  sw          $a2, -0x7F20($gp)
    ctx->pc = 0x286af4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 6));
    // 0x286af8: 0x24e40001  addiu       $a0, $a3, 0x1
    ctx->pc = 0x286af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x286afc: 0x8f8680e0  lw          $a2, -0x7F20($gp)
    ctx->pc = 0x286afcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x286b00: 0x63302  srl         $a2, $a2, 12
    ctx->pc = 0x286b00u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 12));
    // 0x286b04: 0xc4001b  divu        $zero, $a2, $a0
    ctx->pc = 0x286b04u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
    // 0x286b08: 0x0  nop
    ctx->pc = 0x286b08u;
    // NOP
    // 0x286b0c: 0x0  nop
    ctx->pc = 0x286b0cu;
    // NOP
    // 0x286b10: 0x2010  mfhi        $a0
    ctx->pc = 0x286b10u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x286b14: 0x2a42021  addu        $a0, $s5, $a0
    ctx->pc = 0x286b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x286b18: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x286b18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x286b1c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x286b1cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x286b20: 0x24860400  addiu       $a2, $a0, 0x400
    ctx->pc = 0x286b20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1024));
    // 0x286b24: 0x30840fff  andi        $a0, $a0, 0xFFF
    ctx->pc = 0x286b24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x286b28: 0x30c60fff  andi        $a2, $a2, 0xFFF
    ctx->pc = 0x286b28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4095);
    // 0x286b2c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x286b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x286b30: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x286b30u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x286b34: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x286b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x286b38: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x286b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x286b3c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x286b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x286b40: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x286b40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x286b44: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x286b44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x286b48: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x286b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x286b4c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x286b4cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x286b50: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x286b50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x286b54: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x286b54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x286b58: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x286b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x286b5c: 0xc6600034  lwc1        $f0, 0x34($s3)
    ctx->pc = 0x286b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x286b60: 0xc6630004  lwc1        $f3, 0x4($s3)
    ctx->pc = 0x286b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x286b64: 0x70621018  mult1       $v0, $v1, $v0
    ctx->pc = 0x286b64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x286b68: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x286b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x286b6c: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x286b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x286b70: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x286b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x286b74: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x286b74u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x286b78: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x286B78u;
    {
        const bool branch_taken_0x286b78 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x286B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286B78u;
        // 0x286b7c: 0x46030081  sub.s       $f2, $f0, $f3 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x286b78) {
            ctx->pc = 0x286B8Cu;
            goto label_286b8c;
        }
    }
    ctx->pc = 0x286B80u;
    // 0x286b80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x286b80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286b84: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x286B84u;
    {
        const bool branch_taken_0x286b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286B84u;
        // 0x286b88: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x286b84) {
            ctx->pc = 0x286BA8u;
            goto label_286ba8;
        }
    }
    ctx->pc = 0x286B8Cu;
label_286b8c:
    // 0x286b8c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x286b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x286b90: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x286b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x286b94: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x286b94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x286b98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x286b98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286b9c: 0x0  nop
    ctx->pc = 0x286b9cu;
    // NOP
    // 0x286ba0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x286ba0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x286ba4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x286ba4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_286ba8:
    // 0x286ba8: 0x3c033580  lui         $v1, 0x3580
    ctx->pc = 0x286ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13696 << 16));
    // 0x286bac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x286bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x286bb0: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x286bb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x286bb4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x286bb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286bb8: 0x0  nop
    ctx->pc = 0x286bb8u;
    // NOP
    // 0x286bbc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x286bbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x286bc0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x286bc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x286bc4: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x286bc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x286bc8: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x286bc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x286bcc: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x286BCCu;
    {
        const bool branch_taken_0x286bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286BCCu;
        // 0x286bd0: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286bcc) {
            ctx->pc = 0x286D38u;
            goto label_286d38;
        }
    }
    ctx->pc = 0x286BD4u;
    // 0x286bd4: 0x0  nop
    ctx->pc = 0x286bd4u;
    // NOP
label_286bd8:
    // 0x286bd8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x286bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x286bdc: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x286bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x286be0: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x286be0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x286be4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x286be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x286be8: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x286be8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x286bec: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x286becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x286bf0: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x286bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x286bf4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x286BF4u;
    {
        const bool branch_taken_0x286bf4 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x286BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286BF4u;
        // 0x286bf8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286bf4) {
            ctx->pc = 0x286C08u;
            goto label_286c08;
        }
    }
    ctx->pc = 0x286BFCu;
    // 0x286bfc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x286bfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286c00: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x286C00u;
    {
        const bool branch_taken_0x286c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286C00u;
        // 0x286c04: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x286c00) {
            ctx->pc = 0x286C20u;
            goto label_286c20;
        }
    }
    ctx->pc = 0x286C08u;
label_286c08:
    // 0x286c08: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x286c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x286c0c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x286c0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x286c10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x286c10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286c14: 0x0  nop
    ctx->pc = 0x286c14u;
    // NOP
    // 0x286c18: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x286c18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x286c1c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x286c1cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_286c20:
    // 0x286c20: 0x3c023600  lui         $v0, 0x3600
    ctx->pc = 0x286c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13824 << 16));
    // 0x286c24: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x286c24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x286c28: 0x34440008  ori         $a0, $v0, 0x8
    ctx->pc = 0x286c28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x286c2c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x286c2cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286c30: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x286c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x286c34: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x286c34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x286c38: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x286c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x286c3c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x286c3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x286c40: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x286c40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x286c44: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x286c44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x286c48: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x286c48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x286c4c: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x286c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x286c50: 0xc6600034  lwc1        $f0, 0x34($s3)
    ctx->pc = 0x286c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x286c54: 0xc6630004  lwc1        $f3, 0x4($s3)
    ctx->pc = 0x286c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x286c58: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x286c58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x286c5c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x286c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x286c60: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x286c60u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x286c64: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x286c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x286c68: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x286c68u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x286c6c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x286C6Cu;
    {
        const bool branch_taken_0x286c6c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x286C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286C6Cu;
        // 0x286c70: 0x46030081  sub.s       $f2, $f0, $f3 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x286c6c) {
            ctx->pc = 0x286C80u;
            goto label_286c80;
        }
    }
    ctx->pc = 0x286C74u;
    // 0x286c74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x286c74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286c78: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x286C78u;
    {
        const bool branch_taken_0x286c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286C78u;
        // 0x286c7c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x286c78) {
            ctx->pc = 0x286C9Cu;
            goto label_286c9c;
        }
    }
    ctx->pc = 0x286C80u;
label_286c80:
    // 0x286c80: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x286c80u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x286c84: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x286c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x286c88: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x286c88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x286c8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x286c8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286c90: 0x0  nop
    ctx->pc = 0x286c90u;
    // NOP
    // 0x286c94: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x286c94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x286c98: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x286c98u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_286c9c:
    // 0x286c9c: 0x3c033580  lui         $v1, 0x3580
    ctx->pc = 0x286c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13696 << 16));
    // 0x286ca0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x286ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x286ca4: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x286ca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x286ca8: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x286ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x286cac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x286cacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286cb0: 0x0  nop
    ctx->pc = 0x286cb0u;
    // NOP
    // 0x286cb4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x286cb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x286cb8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x286cb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x286cbc: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x286cbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x286cc0: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x286cc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x286cc4: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x286cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x286cc8: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x286cc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x286ccc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x286cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x286cd0: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x286cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x286cd4: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x286cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x286cd8: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x286cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x286cdc: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x286CDCu;
    {
        const bool branch_taken_0x286cdc = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x286CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286CDCu;
        // 0x286ce0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286cdc) {
            ctx->pc = 0x286CF0u;
            goto label_286cf0;
        }
    }
    ctx->pc = 0x286CE4u;
    // 0x286ce4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x286ce4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286ce8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x286CE8u;
    {
        const bool branch_taken_0x286ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286CE8u;
        // 0x286cec: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x286ce8) {
            ctx->pc = 0x286D08u;
            goto label_286d08;
        }
    }
    ctx->pc = 0x286CF0u;
label_286cf0:
    // 0x286cf0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x286cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x286cf4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x286cf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x286cf8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x286cf8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286cfc: 0x0  nop
    ctx->pc = 0x286cfcu;
    // NOP
    // 0x286d00: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x286d00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x286d04: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x286d04u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_286d08:
    // 0x286d08: 0x3c033600  lui         $v1, 0x3600
    ctx->pc = 0x286d08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13824 << 16));
    // 0x286d0c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x286d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x286d10: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x286d10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x286d14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x286d14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286d18: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x286d18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x286d1c: 0x0  nop
    ctx->pc = 0x286d1cu;
    // NOP
    // 0x286d20: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x286d20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x286d24: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x286d24u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x286d28: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x286d28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x286d2c: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x286d2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x286d30: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x286d30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x286d34: 0x0  nop
    ctx->pc = 0x286d34u;
    // NOP
label_286d38:
    // 0x286d38: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x286d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x286d3c: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x286D3Cu;
    SET_GPR_U32(ctx, 31, 0x286D44u);
    ctx->pc = 0x286D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286D3Cu;
    // 0x286d40: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x286D3Cu, 0x286D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286D44u;
label_286d44:
    // 0x286d44: 0x7a820000  lq          $v0, 0x0($s4)
    ctx->pc = 0x286d44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x286d48: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x286d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x286d4c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x286d4cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x286d50: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x286d50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286d54: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x286D54u;
    SET_GPR_U32(ctx, 31, 0x286D5Cu);
    ctx->pc = 0x286D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286D54u;
    // 0x286d58: 0x7e020020  sq          $v0, 0x20($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x286D54u, 0x286D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286D5Cu;
label_286d5c:
    // 0x286d5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x286d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x286d60: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x286d60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x286d64: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x286D64u;
    {
        const bool branch_taken_0x286d64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x286D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286D64u;
        // 0x286d68: 0xa2030013  sb          $v1, 0x13($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 19), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286d64) {
            ctx->pc = 0x286D88u;
            goto label_286d88;
        }
    }
    ctx->pc = 0x286D6Cu;
    // 0x286d6c: 0x0  nop
    ctx->pc = 0x286d6cu;
    // NOP
label_286d70:
    // 0x286d70: 0x9263001c  lbu         $v1, 0x1C($s3)
    ctx->pc = 0x286d70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x286d74: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x286d74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x286d78: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x286d78u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x286d7c: 0x1460fe94  bnez        $v1, . + 4 + (-0x16C << 2)
    ctx->pc = 0x286D7Cu;
    {
        const bool branch_taken_0x286d7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x286D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286D7Cu;
        // 0x286d80: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286d7c) {
            ctx->pc = 0x2867D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2867d0;
        }
    }
    ctx->pc = 0x286D84u;
    // 0x286d84: 0x0  nop
    ctx->pc = 0x286d84u;
    // NOP
label_286d88:
    // 0x286d88: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x286d88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x286d8c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x286d8cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x286d90: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x286d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x286d94: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x286d94u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x286d98: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x286d98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x286d9c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x286d9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x286da0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x286da0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x286da4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x286da4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x286da8: 0x3e00008  jr          $ra
    ctx->pc = 0x286DA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286DA8u;
        // 0x286dac: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286DA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x286DB0u;
}
