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

// Function: sub_003ACE60
// Address: 0x3ace60 - 0x3ad35c
void sub_003ACE60_0x3ace60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ACE60_0x3ace60");
#endif

    switch (ctx->pc) {
        case 0x3ad018u: goto label_3ad018;
        case 0x3ad05cu: goto label_3ad05c;
        case 0x3ad0a0u: goto label_3ad0a0;
        case 0x3ad0e4u: goto label_3ad0e4;
        case 0x3ad128u: goto label_3ad128;
        case 0x3ad188u: goto label_3ad188;
        case 0x3ad1ecu: goto label_3ad1ec;
        case 0x3ad234u: goto label_3ad234;
        case 0x3ad288u: goto label_3ad288;
        case 0x3ad2d4u: goto label_3ad2d4;
        case 0x3ad31cu: goto label_3ad31c;
        case 0x3ad324u: goto label_3ad324;
        case 0x3ad330u: goto label_3ad330;
        default: break;
    }

    ctx->pc = 0x3ace60u;

    // 0x3ace60: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3ace60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x3ace64: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x3ace64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x3ace68: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x3ace68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x3ace6c: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x3ace6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x3ace70: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x3ace70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x3ace74: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x3ace74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x3ace78: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3ace78u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ace7c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3ace7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x3ace80: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3ace80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x3ace84: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3ace84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3ace88: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3ace88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3ace8c: 0x80860007  lb          $a2, 0x7($a0)
    ctx->pc = 0x3ace8cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 7)));
    // 0x3ace90: 0x80850008  lb          $a1, 0x8($a0)
    ctx->pc = 0x3ace90u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3ace94: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x3ace94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x3ace98: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x3ace98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x3ace9c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x3ace9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3acea0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3acea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3acea4: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x3acea4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3acea8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3acea8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3aceac: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x3aceacu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3aceb0: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x3aceb0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x3aceb4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3aceb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3aceb8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3aceb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3acebc: 0x24740190  addiu       $s4, $v1, 0x190
    ctx->pc = 0x3acebcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 400));
    // 0x3acec0: 0x90630190  lbu         $v1, 0x190($v1)
    ctx->pc = 0x3acec0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 400)));
    // 0x3acec4: 0x1060011a  beqz        $v1, . + 4 + (0x11A << 2)
    ctx->pc = 0x3ACEC4u;
    {
        const bool branch_taken_0x3acec4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3acec4) {
            ctx->pc = 0x3AD330u;
            goto label_3ad330;
        }
    }
    ctx->pc = 0x3ACECCu;
    // 0x3acecc: 0x8e860004  lw          $a2, 0x4($s4)
    ctx->pc = 0x3aceccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x3aced0: 0x3c020149  lui         $v0, 0x149
    ctx->pc = 0x3aced0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)329 << 16));
    // 0x3aced4: 0x34429700  ori         $v0, $v0, 0x9700
    ctx->pc = 0x3aced4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38656);
    // 0x3aced8: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x3aced8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3acedc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3ACEDCu;
    {
        const bool branch_taken_0x3acedc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ACEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACEDCu;
        // 0x3acee0: 0x2413003b  addiu       $s3, $zero, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acedc) {
            ctx->pc = 0x3ACEF0u;
            goto label_3acef0;
        }
    }
    ctx->pc = 0x3ACEE4u;
    // 0x3acee4: 0x24160063  addiu       $s6, $zero, 0x63
    ctx->pc = 0x3acee4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x3acee8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x3ACEE8u;
    {
        const bool branch_taken_0x3acee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ACEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACEE8u;
        // 0x3aceec: 0x260b82d  daddu       $s7, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acee8) {
            ctx->pc = 0x3ACF68u;
            goto label_3acf68;
        }
    }
    ctx->pc = 0x3ACEF0u;
