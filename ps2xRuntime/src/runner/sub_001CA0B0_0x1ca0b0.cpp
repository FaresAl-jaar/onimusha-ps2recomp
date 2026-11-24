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

// Function: sub_001CA0B0
// Address: 0x1ca0b0 - 0x1cca28
void sub_001CA0B0_0x1ca0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CA0B0_0x1ca0b0");
#endif

    switch (ctx->pc) {
        case 0x1ca350u: goto label_1ca350;
        case 0x1ca360u: goto label_1ca360;
        case 0x1ca4e8u: goto label_1ca4e8;
        case 0x1ca8b8u: goto label_1ca8b8;
        case 0x1ca94cu: goto label_1ca94c;
        case 0x1ca958u: goto label_1ca958;
        case 0x1ca968u: goto label_1ca968;
        case 0x1ca978u: goto label_1ca978;
        case 0x1ca988u: goto label_1ca988;
        case 0x1ca998u: goto label_1ca998;
        case 0x1ca9e4u: goto label_1ca9e4;
        case 0x1ca9f0u: goto label_1ca9f0;
        case 0x1caa00u: goto label_1caa00;
        case 0x1caa10u: goto label_1caa10;
        case 0x1caa20u: goto label_1caa20;
        case 0x1caa30u: goto label_1caa30;
        case 0x1caa7cu: goto label_1caa7c;
        case 0x1caa8cu: goto label_1caa8c;
        case 0x1caa9cu: goto label_1caa9c;
        case 0x1caaacu: goto label_1caaac;
        case 0x1cab88u: goto label_1cab88;
        case 0x1cac68u: goto label_1cac68;
        case 0x1cb030u: goto label_1cb030;
        case 0x1cb150u: goto label_1cb150;
        case 0x1cb238u: goto label_1cb238;
        case 0x1cb5e8u: goto label_1cb5e8;
        case 0x1cb740u: goto label_1cb740;
        case 0x1cb758u: goto label_1cb758;
        case 0x1cb850u: goto label_1cb850;
        case 0x1cb8a0u: goto label_1cb8a0;
        case 0x1cb980u: goto label_1cb980;
        case 0x1cba30u: goto label_1cba30;
        case 0x1cbb08u: goto label_1cbb08;
        case 0x1cbbd0u: goto label_1cbbd0;
        case 0x1cbbe8u: goto label_1cbbe8;
        case 0x1cbce0u: goto label_1cbce0;
        case 0x1cbd28u: goto label_1cbd28;
        case 0x1cbd40u: goto label_1cbd40;
        case 0x1cbe40u: goto label_1cbe40;
        case 0x1cbfb0u: goto label_1cbfb0;
        case 0x1cc070u: goto label_1cc070;
        case 0x1cc178u: goto label_1cc178;
        case 0x1cc238u: goto label_1cc238;
        case 0x1cc320u: goto label_1cc320;
        case 0x1cc3e0u: goto label_1cc3e0;
        case 0x1cc650u: goto label_1cc650;
        case 0x1cc658u: goto label_1cc658;
        case 0x1cc660u: goto label_1cc660;
        case 0x1cc678u: goto label_1cc678;
        case 0x1cc680u: goto label_1cc680;
        case 0x1cc6a4u: goto label_1cc6a4;
        case 0x1cc6f8u: goto label_1cc6f8;
        case 0x1cc7f0u: goto label_1cc7f0;
        case 0x1cc848u: goto label_1cc848;
        case 0x1cc958u: goto label_1cc958;
        case 0x1cc99cu: goto label_1cc99c;
        case 0x1cc9acu: goto label_1cc9ac;
        case 0x1cc9b8u: goto label_1cc9b8;
        case 0x1cc9c8u: goto label_1cc9c8;
        default: break;
    }

    ctx->pc = 0x1ca0b0u;

    // 0x1ca0b0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1ca0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1ca0b4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1ca0b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1ca0b8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1ca0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1ca0bc: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1ca0bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1ca0c0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1ca0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1ca0c4: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x1ca0c4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca0c8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1ca0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1ca0cc: 0x24050072  addiu       $a1, $zero, 0x72
    ctx->pc = 0x1ca0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x1ca0d0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1ca0d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1ca0d4: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1ca0d4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca0d8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1ca0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1ca0dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ca0dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1ca0e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ca0e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ca0e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ca0e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ca0e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ca0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ca0ec: 0x9023cea4  lbu         $v1, -0x315C($at)
    ctx->pc = 0x1ca0ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x81CEA4u));
    // 0x1ca0f0: 0x8c950000  lw          $s5, 0x0($a0)
    ctx->pc = 0x1ca0f0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ca0f4: 0x8c940004  lw          $s4, 0x4($a0)
    ctx->pc = 0x1ca0f4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1ca0f8: 0x8c86006c  lw          $a2, 0x6C($a0)
    ctx->pc = 0x1ca0f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
    // 0x1ca0fc: 0x8c970070  lw          $s7, 0x70($a0)
    ctx->pc = 0x1ca0fcu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x1ca100: 0x8c910008  lw          $s1, 0x8($a0)
    ctx->pc = 0x1ca100u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1ca104: 0x38680001  xori        $t0, $v1, 0x1
    ctx->pc = 0x1ca104u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1ca108: 0x8c90000c  lw          $s0, 0xC($a0)
    ctx->pc = 0x1ca108u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1ca10c: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1ca10cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1ca110: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x1ca110u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1ca114: 0x94276ac4  lhu         $a3, 0x6AC4($at)
    ctx->pc = 0x1ca114u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 27332)));
    // 0x1ca118: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x1ca118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x1ca11c: 0x8c920040  lw          $s2, 0x40($a0)
    ctx->pc = 0x1ca11cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1ca120: 0x10e50013  beq         $a3, $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1CA120u;
    {
        const bool branch_taken_0x1ca120 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        ctx->pc = 0x1CA124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA120u;
        // 0x1ca124: 0x8c930048  lw          $s3, 0x48($a0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca120) {
            ctx->pc = 0x1CA170u;
            goto label_1ca170;
        }
    }
    ctx->pc = 0x1CA128u;
    // 0x1ca128: 0x2404070c  addiu       $a0, $zero, 0x70C
    ctx->pc = 0x1ca128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1804));
    // 0x1ca12c: 0x10e40010  beq         $a3, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1CA12Cu;
    {
        const bool branch_taken_0x1ca12c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        ctx->pc = 0x1CA130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA12Cu;
        // 0x1ca130: 0x24040716  addiu       $a0, $zero, 0x716 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1814));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca12c) {
            ctx->pc = 0x1CA170u;
            goto label_1ca170;
        }
    }
    ctx->pc = 0x1CA134u;
    // 0x1ca134: 0x10e4000e  beq         $a3, $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x1CA134u;
    {
        const bool branch_taken_0x1ca134 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        if (branch_taken_0x1ca134) {
            ctx->pc = 0x1CA170u;
            goto label_1ca170;
        }
    }
    ctx->pc = 0x1CA13Cu;
    // 0x1ca13c: 0x24040706  addiu       $a0, $zero, 0x706
    ctx->pc = 0x1ca13cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1798));
    // 0x1ca140: 0x10e4000b  beq         $a3, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1CA140u;
    {
        const bool branch_taken_0x1ca140 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        ctx->pc = 0x1CA144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA140u;
        // 0x1ca144: 0x24040712  addiu       $a0, $zero, 0x712 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1810));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca140) {
            ctx->pc = 0x1CA170u;
            goto label_1ca170;
        }
    }
    ctx->pc = 0x1CA148u;
    // 0x1ca148: 0x10e40009  beq         $a3, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CA148u;
    {
        const bool branch_taken_0x1ca148 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        if (branch_taken_0x1ca148) {
            ctx->pc = 0x1CA170u;
            goto label_1ca170;
        }
    }
    ctx->pc = 0x1CA150u;
    // 0x1ca150: 0x24040702  addiu       $a0, $zero, 0x702
    ctx->pc = 0x1ca150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1794));
    // 0x1ca154: 0x10e40006  beq         $a3, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CA154u;
    {
        const bool branch_taken_0x1ca154 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        ctx->pc = 0x1CA158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA154u;
        // 0x1ca158: 0x24040404  addiu       $a0, $zero, 0x404 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1028));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca154) {
            ctx->pc = 0x1CA170u;
            goto label_1ca170;
        }
    }
    ctx->pc = 0x1CA15Cu;
    // 0x1ca15c: 0x10e40004  beq         $a3, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CA15Cu;
    {
        const bool branch_taken_0x1ca15c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        if (branch_taken_0x1ca15c) {
            ctx->pc = 0x1CA170u;
            goto label_1ca170;
        }
    }
    ctx->pc = 0x1CA164u;
    // 0x1ca164: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1CA164u;
    {
        const bool branch_taken_0x1ca164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca164) {
            ctx->pc = 0x1CA1A0u;
            goto label_1ca1a0;
        }
    }
    ctx->pc = 0x1CA16Cu;
    // 0x1ca16c: 0x0  nop
    ctx->pc = 0x1ca16cu;
    // NOP
label_1ca170:
    // 0x1ca170: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ca170u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ca174: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x1ca174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x1ca178: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1ca178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1ca17c: 0xc4206ae0  lwc1        $f0, 0x6AE0($at)
    ctx->pc = 0x1ca17cu;
    { uint32_t bits = FAST_READ32(0x7E6AE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca180: 0x8c6300a4  lw          $v1, 0xA4($v1)
    ctx->pc = 0x1ca180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
    // 0x1ca184: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x1ca184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x1ca188: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1ca188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1ca18c: 0xc4206ae0  lwc1        $f0, 0x6AE0($at)
    ctx->pc = 0x1ca18cu;
    { uint32_t bits = FAST_READ32(0x7E6AE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca190: 0xe6c00014  swc1        $f0, 0x14($s6)
    ctx->pc = 0x1ca190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 20), bits); }
    // 0x1ca194: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1ca194u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1ca198: 0xc4206ae0  lwc1        $f0, 0x6AE0($at)
    ctx->pc = 0x1ca198u;
    { uint32_t bits = FAST_READ32(0x7E6AE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca19c: 0xe6c00024  swc1        $f0, 0x24($s6)
    ctx->pc = 0x1ca19cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 36), bits); }
label_1ca1a0:
    // 0x1ca1a0: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1ca1a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1ca1a4: 0x94246ac4  lhu         $a0, 0x6AC4($at)
    ctx->pc = 0x1ca1a4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x1ca1a8: 0x24030204  addiu       $v1, $zero, 0x204
    ctx->pc = 0x1ca1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 516));
    // 0x1ca1ac: 0x14830056  bne         $a0, $v1, . + 4 + (0x56 << 2)
    ctx->pc = 0x1CA1ACu;
    {
        const bool branch_taken_0x1ca1ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1CA1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA1ACu;
        // 0x1ca1b0: 0x32e3000f  andi        $v1, $s7, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca1ac) {
            ctx->pc = 0x1CA308u;
            goto label_1ca308;
        }
    }
    ctx->pc = 0x1CA1B4u;
    // 0x1ca1b4: 0x14600054  bnez        $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x1CA1B4u;
    {
        const bool branch_taken_0x1ca1b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ca1b4) {
            ctx->pc = 0x1CA308u;
            goto label_1ca308;
        }
    }
    ctx->pc = 0x1CA1BCu;
    // 0x1ca1bc: 0x171882  srl         $v1, $s7, 2
    ctx->pc = 0x1ca1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 23), 2));
    // 0x1ca1c0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1ca1c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1ca1c4: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x1CA1C4u;
    {
        const bool branch_taken_0x1ca1c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA1C4u;
        // 0x1ca1c8: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca1c4) {
            ctx->pc = 0x1CA268u;
            goto label_1ca268;
        }
    }
    ctx->pc = 0x1CA1CCu;
    // 0x1ca1cc: 0x2683ffff  addiu       $v1, $s4, -0x1
    ctx->pc = 0x1ca1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x1ca1d0: 0x8c29f004  lw          $t1, -0xFFC($at)
    ctx->pc = 0x1ca1d0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963204)));
    // 0x1ca1d4: 0x714018  mult        $t0, $v1, $s1
    ctx->pc = 0x1ca1d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x1ca1d8: 0x113842  srl         $a3, $s1, 1
    ctx->pc = 0x1ca1d8u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
    // 0x1ca1dc: 0x3c054180  lui         $a1, 0x4180
    ctx->pc = 0x1ca1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16768 << 16));
    // 0x1ca1e0: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x1ca1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x1ca1e4: 0x3464a9e5  ori         $a0, $v1, 0xA9E5
    ctx->pc = 0x1ca1e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x1ca1e8: 0x95040  sll         $t2, $t1, 1
    ctx->pc = 0x1ca1e8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x1ca1ec: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1ca1ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1ca1f0: 0x94fc2  srl         $t1, $t1, 31
    ctx->pc = 0x1ca1f0u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x1ca1f4: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x1ca1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x1ca1f8: 0x1494821  addu        $t1, $t2, $t1
    ctx->pc = 0x1ca1f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x1ca1fc: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1ca1fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1ca200: 0x1244826  xor         $t1, $t1, $a0
    ctx->pc = 0x1ca200u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 4));
    // 0x1ca204: 0xac29f004  sw          $t1, -0xFFC($at)
    ctx->pc = 0x1ca204u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 9));
    // 0x1ca208: 0x94a02  srl         $t1, $t1, 8
    ctx->pc = 0x1ca208u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 8));
    // 0x1ca20c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1ca20cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1ca210: 0x31290003  andi        $t1, $t1, 0x3
    ctx->pc = 0x1ca210u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)3);
    // 0x1ca214: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x1ca214u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x1ca218: 0x1284821  addu        $t1, $t1, $t0
    ctx->pc = 0x1ca218u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x1ca21c: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x1ca21cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x1ca220: 0x1334821  addu        $t1, $t1, $s3
    ctx->pc = 0x1ca220u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 19)));
    // 0x1ca224: 0xad250010  sw          $a1, 0x10($t1)
    ctx->pc = 0x1ca224u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 5));
    // 0x1ca228: 0x8c25f004  lw          $a1, -0xFFC($at)
    ctx->pc = 0x1ca228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963204)));
    // 0x1ca22c: 0x54840  sll         $t1, $a1, 1
    ctx->pc = 0x1ca22cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1ca230: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1ca230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1ca234: 0x52fc2  srl         $a1, $a1, 31
    ctx->pc = 0x1ca234u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x1ca238: 0x1252821  addu        $a1, $t1, $a1
    ctx->pc = 0x1ca238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x1ca23c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1ca23cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1ca240: 0xa42026  xor         $a0, $a1, $a0
    ctx->pc = 0x1ca240u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 4));
    // 0x1ca244: 0xac24f004  sw          $a0, -0xFFC($at)
    ctx->pc = 0x1ca244u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 4));
    // 0x1ca248: 0x42202  srl         $a0, $a0, 8
    ctx->pc = 0x1ca248u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x1ca24c: 0x30840003  andi        $a0, $a0, 0x3
    ctx->pc = 0x1ca24cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x1ca250: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x1ca250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x1ca254: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x1ca254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x1ca258: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1ca258u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1ca25c: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x1ca25cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x1ca260: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1CA260u;
    {
        const bool branch_taken_0x1ca260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA260u;
        // 0x1ca264: 0xac830010  sw          $v1, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca260) {
            ctx->pc = 0x1CA308u;
            goto label_1ca308;
        }
    }
    ctx->pc = 0x1CA268u;
label_1ca268:
    // 0x1ca268: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1ca268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1ca26c: 0x8c29f004  lw          $t1, -0xFFC($at)
    ctx->pc = 0x1ca26cu;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x81F004u));
    // 0x1ca270: 0x3c04873c  lui         $a0, 0x873C
    ctx->pc = 0x1ca270u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34620 << 16));
    // 0x1ca274: 0x2683ffff  addiu       $v1, $s4, -0x1
    ctx->pc = 0x1ca274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x1ca278: 0x3484a9e5  ori         $a0, $a0, 0xA9E5
    ctx->pc = 0x1ca278u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)43493);
    // 0x1ca27c: 0x714018  mult        $t0, $v1, $s1
    ctx->pc = 0x1ca27cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x1ca280: 0x113842  srl         $a3, $s1, 1
    ctx->pc = 0x1ca280u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
    // 0x1ca284: 0x3c054180  lui         $a1, 0x4180
    ctx->pc = 0x1ca284u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16768 << 16));
    // 0x1ca288: 0x95040  sll         $t2, $t1, 1
    ctx->pc = 0x1ca288u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x1ca28c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1ca28cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1ca290: 0x94fc2  srl         $t1, $t1, 31
    ctx->pc = 0x1ca290u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x1ca294: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x1ca294u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x1ca298: 0x1494821  addu        $t1, $t2, $t1
    ctx->pc = 0x1ca298u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x1ca29c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1ca29cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1ca2a0: 0x1244826  xor         $t1, $t1, $a0
    ctx->pc = 0x1ca2a0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 4));
    // 0x1ca2a4: 0xac29f004  sw          $t1, -0xFFC($at)
    ctx->pc = 0x1ca2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 9));
    // 0x1ca2a8: 0x94a02  srl         $t1, $t1, 8
    ctx->pc = 0x1ca2a8u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 8));
    // 0x1ca2ac: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1ca2acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1ca2b0: 0x31290003  andi        $t1, $t1, 0x3
    ctx->pc = 0x1ca2b0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)3);
    // 0x1ca2b4: 0xe94823  subu        $t1, $a3, $t1
    ctx->pc = 0x1ca2b4u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x1ca2b8: 0x1284821  addu        $t1, $t1, $t0
    ctx->pc = 0x1ca2b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x1ca2bc: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x1ca2bcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x1ca2c0: 0x1334821  addu        $t1, $t1, $s3
    ctx->pc = 0x1ca2c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 19)));
    // 0x1ca2c4: 0xad250010  sw          $a1, 0x10($t1)
    ctx->pc = 0x1ca2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 5));
    // 0x1ca2c8: 0x8c25f004  lw          $a1, -0xFFC($at)
    ctx->pc = 0x1ca2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963204)));
    // 0x1ca2cc: 0x54840  sll         $t1, $a1, 1
    ctx->pc = 0x1ca2ccu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1ca2d0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1ca2d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1ca2d4: 0x52fc2  srl         $a1, $a1, 31
    ctx->pc = 0x1ca2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x1ca2d8: 0x1252821  addu        $a1, $t1, $a1
    ctx->pc = 0x1ca2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x1ca2dc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1ca2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1ca2e0: 0xa42026  xor         $a0, $a1, $a0
    ctx->pc = 0x1ca2e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 4));
    // 0x1ca2e4: 0xac24f004  sw          $a0, -0xFFC($at)
    ctx->pc = 0x1ca2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 4));
    // 0x1ca2e8: 0x42202  srl         $a0, $a0, 8
    ctx->pc = 0x1ca2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x1ca2ec: 0x30840003  andi        $a0, $a0, 0x3
    ctx->pc = 0x1ca2ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x1ca2f0: 0xe42023  subu        $a0, $a3, $a0
    ctx->pc = 0x1ca2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x1ca2f4: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x1ca2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x1ca2f8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1ca2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1ca2fc: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x1ca2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x1ca300: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x1ca300u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x1ca304: 0x0  nop
    ctx->pc = 0x1ca304u;
    // NOP
label_1ca308:
    // 0x1ca308: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1ca308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1ca30c: 0x94246ac4  lhu         $a0, 0x6AC4($at)
    ctx->pc = 0x1ca30cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x1ca310: 0x2483fcfa  addiu       $v1, $a0, -0x306
    ctx->pc = 0x1ca310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966522));
    // 0x1ca314: 0x2c610003  sltiu       $at, $v1, 0x3
    ctx->pc = 0x1ca314u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1ca318: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CA318u;
    {
        const bool branch_taken_0x1ca318 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA318u;
        // 0x1ca31c: 0x24030037  addiu       $v1, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca318) {
            ctx->pc = 0x1CA338u;
            goto label_1ca338;
        }
    }
    ctx->pc = 0x1CA320u;
    // 0x1ca320: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CA320u;
    {
        const bool branch_taken_0x1ca320 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ca320) {
            ctx->pc = 0x1CA338u;
            goto label_1ca338;
        }
    }
    ctx->pc = 0x1CA328u;
    // 0x1ca328: 0x24030038  addiu       $v1, $zero, 0x38
    ctx->pc = 0x1ca328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1ca32c: 0x14830040  bne         $a0, $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x1CA32Cu;
    {
        const bool branch_taken_0x1ca32c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ca32c) {
            ctx->pc = 0x1CA430u;
            goto label_1ca430;
        }
    }
    ctx->pc = 0x1CA334u;
    // 0x1ca334: 0x0  nop
    ctx->pc = 0x1ca334u;
    // NOP
label_1ca338:
    // 0x1ca338: 0x14082b  sltu        $at, $zero, $s4
    ctx->pc = 0x1ca338u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x1ca33c: 0x1020003c  beqz        $at, . + 4 + (0x3C << 2)
    ctx->pc = 0x1CA33Cu;
    {
        const bool branch_taken_0x1ca33c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA33Cu;
        // 0x1ca340: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca33c) {
            ctx->pc = 0x1CA430u;
            goto label_1ca430;
        }
    }
    ctx->pc = 0x1CA344u;
    // 0x1ca344: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1ca344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1ca348: 0x3c0d8000  lui         $t5, 0x8000
    ctx->pc = 0x1ca348u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)32768 << 16));
    // 0x1ca34c: 0x0  nop
    ctx->pc = 0x1ca34cu;
    // NOP
label_1ca350:
    // 0x1ca350: 0x15082b  sltu        $at, $zero, $s5
    ctx->pc = 0x1ca350u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x1ca354: 0x10200032  beqz        $at, . + 4 + (0x32 << 2)
    ctx->pc = 0x1CA354u;
    {
        const bool branch_taken_0x1ca354 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA354u;
        // 0x1ca358: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca354) {
            ctx->pc = 0x1CA420u;
            goto label_1ca420;
        }
    }
    ctx->pc = 0x1CA35Cu;
    // 0x1ca35c: 0xf52018  mult        $a0, $a3, $s5
    ctx->pc = 0x1ca35cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1ca360:
    // 0x1ca360: 0x8ec90060  lw          $t1, 0x60($s6)
    ctx->pc = 0x1ca360u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 96)));
    // 0x1ca364: 0x1042821  addu        $a1, $t0, $a0
    ctx->pc = 0x1ca364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x1ca368: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1ca368u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1ca36c: 0x1255021  addu        $t2, $t1, $a1
    ctx->pc = 0x1ca36cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x1ca370: 0x8d490000  lw          $t1, 0x0($t2)
    ctx->pc = 0x1ca370u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1ca374: 0x11200004  beqz        $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CA374u;
    {
        const bool branch_taken_0x1ca374 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca374) {
            ctx->pc = 0x1CA388u;
            goto label_1ca388;
        }
    }
    ctx->pc = 0x1CA37Cu;
    // 0x1ca37c: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x1ca37cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x1ca380: 0xad490000  sw          $t1, 0x0($t2)
    ctx->pc = 0x1ca380u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 9));
    // 0x1ca384: 0x0  nop
    ctx->pc = 0x1ca384u;
    // NOP
label_1ca388:
    // 0x1ca388: 0x8ec90060  lw          $t1, 0x60($s6)
    ctx->pc = 0x1ca388u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 96)));
    // 0x1ca38c: 0x1254821  addu        $t1, $t1, $a1
    ctx->pc = 0x1ca38cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x1ca390: 0x8d290000  lw          $t1, 0x0($t1)
    ctx->pc = 0x1ca390u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1ca394: 0x695023  subu        $t2, $v1, $t1
    ctx->pc = 0x1ca394u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1ca398: 0x5410003  bgez        $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CA398u;
    {
        const bool branch_taken_0x1ca398 = (GPR_S64(ctx, 10) >= 0);
        if (branch_taken_0x1ca398) {
            ctx->pc = 0x1CA3A8u;
            goto label_1ca3a8;
        }
    }
    ctx->pc = 0x1CA3A0u;
    // 0x1ca3a0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1ca3a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca3a4: 0x0  nop
    ctx->pc = 0x1ca3a4u;
    // NOP
label_1ca3a8:
    // 0x1ca3a8: 0xc54821  addu        $t1, $a2, $a1
    ctx->pc = 0x1ca3a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1ca3ac: 0x6a2823  subu        $a1, $v1, $t2
    ctx->pc = 0x1ca3acu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x1ca3b0: 0xa70c0  sll         $t6, $t2, 3
    ctx->pc = 0x1ca3b0u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x1ca3b4: 0x1ca6023  subu        $t4, $t6, $t2
    ctx->pc = 0x1ca3b4u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
    // 0x1ca3b8: 0x1455821  addu        $t3, $t2, $a1
    ctx->pc = 0x1ca3b8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x1ca3bc: 0x1ca5021  addu        $t2, $t6, $t2
    ctx->pc = 0x1ca3bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
    // 0x1ca3c0: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x1ca3c0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x1ca3c4: 0xb7040  sll         $t6, $t3, 1
    ctx->pc = 0x1ca3c4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x1ca3c8: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x1ca3c8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x1ca3cc: 0x1cb7021  addu        $t6, $t6, $t3
    ctx->pc = 0x1ca3ccu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
    // 0x1ca3d0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1ca3d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1ca3d4: 0x558c0  sll         $t3, $a1, 3
    ctx->pc = 0x1ca3d4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1ca3d8: 0xe7100  sll         $t6, $t6, 4
    ctx->pc = 0x1ca3d8u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 4));
    // 0x1ca3dc: 0x1655823  subu        $t3, $t3, $a1
    ctx->pc = 0x1ca3dcu;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 5)));
    // 0x1ca3e0: 0xe71c3  sra         $t6, $t6, 7
    ctx->pc = 0x1ca3e0u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 14), 7));
    // 0x1ca3e4: 0xb5900  sll         $t3, $t3, 4
    ctx->pc = 0x1ca3e4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x1ca3e8: 0x529c0  sll         $a1, $a1, 7
    ctx->pc = 0x1ca3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
    // 0x1ca3ec: 0x18b6021  addu        $t4, $t4, $t3
    ctx->pc = 0x1ca3ecu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x1ca3f0: 0x1452821  addu        $a1, $t2, $a1
    ctx->pc = 0x1ca3f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x1ca3f4: 0xe5c00  sll         $t3, $t6, 16
    ctx->pc = 0x1ca3f4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x1ca3f8: 0xc61c3  sra         $t4, $t4, 7
    ctx->pc = 0x1ca3f8u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 12), 7));
    // 0x1ca3fc: 0x16d5825  or          $t3, $t3, $t5
    ctx->pc = 0x1ca3fcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 13));
    // 0x1ca400: 0xc6200  sll         $t4, $t4, 8
    ctx->pc = 0x1ca400u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 8));
    // 0x1ca404: 0x16c5825  or          $t3, $t3, $t4
    ctx->pc = 0x1ca404u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 12));
    // 0x1ca408: 0x529c3  sra         $a1, $a1, 7
    ctx->pc = 0x1ca408u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 7));
    // 0x1ca40c: 0xab5025  or          $t2, $a1, $t3
    ctx->pc = 0x1ca40cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 5) | GPR_U64(ctx, 11));
    // 0x1ca410: 0x115282b  sltu        $a1, $t0, $s5
    ctx->pc = 0x1ca410u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x1ca414: 0x14a0ffd2  bnez        $a1, . + 4 + (-0x2E << 2)
    ctx->pc = 0x1CA414u;
    {
        const bool branch_taken_0x1ca414 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA414u;
        // 0x1ca418: 0xad2a0000  sw          $t2, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca414) {
            ctx->pc = 0x1CA360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ca360;
        }
    }
    ctx->pc = 0x1CA41Cu;
    // 0x1ca41c: 0x0  nop
    ctx->pc = 0x1ca41cu;
    // NOP
label_1ca420:
    // 0x1ca420: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1ca420u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1ca424: 0xf4202b  sltu        $a0, $a3, $s4
    ctx->pc = 0x1ca424u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x1ca428: 0x1480ffc9  bnez        $a0, . + 4 + (-0x37 << 2)
    ctx->pc = 0x1CA428u;
    {
        const bool branch_taken_0x1ca428 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ca428) {
            ctx->pc = 0x1CA350u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ca350;
        }
    }
    ctx->pc = 0x1CA430u;
label_1ca430:
    // 0x1ca430: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1ca430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1ca434: 0x94246ac4  lhu         $a0, 0x6AC4($at)
    ctx->pc = 0x1ca434u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x1ca438: 0x2483fb00  addiu       $v1, $a0, -0x500
    ctx->pc = 0x1ca438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966016));
    // 0x1ca43c: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x1ca43cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1ca440: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CA440u;
    {
        const bool branch_taken_0x1ca440 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA440u;
        // 0x1ca444: 0x2483faf0  addiu       $v1, $a0, -0x510 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca440) {
            ctx->pc = 0x1CA468u;
            goto label_1ca468;
        }
    }
    ctx->pc = 0x1CA448u;
    // 0x1ca448: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x1ca448u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1ca44c: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CA44Cu;
    {
        const bool branch_taken_0x1ca44c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ca44c) {
            ctx->pc = 0x1CA468u;
            goto label_1ca468;
        }
    }
    ctx->pc = 0x1CA454u;
    // 0x1ca454: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x1ca454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1ca458: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CA458u;
    {
        const bool branch_taken_0x1ca458 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1CA45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA458u;
        // 0x1ca45c: 0x24030051  addiu       $v1, $zero, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca458) {
            ctx->pc = 0x1CA468u;
            goto label_1ca468;
        }
    }
    ctx->pc = 0x1CA460u;
    // 0x1ca460: 0x14830133  bne         $a0, $v1, . + 4 + (0x133 << 2)
    ctx->pc = 0x1CA460u;
    {
        const bool branch_taken_0x1ca460 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ca460) {
            ctx->pc = 0x1CA930u;
            goto label_1ca930;
        }
    }
    ctx->pc = 0x1CA468u;
