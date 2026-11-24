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

// Function: sub_0029E4A0
// Address: 0x29e4a0 - 0x29e760
void sub_0029E4A0_0x29e4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029E4A0_0x29e4a0");
#endif

    switch (ctx->pc) {
        case 0x29e4f8u: goto label_29e4f8;
        case 0x29e634u: goto label_29e634;
        case 0x29e6e0u: goto label_29e6e0;
        case 0x29e708u: goto label_29e708;
        default: break;
    }

    ctx->pc = 0x29e4a0u;

    // 0x29e4a0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x29e4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x29e4a4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x29e4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x29e4a8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x29e4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x29e4ac: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x29e4acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x29e4b0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x29e4b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x29e4b4: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x29e4b4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e4b8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x29e4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x29e4bc: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x29e4bcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e4c0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x29e4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x29e4c4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x29e4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x29e4c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29e4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29e4cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29e4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29e4d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29e4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29e4d4: 0x8c820078  lw          $v0, 0x78($a0)
    ctx->pc = 0x29e4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x29e4d8: 0x94830068  lhu         $v1, 0x68($a0)
    ctx->pc = 0x29e4d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x29e4dc: 0x8c95007c  lw          $s5, 0x7C($a0)
    ctx->pc = 0x29e4dcu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x29e4e0: 0x24540010  addiu       $s4, $v0, 0x10
    ctx->pc = 0x29e4e0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x29e4e4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x29e4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x29e4e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29e4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29e4ec: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x29e4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x29e4f0: 0x282f021  addu        $fp, $s4, $v0
    ctx->pc = 0x29e4f0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x29e4f4: 0x0  nop
    ctx->pc = 0x29e4f4u;
    // NOP
label_29e4f8:
    // 0x29e4f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29e4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29e4fc: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x29e4fcu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x29e500: 0xaea00004  sw          $zero, 0x4($s5)
    ctx->pc = 0x29e500u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
    // 0x29e504: 0xaea00010  sw          $zero, 0x10($s5)
    ctx->pc = 0x29e504u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 0));
    // 0x29e508: 0x92920024  lbu         $s2, 0x24($s4)
    ctx->pc = 0x29e508u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x29e50c: 0xa2b20001  sb          $s2, 0x1($s5)
    ctx->pc = 0x29e50cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 1), (uint8_t)GPR_U32(ctx, 18));
    // 0x29e510: 0xaeb6000c  sw          $s6, 0xC($s5)
    ctx->pc = 0x29e510u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 22));
    // 0x29e514: 0xaeb400d8  sw          $s4, 0xD8($s5)
    ctx->pc = 0x29e514u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 216), GPR_U32(ctx, 20));
    // 0x29e518: 0xaea00028  sw          $zero, 0x28($s5)
    ctx->pc = 0x29e518u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 40), GPR_U32(ctx, 0));
    // 0x29e51c: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x29e51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x29e520: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x29e520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x29e524: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29E524u;
    {
        const bool branch_taken_0x29e524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E524u;
        // 0x29e528: 0x2c0882d  daddu       $s1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e524) {
            ctx->pc = 0x29E538u;
            goto label_29e538;
        }
    }
    ctx->pc = 0x29E52Cu;
    // 0x29e52c: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x29e52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x29e530: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x29e530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x29e534: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x29e534u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
label_29e538:
    // 0x29e538: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x29e538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x29e53c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x29e53cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x29e540: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29E540u;
    {
        const bool branch_taken_0x29e540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e540) {
            ctx->pc = 0x29E558u;
            goto label_29e558;
        }
    }
    ctx->pc = 0x29E548u;
    // 0x29e548: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x29e548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x29e54c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x29e54cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x29e550: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x29e550u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
    // 0x29e554: 0x0  nop
    ctx->pc = 0x29e554u;
    // NOP