label_3acef0:
    // 0x3acef0: 0x3c0236b0  lui         $v0, 0x36B0
    ctx->pc = 0x3acef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14000 << 16));
    // 0x3acef4: 0x34436e71  ori         $v1, $v0, 0x6E71
    ctx->pc = 0x3acef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28273);
    // 0x3acef8: 0x660019  multu       $v1, $a2
    ctx->pc = 0x3acef8u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 3) * (uint64_t)GPR_U32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3acefc: 0x3c0291a2  lui         $v0, 0x91A2
    ctx->pc = 0x3acefcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37282 << 16));
    // 0x3acf00: 0x3444b3c5  ori         $a0, $v0, 0xB3C5
    ctx->pc = 0x3acf00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46021);
    // 0x3acf04: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x3acf04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
    // 0x3acf08: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x3acf08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x3acf0c: 0x2810  mfhi        $a1
    ctx->pc = 0x3acf0cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x3acf10: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x3acf10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x3acf14: 0x860019  multu       $a0, $a2
    ctx->pc = 0x3acf14u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 4) * (uint64_t)GPR_U32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3acf18: 0xc52023  subu        $a0, $a2, $a1
    ctx->pc = 0x3acf18u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x3acf1c: 0x42042  srl         $a0, $a0, 1
    ctx->pc = 0x3acf1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x3acf20: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3acf20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3acf24: 0x4b442  srl         $s6, $a0, 17
    ctx->pc = 0x3acf24u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 4), 17));
    // 0x3acf28: 0x2010  mfhi        $a0
    ctx->pc = 0x3acf28u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3acf2c: 0x422c2  srl         $a0, $a0, 11
    ctx->pc = 0x3acf2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 11));
    // 0x3acf30: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x3acf30u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x3acf34: 0x0  nop
    ctx->pc = 0x3acf34u;
    // NOP
    // 0x3acf38: 0x0  nop
    ctx->pc = 0x3acf38u;
    // NOP
    // 0x3acf3c: 0x9810  mfhi        $s3
    ctx->pc = 0x3acf3cu;
    SET_GPR_U64(ctx, 19, ctx->hi);
    // 0x3acf40: 0x460019  multu       $v0, $a2
    ctx->pc = 0x3acf40u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3acf44: 0x0  nop
    ctx->pc = 0x3acf44u;
    // NOP
    // 0x3acf48: 0x0  nop
    ctx->pc = 0x3acf48u;
    // NOP
    // 0x3acf4c: 0x1010  mfhi        $v0
    ctx->pc = 0x3acf4cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3acf50: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x3acf50u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x3acf54: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x3acf54u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x3acf58: 0x0  nop
    ctx->pc = 0x3acf58u;
    // NOP
    // 0x3acf5c: 0x0  nop
    ctx->pc = 0x3acf5cu;
    // NOP
    // 0x3acf60: 0xb810  mfhi        $s7
    ctx->pc = 0x3acf60u;
    SET_GPR_U64(ctx, 23, ctx->hi);
    // 0x3acf64: 0x0  nop
    ctx->pc = 0x3acf64u;
    // NOP
label_3acf68:
    // 0x3acf68: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3acf68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3acf6c: 0x9023fc8d  lbu         $v1, -0x373($at)
    ctx->pc = 0x3acf6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x81FC8Du));
    // 0x3acf70: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x3acf70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3acf74: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3ACF74u;
    {
        const bool branch_taken_0x3acf74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3ACF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACF74u;
        // 0x3acf78: 0x241000a8  addiu       $s0, $zero, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acf74) {
            ctx->pc = 0x3ACFB8u;
            goto label_3acfb8;
        }
    }
    ctx->pc = 0x3ACF7Cu;
    // 0x3acf7c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x3acf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3acf80: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3ACF80u;
    {
        const bool branch_taken_0x3acf80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3ACF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACF80u;
        // 0x3acf84: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acf80) {
            ctx->pc = 0x3ACFB8u;
            goto label_3acfb8;
        }
    }
    ctx->pc = 0x3ACF88u;
    // 0x3acf88: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3ACF88u;
    {
        const bool branch_taken_0x3acf88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3acf88) {
            ctx->pc = 0x3ACFB8u;
            goto label_3acfb8;
        }
    }
    ctx->pc = 0x3ACF90u;
    // 0x3acf90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3acf90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3acf94: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3ACF94u;
    {
        const bool branch_taken_0x3acf94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3acf94) {
            ctx->pc = 0x3ACFA8u;
            goto label_3acfa8;
        }
    }
    ctx->pc = 0x3ACF9Cu;
    // 0x3acf9c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3ACF9Cu;
    {
        const bool branch_taken_0x3acf9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3acf9c) {
            ctx->pc = 0x3ACFC8u;
            goto label_3acfc8;
        }
    }
    ctx->pc = 0x3ACFA4u;
    // 0x3acfa4: 0x0  nop
    ctx->pc = 0x3acfa4u;
    // NOP