label_1ca468:
    // 0x1ca468: 0x3c03c61c  lui         $v1, 0xC61C
    ctx->pc = 0x1ca468u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50716 << 16));
    // 0x1ca46c: 0xc6c10010  lwc1        $f1, 0x10($s6)
    ctx->pc = 0x1ca46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ca470: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x1ca470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1ca474: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ca474u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ca478: 0x0  nop
    ctx->pc = 0x1ca478u;
    // NOP
    // 0x1ca47c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1ca47cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ca480: 0x4500012b  bc1f        . + 4 + (0x12B << 2)
    ctx->pc = 0x1CA480u;
    {
        const bool branch_taken_0x1ca480 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CA484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA480u;
        // 0x1ca484: 0x171882  srl         $v1, $s7, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 23), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca480) {
            ctx->pc = 0x1CA930u;
            goto label_1ca930;
        }
    }
    ctx->pc = 0x1CA488u;
    // 0x1ca488: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1ca488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1ca48c: 0x10600128  beqz        $v1, . + 4 + (0x128 << 2)
    ctx->pc = 0x1CA48Cu;
    {
        const bool branch_taken_0x1ca48c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA48Cu;
        // 0x1ca490: 0x2e810002  sltiu       $at, $s4, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca48c) {
            ctx->pc = 0x1CA930u;
            goto label_1ca930;
        }
    }
    ctx->pc = 0x1CA494u;
    // 0x1ca494: 0x14200126  bnez        $at, . + 4 + (0x126 << 2)
    ctx->pc = 0x1CA494u;
    {
        const bool branch_taken_0x1ca494 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA494u;
        // 0x1ca498: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca494) {
            ctx->pc = 0x1CA930u;
            goto label_1ca930;
        }
    }
    ctx->pc = 0x1CA49Cu;
    // 0x1ca49c: 0x2683ffff  addiu       $v1, $s4, -0x1
    ctx->pc = 0x1ca49cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x1ca4a0: 0x2c610009  sltiu       $at, $v1, 0x9
    ctx->pc = 0x1ca4a0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x1ca4a4: 0x142000f2  bnez        $at, . + 4 + (0xF2 << 2)
    ctx->pc = 0x1CA4A4u;
    {
        const bool branch_taken_0x1ca4a4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA4A4u;
        // 0x1ca4a8: 0x2685fff8  addiu       $a1, $s4, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca4a4) {
            ctx->pc = 0x1CA870u;
            goto label_1ca870;
        }
    }
    ctx->pc = 0x1CA4ACu;
    // 0x1ca4ac: 0x1720c0  sll         $a0, $s7, 3
    ctx->pc = 0x1ca4acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 23), 3));
    // 0x1ca4b0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1ca4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1ca4b4: 0x972023  subu        $a0, $a0, $s7
    ctx->pc = 0x1ca4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
    // 0x1ca4b8: 0x24636540  addiu       $v1, $v1, 0x6540
    ctx->pc = 0x1ca4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25920));
    // 0x1ca4bc: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x1ca4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1ca4c0: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x1ca4c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x1ca4c4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1ca4c4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1ca4c8: 0x30840fff  andi        $a0, $a0, 0xFFF
    ctx->pc = 0x1ca4c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x1ca4cc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1ca4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1ca4d0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1ca4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ca4d4: 0x3c073d4c  lui         $a3, 0x3D4C
    ctx->pc = 0x1ca4d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)15692 << 16));
    // 0x1ca4d8: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x1ca4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x1ca4dc: 0x34e7cccd  ori         $a3, $a3, 0xCCCD
    ctx->pc = 0x1ca4dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)52429);
    // 0x1ca4e0: 0x3463a9e5  ori         $v1, $v1, 0xA9E5
    ctx->pc = 0x1ca4e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x1ca4e4: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x1ca4e4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ca4e8:
    // 0x1ca4e8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1ca4e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1ca4ec: 0x8c2df004  lw          $t5, -0xFFC($at)
    ctx->pc = 0x1ca4ecu;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x81F004u));
    // 0x1ca4f0: 0x24c70001  addiu       $a3, $a2, 0x1
    ctx->pc = 0x1ca4f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1ca4f4: 0x70f16018  mult1       $t4, $a3, $s1
    ctx->pc = 0x1ca4f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 17); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x1ca4f8: 0xd14018  mult        $t0, $a2, $s1
    ctx->pc = 0x1ca4f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x1ca4fc: 0x24c70003  addiu       $a3, $a2, 0x3
    ctx->pc = 0x1ca4fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x1ca500: 0x24cb0002  addiu       $t3, $a2, 0x2
    ctx->pc = 0x1ca500u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x1ca504: 0x70f15018  mult1       $t2, $a3, $s1
    ctx->pc = 0x1ca504u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 17); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x1ca508: 0x24c90004  addiu       $t1, $a2, 0x4
    ctx->pc = 0x1ca508u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1ca50c: 0x24c70005  addiu       $a3, $a2, 0x5
    ctx->pc = 0x1ca50cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 5));
    // 0x1ca510: 0x70f1c018  mult1       $t8, $a3, $s1
    ctx->pc = 0x1ca510u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 17); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 24, (int32_t)result); }
    // 0x1ca514: 0x1715818  mult        $t3, $t3, $s1
    ctx->pc = 0x1ca514u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x1ca518: 0xd3840  sll         $a3, $t5, 1
    ctx->pc = 0x1ca518u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x1ca51c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1ca51cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1ca520: 0xd6fc2  srl         $t5, $t5, 31
    ctx->pc = 0x1ca520u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 13), 31));
    // 0x1ca524: 0xed6821  addu        $t5, $a3, $t5
    ctx->pc = 0x1ca524u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
    // 0x1ca528: 0x25ae0001  addiu       $t6, $t5, 0x1
    ctx->pc = 0x1ca528u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x1ca52c: 0x24c70006  addiu       $a3, $a2, 0x6
    ctx->pc = 0x1ca52cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 6));
    // 0x1ca530: 0x24cd0007  addiu       $t5, $a2, 0x7
    ctx->pc = 0x1ca530u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 6), 7));
    // 0x1ca534: 0x1c37026  xor         $t6, $t6, $v1
    ctx->pc = 0x1ca534u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) ^ GPR_U64(ctx, 3));
    // 0x1ca538: 0x71b17818  mult1       $t7, $t5, $s1
    ctx->pc = 0x1ca538u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 17); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1ca53c: 0xac2ef004  sw          $t6, -0xFFC($at)
    ctx->pc = 0x1ca53cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 14));
    // 0x1ca540: 0xe6a02  srl         $t5, $t6, 8
    ctx->pc = 0x1ca540u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 14), 8));
    // 0x1ca544: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1ca544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1ca548: 0x31ad0003  andi        $t5, $t5, 0x3
    ctx->pc = 0x1ca548u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)3);
    // 0x1ca54c: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x1ca54cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x1ca550: 0x1a84021  addu        $t0, $t5, $t0
    ctx->pc = 0x1ca550u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 8)));
    // 0x1ca554: 0x25adfffe  addiu       $t5, $t5, -0x2
    ctx->pc = 0x1ca554u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967294));
    // 0x1ca558: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x1ca558u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1ca55c: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x1ca55cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ca560: 0xd6840  sll         $t5, $t5, 1
    ctx->pc = 0x1ca560u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x1ca564: 0x448d0800  mtc1        $t5, $f1
    ctx->pc = 0x1ca564u;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ca568: 0x1314818  mult        $t1, $t1, $s1
    ctx->pc = 0x1ca568u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x1ca56c: 0x468008e0  cvt.s.w     $f3, $f1
    ctx->pc = 0x1ca56cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1ca570: 0x2486821  addu        $t5, $s2, $t0
    ctx->pc = 0x1ca570u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
    // 0x1ca574: 0xac2ef004  sw          $t6, -0xFFC($at)
    ctx->pc = 0x1ca574u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 14));
    // 0x1ca578: 0xf14018  mult        $t0, $a3, $s1
    ctx->pc = 0x1ca578u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x1ca57c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1ca57cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1ca580: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x1ca580u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1ca584: 0xc5382b  sltu        $a3, $a2, $a1
    ctx->pc = 0x1ca584u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1ca588: 0xc5a10010  lwc1        $f1, 0x10($t5)
    ctx->pc = 0x1ca588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ca58c: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x1ca58cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x1ca590: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1ca590u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1ca594: 0xe5a10010  swc1        $f1, 0x10($t5)
    ctx->pc = 0x1ca594u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 16), bits); }
    // 0x1ca598: 0x8c2df004  lw          $t5, -0xFFC($at)
    ctx->pc = 0x1ca598u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963204)));
    // 0x1ca59c: 0xd7040  sll         $t6, $t5, 1
    ctx->pc = 0x1ca59cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x1ca5a0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1ca5a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1ca5a4: 0xd6fc2  srl         $t5, $t5, 31
    ctx->pc = 0x1ca5a4u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 13), 31));
    // 0x1ca5a8: 0x1cd6821  addu        $t5, $t6, $t5
    ctx->pc = 0x1ca5a8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x1ca5ac: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x1ca5acu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x1ca5b0: 0x1a37026  xor         $t6, $t5, $v1
    ctx->pc = 0x1ca5b0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 13) ^ GPR_U64(ctx, 3));
    // 0x1ca5b4: 0xac2ef004  sw          $t6, -0xFFC($at)
    ctx->pc = 0x1ca5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 14));
    // 0x1ca5b8: 0xe6a02  srl         $t5, $t6, 8
    ctx->pc = 0x1ca5b8u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 14), 8));
    // 0x1ca5bc: 0x31ad0003  andi        $t5, $t5, 0x3
    ctx->pc = 0x1ca5bcu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)3);
    // 0x1ca5c0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1ca5c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1ca5c4: 0x1ac6021  addu        $t4, $t5, $t4
    ctx->pc = 0x1ca5c4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x1ca5c8: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x1ca5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ca5cc: 0x25adfffe  addiu       $t5, $t5, -0x2
    ctx->pc = 0x1ca5ccu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967294));
    // 0x1ca5d0: 0xd6840  sll         $t5, $t5, 1
    ctx->pc = 0x1ca5d0u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x1ca5d4: 0xc6080  sll         $t4, $t4, 2
    ctx->pc = 0x1ca5d4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x1ca5d8: 0x448d0800  mtc1        $t5, $f1
    ctx->pc = 0x1ca5d8u;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ca5dc: 0x24c6021  addu        $t4, $s2, $t4
    ctx->pc = 0x1ca5dcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 12)));
    // 0x1ca5e0: 0x468008e0  cvt.s.w     $f3, $f1
    ctx->pc = 0x1ca5e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1ca5e4: 0xac2ef004  sw          $t6, -0xFFC($at)
    ctx->pc = 0x1ca5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 14));
    // 0x1ca5e8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1ca5e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1ca5ec: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x1ca5ecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1ca5f0: 0xc5810010  lwc1        $f1, 0x10($t4)
    ctx->pc = 0x1ca5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ca5f4: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x1ca5f4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x1ca5f8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1ca5f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1ca5fc: 0xe5810010  swc1        $f1, 0x10($t4)
    ctx->pc = 0x1ca5fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 16), bits); }
    // 0x1ca600: 0x8c2cf004  lw          $t4, -0xFFC($at)
    ctx->pc = 0x1ca600u;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x81F004u));
    // 0x1ca604: 0xc6840  sll         $t5, $t4, 1
    ctx->pc = 0x1ca604u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x1ca608: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1ca608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1ca60c: 0xc67c2  srl         $t4, $t4, 31
    ctx->pc = 0x1ca60cu;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 12), 31));
    // 0x1ca610: 0x1ac6021  addu        $t4, $t5, $t4
    ctx->pc = 0x1ca610u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x1ca614: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x1ca614u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x1ca618: 0x1836826  xor         $t5, $t4, $v1
    ctx->pc = 0x1ca618u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 12) ^ GPR_U64(ctx, 3));
    // 0x1ca61c: 0xac2df004  sw          $t5, -0xFFC($at)
    ctx->pc = 0x1ca61cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 13));
    // 0x1ca620: 0xd6202  srl         $t4, $t5, 8
    ctx->pc = 0x1ca620u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 13), 8));
    // 0x1ca624: 0x318c0003  andi        $t4, $t4, 0x3
    ctx->pc = 0x1ca624u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)3);
    // 0x1ca628: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1ca628u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1ca62c: 0x18b5821  addu        $t3, $t4, $t3
    ctx->pc = 0x1ca62cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x1ca630: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x1ca630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ca634: 0x258cfffe  addiu       $t4, $t4, -0x2
    ctx->pc = 0x1ca634u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967294));
    // 0x1ca638: 0xc6040  sll         $t4, $t4, 1
    ctx->pc = 0x1ca638u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x1ca63c: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x1ca63cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x1ca640: 0x448c0800  mtc1        $t4, $f1
    ctx->pc = 0x1ca640u;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ca644: 0x24b5821  addu        $t3, $s2, $t3
    ctx->pc = 0x1ca644u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 11)));
    // 0x1ca648: 0x468008e0  cvt.s.w     $f3, $f1
    ctx->pc = 0x1ca648u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1ca64c: 0xac2df004  sw          $t5, -0xFFC($at)
    ctx->pc = 0x1ca64cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 13));
    // 0x1ca650: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1ca650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1ca654: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x1ca654u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1ca658: 0xc5610010  lwc1        $f1, 0x10($t3)
    ctx->pc = 0x1ca658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ca65c: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x1ca65cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x1ca660: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1ca660u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1ca664: 0xe5610010  swc1        $f1, 0x10($t3)
    ctx->pc = 0x1ca664u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 16), bits); }
    // 0x1ca668: 0x8c2bf004  lw          $t3, -0xFFC($at)
    ctx->pc = 0x1ca668u;
    SET_GPR_S32(ctx, 11, (int32_t)FAST_READ32(0x81F004u));
    // 0x1ca66c: 0xb6040  sll         $t4, $t3, 1
    ctx->pc = 0x1ca66cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x1ca670: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1ca670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1ca674: 0xb5fc2  srl         $t3, $t3, 31
    ctx->pc = 0x1ca674u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 31));
    // 0x1ca678: 0x18b5821  addu        $t3, $t4, $t3
    ctx->pc = 0x1ca678u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x1ca67c: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1ca67cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x1ca680: 0x1636026  xor         $t4, $t3, $v1
    ctx->pc = 0x1ca680u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 11) ^ GPR_U64(ctx, 3));
    // 0x1ca684: 0xac2cf004  sw          $t4, -0xFFC($at)
    ctx->pc = 0x1ca684u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 12));
    // 0x1ca688: 0xc5a02  srl         $t3, $t4, 8
    ctx->pc = 0x1ca688u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 12), 8));
    // 0x1ca68c: 0x316b0003  andi        $t3, $t3, 0x3
    ctx->pc = 0x1ca68cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)3);
    // 0x1ca690: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1ca690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1ca694: 0x16a5021  addu        $t2, $t3, $t2
    ctx->pc = 0x1ca694u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x1ca698: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x1ca698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ca69c: 0x256bfffe  addiu       $t3, $t3, -0x2
    ctx->pc = 0x1ca69cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967294));
    // 0x1ca6a0: 0xb5840  sll         $t3, $t3, 1
    ctx->pc = 0x1ca6a0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x1ca6a4: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x1ca6a4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x1ca6a8: 0x448b0800  mtc1        $t3, $f1
    ctx->pc = 0x1ca6a8u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ca6ac: 0x24a5021  addu        $t2, $s2, $t2
    ctx->pc = 0x1ca6acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 10)));
    // 0x1ca6b0: 0x468008e0  cvt.s.w     $f3, $f1
    ctx->pc = 0x1ca6b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1ca6b4: 0xac2cf004  sw          $t4, -0xFFC($at)
    ctx->pc = 0x1ca6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 12));
    // 0x1ca6b8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1ca6b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1ca6bc: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x1ca6bcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1ca6c0: 0xc5410010  lwc1        $f1, 0x10($t2)
    ctx->pc = 0x1ca6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ca6c4: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x1ca6c4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x1ca6c8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1ca6c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1ca6cc: 0xe5410010  swc1        $f1, 0x10($t2)
    ctx->pc = 0x1ca6ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 16), bits); }
    // 0x1ca6d0: 0x8c2af004  lw          $t2, -0xFFC($at)
    ctx->pc = 0x1ca6d0u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x81F004u));
    // 0x1ca6d4: 0xa5840  sll         $t3, $t2, 1
    ctx->pc = 0x1ca6d4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x1ca6d8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1ca6d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1ca6dc: 0xa57c2  srl         $t2, $t2, 31
    ctx->pc = 0x1ca6dcu;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
    // 0x1ca6e0: 0x16a5021  addu        $t2, $t3, $t2
    ctx->pc = 0x1ca6e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x1ca6e4: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1ca6e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1ca6e8: 0x1435026  xor         $t2, $t2, $v1
    ctx->pc = 0x1ca6e8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 3));
    // 0x1ca6ec: 0xac2af004  sw          $t2, -0xFFC($at)
    ctx->pc = 0x1ca6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 10));
    // 0x1ca6f0: 0xa5a02  srl         $t3, $t2, 8
    ctx->pc = 0x1ca6f0u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 10), 8));
    // 0x1ca6f4: 0x316b0003  andi        $t3, $t3, 0x3
    ctx->pc = 0x1ca6f4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)3);
    // 0x1ca6f8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1ca6f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1ca6fc: 0x1694821  addu        $t1, $t3, $t1
    ctx->pc = 0x1ca6fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x1ca700: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x1ca700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ca704: 0x256bfffe  addiu       $t3, $t3, -0x2
    ctx->pc = 0x1ca704u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967294));
    // 0x1ca708: 0xb5840  sll         $t3, $t3, 1
    ctx->pc = 0x1ca708u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x1ca70c: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x1ca70cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x1ca710: 0x448b0800  mtc1        $t3, $f1
    ctx->pc = 0x1ca710u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ca714: 0x2494821  addu        $t1, $s2, $t1
    ctx->pc = 0x1ca714u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 9)));
    // 0x1ca718: 0x468008e0  cvt.s.w     $f3, $f1
    ctx->pc = 0x1ca718u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1ca71c: 0xac2af004  sw          $t2, -0xFFC($at)
    ctx->pc = 0x1ca71cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 10));
    // 0x1ca720: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1ca720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1ca724: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x1ca724u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1ca728: 0xc5210010  lwc1        $f1, 0x10($t1)
    ctx->pc = 0x1ca728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ca72c: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x1ca72cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x1ca730: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1ca730u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1ca734: 0xe5210010  swc1        $f1, 0x10($t1)
    ctx->pc = 0x1ca734u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 16), bits); }
    // 0x1ca738: 0x8c29f004  lw          $t1, -0xFFC($at)
    ctx->pc = 0x1ca738u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x81F004u));
    // 0x1ca73c: 0x95040  sll         $t2, $t1, 1
    ctx->pc = 0x1ca73cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x1ca740: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1ca740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1ca744: 0x94fc2  srl         $t1, $t1, 31
    ctx->pc = 0x1ca744u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x1ca748: 0x1494821  addu        $t1, $t2, $t1
    ctx->pc = 0x1ca748u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x1ca74c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1ca74cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1ca750: 0x1234826  xor         $t1, $t1, $v1
    ctx->pc = 0x1ca750u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 3));
    // 0x1ca754: 0xac29f004  sw          $t1, -0xFFC($at)
    ctx->pc = 0x1ca754u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 9));
    // 0x1ca758: 0x95202  srl         $t2, $t1, 8
    ctx->pc = 0x1ca758u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 9), 8));
    // 0x1ca75c: 0x314b0003  andi        $t3, $t2, 0x3
    ctx->pc = 0x1ca75cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)3);
    // 0x1ca760: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1ca760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1ca764: 0x1785021  addu        $t2, $t3, $t8
    ctx->pc = 0x1ca764u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 24)));
    // 0x1ca768: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x1ca768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ca76c: 0x256bfffe  addiu       $t3, $t3, -0x2
    ctx->pc = 0x1ca76cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967294));
    // 0x1ca770: 0xb5840  sll         $t3, $t3, 1
    ctx->pc = 0x1ca770u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x1ca774: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x1ca774u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x1ca778: 0x448b0800  mtc1        $t3, $f1
    ctx->pc = 0x1ca778u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ca77c: 0x24a5021  addu        $t2, $s2, $t2
    ctx->pc = 0x1ca77cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 10)));
    // 0x1ca780: 0x468008e0  cvt.s.w     $f3, $f1
    ctx->pc = 0x1ca780u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1ca784: 0xac29f004  sw          $t1, -0xFFC($at)
    ctx->pc = 0x1ca784u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 9));
    // 0x1ca788: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1ca788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1ca78c: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x1ca78cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1ca790: 0xc5410010  lwc1        $f1, 0x10($t2)
    ctx->pc = 0x1ca790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ca794: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x1ca794u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x1ca798: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1ca798u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1ca79c: 0xe5410010  swc1        $f1, 0x10($t2)
    ctx->pc = 0x1ca79cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 16), bits); }
    // 0x1ca7a0: 0x8c29f004  lw          $t1, -0xFFC($at)
    ctx->pc = 0x1ca7a0u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x81F004u));
    // 0x1ca7a4: 0x95040  sll         $t2, $t1, 1
    ctx->pc = 0x1ca7a4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x1ca7a8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1ca7a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1ca7ac: 0x94fc2  srl         $t1, $t1, 31
    ctx->pc = 0x1ca7acu;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x1ca7b0: 0x1494821  addu        $t1, $t2, $t1
    ctx->pc = 0x1ca7b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x1ca7b4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1ca7b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1ca7b8: 0x1234826  xor         $t1, $t1, $v1
    ctx->pc = 0x1ca7b8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 3));
    // 0x1ca7bc: 0xac29f004  sw          $t1, -0xFFC($at)
    ctx->pc = 0x1ca7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 9));
    // 0x1ca7c0: 0x95202  srl         $t2, $t1, 8
    ctx->pc = 0x1ca7c0u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 9), 8));
    // 0x1ca7c4: 0x314a0003  andi        $t2, $t2, 0x3
    ctx->pc = 0x1ca7c4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)3);
    // 0x1ca7c8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1ca7c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1ca7cc: 0x1484021  addu        $t0, $t2, $t0
    ctx->pc = 0x1ca7ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x1ca7d0: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x1ca7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ca7d4: 0x254afffe  addiu       $t2, $t2, -0x2
    ctx->pc = 0x1ca7d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967294));
    // 0x1ca7d8: 0xa5040  sll         $t2, $t2, 1
    ctx->pc = 0x1ca7d8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x1ca7dc: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x1ca7dcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1ca7e0: 0x448a0800  mtc1        $t2, $f1
    ctx->pc = 0x1ca7e0u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ca7e4: 0x2484021  addu        $t0, $s2, $t0
    ctx->pc = 0x1ca7e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
    // 0x1ca7e8: 0x468008e0  cvt.s.w     $f3, $f1
    ctx->pc = 0x1ca7e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1ca7ec: 0xac29f004  sw          $t1, -0xFFC($at)
    ctx->pc = 0x1ca7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 9));
    // 0x1ca7f0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1ca7f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1ca7f4: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x1ca7f4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1ca7f8: 0xc5010010  lwc1        $f1, 0x10($t0)
    ctx->pc = 0x1ca7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ca7fc: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x1ca7fcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x1ca800: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1ca800u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1ca804: 0xe5010010  swc1        $f1, 0x10($t0)
    ctx->pc = 0x1ca804u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 16), bits); }
    // 0x1ca808: 0x8c28f004  lw          $t0, -0xFFC($at)
    ctx->pc = 0x1ca808u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x81F004u));
    // 0x1ca80c: 0x84840  sll         $t1, $t0, 1
    ctx->pc = 0x1ca80cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x1ca810: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1ca810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1ca814: 0x847c2  srl         $t0, $t0, 31
    ctx->pc = 0x1ca814u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x1ca818: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x1ca818u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x1ca81c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1ca81cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1ca820: 0x1034026  xor         $t0, $t0, $v1
    ctx->pc = 0x1ca820u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 3));
    // 0x1ca824: 0xac28f004  sw          $t0, -0xFFC($at)
    ctx->pc = 0x1ca824u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 8));
    // 0x1ca828: 0x84a02  srl         $t1, $t0, 8
    ctx->pc = 0x1ca828u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 8), 8));
    // 0x1ca82c: 0x312a0003  andi        $t2, $t1, 0x3
    ctx->pc = 0x1ca82cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)3);
    // 0x1ca830: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1ca830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1ca834: 0x14f4821  addu        $t1, $t2, $t7
    ctx->pc = 0x1ca834u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 15)));
    // 0x1ca838: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x1ca838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ca83c: 0x254afffe  addiu       $t2, $t2, -0x2
    ctx->pc = 0x1ca83cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967294));
    // 0x1ca840: 0xa5040  sll         $t2, $t2, 1
    ctx->pc = 0x1ca840u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x1ca844: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x1ca844u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x1ca848: 0x448a0800  mtc1        $t2, $f1
    ctx->pc = 0x1ca848u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ca84c: 0x2494821  addu        $t1, $s2, $t1
    ctx->pc = 0x1ca84cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 9)));
    // 0x1ca850: 0x468008e0  cvt.s.w     $f3, $f1
    ctx->pc = 0x1ca850u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1ca854: 0xac28f004  sw          $t0, -0xFFC($at)
    ctx->pc = 0x1ca854u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 8));
    // 0x1ca858: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x1ca858u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1ca85c: 0xc5210010  lwc1        $f1, 0x10($t1)
    ctx->pc = 0x1ca85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ca860: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x1ca860u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x1ca864: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1ca864u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1ca868: 0x14e0ff1f  bnez        $a3, . + 4 + (-0xE1 << 2)
    ctx->pc = 0x1CA868u;
    {
        const bool branch_taken_0x1ca868 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA868u;
        // 0x1ca86c: 0xe5210010  swc1        $f1, 0x10($t1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca868) {
            ctx->pc = 0x1CA4E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ca4e8;
        }
    }
    ctx->pc = 0x1CA870u;
label_1ca870:
    // 0x1ca870: 0xd4082b  sltu        $at, $a2, $s4
    ctx->pc = 0x1ca870u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x1ca874: 0x1020002e  beqz        $at, . + 4 + (0x2E << 2)
    ctx->pc = 0x1CA874u;
    {
        const bool branch_taken_0x1ca874 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA874u;
        // 0x1ca878: 0x1720c0  sll         $a0, $s7, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 23), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca874) {
            ctx->pc = 0x1CA930u;
            goto label_1ca930;
        }
    }
    ctx->pc = 0x1CA87Cu;
    // 0x1ca87c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1ca87cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1ca880: 0x972023  subu        $a0, $a0, $s7
    ctx->pc = 0x1ca880u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
    // 0x1ca884: 0x24636540  addiu       $v1, $v1, 0x6540
    ctx->pc = 0x1ca884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25920));
    // 0x1ca888: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x1ca888u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1ca88c: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x1ca88cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x1ca890: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1ca890u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1ca894: 0x30840fff  andi        $a0, $a0, 0xFFF
    ctx->pc = 0x1ca894u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x1ca898: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1ca898u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1ca89c: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x1ca89cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ca8a0: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x1ca8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x1ca8a4: 0x3c04873c  lui         $a0, 0x873C
    ctx->pc = 0x1ca8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34620 << 16));
    // 0x1ca8a8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1ca8a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1ca8ac: 0x3484a9e5  ori         $a0, $a0, 0xA9E5
    ctx->pc = 0x1ca8acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)43493);
    // 0x1ca8b0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1ca8b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ca8b4: 0x0  nop
    ctx->pc = 0x1ca8b4u;
    // NOP
label_1ca8b8:
    // 0x1ca8b8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1ca8b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1ca8bc: 0x8c23f004  lw          $v1, -0xFFC($at)
    ctx->pc = 0x1ca8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81F004u));
    // 0x1ca8c0: 0xd14018  mult        $t0, $a2, $s1
    ctx->pc = 0x1ca8c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x1ca8c4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1ca8c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1ca8c8: 0x33840  sll         $a3, $v1, 1
    ctx->pc = 0x1ca8c8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1ca8cc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1ca8ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1ca8d0: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x1ca8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x1ca8d4: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x1ca8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1ca8d8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ca8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ca8dc: 0xd4382b  sltu        $a3, $a2, $s4
    ctx->pc = 0x1ca8dcu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x1ca8e0: 0x641826  xor         $v1, $v1, $a0
    ctx->pc = 0x1ca8e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
    // 0x1ca8e4: 0x34a02  srl         $t1, $v1, 8
    ctx->pc = 0x1ca8e4u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x1ca8e8: 0xac23f004  sw          $v1, -0xFFC($at)
    ctx->pc = 0x1ca8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 3));
    // 0x1ca8ec: 0x31290003  andi        $t1, $t1, 0x3
    ctx->pc = 0x1ca8ecu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)3);
    // 0x1ca8f0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1ca8f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1ca8f4: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x1ca8f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x1ca8f8: 0x2529fffe  addiu       $t1, $t1, -0x2
    ctx->pc = 0x1ca8f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967294));
    // 0x1ca8fc: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x1ca8fcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1ca900: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x1ca900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ca904: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x1ca904u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x1ca908: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x1ca908u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ca90c: 0x2484021  addu        $t0, $s2, $t0
    ctx->pc = 0x1ca90cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
    // 0x1ca910: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x1ca910u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1ca914: 0xac23f004  sw          $v1, -0xFFC($at)
    ctx->pc = 0x1ca914u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 3));
    // 0x1ca918: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1ca918u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1ca91c: 0xc5000010  lwc1        $f0, 0x10($t0)
    ctx->pc = 0x1ca91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca920: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x1ca920u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x1ca924: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ca924u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ca928: 0x14e0ffe3  bnez        $a3, . + 4 + (-0x1D << 2)
    ctx->pc = 0x1CA928u;
    {
        const bool branch_taken_0x1ca928 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA928u;
        // 0x1ca92c: 0xe5000010  swc1        $f0, 0x10($t0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca928) {
            ctx->pc = 0x1CA8B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ca8b8;
        }
    }
    ctx->pc = 0x1CA930u;
label_1ca930:
    // 0x1ca930: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1ca930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1ca934: 0x94246ac4  lhu         $a0, 0x6AC4($at)
    ctx->pc = 0x1ca934u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x1ca938: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1ca938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1ca93c: 0x14830022  bne         $a0, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1CA93Cu;
    {
        const bool branch_taken_0x1ca93c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ca93c) {
            ctx->pc = 0x1CA9C8u;
            goto label_1ca9c8;
        }
    }
    ctx->pc = 0x1CA944u;
    // 0x1ca944: 0xc04d4a0  jal         func_135280
    ctx->pc = 0x1CA944u;
    SET_GPR_U32(ctx, 31, 0x1CA94Cu);
    ctx->pc = 0x135280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135280u, 0x1CA944u, 0x1CA94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA94Cu;
label_1ca94c:
    // 0x1ca94c: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x1ca94cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1ca950: 0xc04b742  jal         func_12DD08
    ctx->pc = 0x1CA950u;
    SET_GPR_U32(ctx, 31, 0x1CA958u);
    ctx->pc = 0x1CA954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA950u;
    // 0x1ca954: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DD08u, 0x1CA950u, 0x1CA958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA958u;
label_1ca958:
    // 0x1ca958: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1CA958u;
    {
        const bool branch_taken_0x1ca958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ca958) {
            ctx->pc = 0x1CA9C8u;
            goto label_1ca9c8;
        }
    }
    ctx->pc = 0x1CA960u;
    // 0x1ca960: 0xc04d4a0  jal         func_135280
    ctx->pc = 0x1CA960u;
    SET_GPR_U32(ctx, 31, 0x1CA968u);
    ctx->pc = 0x135280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135280u, 0x1CA960u, 0x1CA968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA968u;
label_1ca968:
    // 0x1ca968: 0x15283c  dsll32      $a1, $s5, 0
    ctx->pc = 0x1ca968u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) << (32 + 0));
    // 0x1ca96c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ca96cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca970: 0xc04b742  jal         func_12DD08
    ctx->pc = 0x1CA970u;
    SET_GPR_U32(ctx, 31, 0x1CA978u);
    ctx->pc = 0x1CA974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA970u;
    // 0x1ca974: 0x5283e  dsrl32      $a1, $a1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DD08u, 0x1CA970u, 0x1CA978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA978u;
label_1ca978:
    // 0x1ca978: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ca978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ca97c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1ca97cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1ca980: 0xc04d4a0  jal         func_135280
    ctx->pc = 0x1CA980u;
    SET_GPR_U32(ctx, 31, 0x1CA988u);
    ctx->pc = 0x1CA984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA980u;
    // 0x1ca984: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135280u, 0x1CA980u, 0x1CA988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA988u;
label_1ca988:
    // 0x1ca988: 0x14283c  dsll32      $a1, $s4, 0
    ctx->pc = 0x1ca988u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) << (32 + 0));
    // 0x1ca98c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ca98cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca990: 0xc04b742  jal         func_12DD08
    ctx->pc = 0x1CA990u;
    SET_GPR_U32(ctx, 31, 0x1CA998u);
    ctx->pc = 0x1CA994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA990u;
    // 0x1ca994: 0x5283e  dsrl32      $a1, $a1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DD08u, 0x1CA990u, 0x1CA998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA998u;
label_1ca998:
    // 0x1ca998: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x1ca998u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x1ca99c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1ca99cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ca9a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ca9a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ca9a4: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1ca9a4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1ca9a8: 0x912018  mult        $a0, $a0, $s1
    ctx->pc = 0x1ca9a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1ca9ac: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x1ca9acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1ca9b0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ca9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ca9b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ca9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ca9b8: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1ca9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1ca9bc: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x1ca9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ca9c0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ca9c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ca9c4: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x1ca9c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_1ca9c8:
    // 0x1ca9c8: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1ca9c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1ca9cc: 0x94246ac4  lhu         $a0, 0x6AC4($at)
    ctx->pc = 0x1ca9ccu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x1ca9d0: 0x2403071b  addiu       $v1, $zero, 0x71B
    ctx->pc = 0x1ca9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1819));
    // 0x1ca9d4: 0x14830022  bne         $a0, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1CA9D4u;
    {
        const bool branch_taken_0x1ca9d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ca9d4) {
            ctx->pc = 0x1CAA60u;
            goto label_1caa60;
        }
    }
    ctx->pc = 0x1CA9DCu;
    // 0x1ca9dc: 0xc04d4a0  jal         func_135280
    ctx->pc = 0x1CA9DCu;
    SET_GPR_U32(ctx, 31, 0x1CA9E4u);
    ctx->pc = 0x135280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135280u, 0x1CA9DCu, 0x1CA9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA9E4u;
label_1ca9e4:
    // 0x1ca9e4: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x1ca9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1ca9e8: 0xc04b742  jal         func_12DD08
    ctx->pc = 0x1CA9E8u;
    SET_GPR_U32(ctx, 31, 0x1CA9F0u);
    ctx->pc = 0x1CA9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA9E8u;
    // 0x1ca9ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DD08u, 0x1CA9E8u, 0x1CA9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA9F0u;
label_1ca9f0:
    // 0x1ca9f0: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1CA9F0u;
    {
        const bool branch_taken_0x1ca9f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ca9f0) {
            ctx->pc = 0x1CAA60u;
            goto label_1caa60;
        }
    }
    ctx->pc = 0x1CA9F8u;
    // 0x1ca9f8: 0xc04d4a0  jal         func_135280
    ctx->pc = 0x1CA9F8u;
    SET_GPR_U32(ctx, 31, 0x1CAA00u);
    ctx->pc = 0x135280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135280u, 0x1CA9F8u, 0x1CAA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAA00u;
label_1caa00:
    // 0x1caa00: 0x15283c  dsll32      $a1, $s5, 0
    ctx->pc = 0x1caa00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) << (32 + 0));
    // 0x1caa04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1caa04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caa08: 0xc04b742  jal         func_12DD08
    ctx->pc = 0x1CAA08u;
    SET_GPR_U32(ctx, 31, 0x1CAA10u);
    ctx->pc = 0x1CAA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAA08u;
    // 0x1caa0c: 0x5283e  dsrl32      $a1, $a1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DD08u, 0x1CAA08u, 0x1CAA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAA10u;
label_1caa10:
    // 0x1caa10: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1caa10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1caa14: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1caa14u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1caa18: 0xc04d4a0  jal         func_135280
    ctx->pc = 0x1CAA18u;
    SET_GPR_U32(ctx, 31, 0x1CAA20u);
    ctx->pc = 0x1CAA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAA18u;
    // 0x1caa1c: 0xafa200b0  sw          $v0, 0xB0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135280u, 0x1CAA18u, 0x1CAA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAA20u;
label_1caa20:
    // 0x1caa20: 0x14283c  dsll32      $a1, $s4, 0
    ctx->pc = 0x1caa20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) << (32 + 0));
    // 0x1caa24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1caa24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caa28: 0xc04b742  jal         func_12DD08
    ctx->pc = 0x1CAA28u;
    SET_GPR_U32(ctx, 31, 0x1CAA30u);
    ctx->pc = 0x1CAA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAA28u;
    // 0x1caa2c: 0x5283e  dsrl32      $a1, $a1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DD08u, 0x1CAA28u, 0x1CAA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAA30u;
label_1caa30:
    // 0x1caa30: 0x3c034140  lui         $v1, 0x4140
    ctx->pc = 0x1caa30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16704 << 16));
    // 0x1caa34: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1caa34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1caa38: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1caa38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1caa3c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1caa3cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1caa40: 0x912018  mult        $a0, $a0, $s1
    ctx->pc = 0x1caa40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1caa44: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1caa44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1caa48: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1caa48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1caa4c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1caa4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1caa50: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1caa50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1caa54: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x1caa54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1caa58: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1caa58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1caa5c: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x1caa5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_1caa60:
    // 0x1caa60: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1caa60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1caa64: 0x94246ac4  lhu         $a0, 0x6AC4($at)
    ctx->pc = 0x1caa64u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x1caa68: 0x2403030a  addiu       $v1, $zero, 0x30A
    ctx->pc = 0x1caa68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 778));
    // 0x1caa6c: 0x1483001c  bne         $a0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1CAA6Cu;
    {
        const bool branch_taken_0x1caa6c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1caa6c) {
            ctx->pc = 0x1CAAE0u;
            goto label_1caae0;
        }
    }
    ctx->pc = 0x1CAA74u;
    // 0x1caa74: 0xc04d4a0  jal         func_135280
    ctx->pc = 0x1CAA74u;
    SET_GPR_U32(ctx, 31, 0x1CAA7Cu);
    ctx->pc = 0x135280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135280u, 0x1CAA74u, 0x1CAA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAA7Cu;
label_1caa7c:
    // 0x1caa7c: 0x15283c  dsll32      $a1, $s5, 0
    ctx->pc = 0x1caa7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) << (32 + 0));
    // 0x1caa80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1caa80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caa84: 0xc04b742  jal         func_12DD08
    ctx->pc = 0x1CAA84u;
    SET_GPR_U32(ctx, 31, 0x1CAA8Cu);
    ctx->pc = 0x1CAA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAA84u;
    // 0x1caa88: 0x5283e  dsrl32      $a1, $a1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DD08u, 0x1CAA84u, 0x1CAA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAA8Cu;
label_1caa8c:
    // 0x1caa8c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1caa8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1caa90: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1caa90u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1caa94: 0xc04d4a0  jal         func_135280
    ctx->pc = 0x1CAA94u;
    SET_GPR_U32(ctx, 31, 0x1CAA9Cu);
    ctx->pc = 0x1CAA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAA94u;
    // 0x1caa98: 0xafa200a0  sw          $v0, 0xA0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135280u, 0x1CAA94u, 0x1CAA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAA9Cu;