label_29e558:
    // 0x29e558: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x29e558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x29e55c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x29e55cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x29e560: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29E560u;
    {
        const bool branch_taken_0x29e560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e560) {
            ctx->pc = 0x29E578u;
            goto label_29e578;
        }
    }
    ctx->pc = 0x29E568u;
    // 0x29e568: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x29e568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x29e56c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x29e56cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x29e570: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x29e570u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
    // 0x29e574: 0x0  nop
    ctx->pc = 0x29e574u;
    // NOP
label_29e578:
    // 0x29e578: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x29e578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x29e57c: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x29e57cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x29e580: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29E580u;
    {
        const bool branch_taken_0x29e580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e580) {
            ctx->pc = 0x29E598u;
            goto label_29e598;
        }
    }
    ctx->pc = 0x29E588u;
    // 0x29e588: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x29e588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x29e58c: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x29e58cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x29e590: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x29e590u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
    // 0x29e594: 0x0  nop
    ctx->pc = 0x29e594u;
    // NOP
label_29e598:
    // 0x29e598: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x29e598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x29e59c: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x29e59cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x29e5a0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x29E5A0u;
    {
        const bool branch_taken_0x29e5a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e5a0) {
            ctx->pc = 0x29E5C8u;
            goto label_29e5c8;
        }
    }
    ctx->pc = 0x29E5A8u;
    // 0x29e5a8: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x29e5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x29e5ac: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x29e5acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x29e5b0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x29e5b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x29e5b4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x29e5b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x29e5b8: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x29e5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
    // 0x29e5bc: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x29e5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x29e5c0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x29e5c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x29e5c4: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x29e5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
label_29e5c8:
    // 0x29e5c8: 0x92830018  lbu         $v1, 0x18($s4)
    ctx->pc = 0x29e5c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x29e5cc: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x29e5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x29e5d0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29E5D0u;
    {
        const bool branch_taken_0x29e5d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x29e5d0) {
            ctx->pc = 0x29E5E8u;
            goto label_29e5e8;
        }
    }
    ctx->pc = 0x29E5D8u;
    // 0x29e5d8: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x29e5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x29e5dc: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x29e5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x29e5e0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x29e5e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x29e5e4: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x29e5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
label_29e5e8:
    // 0x29e5e8: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x29e5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x29e5ec: 0x2c2b021  addu        $s6, $s6, $v0
    ctx->pc = 0x29e5ecu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x29e5f0: 0x32c3000f  andi        $v1, $s6, 0xF
    ctx->pc = 0x29e5f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)15);
    // 0x29e5f4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x29E5F4u;
    {
        const bool branch_taken_0x29e5f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E5F4u;
        // 0x29e5f8: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e5f4) {
            ctx->pc = 0x29E608u;
            goto label_29e608;
        }
    }
    ctx->pc = 0x29E5FCu;
    // 0x29e5fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x29E5FCu;
    {
        const bool branch_taken_0x29e5fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E5FCu;
        // 0x29e600: 0x431023  subu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e5fc) {
            ctx->pc = 0x29E610u;
            goto label_29e610;
        }
    }
    ctx->pc = 0x29E604u;
    // 0x29e604: 0x0  nop
    ctx->pc = 0x29e604u;
    // NOP
label_29e608:
    // 0x29e608: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29e608u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e60c: 0x0  nop
    ctx->pc = 0x29e60cu;
    // NOP
label_29e610:
    // 0x29e610: 0x2c2b021  addu        $s6, $s6, $v0
    ctx->pc = 0x29e610u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x29e614: 0x26a500f0  addiu       $a1, $s5, 0xF0
    ctx->pc = 0x29e614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 240));
    // 0x29e618: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x29e618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x29e61c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x29e61cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e620: 0xaea50008  sw          $a1, 0x8($s5)
    ctx->pc = 0x29e620u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 5));
    // 0x29e624: 0x344617fd  ori         $a2, $v0, 0x17FD
    ctx->pc = 0x29e624u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6141);
    // 0x29e628: 0x24070044  addiu       $a3, $zero, 0x44
    ctx->pc = 0x29e628u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x29e62c: 0xc0a7a78  jal         func_29E9E0
    ctx->pc = 0x29E62Cu;
    SET_GPR_U32(ctx, 31, 0x29E634u);
    ctx->pc = 0x29E630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E62Cu;
    // 0x29e630: 0x2408003c  addiu       $t0, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E9E0u, 0x29E62Cu, 0x29E634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E634u;