label_3acfa8:
    // 0x3acfa8: 0x24120064  addiu       $s2, $zero, 0x64
    ctx->pc = 0x3acfa8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x3acfac: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3ACFACu;
    {
        const bool branch_taken_0x3acfac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ACFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACFACu;
        // 0x3acfb0: 0x24110010  addiu       $s1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acfac) {
            ctx->pc = 0x3ACFD8u;
            goto label_3acfd8;
        }
    }
    ctx->pc = 0x3ACFB4u;
    // 0x3acfb4: 0x0  nop
    ctx->pc = 0x3acfb4u;
    // NOP
label_3acfb8:
    // 0x3acfb8: 0x2412008e  addiu       $s2, $zero, 0x8E
    ctx->pc = 0x3acfb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
    // 0x3acfbc: 0x24110012  addiu       $s1, $zero, 0x12
    ctx->pc = 0x3acfbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x3acfc0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3ACFC0u;
    {
        const bool branch_taken_0x3acfc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ACFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACFC0u;
        // 0x3acfc4: 0x2610fffd  addiu       $s0, $s0, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acfc0) {
            ctx->pc = 0x3ACFD8u;
            goto label_3acfd8;
        }
    }
    ctx->pc = 0x3ACFC8u;
label_3acfc8:
    // 0x3acfc8: 0x24120064  addiu       $s2, $zero, 0x64
    ctx->pc = 0x3acfc8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x3acfcc: 0x24110012  addiu       $s1, $zero, 0x12
    ctx->pc = 0x3acfccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x3acfd0: 0x2610fffd  addiu       $s0, $s0, -0x3
    ctx->pc = 0x3acfd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967293));
    // 0x3acfd4: 0x0  nop
    ctx->pc = 0x3acfd4u;
    // NOP
label_3acfd8:
    // 0x3acfd8: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3acfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3acfdc: 0x24422988  addiu       $v0, $v0, 0x2988
    ctx->pc = 0x3acfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10632));
    // 0x3acfe0: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3acfe0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3acfe4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3acfe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3acfe8: 0x3206ffff  andi        $a2, $s0, 0xFFFF
    ctx->pc = 0x3acfe8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x3acfec: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3acfecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x3acff0: 0x322a00ff  andi        $t2, $s1, 0xFF
    ctx->pc = 0x3acff0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x3acff4: 0x34420055  ori         $v0, $v0, 0x55
    ctx->pc = 0x3acff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)85);
    // 0x3acff8: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3acff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3acffc: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x3acffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x3ad000: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x3ad000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3ad004: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3ad004u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad008: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x3ad008u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3ad00c: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x3ad00cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3ad010: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x3AD010u;
    SET_GPR_U32(ctx, 31, 0x3AD018u);
    ctx->pc = 0x3AD014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD010u;
    // 0x3ad014: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x3AD010u, 0x3AD018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD018u;