label_1caa9c:
    // 0x1caa9c: 0x14283c  dsll32      $a1, $s4, 0
    ctx->pc = 0x1caa9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) << (32 + 0));
    // 0x1caaa0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1caaa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caaa4: 0xc04b742  jal         func_12DD08
    ctx->pc = 0x1CAAA4u;
    SET_GPR_U32(ctx, 31, 0x1CAAACu);
    ctx->pc = 0x1CAAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAAA4u;
    // 0x1caaa8: 0x5283e  dsrl32      $a1, $a1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DD08u, 0x1CAAA4u, 0x1CAAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAAACu;
label_1caaac:
    // 0x1caaac: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1caaacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1caab0: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1caab0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1caab4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1caab4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1caab8: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1caab8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1caabc: 0x912018  mult        $a0, $a0, $s1
    ctx->pc = 0x1caabcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1caac0: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1caac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1caac4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1caac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1caac8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1caac8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1caacc: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1caaccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1caad0: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x1caad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1caad4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1caad4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1caad8: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x1caad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x1caadc: 0x0  nop
    ctx->pc = 0x1caadcu;
    // NOP
label_1caae0:
    // 0x1caae0: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1caae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1caae4: 0x94246ac4  lhu         $a0, 0x6AC4($at)
    ctx->pc = 0x1caae4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x1caae8: 0x24030503  addiu       $v1, $zero, 0x503
    ctx->pc = 0x1caae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1283));
    // 0x1caaec: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CAAECu;
    {
        const bool branch_taken_0x1caaec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1CAAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAAECu;
        // 0x1caaf0: 0x24030053  addiu       $v1, $zero, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caaec) {
            ctx->pc = 0x1CAB00u;
            goto label_1cab00;
        }
    }
    ctx->pc = 0x1CAAF4u;
    // 0x1caaf4: 0x1483016c  bne         $a0, $v1, . + 4 + (0x16C << 2)
    ctx->pc = 0x1CAAF4u;
    {
        const bool branch_taken_0x1caaf4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1caaf4) {
            ctx->pc = 0x1CB0A8u;
            goto label_1cb0a8;
        }
    }
    ctx->pc = 0x1CAAFCu;
    // 0x1caafc: 0x0  nop
    ctx->pc = 0x1caafcu;
    // NOP
label_1cab00:
    // 0x1cab00: 0x3c03c5bb  lui         $v1, 0xC5BB
    ctx->pc = 0x1cab00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50619 << 16));
    // 0x1cab04: 0xc6c10010  lwc1        $f1, 0x10($s6)
    ctx->pc = 0x1cab04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cab08: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x1cab08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x1cab0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cab0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cab10: 0x0  nop
    ctx->pc = 0x1cab10u;
    // NOP
    // 0x1cab14: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1cab14u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cab18: 0x4500003b  bc1f        . + 4 + (0x3B << 2)
    ctx->pc = 0x1CAB18u;
    {
        const bool branch_taken_0x1cab18 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CAB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAB18u;
        // 0x1cab1c: 0x171882  srl         $v1, $s7, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 23), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cab18) {
            ctx->pc = 0x1CAC08u;
            goto label_1cac08;
        }
    }
    ctx->pc = 0x1CAB20u;
    // 0x1cab20: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1cab20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1cab24: 0x10600160  beqz        $v1, . + 4 + (0x160 << 2)
    ctx->pc = 0x1CAB24u;
    {
        const bool branch_taken_0x1cab24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAB24u;
        // 0x1cab28: 0x2e810002  sltiu       $at, $s4, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cab24) {
            ctx->pc = 0x1CB0A8u;
            goto label_1cb0a8;
        }
    }
    ctx->pc = 0x1CAB2Cu;
    // 0x1cab2c: 0x1420015e  bnez        $at, . + 4 + (0x15E << 2)
    ctx->pc = 0x1CAB2Cu;
    {
        const bool branch_taken_0x1cab2c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CAB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAB2Cu;
        // 0x1cab30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cab2c) {
            ctx->pc = 0x1CB0A8u;
            goto label_1cb0a8;
        }
    }
    ctx->pc = 0x1CAB34u;
    // 0x1cab34: 0x1720c0  sll         $a0, $s7, 3
    ctx->pc = 0x1cab34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 23), 3));
    // 0x1cab38: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1cab38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1cab3c: 0x972023  subu        $a0, $a0, $s7
    ctx->pc = 0x1cab3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
    // 0x1cab40: 0x24636540  addiu       $v1, $v1, 0x6540
    ctx->pc = 0x1cab40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25920));
    // 0x1cab44: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x1cab44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1cab48: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x1cab48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x1cab4c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1cab4cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1cab50: 0x30840fff  andi        $a0, $a0, 0xFFF
    ctx->pc = 0x1cab50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x1cab54: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1cab54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1cab58: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1cab58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1cab5c: 0x3c063e19  lui         $a2, 0x3E19
    ctx->pc = 0x1cab5cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15897 << 16));
    // 0x1cab60: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x1cab60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x1cab64: 0x34c6999a  ori         $a2, $a2, 0x999A
    ctx->pc = 0x1cab64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)39322);
    // 0x1cab68: 0x3463a9e5  ori         $v1, $v1, 0xA9E5
    ctx->pc = 0x1cab68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x1cab6c: 0x44862000  mtc1        $a2, $f4
    ctx->pc = 0x1cab6cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1cab70: 0x3c063ee6  lui         $a2, 0x3EE6
    ctx->pc = 0x1cab70u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16102 << 16));
    // 0x1cab74: 0x34c76666  ori         $a3, $a2, 0x6666
    ctx->pc = 0x1cab74u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)26214);
    // 0x1cab78: 0x3c063ccc  lui         $a2, 0x3CCC
    ctx->pc = 0x1cab78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15564 << 16));
    // 0x1cab7c: 0x34c6cccd  ori         $a2, $a2, 0xCCCD
    ctx->pc = 0x1cab7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)52429);
    // 0x1cab80: 0x44871800  mtc1        $a3, $f3
    ctx->pc = 0x1cab80u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1cab84: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x1cab84u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1cab88:
    // 0x1cab88: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cab88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cab8c: 0x8c26f004  lw          $a2, -0xFFC($at)
    ctx->pc = 0x1cab8cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81F004u));
    // 0x1cab90: 0xb13818  mult        $a3, $a1, $s1
    ctx->pc = 0x1cab90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1cab94: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1cab94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1cab98: 0x64040  sll         $t0, $a2, 1
    ctx->pc = 0x1cab98u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x1cab9c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cab9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1caba0: 0x637c2  srl         $a2, $a2, 31
    ctx->pc = 0x1caba0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x1caba4: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x1caba4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x1caba8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1caba8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1cabac: 0xb4302b  sltu        $a2, $a1, $s4
    ctx->pc = 0x1cabacu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x1cabb0: 0x1034826  xor         $t1, $t0, $v1
    ctx->pc = 0x1cabb0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 3));
    // 0x1cabb4: 0x94202  srl         $t0, $t1, 8
    ctx->pc = 0x1cabb4u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 9), 8));
    // 0x1cabb8: 0xac29f004  sw          $t1, -0xFFC($at)
    ctx->pc = 0x1cabb8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 9));
    // 0x1cabbc: 0x31080003  andi        $t0, $t0, 0x3
    ctx->pc = 0x1cabbcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
    // 0x1cabc0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cabc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cabc4: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x1cabc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1cabc8: 0x2508fffe  addiu       $t0, $t0, -0x2
    ctx->pc = 0x1cabc8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967294));
    // 0x1cabcc: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x1cabccu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1cabd0: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x1cabd0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cabd4: 0x2473821  addu        $a3, $s2, $a3
    ctx->pc = 0x1cabd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x1cabd8: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x1cabd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cabdc: 0x46800160  cvt.s.w     $f5, $f0
    ctx->pc = 0x1cabdcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x1cabe0: 0xac29f004  sw          $t1, -0xFFC($at)
    ctx->pc = 0x1cabe0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 9));
    // 0x1cabe4: 0xc4e00010  lwc1        $f0, 0x10($a3)
    ctx->pc = 0x1cabe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cabe8: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x1cabe8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1cabec: 0x4605201a  mula.s      $f4, $f5
    ctx->pc = 0x1cabecu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[4], ctx->f[5]));
    // 0x1cabf0: 0x4601105c  madd.s      $f1, $f2, $f1
    ctx->pc = 0x1cabf0u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x1cabf4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1cabf4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cabf8: 0x14c0ffe3  bnez        $a2, . + 4 + (-0x1D << 2)
    ctx->pc = 0x1CABF8u;
    {
        const bool branch_taken_0x1cabf8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CABFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CABF8u;
        // 0x1cabfc: 0xe4e00010  swc1        $f0, 0x10($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cabf8) {
            ctx->pc = 0x1CAB88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cab88;
        }
    }
    ctx->pc = 0x1CAC00u;
    // 0x1cac00: 0x10000129  b           . + 4 + (0x129 << 2)
    ctx->pc = 0x1CAC00u;
    {
        const bool branch_taken_0x1cac00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cac00) {
            ctx->pc = 0x1CB0A8u;
            goto label_1cb0a8;
        }
    }
    ctx->pc = 0x1CAC08u;
label_1cac08:
    // 0x1cac08: 0x171882  srl         $v1, $s7, 2
    ctx->pc = 0x1cac08u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 23), 2));
    // 0x1cac0c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1cac0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1cac10: 0x10600125  beqz        $v1, . + 4 + (0x125 << 2)
    ctx->pc = 0x1CAC10u;
    {
        const bool branch_taken_0x1cac10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAC10u;
        // 0x1cac14: 0x15082b  sltu        $at, $zero, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cac10) {
            ctx->pc = 0x1CB0A8u;
            goto label_1cb0a8;
        }
    }
    ctx->pc = 0x1CAC18u;
    // 0x1cac18: 0x10200123  beqz        $at, . + 4 + (0x123 << 2)
    ctx->pc = 0x1CAC18u;
    {
        const bool branch_taken_0x1cac18 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAC18u;
        // 0x1cac1c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cac18) {
            ctx->pc = 0x1CB0A8u;
            goto label_1cb0a8;
        }
    }
    ctx->pc = 0x1CAC20u;
    // 0x1cac20: 0x2ea10009  sltiu       $at, $s5, 0x9
    ctx->pc = 0x1cac20u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x1cac24: 0x142000f2  bnez        $at, . + 4 + (0xF2 << 2)
    ctx->pc = 0x1CAC24u;
    {
        const bool branch_taken_0x1cac24 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CAC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAC24u;
        // 0x1cac28: 0x26b9fff8  addiu       $t9, $s5, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cac24) {
            ctx->pc = 0x1CAFF0u;
            goto label_1caff0;
        }
    }
    ctx->pc = 0x1CAC2Cu;
    // 0x1cac2c: 0x172900  sll         $a1, $s7, 4
    ctx->pc = 0x1cac2cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x1cac30: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1cac30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1cac34: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x1cac34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x1cac38: 0x24636540  addiu       $v1, $v1, 0x6540
    ctx->pc = 0x1cac38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25920));
    // 0x1cac3c: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x1cac3cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x1cac40: 0x30a50fff  andi        $a1, $a1, 0xFFF
    ctx->pc = 0x1cac40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
    // 0x1cac44: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1cac44u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1cac48: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1cac48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1cac4c: 0x3c053ecc  lui         $a1, 0x3ECC
    ctx->pc = 0x1cac4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16076 << 16));
    // 0x1cac50: 0x3c06873c  lui         $a2, 0x873C
    ctx->pc = 0x1cac50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34620 << 16));
    // 0x1cac54: 0x34a5cccd  ori         $a1, $a1, 0xCCCD
    ctx->pc = 0x1cac54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52429);
    // 0x1cac58: 0x34cea9e5  ori         $t6, $a2, 0xA9E5
    ctx->pc = 0x1cac58u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)43493);
    // 0x1cac5c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1cac5cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cac60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cac60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cac64: 0x0  nop
    ctx->pc = 0x1cac64u;
    // NOP
label_1cac68:
    // 0x1cac68: 0x24860001  addiu       $a2, $a0, 0x1
    ctx->pc = 0x1cac68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1cac6c: 0xd13021  addu        $a2, $a2, $s1
    ctx->pc = 0x1cac6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x1cac70: 0x913821  addu        $a3, $a0, $s1
    ctx->pc = 0x1cac70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1cac74: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1cac74u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1cac78: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cac78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cac7c: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x1cac7cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1cac80: 0x2465821  addu        $t3, $s2, $a2
    ctx->pc = 0x1cac80u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x1cac84: 0x8c25f004  lw          $a1, -0xFFC($at)
    ctx->pc = 0x1cac84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963204)));
    // 0x1cac88: 0x2476021  addu        $t4, $s2, $a3
    ctx->pc = 0x1cac88u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x1cac8c: 0x24860002  addiu       $a2, $a0, 0x2
    ctx->pc = 0x1cac8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x1cac90: 0xd13821  addu        $a3, $a2, $s1
    ctx->pc = 0x1cac90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x1cac94: 0x24860003  addiu       $a2, $a0, 0x3
    ctx->pc = 0x1cac94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x1cac98: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x1cac98u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1cac9c: 0xd13021  addu        $a2, $a2, $s1
    ctx->pc = 0x1cac9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x1caca0: 0x2475021  addu        $t2, $s2, $a3
    ctx->pc = 0x1caca0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x1caca4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1caca4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1caca8: 0x2464821  addu        $t1, $s2, $a2
    ctx->pc = 0x1caca8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x1cacac: 0x53840  sll         $a3, $a1, 1
    ctx->pc = 0x1cacacu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1cacb0: 0x537c2  srl         $a2, $a1, 31
    ctx->pc = 0x1cacb0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x1cacb4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cacb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cacb8: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x1cacb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1cacbc: 0x24850004  addiu       $a1, $a0, 0x4
    ctx->pc = 0x1cacbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1cacc0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1cacc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1cacc4: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x1cacc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x1cacc8: 0xce3026  xor         $a2, $a2, $t6
    ctx->pc = 0x1cacc8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 14));
    // 0x1caccc: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1cacccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1cacd0: 0xac26f004  sw          $a2, -0xFFC($at)
    ctx->pc = 0x1cacd0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 6));
    // 0x1cacd4: 0x2454021  addu        $t0, $s2, $a1
    ctx->pc = 0x1cacd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1cacd8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cacd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cacdc: 0x24850005  addiu       $a1, $a0, 0x5
    ctx->pc = 0x1cacdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 5));
    // 0x1cace0: 0x8c2df004  lw          $t5, -0xFFC($at)
    ctx->pc = 0x1cace0u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x81F004u));
    // 0x1cace4: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x1cace4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x1cace8: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x1cace8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1cacec: 0x24850006  addiu       $a1, $a0, 0x6
    ctx->pc = 0x1cacecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 6));
    // 0x1cacf0: 0x2463821  addu        $a3, $s2, $a2
    ctx->pc = 0x1cacf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x1cacf4: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x1cacf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x1cacf8: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x1cacf8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1cacfc: 0x24850007  addiu       $a1, $a0, 0x7
    ctx->pc = 0x1cacfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
    // 0x1cad00: 0x2463021  addu        $a2, $s2, $a2
    ctx->pc = 0x1cad00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x1cad04: 0xd7840  sll         $t7, $t5, 1
    ctx->pc = 0x1cad04u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x1cad08: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x1cad08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x1cad0c: 0xd6fc2  srl         $t5, $t5, 31
    ctx->pc = 0x1cad0cu;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 13), 31));
    // 0x1cad10: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1cad10u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1cad14: 0x1ed6821  addu        $t5, $t7, $t5
    ctx->pc = 0x1cad14u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 13)));
    // 0x1cad18: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1cad18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1cad1c: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x1cad1cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x1cad20: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cad20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cad24: 0x1ae6826  xor         $t5, $t5, $t6
    ctx->pc = 0x1cad24u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) ^ GPR_U64(ctx, 14));
    // 0x1cad28: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x1cad28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1cad2c: 0xac2df004  sw          $t5, -0xFFC($at)
    ctx->pc = 0x1cad2cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 13));
    // 0x1cad30: 0x99c02b  sltu        $t8, $a0, $t9
    ctx->pc = 0x1cad30u;
    SET_GPR_U64(ctx, 24, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 25)) ? 1 : 0);
    // 0x1cad34: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x1cad34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cad38: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cad38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cad3c: 0xc5820010  lwc1        $f2, 0x10($t4)
    ctx->pc = 0x1cad3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cad40: 0x460308c2  mul.s       $f3, $f1, $f3
    ctx->pc = 0x1cad40u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1cad44: 0x460300c0  add.s       $f3, $f0, $f3
    ctx->pc = 0x1cad44u;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1cad48: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x1cad48u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x1cad4c: 0xe5820010  swc1        $f2, 0x10($t4)
    ctx->pc = 0x1cad4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 16), bits); }
    // 0x1cad50: 0x8c2cf004  lw          $t4, -0xFFC($at)
    ctx->pc = 0x1cad50u;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x81F004u));
    // 0x1cad54: 0xc6840  sll         $t5, $t4, 1
    ctx->pc = 0x1cad54u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x1cad58: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cad58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cad5c: 0xc67c2  srl         $t4, $t4, 31
    ctx->pc = 0x1cad5cu;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 12), 31));
    // 0x1cad60: 0x1ac6021  addu        $t4, $t5, $t4
    ctx->pc = 0x1cad60u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x1cad64: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x1cad64u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x1cad68: 0x18e6026  xor         $t4, $t4, $t6
    ctx->pc = 0x1cad68u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) ^ GPR_U64(ctx, 14));
    // 0x1cad6c: 0xac2cf004  sw          $t4, -0xFFC($at)
    ctx->pc = 0x1cad6cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 12));
    // 0x1cad70: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cad70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cad74: 0x8c2cf004  lw          $t4, -0xFFC($at)
    ctx->pc = 0x1cad74u;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x81F004u));
    // 0x1cad78: 0xc6840  sll         $t5, $t4, 1
    ctx->pc = 0x1cad78u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x1cad7c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cad7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cad80: 0xc67c2  srl         $t4, $t4, 31
    ctx->pc = 0x1cad80u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 12), 31));
    // 0x1cad84: 0x1ac6021  addu        $t4, $t5, $t4
    ctx->pc = 0x1cad84u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x1cad88: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x1cad88u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x1cad8c: 0x18e6026  xor         $t4, $t4, $t6
    ctx->pc = 0x1cad8cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) ^ GPR_U64(ctx, 14));
    // 0x1cad90: 0xac2cf004  sw          $t4, -0xFFC($at)
    ctx->pc = 0x1cad90u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 12));
    // 0x1cad94: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x1cad94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cad98: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cad98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cad9c: 0xc5620010  lwc1        $f2, 0x10($t3)
    ctx->pc = 0x1cad9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cada0: 0x460308c2  mul.s       $f3, $f1, $f3
    ctx->pc = 0x1cada0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1cada4: 0x460300c0  add.s       $f3, $f0, $f3
    ctx->pc = 0x1cada4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1cada8: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x1cada8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x1cadac: 0xe5620010  swc1        $f2, 0x10($t3)
    ctx->pc = 0x1cadacu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 16), bits); }
    // 0x1cadb0: 0x8c2bf004  lw          $t3, -0xFFC($at)
    ctx->pc = 0x1cadb0u;
    SET_GPR_S32(ctx, 11, (int32_t)FAST_READ32(0x81F004u));
    // 0x1cadb4: 0xb6040  sll         $t4, $t3, 1
    ctx->pc = 0x1cadb4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x1cadb8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cadb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cadbc: 0xb5fc2  srl         $t3, $t3, 31
    ctx->pc = 0x1cadbcu;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 31));
    // 0x1cadc0: 0x18b5821  addu        $t3, $t4, $t3
    ctx->pc = 0x1cadc0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x1cadc4: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1cadc4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x1cadc8: 0x16e5826  xor         $t3, $t3, $t6
    ctx->pc = 0x1cadc8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) ^ GPR_U64(ctx, 14));
    // 0x1cadcc: 0xac2bf004  sw          $t3, -0xFFC($at)
    ctx->pc = 0x1cadccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 11));
    // 0x1cadd0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cadd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cadd4: 0x8c2bf004  lw          $t3, -0xFFC($at)
    ctx->pc = 0x1cadd4u;
    SET_GPR_S32(ctx, 11, (int32_t)FAST_READ32(0x81F004u));
    // 0x1cadd8: 0xb6040  sll         $t4, $t3, 1
    ctx->pc = 0x1cadd8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x1caddc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1caddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cade0: 0xb5fc2  srl         $t3, $t3, 31
    ctx->pc = 0x1cade0u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 31));
    // 0x1cade4: 0x18b5821  addu        $t3, $t4, $t3
    ctx->pc = 0x1cade4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x1cade8: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1cade8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x1cadec: 0x16e5826  xor         $t3, $t3, $t6
    ctx->pc = 0x1cadecu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) ^ GPR_U64(ctx, 14));
    // 0x1cadf0: 0xac2bf004  sw          $t3, -0xFFC($at)
    ctx->pc = 0x1cadf0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 11));
    // 0x1cadf4: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x1cadf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cadf8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cadf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cadfc: 0xc5420010  lwc1        $f2, 0x10($t2)
    ctx->pc = 0x1cadfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cae00: 0x460308c2  mul.s       $f3, $f1, $f3
    ctx->pc = 0x1cae00u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1cae04: 0x460300c0  add.s       $f3, $f0, $f3
    ctx->pc = 0x1cae04u;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1cae08: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x1cae08u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x1cae0c: 0xe5420010  swc1        $f2, 0x10($t2)
    ctx->pc = 0x1cae0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 16), bits); }
    // 0x1cae10: 0x8c2af004  lw          $t2, -0xFFC($at)
    ctx->pc = 0x1cae10u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x81F004u));
    // 0x1cae14: 0xa5840  sll         $t3, $t2, 1
    ctx->pc = 0x1cae14u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x1cae18: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cae18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cae1c: 0xa57c2  srl         $t2, $t2, 31
    ctx->pc = 0x1cae1cu;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
    // 0x1cae20: 0x16a5021  addu        $t2, $t3, $t2
    ctx->pc = 0x1cae20u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x1cae24: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1cae24u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1cae28: 0x14e5026  xor         $t2, $t2, $t6
    ctx->pc = 0x1cae28u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 14));
    // 0x1cae2c: 0xac2af004  sw          $t2, -0xFFC($at)
    ctx->pc = 0x1cae2cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 10));
    // 0x1cae30: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cae30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cae34: 0x8c2af004  lw          $t2, -0xFFC($at)
    ctx->pc = 0x1cae34u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x81F004u));
    // 0x1cae38: 0xa5840  sll         $t3, $t2, 1
    ctx->pc = 0x1cae38u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x1cae3c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cae3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cae40: 0xa57c2  srl         $t2, $t2, 31
    ctx->pc = 0x1cae40u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
    // 0x1cae44: 0x16a5021  addu        $t2, $t3, $t2
    ctx->pc = 0x1cae44u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x1cae48: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1cae48u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1cae4c: 0x14e5026  xor         $t2, $t2, $t6
    ctx->pc = 0x1cae4cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 14));
    // 0x1cae50: 0xac2af004  sw          $t2, -0xFFC($at)
    ctx->pc = 0x1cae50u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 10));
    // 0x1cae54: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x1cae54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cae58: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cae58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cae5c: 0xc5220010  lwc1        $f2, 0x10($t1)
    ctx->pc = 0x1cae5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cae60: 0x460308c2  mul.s       $f3, $f1, $f3
    ctx->pc = 0x1cae60u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1cae64: 0x460300c0  add.s       $f3, $f0, $f3
    ctx->pc = 0x1cae64u;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1cae68: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x1cae68u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x1cae6c: 0xe5220010  swc1        $f2, 0x10($t1)
    ctx->pc = 0x1cae6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 16), bits); }
    // 0x1cae70: 0x8c29f004  lw          $t1, -0xFFC($at)
    ctx->pc = 0x1cae70u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x81F004u));
    // 0x1cae74: 0x95040  sll         $t2, $t1, 1
    ctx->pc = 0x1cae74u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x1cae78: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cae78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cae7c: 0x94fc2  srl         $t1, $t1, 31
    ctx->pc = 0x1cae7cu;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x1cae80: 0x1494821  addu        $t1, $t2, $t1
    ctx->pc = 0x1cae80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x1cae84: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1cae84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1cae88: 0x12e4826  xor         $t1, $t1, $t6
    ctx->pc = 0x1cae88u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 14));
    // 0x1cae8c: 0xac29f004  sw          $t1, -0xFFC($at)
    ctx->pc = 0x1cae8cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 9));
    // 0x1cae90: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cae90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cae94: 0x8c29f004  lw          $t1, -0xFFC($at)
    ctx->pc = 0x1cae94u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x81F004u));
    // 0x1cae98: 0x95040  sll         $t2, $t1, 1
    ctx->pc = 0x1cae98u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x1cae9c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cae9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1caea0: 0x94fc2  srl         $t1, $t1, 31
    ctx->pc = 0x1caea0u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x1caea4: 0x1494821  addu        $t1, $t2, $t1
    ctx->pc = 0x1caea4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x1caea8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1caea8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1caeac: 0x12e4826  xor         $t1, $t1, $t6
    ctx->pc = 0x1caeacu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 14));
    // 0x1caeb0: 0xac29f004  sw          $t1, -0xFFC($at)
    ctx->pc = 0x1caeb0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 9));
    // 0x1caeb4: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x1caeb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1caeb8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1caeb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1caebc: 0xc5020010  lwc1        $f2, 0x10($t0)
    ctx->pc = 0x1caebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1caec0: 0x460308c2  mul.s       $f3, $f1, $f3
    ctx->pc = 0x1caec0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1caec4: 0x460300c0  add.s       $f3, $f0, $f3
    ctx->pc = 0x1caec4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1caec8: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x1caec8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x1caecc: 0xe5020010  swc1        $f2, 0x10($t0)
    ctx->pc = 0x1caeccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 16), bits); }
    // 0x1caed0: 0x8c28f004  lw          $t0, -0xFFC($at)
    ctx->pc = 0x1caed0u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x81F004u));
    // 0x1caed4: 0x84840  sll         $t1, $t0, 1
    ctx->pc = 0x1caed4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x1caed8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1caed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1caedc: 0x847c2  srl         $t0, $t0, 31
    ctx->pc = 0x1caedcu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x1caee0: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x1caee0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x1caee4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1caee4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1caee8: 0x10e4026  xor         $t0, $t0, $t6
    ctx->pc = 0x1caee8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 14));
    // 0x1caeec: 0xac28f004  sw          $t0, -0xFFC($at)
    ctx->pc = 0x1caeecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 8));
    // 0x1caef0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1caef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1caef4: 0x8c28f004  lw          $t0, -0xFFC($at)
    ctx->pc = 0x1caef4u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x81F004u));
    // 0x1caef8: 0x84840  sll         $t1, $t0, 1
    ctx->pc = 0x1caef8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x1caefc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1caefcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1caf00: 0x847c2  srl         $t0, $t0, 31
    ctx->pc = 0x1caf00u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x1caf04: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x1caf04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x1caf08: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1caf08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1caf0c: 0x10e4026  xor         $t0, $t0, $t6
    ctx->pc = 0x1caf0cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 14));
    // 0x1caf10: 0xac28f004  sw          $t0, -0xFFC($at)
    ctx->pc = 0x1caf10u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 8));
    // 0x1caf14: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x1caf14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1caf18: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1caf18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1caf1c: 0xc4e20010  lwc1        $f2, 0x10($a3)
    ctx->pc = 0x1caf1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1caf20: 0x460308c2  mul.s       $f3, $f1, $f3
    ctx->pc = 0x1caf20u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1caf24: 0x460300c0  add.s       $f3, $f0, $f3
    ctx->pc = 0x1caf24u;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1caf28: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x1caf28u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x1caf2c: 0xe4e20010  swc1        $f2, 0x10($a3)
    ctx->pc = 0x1caf2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
    // 0x1caf30: 0x8c27f004  lw          $a3, -0xFFC($at)
    ctx->pc = 0x1caf30u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x81F004u));
    // 0x1caf34: 0x74040  sll         $t0, $a3, 1
    ctx->pc = 0x1caf34u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x1caf38: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1caf38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1caf3c: 0x73fc2  srl         $a3, $a3, 31
    ctx->pc = 0x1caf3cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x1caf40: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x1caf40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1caf44: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1caf44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1caf48: 0xee3826  xor         $a3, $a3, $t6
    ctx->pc = 0x1caf48u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 14));
    // 0x1caf4c: 0xac27f004  sw          $a3, -0xFFC($at)
    ctx->pc = 0x1caf4cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 7));
    // 0x1caf50: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1caf50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1caf54: 0x8c27f004  lw          $a3, -0xFFC($at)
    ctx->pc = 0x1caf54u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x81F004u));
    // 0x1caf58: 0x74040  sll         $t0, $a3, 1
    ctx->pc = 0x1caf58u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x1caf5c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1caf5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1caf60: 0x73fc2  srl         $a3, $a3, 31
    ctx->pc = 0x1caf60u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x1caf64: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x1caf64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1caf68: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1caf68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1caf6c: 0xee3826  xor         $a3, $a3, $t6
    ctx->pc = 0x1caf6cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 14));
    // 0x1caf70: 0xac27f004  sw          $a3, -0xFFC($at)
    ctx->pc = 0x1caf70u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 7));
    // 0x1caf74: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x1caf74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1caf78: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1caf78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1caf7c: 0xc4c20010  lwc1        $f2, 0x10($a2)
    ctx->pc = 0x1caf7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1caf80: 0x460308c2  mul.s       $f3, $f1, $f3
    ctx->pc = 0x1caf80u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1caf84: 0x460300c0  add.s       $f3, $f0, $f3
    ctx->pc = 0x1caf84u;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1caf88: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x1caf88u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x1caf8c: 0xe4c20010  swc1        $f2, 0x10($a2)
    ctx->pc = 0x1caf8cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
    // 0x1caf90: 0x8c26f004  lw          $a2, -0xFFC($at)
    ctx->pc = 0x1caf90u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81F004u));
    // 0x1caf94: 0x63840  sll         $a3, $a2, 1
    ctx->pc = 0x1caf94u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x1caf98: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1caf98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1caf9c: 0x637c2  srl         $a2, $a2, 31
    ctx->pc = 0x1caf9cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x1cafa0: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x1cafa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1cafa4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1cafa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1cafa8: 0xce3026  xor         $a2, $a2, $t6
    ctx->pc = 0x1cafa8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 14));
    // 0x1cafac: 0xac26f004  sw          $a2, -0xFFC($at)
    ctx->pc = 0x1cafacu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 6));
    // 0x1cafb0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cafb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cafb4: 0x8c26f004  lw          $a2, -0xFFC($at)
    ctx->pc = 0x1cafb4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81F004u));
    // 0x1cafb8: 0x63840  sll         $a3, $a2, 1
    ctx->pc = 0x1cafb8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x1cafbc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cafbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cafc0: 0x637c2  srl         $a2, $a2, 31
    ctx->pc = 0x1cafc0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x1cafc4: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x1cafc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1cafc8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1cafc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1cafcc: 0xce3026  xor         $a2, $a2, $t6
    ctx->pc = 0x1cafccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 14));
    // 0x1cafd0: 0xac26f004  sw          $a2, -0xFFC($at)
    ctx->pc = 0x1cafd0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 6));
    // 0x1cafd4: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x1cafd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cafd8: 0xc4a20010  lwc1        $f2, 0x10($a1)
    ctx->pc = 0x1cafd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cafdc: 0x460308c2  mul.s       $f3, $f1, $f3
    ctx->pc = 0x1cafdcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1cafe0: 0x460300c0  add.s       $f3, $f0, $f3
    ctx->pc = 0x1cafe0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1cafe4: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x1cafe4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x1cafe8: 0x1700ff1f  bnez        $t8, . + 4 + (-0xE1 << 2)
    ctx->pc = 0x1CAFE8u;
    {
        const bool branch_taken_0x1cafe8 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CAFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAFE8u;
        // 0x1cafec: 0xe4a20010  swc1        $f2, 0x10($a1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cafe8) {
            ctx->pc = 0x1CAC68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cac68;
        }
    }
    ctx->pc = 0x1CAFF0u;
label_1caff0:
    // 0x1caff0: 0x95082b  sltu        $at, $a0, $s5
    ctx->pc = 0x1caff0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x1caff4: 0x1020002c  beqz        $at, . + 4 + (0x2C << 2)
    ctx->pc = 0x1CAFF4u;
    {
        const bool branch_taken_0x1caff4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAFF4u;
        // 0x1caff8: 0x172900  sll         $a1, $s7, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caff4) {
            ctx->pc = 0x1CB0A8u;
            goto label_1cb0a8;
        }
    }
    ctx->pc = 0x1CAFFCu;
    // 0x1caffc: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1caffcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1cb000: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x1cb000u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x1cb004: 0x24636540  addiu       $v1, $v1, 0x6540
    ctx->pc = 0x1cb004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25920));
    // 0x1cb008: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x1cb008u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x1cb00c: 0x30a50fff  andi        $a1, $a1, 0xFFF
    ctx->pc = 0x1cb00cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
    // 0x1cb010: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1cb010u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1cb014: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x1cb014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1cb018: 0x3c063ecc  lui         $a2, 0x3ECC
    ctx->pc = 0x1cb018u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16076 << 16));
    // 0x1cb01c: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x1cb01cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x1cb020: 0x34c6cccd  ori         $a2, $a2, 0xCCCD
    ctx->pc = 0x1cb020u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)52429);
    // 0x1cb024: 0x3463a9e5  ori         $v1, $v1, 0xA9E5
    ctx->pc = 0x1cb024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x1cb028: 0x44861800  mtc1        $a2, $f3
    ctx->pc = 0x1cb028u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1cb02c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1cb02cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1cb030:
    // 0x1cb030: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cb030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cb034: 0x8c28f004  lw          $t0, -0xFFC($at)
    ctx->pc = 0x1cb034u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x81F004u));
    // 0x1cb038: 0x913021  addu        $a2, $a0, $s1
    ctx->pc = 0x1cb038u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1cb03c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1cb03cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1cb040: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1cb040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1cb044: 0x2463821  addu        $a3, $s2, $a2
    ctx->pc = 0x1cb044u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x1cb048: 0x95302b  sltu        $a2, $a0, $s5
    ctx->pc = 0x1cb048u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x1cb04c: 0x84840  sll         $t1, $t0, 1
    ctx->pc = 0x1cb04cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x1cb050: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cb050u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cb054: 0x847c2  srl         $t0, $t0, 31
    ctx->pc = 0x1cb054u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x1cb058: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x1cb058u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x1cb05c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1cb05cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1cb060: 0x1034026  xor         $t0, $t0, $v1
    ctx->pc = 0x1cb060u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 3));
    // 0x1cb064: 0xac28f004  sw          $t0, -0xFFC($at)
    ctx->pc = 0x1cb064u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 8));
    // 0x1cb068: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cb068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cb06c: 0x8c28f004  lw          $t0, -0xFFC($at)
    ctx->pc = 0x1cb06cu;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x81F004u));
    // 0x1cb070: 0x84840  sll         $t1, $t0, 1
    ctx->pc = 0x1cb070u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x1cb074: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cb074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cb078: 0x847c2  srl         $t0, $t0, 31
    ctx->pc = 0x1cb078u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x1cb07c: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x1cb07cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x1cb080: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1cb080u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1cb084: 0x1034026  xor         $t0, $t0, $v1
    ctx->pc = 0x1cb084u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 3));
    // 0x1cb088: 0xac28f004  sw          $t0, -0xFFC($at)
    ctx->pc = 0x1cb088u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 8));
    // 0x1cb08c: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x1cb08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cb090: 0xc4e00010  lwc1        $f0, 0x10($a3)
    ctx->pc = 0x1cb090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb094: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x1cb094u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1cb098: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1cb098u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1cb09c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1cb09cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cb0a0: 0x14c0ffe3  bnez        $a2, . + 4 + (-0x1D << 2)
    ctx->pc = 0x1CB0A0u;
    {
        const bool branch_taken_0x1cb0a0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB0A0u;
        // 0x1cb0a4: 0xe4e00010  swc1        $f0, 0x10($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb0a0) {
            ctx->pc = 0x1CB030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb030;
        }
    }
    ctx->pc = 0x1CB0A8u;