label_29e634:
    // 0x29e634: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x29e634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x29e638: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x29e638u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x29e63c: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x29e63cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x29e640: 0x2403ffcf  addiu       $v1, $zero, -0x31
    ctx->pc = 0x29e640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x29e644: 0xaea20140  sw          $v0, 0x140($s5)
    ctx->pc = 0x29e644u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 320), GPR_U32(ctx, 2));
    // 0x29e648: 0x3c027001  lui         $v0, 0x7001
    ctx->pc = 0x29e648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28673 << 16));
    // 0x29e64c: 0xaea40144  sw          $a0, 0x144($s5)
    ctx->pc = 0x29e64cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 324), GPR_U32(ctx, 4));
    // 0x29e650: 0x344203ee  ori         $v0, $v0, 0x3EE
    ctx->pc = 0x29e650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1006);
    // 0x29e654: 0xaea30148  sw          $v1, 0x148($s5)
    ctx->pc = 0x29e654u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 328), GPR_U32(ctx, 3));
    // 0x29e658: 0xaea2014c  sw          $v0, 0x14C($s5)
    ctx->pc = 0x29e658u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 332), GPR_U32(ctx, 2));
    // 0x29e65c: 0x9282003a  lbu         $v0, 0x3A($s4)
    ctx->pc = 0x29e65cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 58)));
    // 0x29e660: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29E660u;
    {
        const bool branch_taken_0x29e660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e660) {
            ctx->pc = 0x29E678u;
            goto label_29e678;
        }
    }
    ctx->pc = 0x29E668u;
    // 0x29e668: 0x244200f7  addiu       $v0, $v0, 0xF7
    ctx->pc = 0x29e668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 247));
    // 0x29e66c: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x29e66cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x29e670: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x29E670u;
    {
        const bool branch_taken_0x29e670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E670u;
        // 0x29e674: 0xaea20150  sw          $v0, 0x150($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 336), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e670) {
            ctx->pc = 0x29E6A8u;
            goto label_29e6a8;
        }
    }
    ctx->pc = 0x29E678u;
label_29e678:
    // 0x29e678: 0x152302  srl         $a0, $s5, 12
    ctx->pc = 0x29e678u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 21), 12));
    // 0x29e67c: 0x151902  srl         $v1, $s5, 4
    ctx->pc = 0x29e67cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 21), 4));
    // 0x29e680: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x29e680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x29e684: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x29e684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x29e688: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x29e688u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x29e68c: 0x0  nop
    ctx->pc = 0x29e68cu;
    // NOP
    // 0x29e690: 0x0  nop
    ctx->pc = 0x29e690u;
    // NOP
    // 0x29e694: 0x1010  mfhi        $v0
    ctx->pc = 0x29e694u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x29e698: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x29e698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x29e69c: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x29e69cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x29e6a0: 0xaea20150  sw          $v0, 0x150($s5)
    ctx->pc = 0x29e6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 336), GPR_U32(ctx, 2));
    // 0x29e6a4: 0x0  nop
    ctx->pc = 0x29e6a4u;
    // NOP