label_3ad018:
    // 0x3ad018: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3ad018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3ad01c: 0x26420100  addiu       $v0, $s2, 0x100
    ctx->pc = 0x3ad01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
    // 0x3ad020: 0x24632990  addiu       $v1, $v1, 0x2990
    ctx->pc = 0x3ad020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10640));
    // 0x3ad024: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3ad024u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3ad028: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x3ad028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x3ad02c: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x3ad02cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3ad030: 0xffb60008  sd          $s6, 0x8($sp)
    ctx->pc = 0x3ad030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 22));
    // 0x3ad034: 0x3206ffff  andi        $a2, $s0, 0xFFFF
    ctx->pc = 0x3ad034u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x3ad038: 0xffb30010  sd          $s3, 0x10($sp)
    ctx->pc = 0x3ad038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 19));
    // 0x3ad03c: 0x322a00ff  andi        $t2, $s1, 0xFF
    ctx->pc = 0x3ad03cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x3ad040: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3ad040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3ad044: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3ad044u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad048: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x3ad048u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3ad04c: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x3ad04cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3ad050: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3ad050u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad054: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x3AD054u;
    SET_GPR_U32(ctx, 31, 0x3AD05Cu);
    ctx->pc = 0x3AD058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD054u;
    // 0x3ad058: 0xffb70018  sd          $s7, 0x18($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x3AD054u, 0x3AD05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD05Cu;
label_3ad05c:
    // 0x3ad05c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3ad05cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3ad060: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3ad060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x3ad064: 0x24632988  addiu       $v1, $v1, 0x2988
    ctx->pc = 0x3ad064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10632));
    // 0x3ad068: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3ad068u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3ad06c: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x3ad06cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x3ad070: 0x34420056  ori         $v0, $v0, 0x56
    ctx->pc = 0x3ad070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)86);
    // 0x3ad074: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x3ad074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x3ad078: 0x322a00ff  andi        $t2, $s1, 0xFF
    ctx->pc = 0x3ad078u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x3ad07c: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x3ad07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x3ad080: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3ad080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3ad084: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x3ad084u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3ad088: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x3ad088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3ad08c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3ad08cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad090: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x3ad090u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3ad094: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x3ad094u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3ad098: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x3AD098u;
    SET_GPR_U32(ctx, 31, 0x3AD0A0u);
    ctx->pc = 0x3AD09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD098u;
    // 0x3ad09c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x3AD098u, 0x3AD0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD0A0u;
label_3ad0a0:
    // 0x3ad0a0: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3ad0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3ad0a4: 0x26420100  addiu       $v0, $s2, 0x100
    ctx->pc = 0x3ad0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
    // 0x3ad0a8: 0x246329a0  addiu       $v1, $v1, 0x29A0
    ctx->pc = 0x3ad0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10656));
    // 0x3ad0ac: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x3ad0acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3ad0b0: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x3ad0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x3ad0b4: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x3ad0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x3ad0b8: 0x92830010  lbu         $v1, 0x10($s4)
    ctx->pc = 0x3ad0b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x3ad0bc: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3ad0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3ad0c0: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x3ad0c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3ad0c4: 0x322a00ff  andi        $t2, $s1, 0xFF
    ctx->pc = 0x3ad0c4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x3ad0c8: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3ad0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3ad0cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3ad0ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad0d0: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x3ad0d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3ad0d4: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x3ad0d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3ad0d8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3ad0d8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad0dc: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x3AD0DCu;
    SET_GPR_U32(ctx, 31, 0x3AD0E4u);
    ctx->pc = 0x3AD0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD0DCu;
    // 0x3ad0e0: 0xffa30008  sd          $v1, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x3AD0DCu, 0x3AD0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD0E4u;
label_3ad0e4:
    // 0x3ad0e4: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3ad0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3ad0e8: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3ad0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x3ad0ec: 0x24632988  addiu       $v1, $v1, 0x2988
    ctx->pc = 0x3ad0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10632));
    // 0x3ad0f0: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3ad0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3ad0f4: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x3ad0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x3ad0f8: 0x34420057  ori         $v0, $v0, 0x57
    ctx->pc = 0x3ad0f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)87);
    // 0x3ad0fc: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x3ad0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x3ad100: 0x322a00ff  andi        $t2, $s1, 0xFF
    ctx->pc = 0x3ad100u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x3ad104: 0x26020028  addiu       $v0, $s0, 0x28
    ctx->pc = 0x3ad104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x3ad108: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3ad108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3ad10c: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x3ad10cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3ad110: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x3ad110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3ad114: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3ad114u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad118: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x3ad118u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3ad11c: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x3ad11cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3ad120: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x3AD120u;
    SET_GPR_U32(ctx, 31, 0x3AD128u);
    ctx->pc = 0x3AD124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD120u;
    // 0x3ad124: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x3AD120u, 0x3AD128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD128u;