label_1cb0a8:
    // 0x1cb0a8: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1cb0a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1cb0ac: 0x94246ac4  lhu         $a0, 0x6AC4($at)
    ctx->pc = 0x1cb0acu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x1cb0b0: 0x24030504  addiu       $v1, $zero, 0x504
    ctx->pc = 0x1cb0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1284));
    // 0x1cb0b4: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CB0B4u;
    {
        const bool branch_taken_0x1cb0b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1CB0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB0B4u;
        // 0x1cb0b8: 0x24030054  addiu       $v1, $zero, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb0b4) {
            ctx->pc = 0x1CB0C8u;
            goto label_1cb0c8;
        }
    }
    ctx->pc = 0x1CB0BCu;
    // 0x1cb0bc: 0x14830168  bne         $a0, $v1, . + 4 + (0x168 << 2)
    ctx->pc = 0x1CB0BCu;
    {
        const bool branch_taken_0x1cb0bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1cb0bc) {
            ctx->pc = 0x1CB660u;
            goto label_1cb660;
        }
    }
    ctx->pc = 0x1CB0C4u;
    // 0x1cb0c4: 0x0  nop
    ctx->pc = 0x1cb0c4u;
    // NOP
label_1cb0c8:
    // 0x1cb0c8: 0x3c03c5bb  lui         $v1, 0xC5BB
    ctx->pc = 0x1cb0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50619 << 16));
    // 0x1cb0cc: 0xc6c10010  lwc1        $f1, 0x10($s6)
    ctx->pc = 0x1cb0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cb0d0: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x1cb0d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x1cb0d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cb0d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb0d8: 0x0  nop
    ctx->pc = 0x1cb0d8u;
    // NOP
    // 0x1cb0dc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1cb0dcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cb0e0: 0x4500003b  bc1f        . + 4 + (0x3B << 2)
    ctx->pc = 0x1CB0E0u;
    {
        const bool branch_taken_0x1cb0e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CB0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB0E0u;
        // 0x1cb0e4: 0x171882  srl         $v1, $s7, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 23), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb0e0) {
            ctx->pc = 0x1CB1D0u;
            goto label_1cb1d0;
        }
    }
    ctx->pc = 0x1CB0E8u;
    // 0x1cb0e8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1cb0e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1cb0ec: 0x1060015c  beqz        $v1, . + 4 + (0x15C << 2)
    ctx->pc = 0x1CB0ECu;
    {
        const bool branch_taken_0x1cb0ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB0ECu;
        // 0x1cb0f0: 0x2e810002  sltiu       $at, $s4, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb0ec) {
            ctx->pc = 0x1CB660u;
            goto label_1cb660;
        }
    }
    ctx->pc = 0x1CB0F4u;
    // 0x1cb0f4: 0x1420015a  bnez        $at, . + 4 + (0x15A << 2)
    ctx->pc = 0x1CB0F4u;
    {
        const bool branch_taken_0x1cb0f4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB0F4u;
        // 0x1cb0f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb0f4) {
            ctx->pc = 0x1CB660u;
            goto label_1cb660;
        }
    }
    ctx->pc = 0x1CB0FCu;
    // 0x1cb0fc: 0x1720c0  sll         $a0, $s7, 3
    ctx->pc = 0x1cb0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 23), 3));
    // 0x1cb100: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1cb100u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1cb104: 0x972023  subu        $a0, $a0, $s7
    ctx->pc = 0x1cb104u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
    // 0x1cb108: 0x24636540  addiu       $v1, $v1, 0x6540
    ctx->pc = 0x1cb108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25920));
    // 0x1cb10c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x1cb10cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1cb110: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x1cb110u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x1cb114: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1cb114u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1cb118: 0x30840fff  andi        $a0, $a0, 0xFFF
    ctx->pc = 0x1cb118u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x1cb11c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1cb11cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1cb120: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1cb120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1cb124: 0x3c063e19  lui         $a2, 0x3E19
    ctx->pc = 0x1cb124u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15897 << 16));
    // 0x1cb128: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x1cb128u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x1cb12c: 0x34c6999a  ori         $a2, $a2, 0x999A
    ctx->pc = 0x1cb12cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)39322);
    // 0x1cb130: 0x3463a9e5  ori         $v1, $v1, 0xA9E5
    ctx->pc = 0x1cb130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x1cb134: 0x44862000  mtc1        $a2, $f4
    ctx->pc = 0x1cb134u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1cb138: 0x3c063ee6  lui         $a2, 0x3EE6
    ctx->pc = 0x1cb138u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16102 << 16));
    // 0x1cb13c: 0x34c76666  ori         $a3, $a2, 0x6666
    ctx->pc = 0x1cb13cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)26214);
    // 0x1cb140: 0x3c063ccc  lui         $a2, 0x3CCC
    ctx->pc = 0x1cb140u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15564 << 16));
    // 0x1cb144: 0x34c6cccd  ori         $a2, $a2, 0xCCCD
    ctx->pc = 0x1cb144u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)52429);
    // 0x1cb148: 0x44871800  mtc1        $a3, $f3
    ctx->pc = 0x1cb148u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1cb14c: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x1cb14cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1cb150:
    // 0x1cb150: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cb150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cb154: 0x8c26f004  lw          $a2, -0xFFC($at)
    ctx->pc = 0x1cb154u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81F004u));
    // 0x1cb158: 0xb13818  mult        $a3, $a1, $s1
    ctx->pc = 0x1cb158u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1cb15c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1cb15cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1cb160: 0x64040  sll         $t0, $a2, 1
    ctx->pc = 0x1cb160u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x1cb164: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cb164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cb168: 0x637c2  srl         $a2, $a2, 31
    ctx->pc = 0x1cb168u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x1cb16c: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x1cb16cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x1cb170: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1cb170u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1cb174: 0xb4302b  sltu        $a2, $a1, $s4
    ctx->pc = 0x1cb174u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x1cb178: 0x1034826  xor         $t1, $t0, $v1
    ctx->pc = 0x1cb178u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 3));
    // 0x1cb17c: 0x94202  srl         $t0, $t1, 8
    ctx->pc = 0x1cb17cu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 9), 8));
    // 0x1cb180: 0xac29f004  sw          $t1, -0xFFC($at)
    ctx->pc = 0x1cb180u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 9));
    // 0x1cb184: 0x31080003  andi        $t0, $t0, 0x3
    ctx->pc = 0x1cb184u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
    // 0x1cb188: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cb188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cb18c: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x1cb18cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1cb190: 0x2508fffe  addiu       $t0, $t0, -0x2
    ctx->pc = 0x1cb190u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967294));
    // 0x1cb194: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x1cb194u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1cb198: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x1cb198u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb19c: 0x2473821  addu        $a3, $s2, $a3
    ctx->pc = 0x1cb19cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x1cb1a0: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x1cb1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cb1a4: 0x46800160  cvt.s.w     $f5, $f0
    ctx->pc = 0x1cb1a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x1cb1a8: 0xac29f004  sw          $t1, -0xFFC($at)
    ctx->pc = 0x1cb1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 9));
    // 0x1cb1ac: 0xc4e00010  lwc1        $f0, 0x10($a3)
    ctx->pc = 0x1cb1acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb1b0: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x1cb1b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1cb1b4: 0x4605201a  mula.s      $f4, $f5
    ctx->pc = 0x1cb1b4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[4], ctx->f[5]));
    // 0x1cb1b8: 0x4601105c  madd.s      $f1, $f2, $f1
    ctx->pc = 0x1cb1b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x1cb1bc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1cb1bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cb1c0: 0x14c0ffe3  bnez        $a2, . + 4 + (-0x1D << 2)
    ctx->pc = 0x1CB1C0u;
    {
        const bool branch_taken_0x1cb1c0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB1C0u;
        // 0x1cb1c4: 0xe4e00010  swc1        $f0, 0x10($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb1c0) {
            ctx->pc = 0x1CB150u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb150;
        }
    }
    ctx->pc = 0x1CB1C8u;
    // 0x1cb1c8: 0x10000125  b           . + 4 + (0x125 << 2)
    ctx->pc = 0x1CB1C8u;
    {
        const bool branch_taken_0x1cb1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb1c8) {
            ctx->pc = 0x1CB660u;
            goto label_1cb660;
        }
    }
    ctx->pc = 0x1CB1D0u;
label_1cb1d0:
    // 0x1cb1d0: 0x171882  srl         $v1, $s7, 2
    ctx->pc = 0x1cb1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 23), 2));
    // 0x1cb1d4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1cb1d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1cb1d8: 0x10600121  beqz        $v1, . + 4 + (0x121 << 2)
    ctx->pc = 0x1CB1D8u;
    {
        const bool branch_taken_0x1cb1d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB1D8u;
        // 0x1cb1dc: 0x2e810002  sltiu       $at, $s4, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb1d8) {
            ctx->pc = 0x1CB660u;
            goto label_1cb660;
        }
    }
    ctx->pc = 0x1CB1E0u;
    // 0x1cb1e0: 0x1420011f  bnez        $at, . + 4 + (0x11F << 2)
    ctx->pc = 0x1CB1E0u;
    {
        const bool branch_taken_0x1cb1e0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB1E0u;
        // 0x1cb1e4: 0x240d0001  addiu       $t5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb1e0) {
            ctx->pc = 0x1CB660u;
            goto label_1cb660;
        }
    }
    ctx->pc = 0x1CB1E8u;
    // 0x1cb1e8: 0x2683ffff  addiu       $v1, $s4, -0x1
    ctx->pc = 0x1cb1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x1cb1ec: 0x2c610009  sltiu       $at, $v1, 0x9
    ctx->pc = 0x1cb1ecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x1cb1f0: 0x142000eb  bnez        $at, . + 4 + (0xEB << 2)
    ctx->pc = 0x1CB1F0u;
    {
        const bool branch_taken_0x1cb1f0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB1F0u;
        // 0x1cb1f4: 0x268cfff8  addiu       $t4, $s4, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb1f0) {
            ctx->pc = 0x1CB5A0u;
            goto label_1cb5a0;
        }
    }
    ctx->pc = 0x1CB1F8u;
    // 0x1cb1f8: 0x172100  sll         $a0, $s7, 4
    ctx->pc = 0x1cb1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x1cb1fc: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1cb1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1cb200: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x1cb200u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x1cb204: 0x24636540  addiu       $v1, $v1, 0x6540
    ctx->pc = 0x1cb204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25920));
    // 0x1cb208: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1cb208u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1cb20c: 0x30840fff  andi        $a0, $a0, 0xFFF
    ctx->pc = 0x1cb20cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x1cb210: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1cb210u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1cb214: 0x645821  addu        $t3, $v1, $a0
    ctx->pc = 0x1cb214u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1cb218: 0x3c033cf5  lui         $v1, 0x3CF5
    ctx->pc = 0x1cb218u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15605 << 16));
    // 0x1cb21c: 0x3c04873c  lui         $a0, 0x873C
    ctx->pc = 0x1cb21cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34620 << 16));
    // 0x1cb220: 0x3463c28f  ori         $v1, $v1, 0xC28F
    ctx->pc = 0x1cb220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49807);
    // 0x1cb224: 0x348aa9e5  ori         $t2, $a0, 0xA9E5
    ctx->pc = 0x1cb224u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)43493);
    // 0x1cb228: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1cb228u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cb22c: 0x3c033ecc  lui         $v1, 0x3ECC
    ctx->pc = 0x1cb22cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16076 << 16));
    // 0x1cb230: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1cb230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1cb234: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cb234u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cb238:
    // 0x1cb238: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cb238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cb23c: 0x8c28f004  lw          $t0, -0xFFC($at)
    ctx->pc = 0x1cb23cu;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x81F004u));
    // 0x1cb240: 0x25a30001  addiu       $v1, $t5, 0x1
    ctx->pc = 0x1cb240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x1cb244: 0x70713818  mult1       $a3, $v1, $s1
    ctx->pc = 0x1cb244u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1cb248: 0x1b17018  mult        $t6, $t5, $s1
    ctx->pc = 0x1cb248u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x1cb24c: 0x25a30003  addiu       $v1, $t5, 0x3
    ctx->pc = 0x1cb24cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), 3));
    // 0x1cb250: 0x25a60002  addiu       $a2, $t5, 0x2
    ctx->pc = 0x1cb250u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 13), 2));
    // 0x1cb254: 0x70712818  mult1       $a1, $v1, $s1
    ctx->pc = 0x1cb254u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1cb258: 0x25a40004  addiu       $a0, $t5, 0x4
    ctx->pc = 0x1cb258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
    // 0x1cb25c: 0x25a30005  addiu       $v1, $t5, 0x5
    ctx->pc = 0x1cb25cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), 5));
    // 0x1cb260: 0x25af0006  addiu       $t7, $t5, 0x6
    ctx->pc = 0x1cb260u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 6));
    // 0x1cb264: 0xd13018  mult        $a2, $a2, $s1
    ctx->pc = 0x1cb264u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1cb268: 0x70711818  mult1       $v1, $v1, $s1
    ctx->pc = 0x1cb268u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1cb26c: 0x84840  sll         $t1, $t0, 1
    ctx->pc = 0x1cb26cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x1cb270: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cb270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cb274: 0x847c2  srl         $t0, $t0, 31
    ctx->pc = 0x1cb274u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x1cb278: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x1cb278u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x1cb27c: 0x25090001  addiu       $t1, $t0, 0x1
    ctx->pc = 0x1cb27cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1cb280: 0x25a80007  addiu       $t0, $t5, 0x7
    ctx->pc = 0x1cb280u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 13), 7));
    // 0x1cb284: 0x12a4826  xor         $t1, $t1, $t2
    ctx->pc = 0x1cb284u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 10));
    // 0x1cb288: 0x7111b018  mult1       $s6, $t0, $s1
    ctx->pc = 0x1cb288u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 17); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 22, (int32_t)result); }
    // 0x1cb28c: 0xac29f004  sw          $t1, -0xFFC($at)
    ctx->pc = 0x1cb28cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 9));
    // 0x1cb290: 0x94202  srl         $t0, $t1, 8
    ctx->pc = 0x1cb290u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 9), 8));
    // 0x1cb294: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cb294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cb298: 0x31080003  andi        $t0, $t0, 0x3
    ctx->pc = 0x1cb298u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
    // 0x1cb29c: 0x25ad0008  addiu       $t5, $t5, 0x8
    ctx->pc = 0x1cb29cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
    // 0x1cb2a0: 0x10e7021  addu        $t6, $t0, $t6
    ctx->pc = 0x1cb2a0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 14)));
    // 0x1cb2a4: 0x2508fffe  addiu       $t0, $t0, -0x2
    ctx->pc = 0x1cb2a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967294));
    // 0x1cb2a8: 0x44881000  mtc1        $t0, $f2
    ctx->pc = 0x1cb2a8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1cb2ac: 0xc5630000  lwc1        $f3, 0x0($t3)
    ctx->pc = 0x1cb2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cb2b0: 0x46801120  cvt.s.w     $f4, $f2
    ctx->pc = 0x1cb2b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x1cb2b4: 0xe4080  sll         $t0, $t6, 2
    ctx->pc = 0x1cb2b4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x1cb2b8: 0x2484021  addu        $t0, $s2, $t0
    ctx->pc = 0x1cb2b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
    // 0x1cb2bc: 0x1ac702b  sltu        $t6, $t5, $t4
    ctx->pc = 0x1cb2bcu;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x1cb2c0: 0x912018  mult        $a0, $a0, $s1
    ctx->pc = 0x1cb2c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1cb2c4: 0xac29f004  sw          $t1, -0xFFC($at)
    ctx->pc = 0x1cb2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 9));
    // 0x1cb2c8: 0xc5020010  lwc1        $f2, 0x10($t0)
    ctx->pc = 0x1cb2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cb2cc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cb2ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cb2d0: 0x4604081a  mula.s      $f1, $f4
    ctx->pc = 0x1cb2d0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[4]));
    // 0x1cb2d4: 0x460300dc  madd.s      $f3, $f0, $f3
    ctx->pc = 0x1cb2d4u;
    ctx->f[3] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[3]));
    // 0x1cb2d8: 0x1f14818  mult        $t1, $t7, $s1
    ctx->pc = 0x1cb2d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x1cb2dc: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x1cb2dcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x1cb2e0: 0xe5020010  swc1        $f2, 0x10($t0)
    ctx->pc = 0x1cb2e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 16), bits); }
    // 0x1cb2e4: 0x8c28f004  lw          $t0, -0xFFC($at)
    ctx->pc = 0x1cb2e4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963204)));
    // 0x1cb2e8: 0x87840  sll         $t7, $t0, 1
    ctx->pc = 0x1cb2e8u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x1cb2ec: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cb2ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cb2f0: 0x847c2  srl         $t0, $t0, 31
    ctx->pc = 0x1cb2f0u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x1cb2f4: 0x1e84021  addu        $t0, $t7, $t0
    ctx->pc = 0x1cb2f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 8)));
    // 0x1cb2f8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1cb2f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1cb2fc: 0x10a7826  xor         $t7, $t0, $t2
    ctx->pc = 0x1cb2fcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 10));
    // 0x1cb300: 0xf4202  srl         $t0, $t7, 8
    ctx->pc = 0x1cb300u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 15), 8));
    // 0x1cb304: 0xac2ff004  sw          $t7, -0xFFC($at)
    ctx->pc = 0x1cb304u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 15));
    // 0x1cb308: 0x31080003  andi        $t0, $t0, 0x3
    ctx->pc = 0x1cb308u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
    // 0x1cb30c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cb30cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cb310: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x1cb310u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1cb314: 0x2508fffe  addiu       $t0, $t0, -0x2
    ctx->pc = 0x1cb314u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967294));
    // 0x1cb318: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x1cb318u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1cb31c: 0x44881000  mtc1        $t0, $f2
    ctx->pc = 0x1cb31cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1cb320: 0x2473821  addu        $a3, $s2, $a3
    ctx->pc = 0x1cb320u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x1cb324: 0xc5630000  lwc1        $f3, 0x0($t3)
    ctx->pc = 0x1cb324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cb328: 0x46801120  cvt.s.w     $f4, $f2
    ctx->pc = 0x1cb328u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x1cb32c: 0xac2ff004  sw          $t7, -0xFFC($at)
    ctx->pc = 0x1cb32cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 15));
    // 0x1cb330: 0xc4e20010  lwc1        $f2, 0x10($a3)
    ctx->pc = 0x1cb330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cb334: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cb334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cb338: 0x4604081a  mula.s      $f1, $f4
    ctx->pc = 0x1cb338u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[4]));
    // 0x1cb33c: 0x460300dc  madd.s      $f3, $f0, $f3
    ctx->pc = 0x1cb33cu;
    ctx->f[3] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[3]));
    // 0x1cb340: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x1cb340u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x1cb344: 0xe4e20010  swc1        $f2, 0x10($a3)
    ctx->pc = 0x1cb344u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
    // 0x1cb348: 0x8c27f004  lw          $a3, -0xFFC($at)
    ctx->pc = 0x1cb348u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x81F004u));
    // 0x1cb34c: 0x74040  sll         $t0, $a3, 1
    ctx->pc = 0x1cb34cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x1cb350: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cb350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cb354: 0x73fc2  srl         $a3, $a3, 31
    ctx->pc = 0x1cb354u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x1cb358: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x1cb358u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1cb35c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1cb35cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1cb360: 0xea4026  xor         $t0, $a3, $t2
    ctx->pc = 0x1cb360u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 10));
    // 0x1cb364: 0x83a02  srl         $a3, $t0, 8
    ctx->pc = 0x1cb364u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 8), 8));
    // 0x1cb368: 0xac28f004  sw          $t0, -0xFFC($at)
    ctx->pc = 0x1cb368u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 8));
    // 0x1cb36c: 0x30e70003  andi        $a3, $a3, 0x3
    ctx->pc = 0x1cb36cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3);
    // 0x1cb370: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cb370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cb374: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x1cb374u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1cb378: 0x24e7fffe  addiu       $a3, $a3, -0x2
    ctx->pc = 0x1cb378u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967294));
    // 0x1cb37c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1cb37cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1cb380: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x1cb380u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1cb384: 0x2463021  addu        $a2, $s2, $a2
    ctx->pc = 0x1cb384u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x1cb388: 0xc5630000  lwc1        $f3, 0x0($t3)
    ctx->pc = 0x1cb388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cb38c: 0x46801120  cvt.s.w     $f4, $f2
    ctx->pc = 0x1cb38cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x1cb390: 0xac28f004  sw          $t0, -0xFFC($at)
    ctx->pc = 0x1cb390u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 8));
    // 0x1cb394: 0xc4c20010  lwc1        $f2, 0x10($a2)
    ctx->pc = 0x1cb394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cb398: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cb398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cb39c: 0x4604081a  mula.s      $f1, $f4
    ctx->pc = 0x1cb39cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[4]));
    // 0x1cb3a0: 0x460300dc  madd.s      $f3, $f0, $f3
    ctx->pc = 0x1cb3a0u;
    ctx->f[3] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[3]));
    // 0x1cb3a4: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x1cb3a4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x1cb3a8: 0xe4c20010  swc1        $f2, 0x10($a2)
    ctx->pc = 0x1cb3a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
    // 0x1cb3ac: 0x8c26f004  lw          $a2, -0xFFC($at)
    ctx->pc = 0x1cb3acu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81F004u));
    // 0x1cb3b0: 0x63840  sll         $a3, $a2, 1
    ctx->pc = 0x1cb3b0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x1cb3b4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cb3b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cb3b8: 0x637c2  srl         $a2, $a2, 31
    ctx->pc = 0x1cb3b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x1cb3bc: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x1cb3bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1cb3c0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1cb3c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1cb3c4: 0xca3026  xor         $a2, $a2, $t2
    ctx->pc = 0x1cb3c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 10));
    // 0x1cb3c8: 0x63a02  srl         $a3, $a2, 8
    ctx->pc = 0x1cb3c8u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
    // 0x1cb3cc: 0xac26f004  sw          $a2, -0xFFC($at)
    ctx->pc = 0x1cb3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 6));
    // 0x1cb3d0: 0x30e70003  andi        $a3, $a3, 0x3
    ctx->pc = 0x1cb3d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3);
    // 0x1cb3d4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cb3d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cb3d8: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x1cb3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1cb3dc: 0x24e7fffe  addiu       $a3, $a3, -0x2
    ctx->pc = 0x1cb3dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967294));
    // 0x1cb3e0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1cb3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1cb3e4: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x1cb3e4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1cb3e8: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x1cb3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1cb3ec: 0xc5630000  lwc1        $f3, 0x0($t3)
    ctx->pc = 0x1cb3ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cb3f0: 0x46801120  cvt.s.w     $f4, $f2
    ctx->pc = 0x1cb3f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x1cb3f4: 0xac26f004  sw          $a2, -0xFFC($at)
    ctx->pc = 0x1cb3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 6));
    // 0x1cb3f8: 0xc4a20010  lwc1        $f2, 0x10($a1)
    ctx->pc = 0x1cb3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cb3fc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cb3fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cb400: 0x4604081a  mula.s      $f1, $f4
    ctx->pc = 0x1cb400u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[4]));
    // 0x1cb404: 0x460300dc  madd.s      $f3, $f0, $f3
    ctx->pc = 0x1cb404u;
    ctx->f[3] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[3]));
    // 0x1cb408: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x1cb408u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x1cb40c: 0xe4a20010  swc1        $f2, 0x10($a1)
    ctx->pc = 0x1cb40cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x1cb410: 0x8c25f004  lw          $a1, -0xFFC($at)
    ctx->pc = 0x1cb410u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81F004u));
    // 0x1cb414: 0x53040  sll         $a2, $a1, 1
    ctx->pc = 0x1cb414u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1cb418: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cb418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cb41c: 0x52fc2  srl         $a1, $a1, 31
    ctx->pc = 0x1cb41cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x1cb420: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x1cb420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1cb424: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1cb424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1cb428: 0xaa2826  xor         $a1, $a1, $t2
    ctx->pc = 0x1cb428u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 10));
    // 0x1cb42c: 0x53202  srl         $a2, $a1, 8
    ctx->pc = 0x1cb42cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x1cb430: 0xac25f004  sw          $a1, -0xFFC($at)
    ctx->pc = 0x1cb430u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 5));
    // 0x1cb434: 0x30c60003  andi        $a2, $a2, 0x3
    ctx->pc = 0x1cb434u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
    // 0x1cb438: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cb438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cb43c: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x1cb43cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1cb440: 0x24c6fffe  addiu       $a2, $a2, -0x2
    ctx->pc = 0x1cb440u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967294));
    // 0x1cb444: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1cb444u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1cb448: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x1cb448u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1cb44c: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x1cb44cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x1cb450: 0xc5630000  lwc1        $f3, 0x0($t3)
    ctx->pc = 0x1cb450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cb454: 0x46801120  cvt.s.w     $f4, $f2
    ctx->pc = 0x1cb454u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x1cb458: 0xac25f004  sw          $a1, -0xFFC($at)
    ctx->pc = 0x1cb458u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 5));
    // 0x1cb45c: 0xc4820010  lwc1        $f2, 0x10($a0)
    ctx->pc = 0x1cb45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cb460: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cb460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cb464: 0x4604081a  mula.s      $f1, $f4
    ctx->pc = 0x1cb464u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[4]));
    // 0x1cb468: 0x460300dc  madd.s      $f3, $f0, $f3
    ctx->pc = 0x1cb468u;
    ctx->f[3] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[3]));
    // 0x1cb46c: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x1cb46cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x1cb470: 0xe4820010  swc1        $f2, 0x10($a0)
    ctx->pc = 0x1cb470u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x1cb474: 0x8c24f004  lw          $a0, -0xFFC($at)
    ctx->pc = 0x1cb474u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81F004u));
    // 0x1cb478: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x1cb478u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1cb47c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cb47cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cb480: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x1cb480u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x1cb484: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1cb484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1cb488: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1cb488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1cb48c: 0x8a2026  xor         $a0, $a0, $t2
    ctx->pc = 0x1cb48cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 10));
    // 0x1cb490: 0x42a02  srl         $a1, $a0, 8
    ctx->pc = 0x1cb490u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x1cb494: 0xac24f004  sw          $a0, -0xFFC($at)
    ctx->pc = 0x1cb494u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 4));
    // 0x1cb498: 0x30a50003  andi        $a1, $a1, 0x3
    ctx->pc = 0x1cb498u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
    // 0x1cb49c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cb49cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cb4a0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1cb4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1cb4a4: 0x24a5fffe  addiu       $a1, $a1, -0x2
    ctx->pc = 0x1cb4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
    // 0x1cb4a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1cb4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cb4ac: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x1cb4acu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1cb4b0: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x1cb4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1cb4b4: 0xc5630000  lwc1        $f3, 0x0($t3)
    ctx->pc = 0x1cb4b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cb4b8: 0x46801120  cvt.s.w     $f4, $f2
    ctx->pc = 0x1cb4b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x1cb4bc: 0xac24f004  sw          $a0, -0xFFC($at)
    ctx->pc = 0x1cb4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 4));
    // 0x1cb4c0: 0xc4620010  lwc1        $f2, 0x10($v1)
    ctx->pc = 0x1cb4c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cb4c4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cb4c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cb4c8: 0x4604081a  mula.s      $f1, $f4
    ctx->pc = 0x1cb4c8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[4]));
    // 0x1cb4cc: 0x460300dc  madd.s      $f3, $f0, $f3
    ctx->pc = 0x1cb4ccu;
    ctx->f[3] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[3]));
    // 0x1cb4d0: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x1cb4d0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x1cb4d4: 0xe4620010  swc1        $f2, 0x10($v1)
    ctx->pc = 0x1cb4d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x1cb4d8: 0x8c23f004  lw          $v1, -0xFFC($at)
    ctx->pc = 0x1cb4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81F004u));
    // 0x1cb4dc: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x1cb4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1cb4e0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cb4e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cb4e4: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x1cb4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x1cb4e8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1cb4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1cb4ec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1cb4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1cb4f0: 0x6a1826  xor         $v1, $v1, $t2
    ctx->pc = 0x1cb4f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 10));
    // 0x1cb4f4: 0x32202  srl         $a0, $v1, 8
    ctx->pc = 0x1cb4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x1cb4f8: 0xac23f004  sw          $v1, -0xFFC($at)
    ctx->pc = 0x1cb4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 3));
    // 0x1cb4fc: 0x30850003  andi        $a1, $a0, 0x3
    ctx->pc = 0x1cb4fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x1cb500: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cb500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cb504: 0xa92021  addu        $a0, $a1, $t1
    ctx->pc = 0x1cb504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x1cb508: 0x24a5fffe  addiu       $a1, $a1, -0x2
    ctx->pc = 0x1cb508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
    // 0x1cb50c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1cb50cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1cb510: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x1cb510u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1cb514: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x1cb514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x1cb518: 0xc5630000  lwc1        $f3, 0x0($t3)
    ctx->pc = 0x1cb518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cb51c: 0x46801120  cvt.s.w     $f4, $f2
    ctx->pc = 0x1cb51cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x1cb520: 0xac23f004  sw          $v1, -0xFFC($at)
    ctx->pc = 0x1cb520u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 3));
    // 0x1cb524: 0xc4820010  lwc1        $f2, 0x10($a0)
    ctx->pc = 0x1cb524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cb528: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cb528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cb52c: 0x4604081a  mula.s      $f1, $f4
    ctx->pc = 0x1cb52cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[4]));
    // 0x1cb530: 0x460300dc  madd.s      $f3, $f0, $f3
    ctx->pc = 0x1cb530u;
    ctx->f[3] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[3]));
    // 0x1cb534: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x1cb534u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x1cb538: 0xe4820010  swc1        $f2, 0x10($a0)
    ctx->pc = 0x1cb538u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x1cb53c: 0x8c23f004  lw          $v1, -0xFFC($at)
    ctx->pc = 0x1cb53cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81F004u));
    // 0x1cb540: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x1cb540u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1cb544: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cb544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cb548: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x1cb548u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x1cb54c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1cb54cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1cb550: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1cb550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1cb554: 0x6a2826  xor         $a1, $v1, $t2
    ctx->pc = 0x1cb554u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 10));
    // 0x1cb558: 0x51a02  srl         $v1, $a1, 8
    ctx->pc = 0x1cb558u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x1cb55c: 0xac25f004  sw          $a1, -0xFFC($at)
    ctx->pc = 0x1cb55cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 5));
    // 0x1cb560: 0x30640003  andi        $a0, $v1, 0x3
    ctx->pc = 0x1cb560u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1cb564: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cb564u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cb568: 0x961821  addu        $v1, $a0, $s6
    ctx->pc = 0x1cb568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
    // 0x1cb56c: 0x2484fffe  addiu       $a0, $a0, -0x2
    ctx->pc = 0x1cb56cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
    // 0x1cb570: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1cb570u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cb574: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x1cb574u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1cb578: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x1cb578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1cb57c: 0xc5630000  lwc1        $f3, 0x0($t3)
    ctx->pc = 0x1cb57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cb580: 0x46801120  cvt.s.w     $f4, $f2
    ctx->pc = 0x1cb580u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x1cb584: 0xac25f004  sw          $a1, -0xFFC($at)
    ctx->pc = 0x1cb584u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 5));
    // 0x1cb588: 0xc4620010  lwc1        $f2, 0x10($v1)
    ctx->pc = 0x1cb588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cb58c: 0x4604081a  mula.s      $f1, $f4
    ctx->pc = 0x1cb58cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[4]));
    // 0x1cb590: 0x460300dc  madd.s      $f3, $f0, $f3
    ctx->pc = 0x1cb590u;
    ctx->f[3] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[3]));
    // 0x1cb594: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x1cb594u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x1cb598: 0x15c0ff27  bnez        $t6, . + 4 + (-0xD9 << 2)
    ctx->pc = 0x1CB598u;
    {
        const bool branch_taken_0x1cb598 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB598u;
        // 0x1cb59c: 0xe4620010  swc1        $f2, 0x10($v1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb598) {
            ctx->pc = 0x1CB238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb238;
        }
    }
    ctx->pc = 0x1CB5A0u;