label_29e6a8:
    // 0x29e6a8: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x29e6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x29e6ac: 0xaea20154  sw          $v0, 0x154($s5)
    ctx->pc = 0x29e6acu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 340), GPR_U32(ctx, 2));
    // 0x29e6b0: 0x3c034318  lui         $v1, 0x4318
    ctx->pc = 0x29e6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17176 << 16));
    // 0x29e6b4: 0x3c026c01  lui         $v0, 0x6C01
    ctx->pc = 0x29e6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27649 << 16));
    // 0x29e6b8: 0xaea00158  sw          $zero, 0x158($s5)
    ctx->pc = 0x29e6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 344), GPR_U32(ctx, 0));
    // 0x29e6bc: 0x344203ef  ori         $v0, $v0, 0x3EF
    ctx->pc = 0x29e6bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1007);
    // 0x29e6c0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x29e6c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e6c4: 0xaea2015c  sw          $v0, 0x15C($s5)
    ctx->pc = 0x29e6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 348), GPR_U32(ctx, 2));
    // 0x29e6c8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x29e6c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e6cc: 0xaea30160  sw          $v1, 0x160($s5)
    ctx->pc = 0x29e6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 352), GPR_U32(ctx, 3));
    // 0x29e6d0: 0x24020ff0  addiu       $v0, $zero, 0xFF0
    ctx->pc = 0x29e6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4080));
    // 0x29e6d4: 0xaea30164  sw          $v1, 0x164($s5)
    ctx->pc = 0x29e6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 356), GPR_U32(ctx, 3));
    // 0x29e6d8: 0xaea30168  sw          $v1, 0x168($s5)
    ctx->pc = 0x29e6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 360), GPR_U32(ctx, 3));
    // 0x29e6dc: 0xaea2016c  sw          $v0, 0x16C($s5)
    ctx->pc = 0x29e6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 364), GPR_U32(ctx, 2));
label_29e6e0:
    // 0x29e6e0: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x29e6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x29e6e4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x29e6e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e6e8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x29e6e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e6ec: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x29e6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x29e6f0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x29e6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29e6f4: 0xae360000  sw          $s6, 0x0($s1)
    ctx->pc = 0x29e6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 22));
    // 0x29e6f8: 0x90460002  lbu         $a2, 0x2($v0)
    ctx->pc = 0x29e6f8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x29e6fc: 0x90470003  lbu         $a3, 0x3($v0)
    ctx->pc = 0x29e6fcu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x29e700: 0xc0a7a8c  jal         func_29EA30
    ctx->pc = 0x29E700u;
    SET_GPR_U32(ctx, 31, 0x29E708u);
    ctx->pc = 0x29E704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E700u;
    // 0x29e704: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29EA30u, 0x29E700u, 0x29E708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E708u;
label_29e708:
    // 0x29e708: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x29e708u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x29e70c: 0x26d60030  addiu       $s6, $s6, 0x30
    ctx->pc = 0x29e70cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 48));
    // 0x29e710: 0x272102b  sltu        $v0, $s3, $s2
    ctx->pc = 0x29e710u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x29e714: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x29E714u;
    {
        const bool branch_taken_0x29e714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29E718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E714u;
        // 0x29e718: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e714) {
            ctx->pc = 0x29E6E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29e6e0;
        }
    }
    ctx->pc = 0x29E71Cu;
    // 0x29e71c: 0x26940050  addiu       $s4, $s4, 0x50
    ctx->pc = 0x29e71cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
    // 0x29e720: 0x29e102b  sltu        $v0, $s4, $fp
    ctx->pc = 0x29e720u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x29e724: 0x1440ff74  bnez        $v0, . + 4 + (-0x8C << 2)
    ctx->pc = 0x29E724u;
    {
        const bool branch_taken_0x29e724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29E728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E724u;
        // 0x29e728: 0x26b501f0  addiu       $s5, $s5, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e724) {
            ctx->pc = 0x29E4F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29e4f8;
        }
    }
    ctx->pc = 0x29E72Cu;
    // 0x29e72c: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x29e72cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e730: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x29e730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29e734: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x29e734u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29e738: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x29e738u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29e73c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x29e73cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29e740: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x29e740u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29e744: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x29e744u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29e748: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x29e748u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29e74c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29e74cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29e750: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29e750u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29e754: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29e754u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29e758: 0x3e00008  jr          $ra
    ctx->pc = 0x29E758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E758u;
        // 0x29e75c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E760u;
}