label_3ad128:
    // 0x3ad128: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3ad128u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3ad12c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ad12cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ad130: 0x9023fc8c  lbu         $v1, -0x374($at)
    ctx->pc = 0x3ad130u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x81FC8Cu));
    // 0x3ad134: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3AD134u;
    {
        const bool branch_taken_0x3ad134 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3AD138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD134u;
        // 0x3ad138: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad134) {
            ctx->pc = 0x3AD190u;
            goto label_3ad190;
        }
    }
    ctx->pc = 0x3AD13Cu;
    // 0x3ad13c: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3ad13cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3ad140: 0x24422988  addiu       $v0, $v0, 0x2988
    ctx->pc = 0x3ad140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10632));
    // 0x3ad144: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x3ad144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x3ad148: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3ad148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3ad14c: 0x322a00ff  andi        $t2, $s1, 0xFF
    ctx->pc = 0x3ad14cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x3ad150: 0x928c0001  lbu         $t4, 0x1($s4)
    ctx->pc = 0x3ad150u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
    // 0x3ad154: 0x26420100  addiu       $v0, $s2, 0x100
    ctx->pc = 0x3ad154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
    // 0x3ad158: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x3ad158u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3ad15c: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3ad15cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3ad160: 0x26020028  addiu       $v0, $s0, 0x28
    ctx->pc = 0x3ad160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x3ad164: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3ad164u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad168: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x3ad168u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3ad16c: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x3ad16cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3ad170: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x3ad170u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3ad174: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3ad174u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad178: 0x2582004e  addiu       $v0, $t4, 0x4E
    ctx->pc = 0x3ad178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 78));
    // 0x3ad17c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3ad17cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3ad180: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x3AD180u;
    SET_GPR_U32(ctx, 31, 0x3AD188u);
    ctx->pc = 0x3AD184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD180u;
    // 0x3ad184: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x3AD180u, 0x3AD188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD188u;
label_3ad188:
    // 0x3ad188: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x3AD188u;
    {
        const bool branch_taken_0x3ad188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ad188) {
            ctx->pc = 0x3AD1F0u;
            goto label_3ad1f0;
        }
    }
    ctx->pc = 0x3AD190u;
label_3ad190:
    // 0x3ad190: 0x92820001  lbu         $v0, 0x1($s4)
    ctx->pc = 0x3ad190u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
    // 0x3ad194: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3AD194u;
    {
        const bool branch_taken_0x3ad194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ad194) {
            ctx->pc = 0x3AD1A0u;
            goto label_3ad1a0;
        }
    }
    ctx->pc = 0x3AD19Cu;
    // 0x3ad19c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3ad19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3ad1a0:
    // 0x3ad1a0: 0x2443004e  addiu       $v1, $v0, 0x4E
    ctx->pc = 0x3ad1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 78));
    // 0x3ad1a4: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x3ad1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x3ad1a8: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3ad1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x3ad1ac: 0x24842988  addiu       $a0, $a0, 0x2988
    ctx->pc = 0x3ad1acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10632));
    // 0x3ad1b0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x3ad1b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3ad1b4: 0xffa40000  sd          $a0, 0x0($sp)
    ctx->pc = 0x3ad1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 4));
    // 0x3ad1b8: 0x322a00ff  andi        $t2, $s1, 0xFF
    ctx->pc = 0x3ad1b8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x3ad1bc: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x3ad1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x3ad1c0: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3ad1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3ad1c4: 0x26420100  addiu       $v0, $s2, 0x100
    ctx->pc = 0x3ad1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
    // 0x3ad1c8: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3ad1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3ad1cc: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x3ad1ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3ad1d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3ad1d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad1d4: 0x26020028  addiu       $v0, $s0, 0x28
    ctx->pc = 0x3ad1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x3ad1d8: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x3ad1d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3ad1dc: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x3ad1dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3ad1e0: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x3ad1e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3ad1e4: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x3AD1E4u;
    SET_GPR_U32(ctx, 31, 0x3AD1ECu);
    ctx->pc = 0x3AD1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD1E4u;
    // 0x3ad1e8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x3AD1E4u, 0x3AD1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD1ECu;