label_1cb5a0:
    // 0x1cb5a0: 0x1b4082b  sltu        $at, $t5, $s4
    ctx->pc = 0x1cb5a0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x1cb5a4: 0x1020002e  beqz        $at, . + 4 + (0x2E << 2)
    ctx->pc = 0x1CB5A4u;
    {
        const bool branch_taken_0x1cb5a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB5A4u;
        // 0x1cb5a8: 0x172100  sll         $a0, $s7, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb5a4) {
            ctx->pc = 0x1CB660u;
            goto label_1cb660;
        }
    }
    ctx->pc = 0x1CB5ACu;
    // 0x1cb5ac: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1cb5acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1cb5b0: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x1cb5b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x1cb5b4: 0x24636540  addiu       $v1, $v1, 0x6540
    ctx->pc = 0x1cb5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25920));
    // 0x1cb5b8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1cb5b8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1cb5bc: 0x30840fff  andi        $a0, $a0, 0xFFF
    ctx->pc = 0x1cb5bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x1cb5c0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1cb5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1cb5c4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1cb5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1cb5c8: 0x3c053cf5  lui         $a1, 0x3CF5
    ctx->pc = 0x1cb5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15605 << 16));
    // 0x1cb5cc: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x1cb5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x1cb5d0: 0x34a5c28f  ori         $a1, $a1, 0xC28F
    ctx->pc = 0x1cb5d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)49807);
    // 0x1cb5d4: 0x3463a9e5  ori         $v1, $v1, 0xA9E5
    ctx->pc = 0x1cb5d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x1cb5d8: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x1cb5d8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1cb5dc: 0x3c053ecc  lui         $a1, 0x3ECC
    ctx->pc = 0x1cb5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16076 << 16));
    // 0x1cb5e0: 0x34a5cccd  ori         $a1, $a1, 0xCCCD
    ctx->pc = 0x1cb5e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52429);
    // 0x1cb5e4: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x1cb5e4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1cb5e8:
    // 0x1cb5e8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cb5e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cb5ec: 0x8c25f004  lw          $a1, -0xFFC($at)
    ctx->pc = 0x1cb5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81F004u));
    // 0x1cb5f0: 0x1b13018  mult        $a2, $t5, $s1
    ctx->pc = 0x1cb5f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1cb5f4: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x1cb5f4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x1cb5f8: 0x53840  sll         $a3, $a1, 1
    ctx->pc = 0x1cb5f8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1cb5fc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cb5fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cb600: 0x52fc2  srl         $a1, $a1, 31
    ctx->pc = 0x1cb600u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x1cb604: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x1cb604u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1cb608: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1cb608u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1cb60c: 0x1b4282b  sltu        $a1, $t5, $s4
    ctx->pc = 0x1cb60cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x1cb610: 0xe34026  xor         $t0, $a3, $v1
    ctx->pc = 0x1cb610u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 3));
    // 0x1cb614: 0x83a02  srl         $a3, $t0, 8
    ctx->pc = 0x1cb614u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 8), 8));
    // 0x1cb618: 0xac28f004  sw          $t0, -0xFFC($at)
    ctx->pc = 0x1cb618u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 8));
    // 0x1cb61c: 0x30e70003  andi        $a3, $a3, 0x3
    ctx->pc = 0x1cb61cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3);
    // 0x1cb620: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cb620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cb624: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x1cb624u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1cb628: 0x24e7fffe  addiu       $a3, $a3, -0x2
    ctx->pc = 0x1cb628u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967294));
    // 0x1cb62c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1cb62cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1cb630: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x1cb630u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb634: 0x2463021  addu        $a2, $s2, $a2
    ctx->pc = 0x1cb634u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x1cb638: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x1cb638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cb63c: 0x46800120  cvt.s.w     $f4, $f0
    ctx->pc = 0x1cb63cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x1cb640: 0xac28f004  sw          $t0, -0xFFC($at)
    ctx->pc = 0x1cb640u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 8));
    // 0x1cb644: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x1cb644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb648: 0x4604181a  mula.s      $f3, $f4
    ctx->pc = 0x1cb648u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[4]));
    // 0x1cb64c: 0x4601105c  madd.s      $f1, $f2, $f1
    ctx->pc = 0x1cb64cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x1cb650: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1cb650u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cb654: 0x14a0ffe4  bnez        $a1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1CB654u;
    {
        const bool branch_taken_0x1cb654 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB654u;
        // 0x1cb658: 0xe4c00010  swc1        $f0, 0x10($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb654) {
            ctx->pc = 0x1CB5E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb5e8;
        }
    }
    ctx->pc = 0x1CB65Cu;
    // 0x1cb65c: 0x0  nop
    ctx->pc = 0x1cb65cu;
    // NOP
label_1cb660:
    // 0x1cb660: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1cb660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1cb664: 0x94246ac4  lhu         $a0, 0x6AC4($at)
    ctx->pc = 0x1cb664u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x1cb668: 0x24030110  addiu       $v1, $zero, 0x110
    ctx->pc = 0x1cb668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    // 0x1cb66c: 0x148300ce  bne         $a0, $v1, . + 4 + (0xCE << 2)
    ctx->pc = 0x1CB66Cu;
    {
        const bool branch_taken_0x1cb66c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1CB670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB66Cu;
        // 0x1cb670: 0x32e30003  andi        $v1, $s7, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb66c) {
            ctx->pc = 0x1CB9A8u;
            goto label_1cb9a8;
        }
    }
    ctx->pc = 0x1CB674u;
    // 0x1cb674: 0x1460002c  bnez        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x1CB674u;
    {
        const bool branch_taken_0x1cb674 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB674u;
        // 0x1cb678: 0x172082  srl         $a0, $s7, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 23), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb674) {
            ctx->pc = 0x1CB728u;
            goto label_1cb728;
        }
    }
    ctx->pc = 0x1CB67Cu;
    // 0x1cb67c: 0x151840  sll         $v1, $s5, 1
    ctx->pc = 0x1cb67cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
    // 0x1cb680: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x1cb680u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x1cb684: 0x0  nop
    ctx->pc = 0x1cb684u;
    // NOP
    // 0x1cb688: 0x0  nop
    ctx->pc = 0x1cb688u;
    // NOP
    // 0x1cb68c: 0x1810  mfhi        $v1
    ctx->pc = 0x1cb68cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1cb690: 0x751823  subu        $v1, $v1, $s5
    ctx->pc = 0x1cb690u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x1cb694: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CB694u;
    {
        const bool branch_taken_0x1cb694 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb694) {
            ctx->pc = 0x1CB6A4u;
            goto label_1cb6a4;
        }
    }
    ctx->pc = 0x1CB69Cu;
    // 0x1cb69c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CB69Cu;
    {
        const bool branch_taken_0x1cb69c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb69c) {
            ctx->pc = 0x1CB6A8u;
            goto label_1cb6a8;
        }
    }
    ctx->pc = 0x1CB6A4u;
label_1cb6a4:
    // 0x1cb6a4: 0x31823  negu        $v1, $v1
    ctx->pc = 0x1cb6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_1cb6a8:
    // 0x1cb6a8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cb6a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cb6ac: 0x3c04873c  lui         $a0, 0x873C
    ctx->pc = 0x1cb6acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34620 << 16));
    // 0x1cb6b0: 0x8c25f004  lw          $a1, -0xFFC($at)
    ctx->pc = 0x1cb6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81F004u));
    // 0x1cb6b4: 0x3484a9e5  ori         $a0, $a0, 0xA9E5
    ctx->pc = 0x1cb6b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)43493);
    // 0x1cb6b8: 0x53040  sll         $a2, $a1, 1
    ctx->pc = 0x1cb6b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1cb6bc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cb6bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cb6c0: 0x52fc2  srl         $a1, $a1, 31
    ctx->pc = 0x1cb6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x1cb6c4: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x1cb6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1cb6c8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1cb6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1cb6cc: 0xa42026  xor         $a0, $a1, $a0
    ctx->pc = 0x1cb6ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 4));
    // 0x1cb6d0: 0xac24f004  sw          $a0, -0xFFC($at)
    ctx->pc = 0x1cb6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 4));
    // 0x1cb6d4: 0x42202  srl         $a0, $a0, 8
    ctx->pc = 0x1cb6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x1cb6d8: 0x30840003  andi        $a0, $a0, 0x3
    ctx->pc = 0x1cb6d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x1cb6dc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1cb6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1cb6e0: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CB6E0u;
    {
        const bool branch_taken_0x1cb6e0 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x1CB6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB6E0u;
        // 0x1cb6e4: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb6e0) {
            ctx->pc = 0x1CB6F4u;
            goto label_1cb6f4;
        }
    }
    ctx->pc = 0x1CB6E8u;
    // 0x1cb6e8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1cb6e8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb6ec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1CB6ECu;
    {
        const bool branch_taken_0x1cb6ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB6ECu;
        // 0x1cb6f0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb6ec) {
            ctx->pc = 0x1CB70Cu;
            goto label_1cb70c;
        }
    }
    ctx->pc = 0x1CB6F4u;
label_1cb6f4:
    // 0x1cb6f4: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x1cb6f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1cb6f8: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x1cb6f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1cb6fc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1cb6fcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb700: 0x0  nop
    ctx->pc = 0x1cb700u;
    // NOP
    // 0x1cb704: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cb704u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1cb708: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1cb708u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1cb70c:
    // 0x1cb70c: 0x2604fffe  addiu       $a0, $s0, -0x2
    ctx->pc = 0x1cb70cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967294));
    // 0x1cb710: 0x912018  mult        $a0, $a0, $s1
    ctx->pc = 0x1cb710u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1cb714: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1cb714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1cb718: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1cb718u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cb71c: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1cb71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1cb720: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x1cb720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x1cb724: 0x0  nop
    ctx->pc = 0x1cb724u;
    // NOP
label_1cb728:
    // 0x1cb728: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x1cb728u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb72c: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x1cb72cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
    // 0x1cb730: 0x262afff8  addiu       $t2, $s1, -0x8
    ctx->pc = 0x1cb730u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
    // 0x1cb734: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x1cb734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x1cb738: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1cb738u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cb73c: 0x0  nop
    ctx->pc = 0x1cb73cu;
    // NOP
label_1cb740:
    // 0x1cb740: 0x11082b  sltu        $at, $zero, $s1
    ctx->pc = 0x1cb740u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1cb744: 0x1020004c  beqz        $at, . + 4 + (0x4C << 2)
    ctx->pc = 0x1CB744u;
    {
        const bool branch_taken_0x1cb744 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB744u;
        // 0x1cb748: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb744) {
            ctx->pc = 0x1CB878u;
            goto label_1cb878;
        }
    }
    ctx->pc = 0x1CB74Cu;
    // 0x1cb74c: 0x2e210009  sltiu       $at, $s1, 0x9
    ctx->pc = 0x1cb74cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x1cb750: 0x1420003b  bnez        $at, . + 4 + (0x3B << 2)
    ctx->pc = 0x1CB750u;
    {
        const bool branch_taken_0x1cb750 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB750u;
        // 0x1cb754: 0x1914818  mult        $t1, $t4, $s1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb750) {
            ctx->pc = 0x1CB840u;
            goto label_1cb840;
        }
    }
    ctx->pc = 0x1CB758u;
label_1cb758:
    // 0x1cb758: 0x1691821  addu        $v1, $t3, $t1
    ctx->pc = 0x1cb758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x1cb75c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1cb75cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cb760: 0x25640001  addiu       $a0, $t3, 0x1
    ctx->pc = 0x1cb760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x1cb764: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1cb764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1cb768: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x1cb768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x1cb76c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1cb76cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb770: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1cb770u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1cb774: 0x2644021  addu        $t0, $s3, $a0
    ctx->pc = 0x1cb774u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x1cb778: 0x256d0006  addiu       $t5, $t3, 0x6
    ctx->pc = 0x1cb778u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 11), 6));
    // 0x1cb77c: 0x25640002  addiu       $a0, $t3, 0x2
    ctx->pc = 0x1cb77cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
    // 0x1cb780: 0x1a96821  addu        $t5, $t5, $t1
    ctx->pc = 0x1cb780u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 9)));
    // 0x1cb784: 0x892821  addu        $a1, $a0, $t1
    ctx->pc = 0x1cb784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x1cb788: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1cb788u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1cb78c: 0x25640003  addiu       $a0, $t3, 0x3
    ctx->pc = 0x1cb78cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 3));
    // 0x1cb790: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x1cb790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x1cb794: 0x2653821  addu        $a3, $s3, $a1
    ctx->pc = 0x1cb794u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x1cb798: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cb798u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1cb79c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1cb79cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1cb7a0: 0x2643021  addu        $a2, $s3, $a0
    ctx->pc = 0x1cb7a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x1cb7a4: 0x25640004  addiu       $a0, $t3, 0x4
    ctx->pc = 0x1cb7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x1cb7a8: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x1cb7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x1cb7ac: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x1cb7acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1cb7b0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1cb7b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1cb7b4: 0x25640005  addiu       $a0, $t3, 0x5
    ctx->pc = 0x1cb7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 5));
    // 0x1cb7b8: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x1cb7b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb7bc: 0xd1880  sll         $v1, $t5, 2
    ctx->pc = 0x1cb7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x1cb7c0: 0x256d0007  addiu       $t5, $t3, 0x7
    ctx->pc = 0x1cb7c0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 11), 7));
    // 0x1cb7c4: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x1cb7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x1cb7c8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1cb7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1cb7cc: 0x1a96821  addu        $t5, $t5, $t1
    ctx->pc = 0x1cb7ccu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 9)));
    // 0x1cb7d0: 0xd7080  sll         $t6, $t5, 2
    ctx->pc = 0x1cb7d0u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x1cb7d4: 0x256b0008  addiu       $t3, $t3, 0x8
    ctx->pc = 0x1cb7d4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
    // 0x1cb7d8: 0x2652821  addu        $a1, $s3, $a1
    ctx->pc = 0x1cb7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x1cb7dc: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x1cb7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x1cb7e0: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1cb7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1cb7e4: 0x26e7021  addu        $t6, $s3, $t6
    ctx->pc = 0x1cb7e4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 14)));
    // 0x1cb7e8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cb7e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1cb7ec: 0x16a682b  sltu        $t5, $t3, $t2
    ctx->pc = 0x1cb7ecu;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x1cb7f0: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x1cb7f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x1cb7f4: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x1cb7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb7f8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cb7f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1cb7fc: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x1cb7fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x1cb800: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x1cb800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb804: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cb804u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1cb808: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x1cb808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x1cb80c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1cb80cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb810: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cb810u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1cb814: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1cb814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1cb818: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1cb818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb81c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cb81cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1cb820: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1cb820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1cb824: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1cb824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb828: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cb828u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1cb82c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1cb82cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1cb830: 0xc5c00000  lwc1        $f0, 0x0($t6)
    ctx->pc = 0x1cb830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb834: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cb834u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1cb838: 0x15a0ffc7  bnez        $t5, . + 4 + (-0x39 << 2)
    ctx->pc = 0x1CB838u;
    {
        const bool branch_taken_0x1cb838 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB838u;
        // 0x1cb83c: 0xe5c00000  swc1        $f0, 0x0($t6) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb838) {
            ctx->pc = 0x1CB758u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb758;
        }
    }
    ctx->pc = 0x1CB840u;
label_1cb840:
    // 0x1cb840: 0x171082b  sltu        $at, $t3, $s1
    ctx->pc = 0x1cb840u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1cb844: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x1CB844u;
    {
        const bool branch_taken_0x1cb844 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB844u;
        // 0x1cb848: 0x1912818  mult        $a1, $t4, $s1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb844) {
            ctx->pc = 0x1CB878u;
            goto label_1cb878;
        }
    }
    ctx->pc = 0x1CB84Cu;
    // 0x1cb84c: 0x0  nop
    ctx->pc = 0x1cb84cu;
    // NOP
label_1cb850:
    // 0x1cb850: 0x1651821  addu        $v1, $t3, $a1
    ctx->pc = 0x1cb850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 5)));
    // 0x1cb854: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1cb854u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cb858: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1cb858u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x1cb85c: 0x2632021  addu        $a0, $s3, $v1
    ctx->pc = 0x1cb85cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1cb860: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1cb860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb864: 0x171182b  sltu        $v1, $t3, $s1
    ctx->pc = 0x1cb864u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1cb868: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cb868u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1cb86c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1CB86Cu;
    {
        const bool branch_taken_0x1cb86c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB86Cu;
        // 0x1cb870: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb86c) {
            ctx->pc = 0x1CB850u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb850;
        }
    }
    ctx->pc = 0x1CB874u;
    // 0x1cb874: 0x0  nop
    ctx->pc = 0x1cb874u;
    // NOP
label_1cb878:
    // 0x1cb878: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x1cb878u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x1cb87c: 0x29830008  slti        $v1, $t4, 0x8
    ctx->pc = 0x1cb87cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1cb880: 0x1460ffaf  bnez        $v1, . + 4 + (-0x51 << 2)
    ctx->pc = 0x1CB880u;
    {
        const bool branch_taken_0x1cb880 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB880u;
        // 0x1cb884: 0x11082b  sltu        $at, $zero, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb880) {
            ctx->pc = 0x1CB740u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb740;
        }
    }
    ctx->pc = 0x1CB888u;
    // 0x1cb888: 0x10200047  beqz        $at, . + 4 + (0x47 << 2)
    ctx->pc = 0x1CB888u;
    {
        const bool branch_taken_0x1cb888 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB888u;
        // 0x1cb88c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb888) {
            ctx->pc = 0x1CB9A8u;
            goto label_1cb9a8;
        }
    }
    ctx->pc = 0x1CB890u;
    // 0x1cb890: 0x2e210009  sltiu       $at, $s1, 0x9
    ctx->pc = 0x1cb890u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x1cb894: 0x14200036  bnez        $at, . + 4 + (0x36 << 2)
    ctx->pc = 0x1CB894u;
    {
        const bool branch_taken_0x1cb894 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB894u;
        // 0x1cb898: 0x2623fff8  addiu       $v1, $s1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb894) {
            ctx->pc = 0x1CB970u;
            goto label_1cb970;
        }
    }
    ctx->pc = 0x1CB89Cu;
    // 0x1cb89c: 0x0  nop
    ctx->pc = 0x1cb89cu;
    // NOP
label_1cb8a0:
    // 0x1cb8a0: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x1cb8a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1cb8a4: 0x2462821  addu        $a1, $s2, $a2
    ctx->pc = 0x1cb8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x1cb8a8: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1cb8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1cb8ac: 0x2663021  addu        $a2, $s3, $a2
    ctx->pc = 0x1cb8acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x1cb8b0: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x1cb8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1cb8b4: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x1cb8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x1cb8b8: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x1cb8b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1cb8bc: 0x2462821  addu        $a1, $s2, $a2
    ctx->pc = 0x1cb8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x1cb8c0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1cb8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1cb8c4: 0x2663021  addu        $a2, $s3, $a2
    ctx->pc = 0x1cb8c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x1cb8c8: 0x24850002  addiu       $a1, $a0, 0x2
    ctx->pc = 0x1cb8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x1cb8cc: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x1cb8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x1cb8d0: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x1cb8d0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1cb8d4: 0x2462821  addu        $a1, $s2, $a2
    ctx->pc = 0x1cb8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x1cb8d8: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1cb8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1cb8dc: 0x2663021  addu        $a2, $s3, $a2
    ctx->pc = 0x1cb8dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x1cb8e0: 0x24850003  addiu       $a1, $a0, 0x3
    ctx->pc = 0x1cb8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x1cb8e4: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x1cb8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x1cb8e8: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x1cb8e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1cb8ec: 0x2462821  addu        $a1, $s2, $a2
    ctx->pc = 0x1cb8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x1cb8f0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1cb8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1cb8f4: 0x2663021  addu        $a2, $s3, $a2
    ctx->pc = 0x1cb8f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x1cb8f8: 0x24850004  addiu       $a1, $a0, 0x4
    ctx->pc = 0x1cb8f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1cb8fc: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x1cb8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x1cb900: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x1cb900u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1cb904: 0x2462821  addu        $a1, $s2, $a2
    ctx->pc = 0x1cb904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x1cb908: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1cb908u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1cb90c: 0x2663021  addu        $a2, $s3, $a2
    ctx->pc = 0x1cb90cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x1cb910: 0x24850005  addiu       $a1, $a0, 0x5
    ctx->pc = 0x1cb910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 5));
    // 0x1cb914: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x1cb914u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x1cb918: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x1cb918u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1cb91c: 0x2462821  addu        $a1, $s2, $a2
    ctx->pc = 0x1cb91cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x1cb920: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1cb920u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1cb924: 0x2663021  addu        $a2, $s3, $a2
    ctx->pc = 0x1cb924u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x1cb928: 0x24850006  addiu       $a1, $a0, 0x6
    ctx->pc = 0x1cb928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 6));
    // 0x1cb92c: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x1cb92cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x1cb930: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x1cb930u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1cb934: 0x2462821  addu        $a1, $s2, $a2
    ctx->pc = 0x1cb934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x1cb938: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1cb938u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1cb93c: 0x2663021  addu        $a2, $s3, $a2
    ctx->pc = 0x1cb93cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x1cb940: 0x24850007  addiu       $a1, $a0, 0x7
    ctx->pc = 0x1cb940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
    // 0x1cb944: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x1cb944u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x1cb948: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1cb948u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1cb94c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1cb94cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1cb950: 0x2453021  addu        $a2, $s2, $a1
    ctx->pc = 0x1cb950u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1cb954: 0x2652821  addu        $a1, $s3, $a1
    ctx->pc = 0x1cb954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x1cb958: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x1cb958u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x1cb95c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1cb95cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1cb960: 0x83282b  sltu        $a1, $a0, $v1
    ctx->pc = 0x1cb960u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1cb964: 0x14a0ffce  bnez        $a1, . + 4 + (-0x32 << 2)
    ctx->pc = 0x1CB964u;
    {
        const bool branch_taken_0x1cb964 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cb964) {
            ctx->pc = 0x1CB8A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb8a0;
        }
    }
    ctx->pc = 0x1CB96Cu;
    // 0x1cb96c: 0x0  nop
    ctx->pc = 0x1cb96cu;
    // NOP
label_1cb970:
    // 0x1cb970: 0x91082b  sltu        $at, $a0, $s1
    ctx->pc = 0x1cb970u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1cb974: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x1CB974u;
    {
        const bool branch_taken_0x1cb974 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb974) {
            ctx->pc = 0x1CB9A8u;
            goto label_1cb9a8;
        }
    }
    ctx->pc = 0x1CB97Cu;
    // 0x1cb97c: 0x0  nop
    ctx->pc = 0x1cb97cu;
    // NOP
label_1cb980:
    // 0x1cb980: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1cb980u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1cb984: 0x2432821  addu        $a1, $s2, $v1
    ctx->pc = 0x1cb984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1cb988: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1cb988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1cb98c: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1cb98cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1cb990: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1cb990u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1cb994: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1cb994u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1cb998: 0x91182b  sltu        $v1, $a0, $s1
    ctx->pc = 0x1cb998u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1cb99c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1CB99Cu;
    {
        const bool branch_taken_0x1cb99c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cb99c) {
            ctx->pc = 0x1CB980u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb980;
        }
    }
    ctx->pc = 0x1CB9A4u;
    // 0x1cb9a4: 0x0  nop
    ctx->pc = 0x1cb9a4u;
    // NOP
label_1cb9a8:
    // 0x1cb9a8: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1cb9a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1cb9ac: 0x94256ac4  lhu         $a1, 0x6AC4($at)
    ctx->pc = 0x1cb9acu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x1cb9b0: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x1cb9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1cb9b4: 0x10a30008  beq         $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CB9B4u;
    {
        const bool branch_taken_0x1cb9b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1CB9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB9B4u;
        // 0x1cb9b8: 0x24030403  addiu       $v1, $zero, 0x403 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1027));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb9b4) {
            ctx->pc = 0x1CB9D8u;
            goto label_1cb9d8;
        }
    }
    ctx->pc = 0x1CB9BCu;
    // 0x1cb9bc: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CB9BCu;
    {
        const bool branch_taken_0x1cb9bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1cb9bc) {
            ctx->pc = 0x1CB9D8u;
            goto label_1cb9d8;
        }
    }
    ctx->pc = 0x1CB9C4u;
    // 0x1cb9c4: 0x24030410  addiu       $v1, $zero, 0x410
    ctx->pc = 0x1cb9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1040));
    // 0x1cb9c8: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CB9C8u;
    {
        const bool branch_taken_0x1cb9c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1CB9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB9C8u;
        // 0x1cb9cc: 0x24030413  addiu       $v1, $zero, 0x413 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1043));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb9c8) {
            ctx->pc = 0x1CB9D8u;
            goto label_1cb9d8;
        }
    }
    ctx->pc = 0x1CB9D0u;
    // 0x1cb9d0: 0x14a301cb  bne         $a1, $v1, . + 4 + (0x1CB << 2)
    ctx->pc = 0x1CB9D0u;
    {
        const bool branch_taken_0x1cb9d0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1cb9d0) {
            ctx->pc = 0x1CC100u;
            goto label_1cc100;
        }
    }
    ctx->pc = 0x1CB9D8u;
label_1cb9d8:
    // 0x1cb9d8: 0x8fc4001c  lw          $a0, 0x1C($fp)
    ctx->pc = 0x1cb9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x1cb9dc: 0x8fc30020  lw          $v1, 0x20($fp)
    ctx->pc = 0x1cb9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x1cb9e0: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x1cb9e0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1cb9e4: 0x10200126  beqz        $at, . + 4 + (0x126 << 2)
    ctx->pc = 0x1CB9E4u;
    {
        const bool branch_taken_0x1cb9e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB9E4u;
        // 0x1cb9e8: 0x32e4000f  andi        $a0, $s7, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb9e4) {
            ctx->pc = 0x1CBE80u;
            goto label_1cbe80;
        }
    }
    ctx->pc = 0x1CB9ECu;
    // 0x1cb9ec: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CB9ECu;
    {
        const bool branch_taken_0x1cb9ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB9ECu;
        // 0x1cb9f0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb9ec) {
            ctx->pc = 0x1CBA00u;
            goto label_1cba00;
        }
    }
    ctx->pc = 0x1CB9F4u;
    // 0x1cb9f4: 0x1483006e  bne         $a0, $v1, . + 4 + (0x6E << 2)
    ctx->pc = 0x1CB9F4u;
    {
        const bool branch_taken_0x1cb9f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1cb9f4) {
            ctx->pc = 0x1CBBB0u;
            goto label_1cbbb0;
        }
    }
    ctx->pc = 0x1CB9FCu;
    // 0x1cb9fc: 0x0  nop
    ctx->pc = 0x1cb9fcu;
    // NOP
label_1cba00:
    // 0x1cba00: 0x171882  srl         $v1, $s7, 2
    ctx->pc = 0x1cba00u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 23), 2));
    // 0x1cba04: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1cba04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1cba08: 0x10600035  beqz        $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x1CBA08u;
    {
        const bool branch_taken_0x1cba08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBA08u;
        // 0x1cba0c: 0x26a60004  addiu       $a2, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cba08) {
            ctx->pc = 0x1CBAE0u;
            goto label_1cbae0;
        }
    }
    ctx->pc = 0x1CBA10u;
    // 0x1cba10: 0x2cc10005  sltiu       $at, $a2, 0x5
    ctx->pc = 0x1cba10u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1cba14: 0x14200066  bnez        $at, . + 4 + (0x66 << 2)
    ctx->pc = 0x1CBA14u;
    {
        const bool branch_taken_0x1cba14 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CBA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBA14u;
        // 0x1cba18: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cba14) {
            ctx->pc = 0x1CBBB0u;
            goto label_1cbbb0;
        }
    }
    ctx->pc = 0x1CBA1Cu;
    // 0x1cba1c: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x1cba1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x1cba20: 0x3c054200  lui         $a1, 0x4200
    ctx->pc = 0x1cba20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16896 << 16));
    // 0x1cba24: 0x3464a9e5  ori         $a0, $v1, 0xA9E5
    ctx->pc = 0x1cba24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x1cba28: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x1cba28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x1cba2c: 0x0  nop
    ctx->pc = 0x1cba2cu;
    // NOP
label_1cba30:
    // 0x1cba30: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cba30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cba34: 0x8c29f004  lw          $t1, -0xFFC($at)
    ctx->pc = 0x1cba34u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x81F004u));
    // 0x1cba38: 0x5010003  bgez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CBA38u;
    {
        const bool branch_taken_0x1cba38 = (GPR_S64(ctx, 8) >= 0);
        ctx->pc = 0x1CBA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBA38u;
        // 0x1cba3c: 0x83843  sra         $a3, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cba38) {
            ctx->pc = 0x1CBA48u;
            goto label_1cba48;
        }
    }
    ctx->pc = 0x1CBA40u;
    // 0x1cba40: 0x25070001  addiu       $a3, $t0, 0x1
    ctx->pc = 0x1cba40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1cba44: 0x73843  sra         $a3, $a3, 1
    ctx->pc = 0x1cba44u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 1));
label_1cba48:
    // 0x1cba48: 0x95040  sll         $t2, $t1, 1
    ctx->pc = 0x1cba48u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x1cba4c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cba4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cba50: 0x94fc2  srl         $t1, $t1, 31
    ctx->pc = 0x1cba50u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x1cba54: 0x1494821  addu        $t1, $t2, $t1
    ctx->pc = 0x1cba54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x1cba58: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1cba58u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1cba5c: 0x1244826  xor         $t1, $t1, $a0
    ctx->pc = 0x1cba5cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 4));
    // 0x1cba60: 0xac29f004  sw          $t1, -0xFFC($at)
    ctx->pc = 0x1cba60u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 9));
    // 0x1cba64: 0x94a02  srl         $t1, $t1, 8
    ctx->pc = 0x1cba64u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 8));
    // 0x1cba68: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cba68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cba6c: 0x31290003  andi        $t1, $t1, 0x3
    ctx->pc = 0x1cba6cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)3);
    // 0x1cba70: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x1cba70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x1cba74: 0x2294818  mult        $t1, $s1, $t1
    ctx->pc = 0x1cba74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x1cba78: 0x1094821  addu        $t1, $t0, $t1
    ctx->pc = 0x1cba78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x1cba7c: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x1cba7cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x1cba80: 0x2694821  addu        $t1, $s3, $t1
    ctx->pc = 0x1cba80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 9)));
    // 0x1cba84: 0xad250000  sw          $a1, 0x0($t1)
    ctx->pc = 0x1cba84u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
    // 0x1cba88: 0x8c29f004  lw          $t1, -0xFFC($at)
    ctx->pc = 0x1cba88u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963204)));
    // 0x1cba8c: 0x95040  sll         $t2, $t1, 1
    ctx->pc = 0x1cba8cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x1cba90: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cba90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cba94: 0x94fc2  srl         $t1, $t1, 31
    ctx->pc = 0x1cba94u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x1cba98: 0x1494821  addu        $t1, $t2, $t1
    ctx->pc = 0x1cba98u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x1cba9c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1cba9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1cbaa0: 0x1244826  xor         $t1, $t1, $a0
    ctx->pc = 0x1cbaa0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 4));
    // 0x1cbaa4: 0xac29f004  sw          $t1, -0xFFC($at)
    ctx->pc = 0x1cbaa4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 9));
    // 0x1cbaa8: 0x94a02  srl         $t1, $t1, 8
    ctx->pc = 0x1cbaa8u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 8));
    // 0x1cbaac: 0x31290003  andi        $t1, $t1, 0x3
    ctx->pc = 0x1cbaacu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)3);
    // 0x1cbab0: 0xe93821  addu        $a3, $a3, $t1
    ctx->pc = 0x1cbab0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x1cbab4: 0x72273818  mult1       $a3, $s1, $a3
    ctx->pc = 0x1cbab4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 7); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1cbab8: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x1cbab8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1cbabc: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x1cbabcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1cbac0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1cbac0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1cbac4: 0x2474821  addu        $t1, $s2, $a3
    ctx->pc = 0x1cbac4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x1cbac8: 0x106382b  sltu        $a3, $t0, $a2
    ctx->pc = 0x1cbac8u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1cbacc: 0x14e0ffd8  bnez        $a3, . + 4 + (-0x28 << 2)
    ctx->pc = 0x1CBACCu;
    {
        const bool branch_taken_0x1cbacc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CBAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBACCu;
        // 0x1cbad0: 0xad230000  sw          $v1, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbacc) {
            ctx->pc = 0x1CBA30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cba30;
        }
    }
    ctx->pc = 0x1CBAD4u;
    // 0x1cbad4: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1CBAD4u;
    {
        const bool branch_taken_0x1cbad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbad4) {
            ctx->pc = 0x1CBBB0u;
            goto label_1cbbb0;
        }
    }
    ctx->pc = 0x1CBADCu;
    // 0x1cbadc: 0x0  nop
    ctx->pc = 0x1cbadcu;
    // NOP
label_1cbae0:
    // 0x1cbae0: 0x26a60004  addiu       $a2, $s5, 0x4
    ctx->pc = 0x1cbae0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x1cbae4: 0x2cc10005  sltiu       $at, $a2, 0x5
    ctx->pc = 0x1cbae4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1cbae8: 0x14200031  bnez        $at, . + 4 + (0x31 << 2)
    ctx->pc = 0x1CBAE8u;
    {
        const bool branch_taken_0x1cbae8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CBAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBAE8u;
        // 0x1cbaec: 0x24090004  addiu       $t1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbae8) {
            ctx->pc = 0x1CBBB0u;
            goto label_1cbbb0;
        }
    }
    ctx->pc = 0x1CBAF0u;
    // 0x1cbaf0: 0x114042  srl         $t0, $s1, 1
    ctx->pc = 0x1cbaf0u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
    // 0x1cbaf4: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x1cbaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x1cbaf8: 0x3c054200  lui         $a1, 0x4200
    ctx->pc = 0x1cbaf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16896 << 16));
    // 0x1cbafc: 0x3464a9e5  ori         $a0, $v1, 0xA9E5
    ctx->pc = 0x1cbafcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x1cbb00: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x1cbb00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x1cbb04: 0x0  nop
    ctx->pc = 0x1cbb04u;
    // NOP
label_1cbb08:
    // 0x1cbb08: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cbb08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cbb0c: 0x8c2af004  lw          $t2, -0xFFC($at)
    ctx->pc = 0x1cbb0cu;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x81F004u));
    // 0x1cbb10: 0x5210003  bgez        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CBB10u;
    {
        const bool branch_taken_0x1cbb10 = (GPR_S64(ctx, 9) >= 0);
        ctx->pc = 0x1CBB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBB10u;
        // 0x1cbb14: 0x93843  sra         $a3, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbb10) {
            ctx->pc = 0x1CBB20u;
            goto label_1cbb20;
        }
    }
    ctx->pc = 0x1CBB18u;
    // 0x1cbb18: 0x25270001  addiu       $a3, $t1, 0x1
    ctx->pc = 0x1cbb18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1cbb1c: 0x73843  sra         $a3, $a3, 1
    ctx->pc = 0x1cbb1cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 1));
label_1cbb20:
    // 0x1cbb20: 0xa5840  sll         $t3, $t2, 1
    ctx->pc = 0x1cbb20u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x1cbb24: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cbb24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cbb28: 0xa57c2  srl         $t2, $t2, 31
    ctx->pc = 0x1cbb28u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
    // 0x1cbb2c: 0x1073823  subu        $a3, $t0, $a3
    ctx->pc = 0x1cbb2cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1cbb30: 0x16a5021  addu        $t2, $t3, $t2
    ctx->pc = 0x1cbb30u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x1cbb34: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1cbb34u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1cbb38: 0x1445026  xor         $t2, $t2, $a0
    ctx->pc = 0x1cbb38u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 4));
    // 0x1cbb3c: 0xac2af004  sw          $t2, -0xFFC($at)
    ctx->pc = 0x1cbb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 10));
    // 0x1cbb40: 0xa5202  srl         $t2, $t2, 8
    ctx->pc = 0x1cbb40u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 8));
    // 0x1cbb44: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cbb44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cbb48: 0x314a0003  andi        $t2, $t2, 0x3
    ctx->pc = 0x1cbb48u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)3);
    // 0x1cbb4c: 0xea5021  addu        $t2, $a3, $t2
    ctx->pc = 0x1cbb4cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x1cbb50: 0x22a5018  mult        $t2, $s1, $t2
    ctx->pc = 0x1cbb50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x1cbb54: 0x12a5021  addu        $t2, $t1, $t2
    ctx->pc = 0x1cbb54u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x1cbb58: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x1cbb58u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x1cbb5c: 0x26a5021  addu        $t2, $s3, $t2
    ctx->pc = 0x1cbb5cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 10)));
    // 0x1cbb60: 0xad450000  sw          $a1, 0x0($t2)
    ctx->pc = 0x1cbb60u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 5));
    // 0x1cbb64: 0x8c2af004  lw          $t2, -0xFFC($at)
    ctx->pc = 0x1cbb64u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963204)));
    // 0x1cbb68: 0xa5840  sll         $t3, $t2, 1
    ctx->pc = 0x1cbb68u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x1cbb6c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cbb6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cbb70: 0xa57c2  srl         $t2, $t2, 31
    ctx->pc = 0x1cbb70u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
    // 0x1cbb74: 0x16a5021  addu        $t2, $t3, $t2
    ctx->pc = 0x1cbb74u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x1cbb78: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1cbb78u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1cbb7c: 0x1445026  xor         $t2, $t2, $a0
    ctx->pc = 0x1cbb7cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 4));
    // 0x1cbb80: 0xac2af004  sw          $t2, -0xFFC($at)
    ctx->pc = 0x1cbb80u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 10));
    // 0x1cbb84: 0xa5202  srl         $t2, $t2, 8
    ctx->pc = 0x1cbb84u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 8));
    // 0x1cbb88: 0x314a0003  andi        $t2, $t2, 0x3
    ctx->pc = 0x1cbb88u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)3);
    // 0x1cbb8c: 0xea3821  addu        $a3, $a3, $t2
    ctx->pc = 0x1cbb8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x1cbb90: 0x72273818  mult1       $a3, $s1, $a3
    ctx->pc = 0x1cbb90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 7); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1cbb94: 0x1273821  addu        $a3, $t1, $a3
    ctx->pc = 0x1cbb94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x1cbb98: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x1cbb98u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1cbb9c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1cbb9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1cbba0: 0x2475021  addu        $t2, $s2, $a3
    ctx->pc = 0x1cbba0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x1cbba4: 0x126382b  sltu        $a3, $t1, $a2
    ctx->pc = 0x1cbba4u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1cbba8: 0x14e0ffd7  bnez        $a3, . + 4 + (-0x29 << 2)
    ctx->pc = 0x1CBBA8u;
    {
        const bool branch_taken_0x1cbba8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CBBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBBA8u;
        // 0x1cbbac: 0xad430000  sw          $v1, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbba8) {
            ctx->pc = 0x1CBB08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cbb08;
        }
    }
    ctx->pc = 0x1CBBB0u;
label_1cbbb0:
    // 0x1cbbb0: 0x260cfff8  addiu       $t4, $s0, -0x8
    ctx->pc = 0x1cbbb0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x1cbbb4: 0x190082b  sltu        $at, $t4, $s0
    ctx->pc = 0x1cbbb4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1cbbb8: 0x10200057  beqz        $at, . + 4 + (0x57 << 2)
    ctx->pc = 0x1CBBB8u;
    {
        const bool branch_taken_0x1cbbb8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBBB8u;
        // 0x1cbbbc: 0x3c033f6b  lui         $v1, 0x3F6B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16235 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbbb8) {
            ctx->pc = 0x1CBD18u;
            goto label_1cbd18;
        }
    }
    ctx->pc = 0x1CBBC0u;
    // 0x1cbbc0: 0x262afff8  addiu       $t2, $s1, -0x8
    ctx->pc = 0x1cbbc0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
    // 0x1cbbc4: 0x3463851f  ori         $v1, $v1, 0x851F
    ctx->pc = 0x1cbbc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34079);
    // 0x1cbbc8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1cbbc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cbbcc: 0x0  nop
    ctx->pc = 0x1cbbccu;
    // NOP
label_1cbbd0:
    // 0x1cbbd0: 0x11082b  sltu        $at, $zero, $s1
    ctx->pc = 0x1cbbd0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1cbbd4: 0x1020004c  beqz        $at, . + 4 + (0x4C << 2)
    ctx->pc = 0x1CBBD4u;
    {
        const bool branch_taken_0x1cbbd4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBBD4u;
        // 0x1cbbd8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbbd4) {
            ctx->pc = 0x1CBD08u;
            goto label_1cbd08;
        }
    }
    ctx->pc = 0x1CBBDCu;
    // 0x1cbbdc: 0x2e210009  sltiu       $at, $s1, 0x9
    ctx->pc = 0x1cbbdcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x1cbbe0: 0x1420003b  bnez        $at, . + 4 + (0x3B << 2)
    ctx->pc = 0x1CBBE0u;
    {
        const bool branch_taken_0x1cbbe0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CBBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBBE0u;
        // 0x1cbbe4: 0x1914818  mult        $t1, $t4, $s1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbbe0) {
            ctx->pc = 0x1CBCD0u;
            goto label_1cbcd0;
        }
    }
    ctx->pc = 0x1CBBE8u;
label_1cbbe8:
    // 0x1cbbe8: 0x1691821  addu        $v1, $t3, $t1
    ctx->pc = 0x1cbbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x1cbbec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1cbbecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cbbf0: 0x25640001  addiu       $a0, $t3, 0x1
    ctx->pc = 0x1cbbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x1cbbf4: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1cbbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1cbbf8: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x1cbbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x1cbbfc: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1cbbfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cbc00: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1cbc00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1cbc04: 0x2644021  addu        $t0, $s3, $a0
    ctx->pc = 0x1cbc04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x1cbc08: 0x256d0006  addiu       $t5, $t3, 0x6
    ctx->pc = 0x1cbc08u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 11), 6));
    // 0x1cbc0c: 0x25640002  addiu       $a0, $t3, 0x2
    ctx->pc = 0x1cbc0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
    // 0x1cbc10: 0x1a96821  addu        $t5, $t5, $t1
    ctx->pc = 0x1cbc10u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 9)));
    // 0x1cbc14: 0x892821  addu        $a1, $a0, $t1
    ctx->pc = 0x1cbc14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x1cbc18: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1cbc18u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1cbc1c: 0x25640003  addiu       $a0, $t3, 0x3
    ctx->pc = 0x1cbc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 3));
    // 0x1cbc20: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x1cbc20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x1cbc24: 0x2653821  addu        $a3, $s3, $a1
    ctx->pc = 0x1cbc24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x1cbc28: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cbc28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1cbc2c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1cbc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1cbc30: 0x2643021  addu        $a2, $s3, $a0
    ctx->pc = 0x1cbc30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x1cbc34: 0x25640004  addiu       $a0, $t3, 0x4
    ctx->pc = 0x1cbc34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x1cbc38: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x1cbc38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x1cbc3c: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x1cbc3cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1cbc40: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1cbc40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1cbc44: 0x25640005  addiu       $a0, $t3, 0x5
    ctx->pc = 0x1cbc44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 5));
    // 0x1cbc48: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x1cbc48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cbc4c: 0xd1880  sll         $v1, $t5, 2
    ctx->pc = 0x1cbc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x1cbc50: 0x256d0007  addiu       $t5, $t3, 0x7
    ctx->pc = 0x1cbc50u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 11), 7));
    // 0x1cbc54: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x1cbc54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x1cbc58: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1cbc58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1cbc5c: 0x1a96821  addu        $t5, $t5, $t1
    ctx->pc = 0x1cbc5cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 9)));
    // 0x1cbc60: 0xd7080  sll         $t6, $t5, 2
    ctx->pc = 0x1cbc60u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x1cbc64: 0x256b0008  addiu       $t3, $t3, 0x8
    ctx->pc = 0x1cbc64u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
    // 0x1cbc68: 0x2652821  addu        $a1, $s3, $a1
    ctx->pc = 0x1cbc68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x1cbc6c: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x1cbc6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x1cbc70: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1cbc70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1cbc74: 0x26e7021  addu        $t6, $s3, $t6
    ctx->pc = 0x1cbc74u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 14)));
    // 0x1cbc78: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cbc78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1cbc7c: 0x16a682b  sltu        $t5, $t3, $t2
    ctx->pc = 0x1cbc7cu;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x1cbc80: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x1cbc80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x1cbc84: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x1cbc84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cbc88: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cbc88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1cbc8c: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x1cbc8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x1cbc90: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x1cbc90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cbc94: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cbc94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1cbc98: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x1cbc98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x1cbc9c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1cbc9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cbca0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cbca0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1cbca4: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1cbca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1cbca8: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1cbca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cbcac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cbcacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1cbcb0: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1cbcb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1cbcb4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1cbcb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cbcb8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cbcb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1cbcbc: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1cbcbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1cbcc0: 0xc5c00000  lwc1        $f0, 0x0($t6)
    ctx->pc = 0x1cbcc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cbcc4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cbcc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1cbcc8: 0x15a0ffc7  bnez        $t5, . + 4 + (-0x39 << 2)
    ctx->pc = 0x1CBCC8u;
    {
        const bool branch_taken_0x1cbcc8 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CBCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBCC8u;
        // 0x1cbccc: 0xe5c00000  swc1        $f0, 0x0($t6) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbcc8) {
            ctx->pc = 0x1CBBE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cbbe8;
        }
    }
    ctx->pc = 0x1CBCD0u;
label_1cbcd0:
    // 0x1cbcd0: 0x171082b  sltu        $at, $t3, $s1
    ctx->pc = 0x1cbcd0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1cbcd4: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x1CBCD4u;
    {
        const bool branch_taken_0x1cbcd4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBCD4u;
        // 0x1cbcd8: 0x1912818  mult        $a1, $t4, $s1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbcd4) {
            ctx->pc = 0x1CBD08u;
            goto label_1cbd08;
        }
    }
    ctx->pc = 0x1CBCDCu;
    // 0x1cbcdc: 0x0  nop
    ctx->pc = 0x1cbcdcu;
    // NOP
label_1cbce0:
    // 0x1cbce0: 0x1651821  addu        $v1, $t3, $a1
    ctx->pc = 0x1cbce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 5)));
    // 0x1cbce4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1cbce4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cbce8: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1cbce8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x1cbcec: 0x2632021  addu        $a0, $s3, $v1
    ctx->pc = 0x1cbcecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1cbcf0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1cbcf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cbcf4: 0x171182b  sltu        $v1, $t3, $s1
    ctx->pc = 0x1cbcf4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1cbcf8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cbcf8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1cbcfc: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1CBCFCu;
    {
        const bool branch_taken_0x1cbcfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CBD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBCFCu;
        // 0x1cbd00: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbcfc) {
            ctx->pc = 0x1CBCE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cbce0;
        }
    }
    ctx->pc = 0x1CBD04u;
    // 0x1cbd04: 0x0  nop
    ctx->pc = 0x1cbd04u;
    // NOP
label_1cbd08:
    // 0x1cbd08: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x1cbd08u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x1cbd0c: 0x190182b  sltu        $v1, $t4, $s0
    ctx->pc = 0x1cbd0cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1cbd10: 0x1460ffaf  bnez        $v1, . + 4 + (-0x51 << 2)
    ctx->pc = 0x1CBD10u;
    {
        const bool branch_taken_0x1cbd10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cbd10) {
            ctx->pc = 0x1CBBD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cbbd0;
        }
    }
    ctx->pc = 0x1CBD18u;
label_1cbd18:
    // 0x1cbd18: 0x2606fffe  addiu       $a2, $s0, -0x2
    ctx->pc = 0x1cbd18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967294));
    // 0x1cbd1c: 0xd0082b  sltu        $at, $a2, $s0
    ctx->pc = 0x1cbd1cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1cbd20: 0x102000f7  beqz        $at, . + 4 + (0xF7 << 2)
    ctx->pc = 0x1CBD20u;
    {
        const bool branch_taken_0x1cbd20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBD20u;
        // 0x1cbd24: 0x2624fff8  addiu       $a0, $s1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbd20) {
            ctx->pc = 0x1CC100u;
            goto label_1cc100;
        }
    }
    ctx->pc = 0x1CBD28u;
label_1cbd28:
    // 0x1cbd28: 0x11082b  sltu        $at, $zero, $s1
    ctx->pc = 0x1cbd28u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1cbd2c: 0x1020004e  beqz        $at, . + 4 + (0x4E << 2)
    ctx->pc = 0x1CBD2Cu;
    {
        const bool branch_taken_0x1cbd2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBD2Cu;
        // 0x1cbd30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbd2c) {
            ctx->pc = 0x1CBE68u;
            goto label_1cbe68;
        }
    }
    ctx->pc = 0x1CBD34u;
    // 0x1cbd34: 0x2e210009  sltiu       $at, $s1, 0x9
    ctx->pc = 0x1cbd34u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x1cbd38: 0x1420003d  bnez        $at, . + 4 + (0x3D << 2)
    ctx->pc = 0x1CBD38u;
    {
        const bool branch_taken_0x1cbd38 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CBD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBD38u;
        // 0x1cbd3c: 0xd11818  mult        $v1, $a2, $s1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbd38) {
            ctx->pc = 0x1CBE30u;
            goto label_1cbe30;
        }
    }
    ctx->pc = 0x1CBD40u;
label_1cbd40:
    // 0x1cbd40: 0xa33821  addu        $a3, $a1, $v1
    ctx->pc = 0x1cbd40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1cbd44: 0x74880  sll         $t1, $a3, 2
    ctx->pc = 0x1cbd44u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1cbd48: 0x2494021  addu        $t0, $s2, $t1
    ctx->pc = 0x1cbd48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 9)));
    // 0x1cbd4c: 0x24a70001  addiu       $a3, $a1, 0x1
    ctx->pc = 0x1cbd4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1cbd50: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x1cbd50u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x1cbd54: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x1cbd54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1cbd58: 0x2694021  addu        $t0, $s3, $t1
    ctx->pc = 0x1cbd58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 9)));
    // 0x1cbd5c: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x1cbd5cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x1cbd60: 0x74080  sll         $t0, $a3, 2
    ctx->pc = 0x1cbd60u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1cbd64: 0x2483821  addu        $a3, $s2, $t0
    ctx->pc = 0x1cbd64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
    // 0x1cbd68: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x1cbd68u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x1cbd6c: 0x2684021  addu        $t0, $s3, $t0
    ctx->pc = 0x1cbd6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 8)));
    // 0x1cbd70: 0x24a70002  addiu       $a3, $a1, 0x2
    ctx->pc = 0x1cbd70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x1cbd74: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x1cbd74u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x1cbd78: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x1cbd78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1cbd7c: 0x74880  sll         $t1, $a3, 2
    ctx->pc = 0x1cbd7cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1cbd80: 0x2494021  addu        $t0, $s2, $t1
    ctx->pc = 0x1cbd80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 9)));
    // 0x1cbd84: 0x24a70003  addiu       $a3, $a1, 0x3
    ctx->pc = 0x1cbd84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    // 0x1cbd88: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x1cbd88u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x1cbd8c: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x1cbd8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1cbd90: 0x2694021  addu        $t0, $s3, $t1
    ctx->pc = 0x1cbd90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 9)));
    // 0x1cbd94: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x1cbd94u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x1cbd98: 0x74080  sll         $t0, $a3, 2
    ctx->pc = 0x1cbd98u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1cbd9c: 0x2483821  addu        $a3, $s2, $t0
    ctx->pc = 0x1cbd9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
    // 0x1cbda0: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x1cbda0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x1cbda4: 0x2684021  addu        $t0, $s3, $t0
    ctx->pc = 0x1cbda4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 8)));
    // 0x1cbda8: 0x24a70004  addiu       $a3, $a1, 0x4
    ctx->pc = 0x1cbda8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1cbdac: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x1cbdacu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x1cbdb0: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x1cbdb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1cbdb4: 0x74880  sll         $t1, $a3, 2
    ctx->pc = 0x1cbdb4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1cbdb8: 0x2494021  addu        $t0, $s2, $t1
    ctx->pc = 0x1cbdb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 9)));
    // 0x1cbdbc: 0x24a70005  addiu       $a3, $a1, 0x5
    ctx->pc = 0x1cbdbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 5));
    // 0x1cbdc0: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x1cbdc0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x1cbdc4: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x1cbdc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1cbdc8: 0x2694021  addu        $t0, $s3, $t1
    ctx->pc = 0x1cbdc8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 9)));
    // 0x1cbdcc: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x1cbdccu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x1cbdd0: 0x74080  sll         $t0, $a3, 2
    ctx->pc = 0x1cbdd0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1cbdd4: 0x2483821  addu        $a3, $s2, $t0
    ctx->pc = 0x1cbdd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
    // 0x1cbdd8: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x1cbdd8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x1cbddc: 0x2684021  addu        $t0, $s3, $t0
    ctx->pc = 0x1cbddcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 8)));
    // 0x1cbde0: 0x24a70006  addiu       $a3, $a1, 0x6
    ctx->pc = 0x1cbde0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
    // 0x1cbde4: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x1cbde4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x1cbde8: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x1cbde8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1cbdec: 0x74880  sll         $t1, $a3, 2
    ctx->pc = 0x1cbdecu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1cbdf0: 0x2494021  addu        $t0, $s2, $t1
    ctx->pc = 0x1cbdf0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 9)));
    // 0x1cbdf4: 0x24a70007  addiu       $a3, $a1, 0x7
    ctx->pc = 0x1cbdf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
    // 0x1cbdf8: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x1cbdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x1cbdfc: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x1cbdfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1cbe00: 0x2694021  addu        $t0, $s3, $t1
    ctx->pc = 0x1cbe00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 9)));
    // 0x1cbe04: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x1cbe04u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1cbe08: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x1cbe08u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x1cbe0c: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1cbe0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1cbe10: 0x2474021  addu        $t0, $s2, $a3
    ctx->pc = 0x1cbe10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x1cbe14: 0x2673821  addu        $a3, $s3, $a3
    ctx->pc = 0x1cbe14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
    // 0x1cbe18: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x1cbe18u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x1cbe1c: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x1cbe1cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x1cbe20: 0xa4382b  sltu        $a3, $a1, $a0
    ctx->pc = 0x1cbe20u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1cbe24: 0x14e0ffc6  bnez        $a3, . + 4 + (-0x3A << 2)
    ctx->pc = 0x1CBE24u;
    {
        const bool branch_taken_0x1cbe24 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cbe24) {
            ctx->pc = 0x1CBD40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cbd40;
        }
    }
    ctx->pc = 0x1CBE2Cu;
    // 0x1cbe2c: 0x0  nop
    ctx->pc = 0x1cbe2cu;
    // NOP
label_1cbe30:
    // 0x1cbe30: 0xb1082b  sltu        $at, $a1, $s1
    ctx->pc = 0x1cbe30u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1cbe34: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x1CBE34u;
    {
        const bool branch_taken_0x1cbe34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBE34u;
        // 0x1cbe38: 0xd14018  mult        $t0, $a2, $s1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbe34) {
            ctx->pc = 0x1CBE68u;
            goto label_1cbe68;
        }
    }
    ctx->pc = 0x1CBE3Cu;
    // 0x1cbe3c: 0x0  nop
    ctx->pc = 0x1cbe3cu;
    // NOP
label_1cbe40:
    // 0x1cbe40: 0xa81821  addu        $v1, $a1, $t0
    ctx->pc = 0x1cbe40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x1cbe44: 0x33880  sll         $a3, $v1, 2
    ctx->pc = 0x1cbe44u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cbe48: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1cbe48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1cbe4c: 0x2471821  addu        $v1, $s2, $a3
    ctx->pc = 0x1cbe4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x1cbe50: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1cbe50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1cbe54: 0x2673821  addu        $a3, $s3, $a3
    ctx->pc = 0x1cbe54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
    // 0x1cbe58: 0xb1182b  sltu        $v1, $a1, $s1
    ctx->pc = 0x1cbe58u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1cbe5c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1CBE5Cu;
    {
        const bool branch_taken_0x1cbe5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CBE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBE5Cu;
        // 0x1cbe60: 0xace00000  sw          $zero, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbe5c) {
            ctx->pc = 0x1CBE40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cbe40;
        }
    }
    ctx->pc = 0x1CBE64u;
    // 0x1cbe64: 0x0  nop
    ctx->pc = 0x1cbe64u;
    // NOP
label_1cbe68:
    // 0x1cbe68: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1cbe68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1cbe6c: 0xd0182b  sltu        $v1, $a2, $s0
    ctx->pc = 0x1cbe6cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1cbe70: 0x1460ffad  bnez        $v1, . + 4 + (-0x53 << 2)
    ctx->pc = 0x1CBE70u;
    {
        const bool branch_taken_0x1cbe70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cbe70) {
            ctx->pc = 0x1CBD28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cbd28;
        }
    }
    ctx->pc = 0x1CBE78u;
    // 0x1cbe78: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x1CBE78u;
    {
        const bool branch_taken_0x1cbe78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbe78) {
            ctx->pc = 0x1CC100u;
            goto label_1cc100;
        }
    }
    ctx->pc = 0x1CBE80u;
label_1cbe80:
    // 0x1cbe80: 0x3c0345c4  lui         $v1, 0x45C4
    ctx->pc = 0x1cbe80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17860 << 16));
    // 0x1cbe84: 0xc7c10004  lwc1        $f1, 0x4($fp)
    ctx->pc = 0x1cbe84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cbe88: 0x3463e000  ori         $v1, $v1, 0xE000
    ctx->pc = 0x1cbe88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57344);
    // 0x1cbe8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cbe8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cbe90: 0x0  nop
    ctx->pc = 0x1cbe90u;
    // NOP
    // 0x1cbe94: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cbe94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cbe98: 0x45000099  bc1f        . + 4 + (0x99 << 2)
    ctx->pc = 0x1CBE98u;
    {
        const bool branch_taken_0x1cbe98 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CBE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBE98u;
        // 0x1cbe9c: 0x24030400  addiu       $v1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbe98) {
            ctx->pc = 0x1CC100u;
            goto label_1cc100;
        }
    }
    ctx->pc = 0x1CBEA0u;
    // 0x1cbea0: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CBEA0u;
    {
        const bool branch_taken_0x1cbea0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1cbea0) {
            ctx->pc = 0x1CBEB8u;
            goto label_1cbeb8;
        }
    }
    ctx->pc = 0x1CBEA8u;
    // 0x1cbea8: 0x24030410  addiu       $v1, $zero, 0x410
    ctx->pc = 0x1cbea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1040));
    // 0x1cbeac: 0x14a30018  bne         $a1, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1CBEACu;
    {
        const bool branch_taken_0x1cbeac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1cbeac) {
            ctx->pc = 0x1CBF10u;
            goto label_1cbf10;
        }
    }
    ctx->pc = 0x1CBEB4u;
    // 0x1cbeb4: 0x0  nop
    ctx->pc = 0x1cbeb4u;
    // NOP
label_1cbeb8:
    // 0x1cbeb8: 0x32e30003  andi        $v1, $s7, 0x3
    ctx->pc = 0x1cbeb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)3);
    // 0x1cbebc: 0x1460002a  bnez        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x1CBEBCu;
    {
        const bool branch_taken_0x1cbebc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CBEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBEBCu;
        // 0x1cbec0: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbebc) {
            ctx->pc = 0x1CBF68u;
            goto label_1cbf68;
        }
    }
    ctx->pc = 0x1CBEC4u;
    // 0x1cbec4: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x1cbec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x1cbec8: 0x8c25f004  lw          $a1, -0xFFC($at)
    ctx->pc = 0x1cbec8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963204)));
    // 0x1cbecc: 0x3463a9e5  ori         $v1, $v1, 0xA9E5
    ctx->pc = 0x1cbeccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x1cbed0: 0x3c044080  lui         $a0, 0x4080
    ctx->pc = 0x1cbed0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16512 << 16));
    // 0x1cbed4: 0x53040  sll         $a2, $a1, 1
    ctx->pc = 0x1cbed4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1cbed8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cbed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cbedc: 0x52fc2  srl         $a1, $a1, 31
    ctx->pc = 0x1cbedcu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x1cbee0: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x1cbee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1cbee4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1cbee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1cbee8: 0xa31826  xor         $v1, $a1, $v1
    ctx->pc = 0x1cbee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
    // 0x1cbeec: 0xac23f004  sw          $v1, -0xFFC($at)
    ctx->pc = 0x1cbeecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 3));
    // 0x1cbef0: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x1cbef0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x1cbef4: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x1cbef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x1cbef8: 0x2463008a  addiu       $v1, $v1, 0x8A
    ctx->pc = 0x1cbef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 138));
    // 0x1cbefc: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1cbefcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1cbf00: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1cbf00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cbf04: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1cbf04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1cbf08: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1CBF08u;
    {
        const bool branch_taken_0x1cbf08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBF08u;
        // 0x1cbf0c: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbf08) {
            ctx->pc = 0x1CBF68u;
            goto label_1cbf68;
        }
    }
    ctx->pc = 0x1CBF10u;
label_1cbf10:
    // 0x1cbf10: 0x32e30003  andi        $v1, $s7, 0x3
    ctx->pc = 0x1cbf10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)3);
    // 0x1cbf14: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1CBF14u;
    {
        const bool branch_taken_0x1cbf14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CBF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBF14u;
        // 0x1cbf18: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbf14) {
            ctx->pc = 0x1CBF68u;
            goto label_1cbf68;
        }
    }
    ctx->pc = 0x1CBF1Cu;
    // 0x1cbf1c: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x1cbf1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x1cbf20: 0x8c25f004  lw          $a1, -0xFFC($at)
    ctx->pc = 0x1cbf20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963204)));
    // 0x1cbf24: 0x3463a9e5  ori         $v1, $v1, 0xA9E5
    ctx->pc = 0x1cbf24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x1cbf28: 0x3c044080  lui         $a0, 0x4080
    ctx->pc = 0x1cbf28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16512 << 16));
    // 0x1cbf2c: 0x53040  sll         $a2, $a1, 1
    ctx->pc = 0x1cbf2cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1cbf30: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cbf30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cbf34: 0x52fc2  srl         $a1, $a1, 31
    ctx->pc = 0x1cbf34u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x1cbf38: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x1cbf38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1cbf3c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1cbf3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1cbf40: 0xa31826  xor         $v1, $a1, $v1
    ctx->pc = 0x1cbf40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
    // 0x1cbf44: 0xac23f004  sw          $v1, -0xFFC($at)
    ctx->pc = 0x1cbf44u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 3));
    // 0x1cbf48: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x1cbf48u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x1cbf4c: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x1cbf4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x1cbf50: 0x2463003c  addiu       $v1, $v1, 0x3C
    ctx->pc = 0x1cbf50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
    // 0x1cbf54: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1cbf54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1cbf58: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1cbf58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cbf5c: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1cbf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1cbf60: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1cbf60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1cbf64: 0x0  nop
    ctx->pc = 0x1cbf64u;
    // NOP
label_1cbf68:
    // 0x1cbf68: 0x32e4000f  andi        $a0, $s7, 0xF
    ctx->pc = 0x1cbf68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)15);
    // 0x1cbf6c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CBF6Cu;
    {
        const bool branch_taken_0x1cbf6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBF6Cu;
        // 0x1cbf70: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbf6c) {
            ctx->pc = 0x1CBF80u;
            goto label_1cbf80;
        }
    }
    ctx->pc = 0x1CBF74u;
    // 0x1cbf74: 0x14830062  bne         $a0, $v1, . + 4 + (0x62 << 2)
    ctx->pc = 0x1CBF74u;
    {
        const bool branch_taken_0x1cbf74 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1cbf74) {
            ctx->pc = 0x1CC100u;
            goto label_1cc100;
        }
    }
    ctx->pc = 0x1CBF7Cu;
    // 0x1cbf7c: 0x0  nop
    ctx->pc = 0x1cbf7cu;
    // NOP
label_1cbf80:
    // 0x1cbf80: 0x171882  srl         $v1, $s7, 2
    ctx->pc = 0x1cbf80u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 23), 2));
    // 0x1cbf84: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1cbf84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1cbf88: 0x1060002f  beqz        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x1CBF88u;
    {
        const bool branch_taken_0x1cbf88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBF88u;
        // 0x1cbf8c: 0x26860004  addiu       $a2, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbf88) {
            ctx->pc = 0x1CC048u;
            goto label_1cc048;
        }
    }
    ctx->pc = 0x1CBF90u;
    // 0x1cbf90: 0x2cc10005  sltiu       $at, $a2, 0x5
    ctx->pc = 0x1cbf90u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1cbf94: 0x1420005a  bnez        $at, . + 4 + (0x5A << 2)
    ctx->pc = 0x1CBF94u;
    {
        const bool branch_taken_0x1cbf94 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CBF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBF94u;
        // 0x1cbf98: 0x24090004  addiu       $t1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbf94) {
            ctx->pc = 0x1CC100u;
            goto label_1cc100;
        }
    }
    ctx->pc = 0x1CBF9Cu;
    // 0x1cbf9c: 0x104042  srl         $t0, $s0, 1
    ctx->pc = 0x1cbf9cu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x1cbfa0: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x1cbfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x1cbfa4: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x1cbfa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x1cbfa8: 0x3464a9e5  ori         $a0, $v1, 0xA9E5
    ctx->pc = 0x1cbfa8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x1cbfac: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1cbfacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1cbfb0:
    // 0x1cbfb0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cbfb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cbfb4: 0x8c2af004  lw          $t2, -0xFFC($at)
    ctx->pc = 0x1cbfb4u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x81F004u));
    // 0x1cbfb8: 0x1313818  mult        $a3, $t1, $s1
    ctx->pc = 0x1cbfb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1cbfbc: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1cbfbcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1cbfc0: 0xa5840  sll         $t3, $t2, 1
    ctx->pc = 0x1cbfc0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x1cbfc4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cbfc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cbfc8: 0xa57c2  srl         $t2, $t2, 31
    ctx->pc = 0x1cbfc8u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
    // 0x1cbfcc: 0x16a5821  addu        $t3, $t3, $t2
    ctx->pc = 0x1cbfccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x1cbfd0: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1cbfd0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x1cbfd4: 0x126502b  sltu        $t2, $t1, $a2
    ctx->pc = 0x1cbfd4u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1cbfd8: 0x1645826  xor         $t3, $t3, $a0
    ctx->pc = 0x1cbfd8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) ^ GPR_U64(ctx, 4));
    // 0x1cbfdc: 0xac2bf004  sw          $t3, -0xFFC($at)
    ctx->pc = 0x1cbfdcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 11));
    // 0x1cbfe0: 0xb5a02  srl         $t3, $t3, 8
    ctx->pc = 0x1cbfe0u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 8));
    // 0x1cbfe4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cbfe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cbfe8: 0x316b0003  andi        $t3, $t3, 0x3
    ctx->pc = 0x1cbfe8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)3);
    // 0x1cbfec: 0x10b5821  addu        $t3, $t0, $t3
    ctx->pc = 0x1cbfecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
    // 0x1cbff0: 0x1675821  addu        $t3, $t3, $a3
    ctx->pc = 0x1cbff0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x1cbff4: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x1cbff4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x1cbff8: 0x26b5821  addu        $t3, $s3, $t3
    ctx->pc = 0x1cbff8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 11)));
    // 0x1cbffc: 0xad650010  sw          $a1, 0x10($t3)
    ctx->pc = 0x1cbffcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 5));
    // 0x1cc000: 0x8c2bf004  lw          $t3, -0xFFC($at)
    ctx->pc = 0x1cc000u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963204)));
    // 0x1cc004: 0xb6040  sll         $t4, $t3, 1
    ctx->pc = 0x1cc004u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x1cc008: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cc008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cc00c: 0xb5fc2  srl         $t3, $t3, 31
    ctx->pc = 0x1cc00cu;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 31));
    // 0x1cc010: 0x18b5821  addu        $t3, $t4, $t3
    ctx->pc = 0x1cc010u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x1cc014: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1cc014u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x1cc018: 0x1645826  xor         $t3, $t3, $a0
    ctx->pc = 0x1cc018u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) ^ GPR_U64(ctx, 4));
    // 0x1cc01c: 0xac2bf004  sw          $t3, -0xFFC($at)
    ctx->pc = 0x1cc01cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 11));
    // 0x1cc020: 0xb5a02  srl         $t3, $t3, 8
    ctx->pc = 0x1cc020u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 8));
    // 0x1cc024: 0x316b0003  andi        $t3, $t3, 0x3
    ctx->pc = 0x1cc024u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)3);
    // 0x1cc028: 0x10b5821  addu        $t3, $t0, $t3
    ctx->pc = 0x1cc028u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
    // 0x1cc02c: 0x1673821  addu        $a3, $t3, $a3
    ctx->pc = 0x1cc02cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x1cc030: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x1cc030u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1cc034: 0x2473821  addu        $a3, $s2, $a3
    ctx->pc = 0x1cc034u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x1cc038: 0x1540ffdd  bnez        $t2, . + 4 + (-0x23 << 2)
    ctx->pc = 0x1CC038u;
    {
        const bool branch_taken_0x1cc038 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC038u;
        // 0x1cc03c: 0xace30010  sw          $v1, 0x10($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc038) {
            ctx->pc = 0x1CBFB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cbfb0;
        }
    }
    ctx->pc = 0x1CC040u;
    // 0x1cc040: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1CC040u;
    {
        const bool branch_taken_0x1cc040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc040) {
            ctx->pc = 0x1CC100u;
            goto label_1cc100;
        }
    }
    ctx->pc = 0x1CC048u;
label_1cc048:
    // 0x1cc048: 0x26860004  addiu       $a2, $s4, 0x4
    ctx->pc = 0x1cc048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x1cc04c: 0x2cc10005  sltiu       $at, $a2, 0x5
    ctx->pc = 0x1cc04cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1cc050: 0x1420002b  bnez        $at, . + 4 + (0x2B << 2)
    ctx->pc = 0x1CC050u;
    {
        const bool branch_taken_0x1cc050 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC050u;
        // 0x1cc054: 0x24090004  addiu       $t1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc050) {
            ctx->pc = 0x1CC100u;
            goto label_1cc100;
        }
    }
    ctx->pc = 0x1CC058u;
    // 0x1cc058: 0x104042  srl         $t0, $s0, 1
    ctx->pc = 0x1cc058u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x1cc05c: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x1cc05cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x1cc060: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x1cc060u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x1cc064: 0x3464a9e5  ori         $a0, $v1, 0xA9E5
    ctx->pc = 0x1cc064u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x1cc068: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1cc068u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1cc06c: 0x0  nop
    ctx->pc = 0x1cc06cu;
    // NOP