label_3ad1ec:
    // 0x3ad1ec: 0x0  nop
    ctx->pc = 0x3ad1ecu;
    // NOP
label_3ad1f0:
    // 0x3ad1f0: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3ad1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3ad1f4: 0x24422988  addiu       $v0, $v0, 0x2988
    ctx->pc = 0x3ad1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10632));
    // 0x3ad1f8: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3ad1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3ad1fc: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3ad1fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3ad200: 0x322a00ff  andi        $t2, $s1, 0xFF
    ctx->pc = 0x3ad200u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x3ad204: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3ad204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x3ad208: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3ad208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3ad20c: 0x34430058  ori         $v1, $v0, 0x58
    ctx->pc = 0x3ad20cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)88);
    // 0x3ad210: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x3ad210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3ad214: 0x2602003c  addiu       $v0, $s0, 0x3C
    ctx->pc = 0x3ad214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
    // 0x3ad218: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x3ad218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x3ad21c: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x3ad21cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3ad220: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3ad220u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad224: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x3ad224u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3ad228: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x3ad228u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3ad22c: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x3AD22Cu;
    SET_GPR_U32(ctx, 31, 0x3AD234u);
    ctx->pc = 0x3AD230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD22Cu;
    // 0x3ad230: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x3AD22Cu, 0x3AD234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD234u;
label_3ad234:
    // 0x3ad234: 0x2602003c  addiu       $v0, $s0, 0x3C
    ctx->pc = 0x3ad234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
    // 0x3ad238: 0x26430100  addiu       $v1, $s2, 0x100
    ctx->pc = 0x3ad238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
    // 0x3ad23c: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x3ad23cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3ad240: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3ad240u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3ad244: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3ad244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3ad248: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x3ad248u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3ad24c: 0x244229a8  addiu       $v0, $v0, 0x29A8
    ctx->pc = 0x3ad24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10664));
    // 0x3ad250: 0x322a00ff  andi        $t2, $s1, 0xFF
    ctx->pc = 0x3ad250u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x3ad254: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3ad254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3ad258: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3ad258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3ad25c: 0x92830014  lbu         $v1, 0x14($s4)
    ctx->pc = 0x3ad25cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x3ad260: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3ad260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x3ad264: 0x34420059  ori         $v0, $v0, 0x59
    ctx->pc = 0x3ad264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)89);
    // 0x3ad268: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3ad268u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad26c: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x3ad26cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3ad270: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x3ad270u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3ad274: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3ad274u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad278: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3ad278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3ad27c: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x3ad27cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x3ad280: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x3AD280u;
    SET_GPR_U32(ctx, 31, 0x3AD288u);
    ctx->pc = 0x3AD284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD280u;
    // 0x3ad284: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x3AD280u, 0x3AD288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD288u;
label_3ad288:
    // 0x3ad288: 0x92830011  lbu         $v1, 0x11($s4)
    ctx->pc = 0x3ad288u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 17)));
    // 0x3ad28c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x3ad28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3ad290: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3ad290u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad294: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3AD294u;
    {
        const bool branch_taken_0x3ad294 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3AD298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD294u;
        // 0x3ad298: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad294) {
            ctx->pc = 0x3AD2A0u;
            goto label_3ad2a0;
        }
    }
    ctx->pc = 0x3AD29Cu;
    // 0x3ad29c: 0x26860016  addiu       $a2, $s4, 0x16
    ctx->pc = 0x3ad29cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 22));
label_3ad2a0:
    // 0x3ad2a0: 0x92830012  lbu         $v1, 0x12($s4)
    ctx->pc = 0x3ad2a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 18)));
    // 0x3ad2a4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x3ad2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3ad2a8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AD2A8u;
    {
        const bool branch_taken_0x3ad2a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3ad2a8) {
            ctx->pc = 0x3AD2B8u;
            goto label_3ad2b8;
        }
    }
    ctx->pc = 0x3AD2B0u;
    // 0x3ad2b0: 0x2687002c  addiu       $a3, $s4, 0x2C
    ctx->pc = 0x3ad2b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 44));
    // 0x3ad2b4: 0x0  nop
    ctx->pc = 0x3ad2b4u;
    // NOP