label_1cc070:
    // 0x1cc070: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cc070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cc074: 0x8c2af004  lw          $t2, -0xFFC($at)
    ctx->pc = 0x1cc074u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x81F004u));
    // 0x1cc078: 0x1313818  mult        $a3, $t1, $s1
    ctx->pc = 0x1cc078u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1cc07c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1cc07cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1cc080: 0xa5840  sll         $t3, $t2, 1
    ctx->pc = 0x1cc080u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x1cc084: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cc084u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cc088: 0xa57c2  srl         $t2, $t2, 31
    ctx->pc = 0x1cc088u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
    // 0x1cc08c: 0x16a5821  addu        $t3, $t3, $t2
    ctx->pc = 0x1cc08cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x1cc090: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1cc090u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x1cc094: 0x126502b  sltu        $t2, $t1, $a2
    ctx->pc = 0x1cc094u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1cc098: 0x1645826  xor         $t3, $t3, $a0
    ctx->pc = 0x1cc098u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) ^ GPR_U64(ctx, 4));
    // 0x1cc09c: 0xac2bf004  sw          $t3, -0xFFC($at)
    ctx->pc = 0x1cc09cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 11));
    // 0x1cc0a0: 0xb5a02  srl         $t3, $t3, 8
    ctx->pc = 0x1cc0a0u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 8));
    // 0x1cc0a4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cc0a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cc0a8: 0x316b0003  andi        $t3, $t3, 0x3
    ctx->pc = 0x1cc0a8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)3);
    // 0x1cc0ac: 0x10b5823  subu        $t3, $t0, $t3
    ctx->pc = 0x1cc0acu;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
    // 0x1cc0b0: 0x1675821  addu        $t3, $t3, $a3
    ctx->pc = 0x1cc0b0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x1cc0b4: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x1cc0b4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x1cc0b8: 0x26b5821  addu        $t3, $s3, $t3
    ctx->pc = 0x1cc0b8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 11)));
    // 0x1cc0bc: 0xad650010  sw          $a1, 0x10($t3)
    ctx->pc = 0x1cc0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 5));
    // 0x1cc0c0: 0x8c2bf004  lw          $t3, -0xFFC($at)
    ctx->pc = 0x1cc0c0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963204)));
    // 0x1cc0c4: 0xb6040  sll         $t4, $t3, 1
    ctx->pc = 0x1cc0c4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x1cc0c8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cc0c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cc0cc: 0xb5fc2  srl         $t3, $t3, 31
    ctx->pc = 0x1cc0ccu;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 31));
    // 0x1cc0d0: 0x18b5821  addu        $t3, $t4, $t3
    ctx->pc = 0x1cc0d0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x1cc0d4: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1cc0d4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x1cc0d8: 0x1645826  xor         $t3, $t3, $a0
    ctx->pc = 0x1cc0d8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) ^ GPR_U64(ctx, 4));
    // 0x1cc0dc: 0xac2bf004  sw          $t3, -0xFFC($at)
    ctx->pc = 0x1cc0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 11));
    // 0x1cc0e0: 0xb5a02  srl         $t3, $t3, 8
    ctx->pc = 0x1cc0e0u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 8));
    // 0x1cc0e4: 0x316b0003  andi        $t3, $t3, 0x3
    ctx->pc = 0x1cc0e4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)3);
    // 0x1cc0e8: 0x10b5823  subu        $t3, $t0, $t3
    ctx->pc = 0x1cc0e8u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
    // 0x1cc0ec: 0x1673821  addu        $a3, $t3, $a3
    ctx->pc = 0x1cc0ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x1cc0f0: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x1cc0f0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1cc0f4: 0x2473821  addu        $a3, $s2, $a3
    ctx->pc = 0x1cc0f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x1cc0f8: 0x1540ffdd  bnez        $t2, . + 4 + (-0x23 << 2)
    ctx->pc = 0x1CC0F8u;
    {
        const bool branch_taken_0x1cc0f8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC0F8u;
        // 0x1cc0fc: 0xace30010  sw          $v1, 0x10($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc0f8) {
            ctx->pc = 0x1CC070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cc070;
        }
    }
    ctx->pc = 0x1CC100u;
label_1cc100:
    // 0x1cc100: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1cc100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1cc104: 0x94246ac4  lhu         $a0, 0x6AC4($at)
    ctx->pc = 0x1cc104u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x1cc108: 0x24030404  addiu       $v1, $zero, 0x404
    ctx->pc = 0x1cc108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1028));
    // 0x1cc10c: 0x1483006e  bne         $a0, $v1, . + 4 + (0x6E << 2)
    ctx->pc = 0x1CC10Cu;
    {
        const bool branch_taken_0x1cc10c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1cc10c) {
            ctx->pc = 0x1CC2C8u;
            goto label_1cc2c8;
        }
    }
    ctx->pc = 0x1CC114u;
    // 0x1cc114: 0xc7c10004  lwc1        $f1, 0x4($fp)
    ctx->pc = 0x1cc114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cc118: 0x3c03459c  lui         $v1, 0x459C
    ctx->pc = 0x1cc118u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17820 << 16));
    // 0x1cc11c: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x1cc11cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1cc120: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cc120u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cc124: 0x0  nop
    ctx->pc = 0x1cc124u;
    // NOP
    // 0x1cc128: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cc128u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cc12c: 0x45000066  bc1f        . + 4 + (0x66 << 2)
    ctx->pc = 0x1CC12Cu;
    {
        const bool branch_taken_0x1cc12c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CC130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC12Cu;
        // 0x1cc130: 0x32e4000f  andi        $a0, $s7, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc12c) {
            ctx->pc = 0x1CC2C8u;
            goto label_1cc2c8;
        }
    }
    ctx->pc = 0x1CC134u;
    // 0x1cc134: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CC134u;
    {
        const bool branch_taken_0x1cc134 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC134u;
        // 0x1cc138: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc134) {
            ctx->pc = 0x1CC148u;
            goto label_1cc148;
        }
    }
    ctx->pc = 0x1CC13Cu;
    // 0x1cc13c: 0x14830062  bne         $a0, $v1, . + 4 + (0x62 << 2)
    ctx->pc = 0x1CC13Cu;
    {
        const bool branch_taken_0x1cc13c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1cc13c) {
            ctx->pc = 0x1CC2C8u;
            goto label_1cc2c8;
        }
    }
    ctx->pc = 0x1CC144u;
    // 0x1cc144: 0x0  nop
    ctx->pc = 0x1cc144u;
    // NOP
label_1cc148:
    // 0x1cc148: 0x171882  srl         $v1, $s7, 2
    ctx->pc = 0x1cc148u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 23), 2));
    // 0x1cc14c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1cc14cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1cc150: 0x1060002f  beqz        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x1CC150u;
    {
        const bool branch_taken_0x1cc150 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC150u;
        // 0x1cc154: 0x26860004  addiu       $a2, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc150) {
            ctx->pc = 0x1CC210u;
            goto label_1cc210;
        }
    }
    ctx->pc = 0x1CC158u;
    // 0x1cc158: 0x2cc10005  sltiu       $at, $a2, 0x5
    ctx->pc = 0x1cc158u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1cc15c: 0x1420005a  bnez        $at, . + 4 + (0x5A << 2)
    ctx->pc = 0x1CC15Cu;
    {
        const bool branch_taken_0x1cc15c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC15Cu;
        // 0x1cc160: 0x24090004  addiu       $t1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc15c) {
            ctx->pc = 0x1CC2C8u;
            goto label_1cc2c8;
        }
    }
    ctx->pc = 0x1CC164u;
    // 0x1cc164: 0x104042  srl         $t0, $s0, 1
    ctx->pc = 0x1cc164u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x1cc168: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x1cc168u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x1cc16c: 0x3c054100  lui         $a1, 0x4100
    ctx->pc = 0x1cc16cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16640 << 16));
    // 0x1cc170: 0x3464a9e5  ori         $a0, $v1, 0xA9E5
    ctx->pc = 0x1cc170u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x1cc174: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x1cc174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
label_1cc178:
    // 0x1cc178: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cc178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cc17c: 0x8c2af004  lw          $t2, -0xFFC($at)
    ctx->pc = 0x1cc17cu;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x81F004u));
    // 0x1cc180: 0x1313818  mult        $a3, $t1, $s1
    ctx->pc = 0x1cc180u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1cc184: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1cc184u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1cc188: 0xa5840  sll         $t3, $t2, 1
    ctx->pc = 0x1cc188u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x1cc18c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cc18cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cc190: 0xa57c2  srl         $t2, $t2, 31
    ctx->pc = 0x1cc190u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
    // 0x1cc194: 0x16a5821  addu        $t3, $t3, $t2
    ctx->pc = 0x1cc194u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x1cc198: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1cc198u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x1cc19c: 0x126502b  sltu        $t2, $t1, $a2
    ctx->pc = 0x1cc19cu;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1cc1a0: 0x1645826  xor         $t3, $t3, $a0
    ctx->pc = 0x1cc1a0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) ^ GPR_U64(ctx, 4));
    // 0x1cc1a4: 0xac2bf004  sw          $t3, -0xFFC($at)
    ctx->pc = 0x1cc1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 11));
    // 0x1cc1a8: 0xb5a02  srl         $t3, $t3, 8
    ctx->pc = 0x1cc1a8u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 8));
    // 0x1cc1ac: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cc1acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cc1b0: 0x316b0003  andi        $t3, $t3, 0x3
    ctx->pc = 0x1cc1b0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)3);
    // 0x1cc1b4: 0x10b5821  addu        $t3, $t0, $t3
    ctx->pc = 0x1cc1b4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
    // 0x1cc1b8: 0x1675821  addu        $t3, $t3, $a3
    ctx->pc = 0x1cc1b8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x1cc1bc: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x1cc1bcu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x1cc1c0: 0x26b5821  addu        $t3, $s3, $t3
    ctx->pc = 0x1cc1c0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 11)));
    // 0x1cc1c4: 0xad650010  sw          $a1, 0x10($t3)
    ctx->pc = 0x1cc1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 5));
    // 0x1cc1c8: 0x8c2bf004  lw          $t3, -0xFFC($at)
    ctx->pc = 0x1cc1c8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963204)));
    // 0x1cc1cc: 0xb6040  sll         $t4, $t3, 1
    ctx->pc = 0x1cc1ccu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x1cc1d0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cc1d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cc1d4: 0xb5fc2  srl         $t3, $t3, 31
    ctx->pc = 0x1cc1d4u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 31));
    // 0x1cc1d8: 0x18b5821  addu        $t3, $t4, $t3
    ctx->pc = 0x1cc1d8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x1cc1dc: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1cc1dcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x1cc1e0: 0x1645826  xor         $t3, $t3, $a0
    ctx->pc = 0x1cc1e0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) ^ GPR_U64(ctx, 4));
    // 0x1cc1e4: 0xac2bf004  sw          $t3, -0xFFC($at)
    ctx->pc = 0x1cc1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 11));
    // 0x1cc1e8: 0xb5a02  srl         $t3, $t3, 8
    ctx->pc = 0x1cc1e8u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 8));
    // 0x1cc1ec: 0x316b0003  andi        $t3, $t3, 0x3
    ctx->pc = 0x1cc1ecu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)3);
    // 0x1cc1f0: 0x10b5821  addu        $t3, $t0, $t3
    ctx->pc = 0x1cc1f0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
    // 0x1cc1f4: 0x1673821  addu        $a3, $t3, $a3
    ctx->pc = 0x1cc1f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x1cc1f8: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x1cc1f8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1cc1fc: 0x2473821  addu        $a3, $s2, $a3
    ctx->pc = 0x1cc1fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x1cc200: 0x1540ffdd  bnez        $t2, . + 4 + (-0x23 << 2)
    ctx->pc = 0x1CC200u;
    {
        const bool branch_taken_0x1cc200 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC200u;
        // 0x1cc204: 0xace30010  sw          $v1, 0x10($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc200) {
            ctx->pc = 0x1CC178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cc178;
        }
    }
    ctx->pc = 0x1CC208u;
    // 0x1cc208: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1CC208u;
    {
        const bool branch_taken_0x1cc208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc208) {
            ctx->pc = 0x1CC2C8u;
            goto label_1cc2c8;
        }
    }
    ctx->pc = 0x1CC210u;
label_1cc210:
    // 0x1cc210: 0x26860004  addiu       $a2, $s4, 0x4
    ctx->pc = 0x1cc210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x1cc214: 0x2cc10005  sltiu       $at, $a2, 0x5
    ctx->pc = 0x1cc214u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1cc218: 0x1420002b  bnez        $at, . + 4 + (0x2B << 2)
    ctx->pc = 0x1CC218u;
    {
        const bool branch_taken_0x1cc218 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC218u;
        // 0x1cc21c: 0x24090004  addiu       $t1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc218) {
            ctx->pc = 0x1CC2C8u;
            goto label_1cc2c8;
        }
    }
    ctx->pc = 0x1CC220u;
    // 0x1cc220: 0x104042  srl         $t0, $s0, 1
    ctx->pc = 0x1cc220u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x1cc224: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x1cc224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x1cc228: 0x3c054100  lui         $a1, 0x4100
    ctx->pc = 0x1cc228u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16640 << 16));
    // 0x1cc22c: 0x3464a9e5  ori         $a0, $v1, 0xA9E5
    ctx->pc = 0x1cc22cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x1cc230: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x1cc230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x1cc234: 0x0  nop
    ctx->pc = 0x1cc234u;
    // NOP
label_1cc238:
    // 0x1cc238: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cc238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cc23c: 0x8c2af004  lw          $t2, -0xFFC($at)
    ctx->pc = 0x1cc23cu;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x81F004u));
    // 0x1cc240: 0x1313818  mult        $a3, $t1, $s1
    ctx->pc = 0x1cc240u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1cc244: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1cc244u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1cc248: 0xa5840  sll         $t3, $t2, 1
    ctx->pc = 0x1cc248u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x1cc24c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cc24cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cc250: 0xa57c2  srl         $t2, $t2, 31
    ctx->pc = 0x1cc250u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
    // 0x1cc254: 0x16a5821  addu        $t3, $t3, $t2
    ctx->pc = 0x1cc254u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x1cc258: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1cc258u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x1cc25c: 0x126502b  sltu        $t2, $t1, $a2
    ctx->pc = 0x1cc25cu;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1cc260: 0x1645826  xor         $t3, $t3, $a0
    ctx->pc = 0x1cc260u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) ^ GPR_U64(ctx, 4));
    // 0x1cc264: 0xac2bf004  sw          $t3, -0xFFC($at)
    ctx->pc = 0x1cc264u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 11));
    // 0x1cc268: 0xb5a02  srl         $t3, $t3, 8
    ctx->pc = 0x1cc268u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 8));
    // 0x1cc26c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cc26cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cc270: 0x316b0003  andi        $t3, $t3, 0x3
    ctx->pc = 0x1cc270u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)3);
    // 0x1cc274: 0x10b5823  subu        $t3, $t0, $t3
    ctx->pc = 0x1cc274u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
    // 0x1cc278: 0x1675821  addu        $t3, $t3, $a3
    ctx->pc = 0x1cc278u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x1cc27c: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x1cc27cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x1cc280: 0x26b5821  addu        $t3, $s3, $t3
    ctx->pc = 0x1cc280u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 11)));
    // 0x1cc284: 0xad650010  sw          $a1, 0x10($t3)
    ctx->pc = 0x1cc284u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 5));
    // 0x1cc288: 0x8c2bf004  lw          $t3, -0xFFC($at)
    ctx->pc = 0x1cc288u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963204)));
    // 0x1cc28c: 0xb6040  sll         $t4, $t3, 1
    ctx->pc = 0x1cc28cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x1cc290: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cc290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cc294: 0xb5fc2  srl         $t3, $t3, 31
    ctx->pc = 0x1cc294u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 31));
    // 0x1cc298: 0x18b5821  addu        $t3, $t4, $t3
    ctx->pc = 0x1cc298u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x1cc29c: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1cc29cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x1cc2a0: 0x1645826  xor         $t3, $t3, $a0
    ctx->pc = 0x1cc2a0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) ^ GPR_U64(ctx, 4));
    // 0x1cc2a4: 0xac2bf004  sw          $t3, -0xFFC($at)
    ctx->pc = 0x1cc2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 11));
    // 0x1cc2a8: 0xb5a02  srl         $t3, $t3, 8
    ctx->pc = 0x1cc2a8u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 8));
    // 0x1cc2ac: 0x316b0003  andi        $t3, $t3, 0x3
    ctx->pc = 0x1cc2acu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)3);
    // 0x1cc2b0: 0x10b5823  subu        $t3, $t0, $t3
    ctx->pc = 0x1cc2b0u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
    // 0x1cc2b4: 0x1673821  addu        $a3, $t3, $a3
    ctx->pc = 0x1cc2b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x1cc2b8: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x1cc2b8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1cc2bc: 0x2473821  addu        $a3, $s2, $a3
    ctx->pc = 0x1cc2bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x1cc2c0: 0x1540ffdd  bnez        $t2, . + 4 + (-0x23 << 2)
    ctx->pc = 0x1CC2C0u;
    {
        const bool branch_taken_0x1cc2c0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC2C0u;
        // 0x1cc2c4: 0xace30010  sw          $v1, 0x10($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc2c0) {
            ctx->pc = 0x1CC238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cc238;
        }
    }
    ctx->pc = 0x1CC2C8u;
label_1cc2c8:
    // 0x1cc2c8: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1cc2c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1cc2cc: 0x94246ac4  lhu         $a0, 0x6AC4($at)
    ctx->pc = 0x1cc2ccu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x1cc2d0: 0x24030405  addiu       $v1, $zero, 0x405
    ctx->pc = 0x1cc2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1029));
    // 0x1cc2d4: 0x14830066  bne         $a0, $v1, . + 4 + (0x66 << 2)
    ctx->pc = 0x1CC2D4u;
    {
        const bool branch_taken_0x1cc2d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1CC2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC2D4u;
        // 0x1cc2d8: 0x32e4000f  andi        $a0, $s7, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc2d4) {
            ctx->pc = 0x1CC470u;
            goto label_1cc470;
        }
    }
    ctx->pc = 0x1CC2DCu;
    // 0x1cc2dc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CC2DCu;
    {
        const bool branch_taken_0x1cc2dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC2DCu;
        // 0x1cc2e0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc2dc) {
            ctx->pc = 0x1CC2F0u;
            goto label_1cc2f0;
        }
    }
    ctx->pc = 0x1CC2E4u;
    // 0x1cc2e4: 0x14830062  bne         $a0, $v1, . + 4 + (0x62 << 2)
    ctx->pc = 0x1CC2E4u;
    {
        const bool branch_taken_0x1cc2e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1cc2e4) {
            ctx->pc = 0x1CC470u;
            goto label_1cc470;
        }
    }
    ctx->pc = 0x1CC2ECu;
    // 0x1cc2ec: 0x0  nop
    ctx->pc = 0x1cc2ecu;
    // NOP
label_1cc2f0:
    // 0x1cc2f0: 0x171882  srl         $v1, $s7, 2
    ctx->pc = 0x1cc2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 23), 2));
    // 0x1cc2f4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1cc2f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1cc2f8: 0x1060002f  beqz        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x1CC2F8u;
    {
        const bool branch_taken_0x1cc2f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC2F8u;
        // 0x1cc2fc: 0x26860004  addiu       $a2, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc2f8) {
            ctx->pc = 0x1CC3B8u;
            goto label_1cc3b8;
        }
    }
    ctx->pc = 0x1CC300u;
    // 0x1cc300: 0x2cc10005  sltiu       $at, $a2, 0x5
    ctx->pc = 0x1cc300u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1cc304: 0x1420005a  bnez        $at, . + 4 + (0x5A << 2)
    ctx->pc = 0x1CC304u;
    {
        const bool branch_taken_0x1cc304 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC304u;
        // 0x1cc308: 0x24090004  addiu       $t1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc304) {
            ctx->pc = 0x1CC470u;
            goto label_1cc470;
        }
    }
    ctx->pc = 0x1CC30Cu;
    // 0x1cc30c: 0x104042  srl         $t0, $s0, 1
    ctx->pc = 0x1cc30cu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x1cc310: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x1cc310u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x1cc314: 0x3c054100  lui         $a1, 0x4100
    ctx->pc = 0x1cc314u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16640 << 16));
    // 0x1cc318: 0x3464a9e5  ori         $a0, $v1, 0xA9E5
    ctx->pc = 0x1cc318u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x1cc31c: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x1cc31cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
label_1cc320:
    // 0x1cc320: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cc320u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cc324: 0x8c2af004  lw          $t2, -0xFFC($at)
    ctx->pc = 0x1cc324u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x81F004u));
    // 0x1cc328: 0x1313818  mult        $a3, $t1, $s1
    ctx->pc = 0x1cc328u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1cc32c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1cc32cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1cc330: 0xa5840  sll         $t3, $t2, 1
    ctx->pc = 0x1cc330u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x1cc334: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cc334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cc338: 0xa57c2  srl         $t2, $t2, 31
    ctx->pc = 0x1cc338u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
    // 0x1cc33c: 0x16a5821  addu        $t3, $t3, $t2
    ctx->pc = 0x1cc33cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x1cc340: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1cc340u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x1cc344: 0x126502b  sltu        $t2, $t1, $a2
    ctx->pc = 0x1cc344u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1cc348: 0x1645826  xor         $t3, $t3, $a0
    ctx->pc = 0x1cc348u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) ^ GPR_U64(ctx, 4));
    // 0x1cc34c: 0xac2bf004  sw          $t3, -0xFFC($at)
    ctx->pc = 0x1cc34cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 11));
    // 0x1cc350: 0xb5a02  srl         $t3, $t3, 8
    ctx->pc = 0x1cc350u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 8));
    // 0x1cc354: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cc354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cc358: 0x316b0003  andi        $t3, $t3, 0x3
    ctx->pc = 0x1cc358u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)3);
    // 0x1cc35c: 0x10b5821  addu        $t3, $t0, $t3
    ctx->pc = 0x1cc35cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
    // 0x1cc360: 0x1675821  addu        $t3, $t3, $a3
    ctx->pc = 0x1cc360u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x1cc364: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x1cc364u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x1cc368: 0x26b5821  addu        $t3, $s3, $t3
    ctx->pc = 0x1cc368u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 11)));
    // 0x1cc36c: 0xad650010  sw          $a1, 0x10($t3)
    ctx->pc = 0x1cc36cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 5));
    // 0x1cc370: 0x8c2bf004  lw          $t3, -0xFFC($at)
    ctx->pc = 0x1cc370u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963204)));
    // 0x1cc374: 0xb6040  sll         $t4, $t3, 1
    ctx->pc = 0x1cc374u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x1cc378: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cc378u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cc37c: 0xb5fc2  srl         $t3, $t3, 31
    ctx->pc = 0x1cc37cu;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 31));
    // 0x1cc380: 0x18b5821  addu        $t3, $t4, $t3
    ctx->pc = 0x1cc380u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x1cc384: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1cc384u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x1cc388: 0x1645826  xor         $t3, $t3, $a0
    ctx->pc = 0x1cc388u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) ^ GPR_U64(ctx, 4));
    // 0x1cc38c: 0xac2bf004  sw          $t3, -0xFFC($at)
    ctx->pc = 0x1cc38cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 11));
    // 0x1cc390: 0xb5a02  srl         $t3, $t3, 8
    ctx->pc = 0x1cc390u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 8));
    // 0x1cc394: 0x316b0003  andi        $t3, $t3, 0x3
    ctx->pc = 0x1cc394u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)3);
    // 0x1cc398: 0x10b5821  addu        $t3, $t0, $t3
    ctx->pc = 0x1cc398u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
    // 0x1cc39c: 0x1673821  addu        $a3, $t3, $a3
    ctx->pc = 0x1cc39cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x1cc3a0: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x1cc3a0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1cc3a4: 0x2473821  addu        $a3, $s2, $a3
    ctx->pc = 0x1cc3a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x1cc3a8: 0x1540ffdd  bnez        $t2, . + 4 + (-0x23 << 2)
    ctx->pc = 0x1CC3A8u;
    {
        const bool branch_taken_0x1cc3a8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC3A8u;
        // 0x1cc3ac: 0xace30010  sw          $v1, 0x10($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc3a8) {
            ctx->pc = 0x1CC320u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cc320;
        }
    }
    ctx->pc = 0x1CC3B0u;
    // 0x1cc3b0: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1CC3B0u;
    {
        const bool branch_taken_0x1cc3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc3b0) {
            ctx->pc = 0x1CC470u;
            goto label_1cc470;
        }
    }
    ctx->pc = 0x1CC3B8u;
label_1cc3b8:
    // 0x1cc3b8: 0x26860004  addiu       $a2, $s4, 0x4
    ctx->pc = 0x1cc3b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x1cc3bc: 0x2cc10005  sltiu       $at, $a2, 0x5
    ctx->pc = 0x1cc3bcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1cc3c0: 0x1420002b  bnez        $at, . + 4 + (0x2B << 2)
    ctx->pc = 0x1CC3C0u;
    {
        const bool branch_taken_0x1cc3c0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC3C0u;
        // 0x1cc3c4: 0x24090004  addiu       $t1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc3c0) {
            ctx->pc = 0x1CC470u;
            goto label_1cc470;
        }
    }
    ctx->pc = 0x1CC3C8u;
    // 0x1cc3c8: 0x104042  srl         $t0, $s0, 1
    ctx->pc = 0x1cc3c8u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x1cc3cc: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x1cc3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x1cc3d0: 0x3c054100  lui         $a1, 0x4100
    ctx->pc = 0x1cc3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16640 << 16));
    // 0x1cc3d4: 0x3464a9e5  ori         $a0, $v1, 0xA9E5
    ctx->pc = 0x1cc3d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x1cc3d8: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x1cc3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x1cc3dc: 0x0  nop
    ctx->pc = 0x1cc3dcu;
    // NOP
label_1cc3e0:
    // 0x1cc3e0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cc3e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cc3e4: 0x8c2af004  lw          $t2, -0xFFC($at)
    ctx->pc = 0x1cc3e4u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x81F004u));
    // 0x1cc3e8: 0x1313818  mult        $a3, $t1, $s1
    ctx->pc = 0x1cc3e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1cc3ec: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1cc3ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1cc3f0: 0xa5840  sll         $t3, $t2, 1
    ctx->pc = 0x1cc3f0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x1cc3f4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cc3f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cc3f8: 0xa57c2  srl         $t2, $t2, 31
    ctx->pc = 0x1cc3f8u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
    // 0x1cc3fc: 0x16a5821  addu        $t3, $t3, $t2
    ctx->pc = 0x1cc3fcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x1cc400: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1cc400u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x1cc404: 0x126502b  sltu        $t2, $t1, $a2
    ctx->pc = 0x1cc404u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1cc408: 0x1645826  xor         $t3, $t3, $a0
    ctx->pc = 0x1cc408u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) ^ GPR_U64(ctx, 4));
    // 0x1cc40c: 0xac2bf004  sw          $t3, -0xFFC($at)
    ctx->pc = 0x1cc40cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 11));
    // 0x1cc410: 0xb5a02  srl         $t3, $t3, 8
    ctx->pc = 0x1cc410u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 8));
    // 0x1cc414: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cc414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cc418: 0x316b0003  andi        $t3, $t3, 0x3
    ctx->pc = 0x1cc418u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)3);
    // 0x1cc41c: 0x10b5823  subu        $t3, $t0, $t3
    ctx->pc = 0x1cc41cu;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
    // 0x1cc420: 0x1675821  addu        $t3, $t3, $a3
    ctx->pc = 0x1cc420u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x1cc424: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x1cc424u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x1cc428: 0x26b5821  addu        $t3, $s3, $t3
    ctx->pc = 0x1cc428u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 11)));
    // 0x1cc42c: 0xad650010  sw          $a1, 0x10($t3)
    ctx->pc = 0x1cc42cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 5));
    // 0x1cc430: 0x8c2bf004  lw          $t3, -0xFFC($at)
    ctx->pc = 0x1cc430u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963204)));
    // 0x1cc434: 0xb6040  sll         $t4, $t3, 1
    ctx->pc = 0x1cc434u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x1cc438: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cc438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cc43c: 0xb5fc2  srl         $t3, $t3, 31
    ctx->pc = 0x1cc43cu;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 31));
    // 0x1cc440: 0x18b5821  addu        $t3, $t4, $t3
    ctx->pc = 0x1cc440u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x1cc444: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1cc444u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x1cc448: 0x1645826  xor         $t3, $t3, $a0
    ctx->pc = 0x1cc448u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) ^ GPR_U64(ctx, 4));
    // 0x1cc44c: 0xac2bf004  sw          $t3, -0xFFC($at)
    ctx->pc = 0x1cc44cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 11));
    // 0x1cc450: 0xb5a02  srl         $t3, $t3, 8
    ctx->pc = 0x1cc450u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 8));
    // 0x1cc454: 0x316b0003  andi        $t3, $t3, 0x3
    ctx->pc = 0x1cc454u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)3);
    // 0x1cc458: 0x10b5823  subu        $t3, $t0, $t3
    ctx->pc = 0x1cc458u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
    // 0x1cc45c: 0x1673821  addu        $a3, $t3, $a3
    ctx->pc = 0x1cc45cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x1cc460: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x1cc460u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1cc464: 0x2473821  addu        $a3, $s2, $a3
    ctx->pc = 0x1cc464u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x1cc468: 0x1540ffdd  bnez        $t2, . + 4 + (-0x23 << 2)
    ctx->pc = 0x1CC468u;
    {
        const bool branch_taken_0x1cc468 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC468u;
        // 0x1cc46c: 0xace30010  sw          $v1, 0x10($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc468) {
            ctx->pc = 0x1CC3E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cc3e0;
        }
    }
    ctx->pc = 0x1CC470u;
label_1cc470:
    // 0x1cc470: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1cc470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1cc474: 0x94246ac4  lhu         $a0, 0x6AC4($at)
    ctx->pc = 0x1cc474u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x1cc478: 0x24030700  addiu       $v1, $zero, 0x700
    ctx->pc = 0x1cc478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1792));
    // 0x1cc47c: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CC47Cu;
    {
        const bool branch_taken_0x1cc47c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1CC480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC47Cu;
        // 0x1cc480: 0x24030710  addiu       $v1, $zero, 0x710 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1808));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc47c) {
            ctx->pc = 0x1CC498u;
            goto label_1cc498;
        }
    }
    ctx->pc = 0x1CC484u;
    // 0x1cc484: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CC484u;
    {
        const bool branch_taken_0x1cc484 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1cc484) {
            ctx->pc = 0x1CC498u;
            goto label_1cc498;
        }
    }
    ctx->pc = 0x1CC48Cu;
    // 0x1cc48c: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x1cc48cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1cc490: 0x1483005b  bne         $a0, $v1, . + 4 + (0x5B << 2)
    ctx->pc = 0x1CC490u;
    {
        const bool branch_taken_0x1cc490 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1cc490) {
            ctx->pc = 0x1CC600u;
            goto label_1cc600;
        }
    }
    ctx->pc = 0x1CC498u;