label_3ad2b8:
    // 0x3ad2b8: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AD2B8u;
    {
        const bool branch_taken_0x3ad2b8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ad2b8) {
            ctx->pc = 0x3AD2C8u;
            goto label_3ad2c8;
        }
    }
    ctx->pc = 0x3AD2C0u;
    // 0x3ad2c0: 0x10e00005  beqz        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x3AD2C0u;
    {
        const bool branch_taken_0x3ad2c0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ad2c0) {
            ctx->pc = 0x3AD2D8u;
            goto label_3ad2d8;
        }
    }
    ctx->pc = 0x3AD2C8u;
label_3ad2c8:
    // 0x3ad2c8: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x3ad2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x3ad2cc: 0xc0b63c8  jal         func_2D8F20
    ctx->pc = 0x3AD2CCu;
    SET_GPR_U32(ctx, 31, 0x3AD2D4u);
    ctx->pc = 0x3AD2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD2CCu;
    // 0x3ad2d0: 0x2405006e  addiu       $a1, $zero, 0x6E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8F20u, 0x3AD2CCu, 0x3AD2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD2D4u;
label_3ad2d4:
    // 0x3ad2d4: 0x0  nop
    ctx->pc = 0x3ad2d4u;
    // NOP
label_3ad2d8:
    // 0x3ad2d8: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3ad2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3ad2dc: 0x24422988  addiu       $v0, $v0, 0x2988
    ctx->pc = 0x3ad2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10632));
    // 0x3ad2e0: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3ad2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3ad2e4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3ad2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3ad2e8: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3ad2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3ad2ec: 0x86830002  lh          $v1, 0x2($s4)
    ctx->pc = 0x3ad2ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x3ad2f0: 0x3c020101  lui         $v0, 0x101
    ctx->pc = 0x3ad2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)257 << 16));
    // 0x3ad2f4: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x3ad2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x3ad2f8: 0x240600a7  addiu       $a2, $zero, 0xA7
    ctx->pc = 0x3ad2f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 167));
    // 0x3ad2fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3ad2fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad300: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x3ad300u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3ad304: 0x24090011  addiu       $t1, $zero, 0x11
    ctx->pc = 0x3ad304u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3ad308: 0x240a0013  addiu       $t2, $zero, 0x13
    ctx->pc = 0x3ad308u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x3ad30c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3ad30cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad310: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x3ad310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3ad314: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x3AD314u;
    SET_GPR_U32(ctx, 31, 0x3AD31Cu);
    ctx->pc = 0x3AD318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD314u;
    // 0x3ad318: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x3AD314u, 0x3AD31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD31Cu;
label_3ad31c:
    // 0x3ad31c: 0xc0eb578  jal         func_3AD5E0
    ctx->pc = 0x3AD31Cu;
    SET_GPR_U32(ctx, 31, 0x3AD324u);
    ctx->pc = 0x3AD320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD31Cu;
    // 0x3ad320: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD5E0u, 0x3AD31Cu, 0x3AD324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD324u;
label_3ad324:
    // 0x3ad324: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3ad324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad328: 0xc0eb5c4  jal         func_3AD710
    ctx->pc = 0x3AD328u;
    SET_GPR_U32(ctx, 31, 0x3AD330u);
    ctx->pc = 0x3AD32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD328u;
    // 0x3ad32c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD710u, 0x3AD328u, 0x3AD330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD330u;
label_3ad330:
    // 0x3ad330: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x3ad330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3ad334: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x3ad334u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3ad338: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x3ad338u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3ad33c: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x3ad33cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3ad340: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x3ad340u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3ad344: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3ad344u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3ad348: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3ad348u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3ad34c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3ad34cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3ad350: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3ad350u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ad354: 0x3e00008  jr          $ra
    ctx->pc = 0x3AD354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AD358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD354u;
        // 0x3ad358: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AD35Cu;
}