label_1cc498:
    // 0x1cc498: 0x8f8387c8  lw          $v1, -0x7838($gp)
    ctx->pc = 0x1cc498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936520)));
    // 0x1cc49c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1cc49cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1cc4a0: 0xaf8387c8  sw          $v1, -0x7838($gp)
    ctx->pc = 0x1cc4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936520), GPR_U32(ctx, 3));
    // 0x1cc4a4: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x1cc4a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x1cc4a8: 0x14600055  bnez        $v1, . + 4 + (0x55 << 2)
    ctx->pc = 0x1CC4A8u;
    {
        const bool branch_taken_0x1cc4a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC4A8u;
        // 0x1cc4ac: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc4a8) {
            ctx->pc = 0x1CC600u;
            goto label_1cc600;
        }
    }
    ctx->pc = 0x1CC4B0u;
    // 0x1cc4b0: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x1cc4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x1cc4b4: 0x8c27f004  lw          $a3, -0xFFC($at)
    ctx->pc = 0x1cc4b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963204)));
    // 0x1cc4b8: 0x3464a9e5  ori         $a0, $v1, 0xA9E5
    ctx->pc = 0x1cc4b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x1cc4bc: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x1cc4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1cc4c0: 0x113042  srl         $a2, $s1, 1
    ctx->pc = 0x1cc4c0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
    // 0x1cc4c4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1cc4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x1cc4c8: 0x74040  sll         $t0, $a3, 1
    ctx->pc = 0x1cc4c8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x1cc4cc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cc4ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cc4d0: 0x73fc2  srl         $a3, $a3, 31
    ctx->pc = 0x1cc4d0u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x1cc4d4: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x1cc4d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1cc4d8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1cc4d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1cc4dc: 0xe43826  xor         $a3, $a3, $a0
    ctx->pc = 0x1cc4dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 4));
    // 0x1cc4e0: 0xac27f004  sw          $a3, -0xFFC($at)
    ctx->pc = 0x1cc4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 7));
    // 0x1cc4e4: 0x73a02  srl         $a3, $a3, 8
    ctx->pc = 0x1cc4e4u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 8));
    // 0x1cc4e8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cc4e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cc4ec: 0xe3001b  divu        $zero, $a3, $v1
    ctx->pc = 0x1cc4ecu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x1cc4f0: 0x0  nop
    ctx->pc = 0x1cc4f0u;
    // NOP
    // 0x1cc4f4: 0x0  nop
    ctx->pc = 0x1cc4f4u;
    // NOP
    // 0x1cc4f8: 0x3810  mfhi        $a3
    ctx->pc = 0x1cc4f8u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x1cc4fc: 0x24e7000c  addiu       $a3, $a3, 0xC
    ctx->pc = 0x1cc4fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
    // 0x1cc500: 0x2273818  mult        $a3, $s1, $a3
    ctx->pc = 0x1cc500u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1cc504: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x1cc504u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1cc508: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x1cc508u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1cc50c: 0x2473821  addu        $a3, $s2, $a3
    ctx->pc = 0x1cc50cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x1cc510: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x1cc510u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x1cc514: 0x8c27f004  lw          $a3, -0xFFC($at)
    ctx->pc = 0x1cc514u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963204)));
    // 0x1cc518: 0x74040  sll         $t0, $a3, 1
    ctx->pc = 0x1cc518u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x1cc51c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cc51cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cc520: 0x73fc2  srl         $a3, $a3, 31
    ctx->pc = 0x1cc520u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x1cc524: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x1cc524u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1cc528: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1cc528u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1cc52c: 0xe43826  xor         $a3, $a3, $a0
    ctx->pc = 0x1cc52cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 4));
    // 0x1cc530: 0xac27f004  sw          $a3, -0xFFC($at)
    ctx->pc = 0x1cc530u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 7));
    // 0x1cc534: 0x73a02  srl         $a3, $a3, 8
    ctx->pc = 0x1cc534u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 8));
    // 0x1cc538: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cc538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cc53c: 0xe3001b  divu        $zero, $a3, $v1
    ctx->pc = 0x1cc53cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x1cc540: 0x0  nop
    ctx->pc = 0x1cc540u;
    // NOP
    // 0x1cc544: 0x0  nop
    ctx->pc = 0x1cc544u;
    // NOP
    // 0x1cc548: 0x3810  mfhi        $a3
    ctx->pc = 0x1cc548u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x1cc54c: 0x24e7000c  addiu       $a3, $a3, 0xC
    ctx->pc = 0x1cc54cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
    // 0x1cc550: 0x72273818  mult1       $a3, $s1, $a3
    ctx->pc = 0x1cc550u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 7); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1cc554: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x1cc554u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1cc558: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x1cc558u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1cc55c: 0x2473821  addu        $a3, $s2, $a3
    ctx->pc = 0x1cc55cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x1cc560: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x1cc560u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x1cc564: 0x8c27f004  lw          $a3, -0xFFC($at)
    ctx->pc = 0x1cc564u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963204)));
    // 0x1cc568: 0x74040  sll         $t0, $a3, 1
    ctx->pc = 0x1cc568u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x1cc56c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cc56cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cc570: 0x73fc2  srl         $a3, $a3, 31
    ctx->pc = 0x1cc570u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x1cc574: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x1cc574u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1cc578: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1cc578u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1cc57c: 0xe43826  xor         $a3, $a3, $a0
    ctx->pc = 0x1cc57cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 4));
    // 0x1cc580: 0xac27f004  sw          $a3, -0xFFC($at)
    ctx->pc = 0x1cc580u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 7));
    // 0x1cc584: 0x73a02  srl         $a3, $a3, 8
    ctx->pc = 0x1cc584u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 8));
    // 0x1cc588: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cc588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cc58c: 0xe3001b  divu        $zero, $a3, $v1
    ctx->pc = 0x1cc58cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x1cc590: 0x0  nop
    ctx->pc = 0x1cc590u;
    // NOP
    // 0x1cc594: 0x0  nop
    ctx->pc = 0x1cc594u;
    // NOP
    // 0x1cc598: 0x3810  mfhi        $a3
    ctx->pc = 0x1cc598u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x1cc59c: 0x24e7000c  addiu       $a3, $a3, 0xC
    ctx->pc = 0x1cc59cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
    // 0x1cc5a0: 0x2273818  mult        $a3, $s1, $a3
    ctx->pc = 0x1cc5a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1cc5a4: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x1cc5a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1cc5a8: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x1cc5a8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1cc5ac: 0x2473821  addu        $a3, $s2, $a3
    ctx->pc = 0x1cc5acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x1cc5b0: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x1cc5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x1cc5b4: 0x8c27f004  lw          $a3, -0xFFC($at)
    ctx->pc = 0x1cc5b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963204)));
    // 0x1cc5b8: 0x74040  sll         $t0, $a3, 1
    ctx->pc = 0x1cc5b8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x1cc5bc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cc5bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cc5c0: 0x73fc2  srl         $a3, $a3, 31
    ctx->pc = 0x1cc5c0u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x1cc5c4: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x1cc5c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1cc5c8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1cc5c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1cc5cc: 0xe42026  xor         $a0, $a3, $a0
    ctx->pc = 0x1cc5ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 4));
    // 0x1cc5d0: 0xac24f004  sw          $a0, -0xFFC($at)
    ctx->pc = 0x1cc5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 4));
    // 0x1cc5d4: 0x42202  srl         $a0, $a0, 8
    ctx->pc = 0x1cc5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x1cc5d8: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x1cc5d8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x1cc5dc: 0x0  nop
    ctx->pc = 0x1cc5dcu;
    // NOP
    // 0x1cc5e0: 0x0  nop
    ctx->pc = 0x1cc5e0u;
    // NOP
    // 0x1cc5e4: 0x1810  mfhi        $v1
    ctx->pc = 0x1cc5e4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1cc5e8: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x1cc5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x1cc5ec: 0x72231818  mult1       $v1, $s1, $v1
    ctx->pc = 0x1cc5ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1cc5f0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1cc5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1cc5f4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1cc5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cc5f8: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x1cc5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1cc5fc: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1cc5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_1cc600:
    // 0x1cc600: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1cc600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1cc604: 0x94246ac4  lhu         $a0, 0x6AC4($at)
    ctx->pc = 0x1cc604u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x1cc608: 0x24030701  addiu       $v1, $zero, 0x701
    ctx->pc = 0x1cc608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1793));
    // 0x1cc60c: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CC60Cu;
    {
        const bool branch_taken_0x1cc60c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1CC610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC60Cu;
        // 0x1cc610: 0x24030711  addiu       $v1, $zero, 0x711 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1809));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc60c) {
            ctx->pc = 0x1CC628u;
            goto label_1cc628;
        }
    }
    ctx->pc = 0x1CC614u;
    // 0x1cc614: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CC614u;
    {
        const bool branch_taken_0x1cc614 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1cc614) {
            ctx->pc = 0x1CC628u;
            goto label_1cc628;
        }
    }
    ctx->pc = 0x1CC61Cu;
    // 0x1cc61c: 0x24030071  addiu       $v1, $zero, 0x71
    ctx->pc = 0x1cc61cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
    // 0x1cc620: 0x14830025  bne         $a0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x1CC620u;
    {
        const bool branch_taken_0x1cc620 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1cc620) {
            ctx->pc = 0x1CC6B8u;
            goto label_1cc6b8;
        }
    }
    ctx->pc = 0x1CC628u;
label_1cc628:
    // 0x1cc628: 0x8f8387cc  lw          $v1, -0x7834($gp)
    ctx->pc = 0x1cc628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936524)));
    // 0x1cc62c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1cc62cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1cc630: 0xaf8387cc  sw          $v1, -0x7834($gp)
    ctx->pc = 0x1cc630u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936524), GPR_U32(ctx, 3));
    // 0x1cc634: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x1cc634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x1cc638: 0x1460001f  bnez        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1CC638u;
    {
        const bool branch_taken_0x1cc638 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC638u;
        // 0x1cc63c: 0x3c100041  lui         $s0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc638) {
            ctx->pc = 0x1CC6B8u;
            goto label_1cc6b8;
        }
    }
    ctx->pc = 0x1CC640u;
    // 0x1cc640: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1cc640u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc644: 0x2610fb90  addiu       $s0, $s0, -0x470
    ctx->pc = 0x1cc644u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966160));
    // 0x1cc648: 0x27b700d4  addiu       $s7, $sp, 0xD4
    ctx->pc = 0x1cc648u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x1cc64c: 0x27be00d8  addiu       $fp, $sp, 0xD8
    ctx->pc = 0x1cc64cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_1cc650:
    // 0x1cc650: 0xc04d4a0  jal         func_135280
    ctx->pc = 0x1CC650u;
    SET_GPR_U32(ctx, 31, 0x1CC658u);
    ctx->pc = 0x135280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135280u, 0x1CC650u, 0x1CC658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC658u;
label_1cc658:
    // 0x1cc658: 0xc04008c  jal         func_100230
    ctx->pc = 0x1CC658u;
    SET_GPR_U32(ctx, 31, 0x1CC660u);
    ctx->pc = 0x1CC65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC658u;
    // 0x1cc65c: 0x3044000f  andi        $a0, $v0, 0xF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    ctx->in_delay_slot = false;
    ctx->pc = 0x100230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100230u, 0x1CC658u, 0x1CC660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC660u;
label_1cc660:
    // 0x1cc660: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x1cc660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cc664: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1cc664u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1cc668: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x1cc668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1cc66c: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1cc66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc670: 0xc04d4a0  jal         func_135280
    ctx->pc = 0x1CC670u;
    SET_GPR_U32(ctx, 31, 0x1CC678u);
    ctx->pc = 0x1CC674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC670u;
    // 0x1cc674: 0xe6e00000  swc1        $f0, 0x0($s7) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x135280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135280u, 0x1CC670u, 0x1CC678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC678u;
label_1cc678:
    // 0x1cc678: 0xc04008c  jal         func_100230
    ctx->pc = 0x1CC678u;
    SET_GPR_U32(ctx, 31, 0x1CC680u);
    ctx->pc = 0x1CC67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC678u;
    // 0x1cc67c: 0x3044000f  andi        $a0, $v0, 0xF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    ctx->in_delay_slot = false;
    ctx->pc = 0x100230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100230u, 0x1CC678u, 0x1CC680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC680u;
label_1cc680:
    // 0x1cc680: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x1cc680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cc684: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x1cc684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x1cc688: 0x3c040084  lui         $a0, 0x84
    ctx->pc = 0x1cc688u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)132 << 16));
    // 0x1cc68c: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x1cc68cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1cc690: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cc690u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cc694: 0x248410c0  addiu       $a0, $a0, 0x10C0
    ctx->pc = 0x1cc694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4288));
    // 0x1cc698: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1cc698u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1cc69c: 0xc062d38  jal         func_18B4E0
    ctx->pc = 0x1CC69Cu;
    SET_GPR_U32(ctx, 31, 0x1CC6A4u);
    ctx->pc = 0x1CC6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC69Cu;
    // 0x1cc6a0: 0xe7c00000  swc1        $f0, 0x0($fp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B4E0u, 0x1CC69Cu, 0x1CC6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC6A4u;
label_1cc6a4:
    // 0x1cc6a4: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1cc6a4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1cc6a8: 0x2ec30004  sltiu       $v1, $s6, 0x4
    ctx->pc = 0x1cc6a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1cc6ac: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1CC6ACu;
    {
        const bool branch_taken_0x1cc6ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC6ACu;
        // 0x1cc6b0: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc6ac) {
            ctx->pc = 0x1CC650u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cc650;
        }
    }
    ctx->pc = 0x1CC6B4u;
    // 0x1cc6b4: 0x0  nop
    ctx->pc = 0x1cc6b4u;
    // NOP
label_1cc6b8:
    // 0x1cc6b8: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1cc6b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1cc6bc: 0x94246ac4  lhu         $a0, 0x6AC4($at)
    ctx->pc = 0x1cc6bcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x1cc6c0: 0x24030715  addiu       $v1, $zero, 0x715
    ctx->pc = 0x1cc6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1813));
    // 0x1cc6c4: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CC6C4u;
    {
        const bool branch_taken_0x1cc6c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1CC6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC6C4u;
        // 0x1cc6c8: 0x24030075  addiu       $v1, $zero, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc6c4) {
            ctx->pc = 0x1CC6D8u;
            goto label_1cc6d8;
        }
    }
    ctx->pc = 0x1CC6CCu;
    // 0x1cc6cc: 0x148300ac  bne         $a0, $v1, . + 4 + (0xAC << 2)
    ctx->pc = 0x1CC6CCu;
    {
        const bool branch_taken_0x1cc6cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1cc6cc) {
            ctx->pc = 0x1CC980u;
            goto label_1cc980;
        }
    }
    ctx->pc = 0x1CC6D4u;
    // 0x1cc6d4: 0x0  nop
    ctx->pc = 0x1cc6d4u;
    // NOP
label_1cc6d8:
    // 0x1cc6d8: 0x26830001  addiu       $v1, $s4, 0x1
    ctx->pc = 0x1cc6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1cc6dc: 0x2c61001a  sltiu       $at, $v1, 0x1A
    ctx->pc = 0x1cc6dcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x1cc6e0: 0x1420004d  bnez        $at, . + 4 + (0x4D << 2)
    ctx->pc = 0x1CC6E0u;
    {
        const bool branch_taken_0x1cc6e0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC6E0u;
        // 0x1cc6e4: 0x24040019  addiu       $a0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc6e0) {
            ctx->pc = 0x1CC818u;
            goto label_1cc818;
        }
    }
    ctx->pc = 0x1CC6E8u;
    // 0x1cc6e8: 0x2465ffe7  addiu       $a1, $v1, -0x19
    ctx->pc = 0x1cc6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967271));
    // 0x1cc6ec: 0x2ca10009  sltiu       $at, $a1, 0x9
    ctx->pc = 0x1cc6ecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x1cc6f0: 0x1420003b  bnez        $at, . + 4 + (0x3B << 2)
    ctx->pc = 0x1CC6F0u;
    {
        const bool branch_taken_0x1cc6f0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC6F0u;
        // 0x1cc6f4: 0x2683fff9  addiu       $v1, $s4, -0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967289));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc6f0) {
            ctx->pc = 0x1CC7E0u;
            goto label_1cc7e0;
        }
    }
    ctx->pc = 0x1CC6F8u;
label_1cc6f8:
    // 0x1cc6f8: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x1cc6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1cc6fc: 0x914018  mult        $t0, $a0, $s1
    ctx->pc = 0x1cc6fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x1cc700: 0x24870002  addiu       $a3, $a0, 0x2
    ctx->pc = 0x1cc700u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x1cc704: 0x70b12818  mult1       $a1, $a1, $s1
    ctx->pc = 0x1cc704u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 17); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1cc708: 0x24860003  addiu       $a2, $a0, 0x3
    ctx->pc = 0x1cc708u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x1cc70c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1cc70cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1cc710: 0x70d13018  mult1       $a2, $a2, $s1
    ctx->pc = 0x1cc710u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 17); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1cc714: 0x66080  sll         $t4, $a2, 2
    ctx->pc = 0x1cc714u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1cc718: 0x2655821  addu        $t3, $s3, $a1
    ctx->pc = 0x1cc718u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x1cc71c: 0xf14818  mult        $t1, $a3, $s1
    ctx->pc = 0x1cc71cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x1cc720: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x1cc720u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1cc724: 0x2455021  addu        $t2, $s2, $a1
    ctx->pc = 0x1cc724u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1cc728: 0x2483021  addu        $a2, $s2, $t0
    ctx->pc = 0x1cc728u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
    // 0x1cc72c: 0x24850004  addiu       $a1, $a0, 0x4
    ctx->pc = 0x1cc72cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1cc730: 0x2683821  addu        $a3, $s3, $t0
    ctx->pc = 0x1cc730u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 8)));
    // 0x1cc734: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x1cc734u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x1cc738: 0xace00090  sw          $zero, 0x90($a3)
    ctx->pc = 0x1cc738u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 144), GPR_U32(ctx, 0));
    // 0x1cc73c: 0x26c4021  addu        $t0, $s3, $t4
    ctx->pc = 0x1cc73cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 12)));
    // 0x1cc740: 0xacc00090  sw          $zero, 0x90($a2)
    ctx->pc = 0x1cc740u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 144), GPR_U32(ctx, 0));
    // 0x1cc744: 0x24c3821  addu        $a3, $s2, $t4
    ctx->pc = 0x1cc744u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 12)));
    // 0x1cc748: 0xb13018  mult        $a2, $a1, $s1
    ctx->pc = 0x1cc748u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1cc74c: 0xad600090  sw          $zero, 0x90($t3)
    ctx->pc = 0x1cc74cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 144), GPR_U32(ctx, 0));
    // 0x1cc750: 0xad400090  sw          $zero, 0x90($t2)
    ctx->pc = 0x1cc750u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 144), GPR_U32(ctx, 0));
    // 0x1cc754: 0x2692821  addu        $a1, $s3, $t1
    ctx->pc = 0x1cc754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 9)));
    // 0x1cc758: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1cc758u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1cc75c: 0xaca00090  sw          $zero, 0x90($a1)
    ctx->pc = 0x1cc75cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 144), GPR_U32(ctx, 0));
    // 0x1cc760: 0x2494821  addu        $t1, $s2, $t1
    ctx->pc = 0x1cc760u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 9)));
    // 0x1cc764: 0xad200090  sw          $zero, 0x90($t1)
    ctx->pc = 0x1cc764u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 144), GPR_U32(ctx, 0));
    // 0x1cc768: 0x24850005  addiu       $a1, $a0, 0x5
    ctx->pc = 0x1cc768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 5));
    // 0x1cc76c: 0xad000090  sw          $zero, 0x90($t0)
    ctx->pc = 0x1cc76cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 144), GPR_U32(ctx, 0));
    // 0x1cc770: 0x70b12818  mult1       $a1, $a1, $s1
    ctx->pc = 0x1cc770u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 17); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1cc774: 0xace00090  sw          $zero, 0x90($a3)
    ctx->pc = 0x1cc774u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 144), GPR_U32(ctx, 0));
    // 0x1cc778: 0x53880  sll         $a3, $a1, 2
    ctx->pc = 0x1cc778u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1cc77c: 0x2662821  addu        $a1, $s3, $a2
    ctx->pc = 0x1cc77cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x1cc780: 0xaca00090  sw          $zero, 0x90($a1)
    ctx->pc = 0x1cc780u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 144), GPR_U32(ctx, 0));
    // 0x1cc784: 0x2463021  addu        $a2, $s2, $a2
    ctx->pc = 0x1cc784u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x1cc788: 0xacc00090  sw          $zero, 0x90($a2)
    ctx->pc = 0x1cc788u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 144), GPR_U32(ctx, 0));
    // 0x1cc78c: 0x2672821  addu        $a1, $s3, $a3
    ctx->pc = 0x1cc78cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
    // 0x1cc790: 0xaca00090  sw          $zero, 0x90($a1)
    ctx->pc = 0x1cc790u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 144), GPR_U32(ctx, 0));
    // 0x1cc794: 0x2473021  addu        $a2, $s2, $a3
    ctx->pc = 0x1cc794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x1cc798: 0x24850006  addiu       $a1, $a0, 0x6
    ctx->pc = 0x1cc798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 6));
    // 0x1cc79c: 0xacc00090  sw          $zero, 0x90($a2)
    ctx->pc = 0x1cc79cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 144), GPR_U32(ctx, 0));
    // 0x1cc7a0: 0xb13018  mult        $a2, $a1, $s1
    ctx->pc = 0x1cc7a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1cc7a4: 0x24850007  addiu       $a1, $a0, 0x7
    ctx->pc = 0x1cc7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
    // 0x1cc7a8: 0x64880  sll         $t1, $a2, 2
    ctx->pc = 0x1cc7a8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1cc7ac: 0x70b12818  mult1       $a1, $a1, $s1
    ctx->pc = 0x1cc7acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 17); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1cc7b0: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1cc7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1cc7b4: 0x54080  sll         $t0, $a1, 2
    ctx->pc = 0x1cc7b4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1cc7b8: 0x2683821  addu        $a3, $s3, $t0
    ctx->pc = 0x1cc7b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 8)));
    // 0x1cc7bc: 0x2483021  addu        $a2, $s2, $t0
    ctx->pc = 0x1cc7bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
    // 0x1cc7c0: 0x2694021  addu        $t0, $s3, $t1
    ctx->pc = 0x1cc7c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 9)));
    // 0x1cc7c4: 0x83282b  sltu        $a1, $a0, $v1
    ctx->pc = 0x1cc7c4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1cc7c8: 0xad000090  sw          $zero, 0x90($t0)
    ctx->pc = 0x1cc7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 144), GPR_U32(ctx, 0));
    // 0x1cc7cc: 0x2494021  addu        $t0, $s2, $t1
    ctx->pc = 0x1cc7ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 9)));
    // 0x1cc7d0: 0xad000090  sw          $zero, 0x90($t0)
    ctx->pc = 0x1cc7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 144), GPR_U32(ctx, 0));
    // 0x1cc7d4: 0xace00090  sw          $zero, 0x90($a3)
    ctx->pc = 0x1cc7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 144), GPR_U32(ctx, 0));
    // 0x1cc7d8: 0x14a0ffc7  bnez        $a1, . + 4 + (-0x39 << 2)
    ctx->pc = 0x1CC7D8u;
    {
        const bool branch_taken_0x1cc7d8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC7D8u;
        // 0x1cc7dc: 0xacc00090  sw          $zero, 0x90($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc7d8) {
            ctx->pc = 0x1CC6F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cc6f8;
        }
    }
    ctx->pc = 0x1CC7E0u;
label_1cc7e0:
    // 0x1cc7e0: 0x26860001  addiu       $a2, $s4, 0x1
    ctx->pc = 0x1cc7e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1cc7e4: 0x86082b  sltu        $at, $a0, $a2
    ctx->pc = 0x1cc7e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1cc7e8: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x1CC7E8u;
    {
        const bool branch_taken_0x1cc7e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc7e8) {
            ctx->pc = 0x1CC818u;
            goto label_1cc818;
        }
    }
    ctx->pc = 0x1CC7F0u;
label_1cc7f0:
    // 0x1cc7f0: 0x911818  mult        $v1, $a0, $s1
    ctx->pc = 0x1cc7f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1cc7f4: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x1cc7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cc7f8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1cc7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1cc7fc: 0x2651821  addu        $v1, $s3, $a1
    ctx->pc = 0x1cc7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x1cc800: 0xac600090  sw          $zero, 0x90($v1)
    ctx->pc = 0x1cc800u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 144), GPR_U32(ctx, 0));
    // 0x1cc804: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x1cc804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1cc808: 0x86182b  sltu        $v1, $a0, $a2
    ctx->pc = 0x1cc808u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1cc80c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1CC80Cu;
    {
        const bool branch_taken_0x1cc80c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC80Cu;
        // 0x1cc810: 0xaca00090  sw          $zero, 0x90($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc80c) {
            ctx->pc = 0x1CC7F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cc7f0;
        }
    }
    ctx->pc = 0x1CC814u;
    // 0x1cc814: 0x0  nop
    ctx->pc = 0x1cc814u;
    // NOP
label_1cc818:
    // 0x1cc818: 0x26a30004  addiu       $v1, $s5, 0x4
    ctx->pc = 0x1cc818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x1cc81c: 0x2c610025  sltiu       $at, $v1, 0x25
    ctx->pc = 0x1cc81cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)37) ? 1 : 0);
    // 0x1cc820: 0x14200057  bnez        $at, . + 4 + (0x57 << 2)
    ctx->pc = 0x1CC820u;
    {
        const bool branch_taken_0x1cc820 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC820u;
        // 0x1cc824: 0x24050024  addiu       $a1, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc820) {
            ctx->pc = 0x1CC980u;
            goto label_1cc980;
        }
    }
    ctx->pc = 0x1CC828u;
    // 0x1cc828: 0x2463ffdc  addiu       $v1, $v1, -0x24
    ctx->pc = 0x1cc828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967260));
    // 0x1cc82c: 0x2c610009  sltiu       $at, $v1, 0x9
    ctx->pc = 0x1cc82cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x1cc830: 0x14200041  bnez        $at, . + 4 + (0x41 << 2)
    ctx->pc = 0x1CC830u;
    {
        const bool branch_taken_0x1cc830 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC830u;
        // 0x1cc834: 0x26a4fffc  addiu       $a0, $s5, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc830) {
            ctx->pc = 0x1CC938u;
            goto label_1cc938;
        }
    }
    ctx->pc = 0x1CC838u;
    // 0x1cc838: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1cc838u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1cc83c: 0x713021  addu        $a2, $v1, $s1
    ctx->pc = 0x1cc83cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1cc840: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1cc840u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1cc844: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1cc844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1cc848:
    // 0x1cc848: 0xa33021  addu        $a2, $a1, $v1
    ctx->pc = 0x1cc848u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1cc84c: 0x64080  sll         $t0, $a2, 2
    ctx->pc = 0x1cc84cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1cc850: 0x2683821  addu        $a3, $s3, $t0
    ctx->pc = 0x1cc850u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 8)));
    // 0x1cc854: 0x24a60001  addiu       $a2, $a1, 0x1
    ctx->pc = 0x1cc854u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1cc858: 0xace00010  sw          $zero, 0x10($a3)
    ctx->pc = 0x1cc858u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 0));
    // 0x1cc85c: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x1cc85cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1cc860: 0x2483821  addu        $a3, $s2, $t0
    ctx->pc = 0x1cc860u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
    // 0x1cc864: 0xace00010  sw          $zero, 0x10($a3)
    ctx->pc = 0x1cc864u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 0));
    // 0x1cc868: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x1cc868u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1cc86c: 0x2673021  addu        $a2, $s3, $a3
    ctx->pc = 0x1cc86cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
    // 0x1cc870: 0xacc00010  sw          $zero, 0x10($a2)
    ctx->pc = 0x1cc870u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
    // 0x1cc874: 0x2473821  addu        $a3, $s2, $a3
    ctx->pc = 0x1cc874u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x1cc878: 0x24a60002  addiu       $a2, $a1, 0x2
    ctx->pc = 0x1cc878u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x1cc87c: 0xace00010  sw          $zero, 0x10($a3)
    ctx->pc = 0x1cc87cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 0));
    // 0x1cc880: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x1cc880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1cc884: 0x64080  sll         $t0, $a2, 2
    ctx->pc = 0x1cc884u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1cc888: 0x2683821  addu        $a3, $s3, $t0
    ctx->pc = 0x1cc888u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 8)));
    // 0x1cc88c: 0x24a60003  addiu       $a2, $a1, 0x3
    ctx->pc = 0x1cc88cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    // 0x1cc890: 0xace00010  sw          $zero, 0x10($a3)
    ctx->pc = 0x1cc890u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 0));
    // 0x1cc894: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x1cc894u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1cc898: 0x2483821  addu        $a3, $s2, $t0
    ctx->pc = 0x1cc898u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
    // 0x1cc89c: 0xace00010  sw          $zero, 0x10($a3)
    ctx->pc = 0x1cc89cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 0));
    // 0x1cc8a0: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x1cc8a0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1cc8a4: 0x2673021  addu        $a2, $s3, $a3
    ctx->pc = 0x1cc8a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
    // 0x1cc8a8: 0xacc00010  sw          $zero, 0x10($a2)
    ctx->pc = 0x1cc8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
    // 0x1cc8ac: 0x2473821  addu        $a3, $s2, $a3
    ctx->pc = 0x1cc8acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x1cc8b0: 0x24a60004  addiu       $a2, $a1, 0x4
    ctx->pc = 0x1cc8b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1cc8b4: 0xace00010  sw          $zero, 0x10($a3)
    ctx->pc = 0x1cc8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 0));
    // 0x1cc8b8: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x1cc8b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1cc8bc: 0x64080  sll         $t0, $a2, 2
    ctx->pc = 0x1cc8bcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1cc8c0: 0x2683821  addu        $a3, $s3, $t0
    ctx->pc = 0x1cc8c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 8)));
    // 0x1cc8c4: 0x24a60005  addiu       $a2, $a1, 0x5
    ctx->pc = 0x1cc8c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 5));
    // 0x1cc8c8: 0xace00010  sw          $zero, 0x10($a3)
    ctx->pc = 0x1cc8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 0));
    // 0x1cc8cc: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x1cc8ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1cc8d0: 0x2483821  addu        $a3, $s2, $t0
    ctx->pc = 0x1cc8d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
    // 0x1cc8d4: 0xace00010  sw          $zero, 0x10($a3)
    ctx->pc = 0x1cc8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 0));
    // 0x1cc8d8: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x1cc8d8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1cc8dc: 0x2673021  addu        $a2, $s3, $a3
    ctx->pc = 0x1cc8dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
    // 0x1cc8e0: 0xacc00010  sw          $zero, 0x10($a2)
    ctx->pc = 0x1cc8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
    // 0x1cc8e4: 0x2473821  addu        $a3, $s2, $a3
    ctx->pc = 0x1cc8e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x1cc8e8: 0x24a60006  addiu       $a2, $a1, 0x6
    ctx->pc = 0x1cc8e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
    // 0x1cc8ec: 0xace00010  sw          $zero, 0x10($a3)
    ctx->pc = 0x1cc8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 0));
    // 0x1cc8f0: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x1cc8f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1cc8f4: 0x64080  sll         $t0, $a2, 2
    ctx->pc = 0x1cc8f4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1cc8f8: 0x2683821  addu        $a3, $s3, $t0
    ctx->pc = 0x1cc8f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 8)));
    // 0x1cc8fc: 0x24a60007  addiu       $a2, $a1, 0x7
    ctx->pc = 0x1cc8fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
    // 0x1cc900: 0xace00010  sw          $zero, 0x10($a3)
    ctx->pc = 0x1cc900u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 0));
    // 0x1cc904: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x1cc904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1cc908: 0x2483821  addu        $a3, $s2, $t0
    ctx->pc = 0x1cc908u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
    // 0x1cc90c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1cc90cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1cc910: 0xace00010  sw          $zero, 0x10($a3)
    ctx->pc = 0x1cc910u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 0));
    // 0x1cc914: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1cc914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1cc918: 0x2663821  addu        $a3, $s3, $a2
    ctx->pc = 0x1cc918u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x1cc91c: 0x2463021  addu        $a2, $s2, $a2
    ctx->pc = 0x1cc91cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x1cc920: 0xace00010  sw          $zero, 0x10($a3)
    ctx->pc = 0x1cc920u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 0));
    // 0x1cc924: 0xacc00010  sw          $zero, 0x10($a2)
    ctx->pc = 0x1cc924u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
    // 0x1cc928: 0xa4302b  sltu        $a2, $a1, $a0
    ctx->pc = 0x1cc928u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1cc92c: 0x14c0ffc6  bnez        $a2, . + 4 + (-0x3A << 2)
    ctx->pc = 0x1CC92Cu;
    {
        const bool branch_taken_0x1cc92c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cc92c) {
            ctx->pc = 0x1CC848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cc848;
        }
    }
    ctx->pc = 0x1CC934u;
    // 0x1cc934: 0x0  nop
    ctx->pc = 0x1cc934u;
    // NOP
label_1cc938:
    // 0x1cc938: 0x26a60004  addiu       $a2, $s5, 0x4
    ctx->pc = 0x1cc938u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x1cc93c: 0xa6082b  sltu        $at, $a1, $a2
    ctx->pc = 0x1cc93cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1cc940: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x1CC940u;
    {
        const bool branch_taken_0x1cc940 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC940u;
        // 0x1cc944: 0x111880  sll         $v1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc940) {
            ctx->pc = 0x1CC980u;
            goto label_1cc980;
        }
    }
    ctx->pc = 0x1CC948u;
    // 0x1cc948: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x1cc948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1cc94c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1cc94cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1cc950: 0x833821  addu        $a3, $a0, $v1
    ctx->pc = 0x1cc950u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1cc954: 0x0  nop
    ctx->pc = 0x1cc954u;
    // NOP
label_1cc958:
    // 0x1cc958: 0xa71821  addu        $v1, $a1, $a3
    ctx->pc = 0x1cc958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1cc95c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1cc95cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cc960: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1cc960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1cc964: 0x2641821  addu        $v1, $s3, $a0
    ctx->pc = 0x1cc964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x1cc968: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x1cc968u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x1cc96c: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x1cc96cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x1cc970: 0xa6182b  sltu        $v1, $a1, $a2
    ctx->pc = 0x1cc970u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1cc974: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1CC974u;
    {
        const bool branch_taken_0x1cc974 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC974u;
        // 0x1cc978: 0xac800010  sw          $zero, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc974) {
            ctx->pc = 0x1CC958u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cc958;
        }
    }
    ctx->pc = 0x1CC97Cu;
    // 0x1cc97c: 0x0  nop
    ctx->pc = 0x1cc97cu;
    // NOP
label_1cc980:
    // 0x1cc980: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1cc980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1cc984: 0x94246ac4  lhu         $a0, 0x6AC4($at)
    ctx->pc = 0x1cc984u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x1cc988: 0x2403070c  addiu       $v1, $zero, 0x70C
    ctx->pc = 0x1cc988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1804));
    // 0x1cc98c: 0x1483001a  bne         $a0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1CC98Cu;
    {
        const bool branch_taken_0x1cc98c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1cc98c) {
            ctx->pc = 0x1CC9F8u;
            goto label_1cc9f8;
        }
    }
    ctx->pc = 0x1CC994u;
    // 0x1cc994: 0xc04d4a0  jal         func_135280
    ctx->pc = 0x1CC994u;
    SET_GPR_U32(ctx, 31, 0x1CC99Cu);
    ctx->pc = 0x135280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135280u, 0x1CC994u, 0x1CC99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC99Cu;
label_1cc99c:
    // 0x1cc99c: 0x15283c  dsll32      $a1, $s5, 0
    ctx->pc = 0x1cc99cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) << (32 + 0));
    // 0x1cc9a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cc9a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc9a4: 0xc04b742  jal         func_12DD08
    ctx->pc = 0x1CC9A4u;
    SET_GPR_U32(ctx, 31, 0x1CC9ACu);
    ctx->pc = 0x1CC9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC9A4u;
    // 0x1cc9a8: 0x5283e  dsrl32      $a1, $a1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DD08u, 0x1CC9A4u, 0x1CC9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC9ACu;
label_1cc9ac:
    // 0x1cc9ac: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x1cc9acu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1cc9b0: 0xc04d4a0  jal         func_135280
    ctx->pc = 0x1CC9B0u;
    SET_GPR_U32(ctx, 31, 0x1CC9B8u);
    ctx->pc = 0x1CC9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC9B0u;
    // 0x1cc9b4: 0x10803f  dsra32      $s0, $s0, 0 (Delay Slot)
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135280u, 0x1CC9B0u, 0x1CC9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC9B8u;
label_1cc9b8:
    // 0x1cc9b8: 0x14283c  dsll32      $a1, $s4, 0
    ctx->pc = 0x1cc9b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) << (32 + 0));
    // 0x1cc9bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cc9bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc9c0: 0xc04b742  jal         func_12DD08
    ctx->pc = 0x1CC9C0u;
    SET_GPR_U32(ctx, 31, 0x1CC9C8u);
    ctx->pc = 0x1CC9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC9C0u;
    // 0x1cc9c4: 0x5283e  dsrl32      $a1, $a1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DD08u, 0x1CC9C0u, 0x1CC9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC9C8u;
label_1cc9c8:
    // 0x1cc9c8: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1cc9c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1cc9cc: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x1cc9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x1cc9d0: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1cc9d0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1cc9d4: 0x912018  mult        $a0, $a0, $s1
    ctx->pc = 0x1cc9d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1cc9d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cc9d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cc9dc: 0x2041821  addu        $v1, $s0, $a0
    ctx->pc = 0x1cc9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x1cc9e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1cc9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cc9e4: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1cc9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1cc9e8: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x1cc9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cc9ec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1cc9ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1cc9f0: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x1cc9f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x1cc9f4: 0x0  nop
    ctx->pc = 0x1cc9f4u;
    // NOP
label_1cc9f8:
    // 0x1cc9f8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1cc9f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1cc9fc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1cc9fcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1cca00: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1cca00u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1cca04: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1cca04u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1cca08: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1cca08u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1cca0c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1cca0cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cca10: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1cca10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cca14: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1cca14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cca18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cca18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cca1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cca1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cca20: 0x3e00008  jr          $ra
    ctx->pc = 0x1CCA20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCA20u;
        // 0x1cca24: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCA20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CCA28u;
}
