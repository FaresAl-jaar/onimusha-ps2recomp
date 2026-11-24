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

// Function: sub_002DA4A0
// Address: 0x2da4a0 - 0x2da820
void sub_002DA4A0_0x2da4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DA4A0_0x2da4a0");
#endif

    switch (ctx->pc) {
        case 0x2da4e8u: goto label_2da4e8;
        case 0x2da564u: goto label_2da564;
        case 0x2da578u: goto label_2da578;
        case 0x2da634u: goto label_2da634;
        case 0x2da678u: goto label_2da678;
        case 0x2da684u: goto label_2da684;
        case 0x2da698u: goto label_2da698;
        case 0x2da720u: goto label_2da720;
        case 0x2da7a8u: goto label_2da7a8;
        case 0x2da7d8u: goto label_2da7d8;
        case 0x2da7f0u: goto label_2da7f0;
        default: break;
    }

    ctx->pc = 0x2da4a0u;

    // 0x2da4a0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2da4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x2da4a4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2da4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2da4a8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2da4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2da4ac: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2da4acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2da4b0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2da4b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2da4b4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2da4b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2da4b8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2da4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2da4bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2da4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2da4c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2da4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2da4c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2da4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2da4c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2da4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2da4cc: 0x90830048  lbu         $v1, 0x48($a0)
    ctx->pc = 0x2da4ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x2da4d0: 0x106000c7  beqz        $v1, . + 4 + (0xC7 << 2)
    ctx->pc = 0x2DA4D0u;
    {
        const bool branch_taken_0x2da4d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA4D0u;
        // 0x2da4d4: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da4d0) {
            ctx->pc = 0x2DA7F0u;
            goto label_2da7f0;
        }
    }
    ctx->pc = 0x2DA4D8u;
    // 0x2da4d8: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x2da4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x2da4dc: 0x27b700c4  addiu       $s7, $sp, 0xC4
    ctx->pc = 0x2da4dcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    // 0x2da4e0: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x2da4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x2da4e4: 0x27be00c8  addiu       $fp, $sp, 0xC8
    ctx->pc = 0x2da4e4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_2da4e8:
    // 0x2da4e8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2da4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2da4ec: 0x8645000a  lh          $a1, 0xA($s2)
    ctx->pc = 0x2da4ecu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x2da4f0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2da4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2da4f4: 0x86510008  lh          $s1, 0x8($s2)
    ctx->pc = 0x2da4f4u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2da4f8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2da4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2da4fc: 0x90440060  lbu         $a0, 0x60($v0)
    ctx->pc = 0x2da4fcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x2da500: 0x24560060  addiu       $s6, $v0, 0x60
    ctx->pc = 0x2da500u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x2da504: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2da504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2da508: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2da508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2da50c: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x2da50cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2da510: 0x10830089  beq         $a0, $v1, . + 4 + (0x89 << 2)
    ctx->pc = 0x2DA510u;
    {
        const bool branch_taken_0x2da510 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2DA514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA510u;
        // 0x2da514: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da510) {
            ctx->pc = 0x2DA738u;
            goto label_2da738;
        }
    }
    ctx->pc = 0x2DA518u;
    // 0x2da518: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2da518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2da51c: 0x1082004e  beq         $a0, $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x2DA51Cu;
    {
        const bool branch_taken_0x2da51c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DA520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA51Cu;
        // 0x2da520: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da51c) {
            ctx->pc = 0x2DA658u;
            goto label_2da658;
        }
    }
    ctx->pc = 0x2DA524u;
    // 0x2da524: 0x1082004c  beq         $a0, $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x2DA524u;
    {
        const bool branch_taken_0x2da524 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2da524) {
            ctx->pc = 0x2DA658u;
            goto label_2da658;
        }
    }
    ctx->pc = 0x2DA52Cu;
    // 0x2da52c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2da52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2da530: 0x10820049  beq         $a0, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x2DA530u;
    {
        const bool branch_taken_0x2da530 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DA534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA530u;
        // 0x2da534: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da530) {
            ctx->pc = 0x2DA658u;
            goto label_2da658;
        }
    }
    ctx->pc = 0x2DA538u;
    // 0x2da538: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DA538u;
    {
        const bool branch_taken_0x2da538 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2da538) {
            ctx->pc = 0x2DA548u;
            goto label_2da548;
        }
    }
    ctx->pc = 0x2DA540u;
    // 0x2da540: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x2DA540u;
    {
        const bool branch_taken_0x2da540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da540) {
            ctx->pc = 0x2DA738u;
            goto label_2da738;
        }
    }
    ctx->pc = 0x2DA548u;
label_2da548:
    // 0x2da548: 0x8e42005c  lw          $v0, 0x5C($s2)
    ctx->pc = 0x2da548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x2da54c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2da54cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2da550: 0x10400079  beqz        $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x2DA550u;
    {
        const bool branch_taken_0x2da550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da550) {
            ctx->pc = 0x2DA738u;
            goto label_2da738;
        }
    }
    ctx->pc = 0x2DA558u;
    // 0x2da558: 0x96450054  lhu         $a1, 0x54($s2)
    ctx->pc = 0x2da558u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x2da55c: 0xc0b68a8  jal         func_2DA2A0
    ctx->pc = 0x2DA55Cu;
    SET_GPR_U32(ctx, 31, 0x2DA564u);
    ctx->pc = 0x2DA560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA55Cu;
    // 0x2da560: 0x27a400e8  addiu       $a0, $sp, 0xE8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA2A0u, 0x2DA55Cu, 0x2DA564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA564u;
label_2da564:
    // 0x2da564: 0x3c13004e  lui         $s3, 0x4E
    ctx->pc = 0x2da564u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)78 << 16));
    // 0x2da568: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2da568u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da56c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2da56cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da570: 0x26736710  addiu       $s3, $s3, 0x6710
    ctx->pc = 0x2da570u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 26384));
    // 0x2da574: 0x0  nop
    ctx->pc = 0x2da574u;
    // NOP
label_2da578:
    // 0x2da578: 0x82830000  lb          $v1, 0x0($s4)
    ctx->pc = 0x2da578u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2da57c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2da57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2da580: 0x1062002d  beq         $v1, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2DA580u;
    {
        const bool branch_taken_0x2da580 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2da580) {
            ctx->pc = 0x2DA638u;
            goto label_2da638;
        }
    }
    ctx->pc = 0x2DA588u;
    // 0x2da588: 0xa3a000c0  sb          $zero, 0xC0($sp)
    ctx->pc = 0x2da588u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 192), (uint8_t)GPR_U32(ctx, 0));
    // 0x2da58c: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x2da58cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x2da590: 0x93a400c0  lbu         $a0, 0xC0($sp)
    ctx->pc = 0x2da590u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2da594: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2da594u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2da598: 0x24426830  addiu       $v0, $v0, 0x6830
    ctx->pc = 0x2da598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26672));
    // 0x2da59c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2da59cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2da5a0: 0x34820001  ori         $v0, $a0, 0x1
    ctx->pc = 0x2da5a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x2da5a4: 0xa3a200c0  sb          $v0, 0xC0($sp)
    ctx->pc = 0x2da5a4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 192), (uint8_t)GPR_U32(ctx, 2));
    // 0x2da5a8: 0xaef30000  sw          $s3, 0x0($s7)
    ctx->pc = 0x2da5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 19));
    // 0x2da5ac: 0x93a200c0  lbu         $v0, 0xC0($sp)
    ctx->pc = 0x2da5acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2da5b0: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x2da5b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x2da5b4: 0xa3a200c0  sb          $v0, 0xC0($sp)
    ctx->pc = 0x2da5b4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 192), (uint8_t)GPR_U32(ctx, 2));
    // 0x2da5b8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2da5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2da5bc: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x2da5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2da5c0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2da5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2da5c4: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x2da5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2da5c8: 0x27a200d4  addiu       $v0, $sp, 0xD4
    ctx->pc = 0x2da5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x2da5cc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2da5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2da5d0: 0x93a200c0  lbu         $v0, 0xC0($sp)
    ctx->pc = 0x2da5d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2da5d4: 0x304200fd  andi        $v0, $v0, 0xFD
    ctx->pc = 0x2da5d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)253);
    // 0x2da5d8: 0xa3a200c0  sb          $v0, 0xC0($sp)
    ctx->pc = 0x2da5d8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 192), (uint8_t)GPR_U32(ctx, 2));
    // 0x2da5dc: 0x93a200c0  lbu         $v0, 0xC0($sp)
    ctx->pc = 0x2da5dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2da5e0: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2da5e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2da5e4: 0xa3a200c0  sb          $v0, 0xC0($sp)
    ctx->pc = 0x2da5e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 192), (uint8_t)GPR_U32(ctx, 2));
    // 0x2da5e8: 0xa7d10000  sh          $s1, 0x0($fp)
    ctx->pc = 0x2da5e8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 0), (uint16_t)GPR_U32(ctx, 17));
    // 0x2da5ec: 0x27a200ca  addiu       $v0, $sp, 0xCA
    ctx->pc = 0x2da5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 202));
    // 0x2da5f0: 0xa4500000  sh          $s0, 0x0($v0)
    ctx->pc = 0x2da5f0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 16));
    // 0x2da5f4: 0x8e42005c  lw          $v0, 0x5C($s2)
    ctx->pc = 0x2da5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x2da5f8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2da5f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2da5fc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2DA5FCu;
    {
        const bool branch_taken_0x2da5fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da5fc) {
            ctx->pc = 0x2DA628u;
            goto label_2da628;
        }
    }
    ctx->pc = 0x2DA604u;
    // 0x2da604: 0x93a200c0  lbu         $v0, 0xC0($sp)
    ctx->pc = 0x2da604u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2da608: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x2da608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x2da60c: 0xa3a200c0  sb          $v0, 0xC0($sp)
    ctx->pc = 0x2da60cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 192), (uint8_t)GPR_U32(ctx, 2));
    // 0x2da610: 0x27a200db  addiu       $v0, $sp, 0xDB
    ctx->pc = 0x2da610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 219));
    // 0x2da614: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2da614u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2da618: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2da618u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2da61c: 0x34430080  ori         $v1, $v0, 0x80
    ctx->pc = 0x2da61cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x2da620: 0x27a200d8  addiu       $v0, $sp, 0xD8
    ctx->pc = 0x2da620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x2da624: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2da624u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2da628:
    // 0x2da628: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2da628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da62c: 0xc0b6a80  jal         func_2DAA00
    ctx->pc = 0x2DA62Cu;
    SET_GPR_U32(ctx, 31, 0x2DA634u);
    ctx->pc = 0x2DA630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA62Cu;
    // 0x2da630: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DAA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAA00u, 0x2DA62Cu, 0x2DA634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA634u;
label_2da634:
    // 0x2da634: 0x0  nop
    ctx->pc = 0x2da634u;
    // NOP
label_2da638:
    // 0x2da638: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2da638u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2da63c: 0x2ea20006  sltiu       $v0, $s5, 0x6
    ctx->pc = 0x2da63cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x2da640: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2da640u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2da644: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x2DA644u;
    {
        const bool branch_taken_0x2da644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DA648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA644u;
        // 0x2da648: 0x26730018  addiu       $s3, $s3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da644) {
            ctx->pc = 0x2DA578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2da578;
        }
    }
    ctx->pc = 0x2DA64Cu;
    // 0x2da64c: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x2DA64Cu;
    {
        const bool branch_taken_0x2da64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da64c) {
            ctx->pc = 0x2DA738u;
            goto label_2da738;
        }
    }
    ctx->pc = 0x2DA654u;
    // 0x2da654: 0x0  nop
    ctx->pc = 0x2da654u;
    // NOP
label_2da658:
    // 0x2da658: 0x8e42005c  lw          $v0, 0x5C($s2)
    ctx->pc = 0x2da658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x2da65c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2da65cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2da660: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x2DA660u;
    {
        const bool branch_taken_0x2da660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da660) {
            ctx->pc = 0x2DA738u;
            goto label_2da738;
        }
    }
    ctx->pc = 0x2DA668u;
    // 0x2da668: 0x96450058  lhu         $a1, 0x58($s2)
    ctx->pc = 0x2da668u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x2da66c: 0x27a400e8  addiu       $a0, $sp, 0xE8
    ctx->pc = 0x2da66cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x2da670: 0xc0b68e0  jal         func_2DA380
    ctx->pc = 0x2DA670u;
    SET_GPR_U32(ctx, 31, 0x2DA678u);
    ctx->pc = 0x2DA674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA670u;
    // 0x2da674: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA380u, 0x2DA670u, 0x2DA678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA678u;
label_2da678:
    // 0x2da678: 0x96450056  lhu         $a1, 0x56($s2)
    ctx->pc = 0x2da678u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 86)));
    // 0x2da67c: 0xc0b68e0  jal         func_2DA380
    ctx->pc = 0x2DA67Cu;
    SET_GPR_U32(ctx, 31, 0x2DA684u);
    ctx->pc = 0x2DA680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA67Cu;
    // 0x2da680: 0x27a400eb  addiu       $a0, $sp, 0xEB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 235));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA380u, 0x2DA67Cu, 0x2DA684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA684u;
label_2da684:
    // 0x2da684: 0x3c13004e  lui         $s3, 0x4E
    ctx->pc = 0x2da684u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)78 << 16));
    // 0x2da688: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2da688u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da68c: 0x27b400e8  addiu       $s4, $sp, 0xE8
    ctx->pc = 0x2da68cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x2da690: 0x267367a0  addiu       $s3, $s3, 0x67A0
    ctx->pc = 0x2da690u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 26528));
    // 0x2da694: 0x0  nop
    ctx->pc = 0x2da694u;
    // NOP
label_2da698:
    // 0x2da698: 0x82830000  lb          $v1, 0x0($s4)
    ctx->pc = 0x2da698u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2da69c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2da69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2da6a0: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2DA6A0u;
    {
        const bool branch_taken_0x2da6a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2da6a0) {
            ctx->pc = 0x2DA720u;
            goto label_2da720;
        }
    }
    ctx->pc = 0x2DA6A8u;
    // 0x2da6a8: 0xa3a000c0  sb          $zero, 0xC0($sp)
    ctx->pc = 0x2da6a8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 192), (uint8_t)GPR_U32(ctx, 0));
    // 0x2da6ac: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x2da6acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x2da6b0: 0x93a600c0  lbu         $a2, 0xC0($sp)
    ctx->pc = 0x2da6b0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2da6b4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2da6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2da6b8: 0x24426830  addiu       $v0, $v0, 0x6830
    ctx->pc = 0x2da6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26672));
    // 0x2da6bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2da6bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da6c0: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x2da6c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2da6c4: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x2da6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2da6c8: 0x34c20001  ori         $v0, $a2, 0x1
    ctx->pc = 0x2da6c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1);
    // 0x2da6cc: 0xa3a200c0  sb          $v0, 0xC0($sp)
    ctx->pc = 0x2da6ccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 192), (uint8_t)GPR_U32(ctx, 2));
    // 0x2da6d0: 0xaef30000  sw          $s3, 0x0($s7)
    ctx->pc = 0x2da6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 19));
    // 0x2da6d4: 0x93a200c0  lbu         $v0, 0xC0($sp)
    ctx->pc = 0x2da6d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2da6d8: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x2da6d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x2da6dc: 0xa3a200c0  sb          $v0, 0xC0($sp)
    ctx->pc = 0x2da6dcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 192), (uint8_t)GPR_U32(ctx, 2));
    // 0x2da6e0: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x2da6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2da6e4: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x2da6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2da6e8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2da6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2da6ec: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x2da6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2da6f0: 0x27a200d4  addiu       $v0, $sp, 0xD4
    ctx->pc = 0x2da6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x2da6f4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2da6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2da6f8: 0x93a200c0  lbu         $v0, 0xC0($sp)
    ctx->pc = 0x2da6f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2da6fc: 0x304200fd  andi        $v0, $v0, 0xFD
    ctx->pc = 0x2da6fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)253);
    // 0x2da700: 0xa3a200c0  sb          $v0, 0xC0($sp)
    ctx->pc = 0x2da700u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 192), (uint8_t)GPR_U32(ctx, 2));
    // 0x2da704: 0x93a200c0  lbu         $v0, 0xC0($sp)
    ctx->pc = 0x2da704u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2da708: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2da708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2da70c: 0xa3a200c0  sb          $v0, 0xC0($sp)
    ctx->pc = 0x2da70cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 192), (uint8_t)GPR_U32(ctx, 2));
    // 0x2da710: 0xa7d10000  sh          $s1, 0x0($fp)
    ctx->pc = 0x2da710u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 0), (uint16_t)GPR_U32(ctx, 17));
    // 0x2da714: 0x27a200ca  addiu       $v0, $sp, 0xCA
    ctx->pc = 0x2da714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 202));
    // 0x2da718: 0xc0b6a80  jal         func_2DAA00
    ctx->pc = 0x2DA718u;
    SET_GPR_U32(ctx, 31, 0x2DA720u);
    ctx->pc = 0x2DA71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA718u;
    // 0x2da71c: 0xa4500000  sh          $s0, 0x0($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DAA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAA00u, 0x2DA718u, 0x2DA720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA720u;
label_2da720:
    // 0x2da720: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2da720u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2da724: 0x2ea20006  sltiu       $v0, $s5, 0x6
    ctx->pc = 0x2da724u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x2da728: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2da728u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2da72c: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x2DA72Cu;
    {
        const bool branch_taken_0x2da72c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DA730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA72Cu;
        // 0x2da730: 0x26730018  addiu       $s3, $s3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da72c) {
            ctx->pc = 0x2DA698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2da698;
        }
    }
    ctx->pc = 0x2DA734u;
    // 0x2da734: 0x0  nop
    ctx->pc = 0x2da734u;
    // NOP
label_2da738:
    // 0x2da738: 0x92c20000  lbu         $v0, 0x0($s6)
    ctx->pc = 0x2da738u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2da73c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2DA73Cu;
    {
        const bool branch_taken_0x2da73c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da73c) {
            ctx->pc = 0x2DA7A8u;
            goto label_2da7a8;
        }
    }
    ctx->pc = 0x2DA744u;
    // 0x2da744: 0xa3a000c0  sb          $zero, 0xC0($sp)
    ctx->pc = 0x2da744u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 192), (uint8_t)GPR_U32(ctx, 0));
    // 0x2da748: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x2da748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x2da74c: 0x93a300c0  lbu         $v1, 0xC0($sp)
    ctx->pc = 0x2da74cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2da750: 0x24426680  addiu       $v0, $v0, 0x6680
    ctx->pc = 0x2da750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26240));
    // 0x2da754: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2da754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da758: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x2da758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2da75c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2da75cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x2da760: 0xa3a300c0  sb          $v1, 0xC0($sp)
    ctx->pc = 0x2da760u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 192), (uint8_t)GPR_U32(ctx, 3));
    // 0x2da764: 0x92c60000  lbu         $a2, 0x0($s6)
    ctx->pc = 0x2da764u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2da768: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x2da768u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2da76c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2da76cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2da770: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2da770u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2da774: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2da774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2da778: 0x2442ffe8  addiu       $v0, $v0, -0x18
    ctx->pc = 0x2da778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
    // 0x2da77c: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x2da77cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x2da780: 0x93a200c0  lbu         $v0, 0xC0($sp)
    ctx->pc = 0x2da780u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2da784: 0x304200fd  andi        $v0, $v0, 0xFD
    ctx->pc = 0x2da784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)253);
    // 0x2da788: 0xa3a200c0  sb          $v0, 0xC0($sp)
    ctx->pc = 0x2da788u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 192), (uint8_t)GPR_U32(ctx, 2));
    // 0x2da78c: 0x93a200c0  lbu         $v0, 0xC0($sp)
    ctx->pc = 0x2da78cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2da790: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2da790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2da794: 0xa3a200c0  sb          $v0, 0xC0($sp)
    ctx->pc = 0x2da794u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 192), (uint8_t)GPR_U32(ctx, 2));
    // 0x2da798: 0xa7d10000  sh          $s1, 0x0($fp)
    ctx->pc = 0x2da798u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 0), (uint16_t)GPR_U32(ctx, 17));
    // 0x2da79c: 0x27a200ca  addiu       $v0, $sp, 0xCA
    ctx->pc = 0x2da79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 202));
    // 0x2da7a0: 0xc0b6a80  jal         func_2DAA00
    ctx->pc = 0x2DA7A0u;
    SET_GPR_U32(ctx, 31, 0x2DA7A8u);
    ctx->pc = 0x2DA7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA7A0u;
    // 0x2da7a4: 0xa4500000  sh          $s0, 0x0($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DAA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAA00u, 0x2DA7A0u, 0x2DA7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA7A8u;
label_2da7a8:
    // 0x2da7a8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2da7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2da7ac: 0x2442001c  addiu       $v0, $v0, 0x1C
    ctx->pc = 0x2da7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x2da7b0: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x2da7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x2da7b4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2da7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2da7b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2da7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2da7bc: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x2da7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x2da7c0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2da7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2da7c4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2da7c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2da7c8: 0x1440ff47  bnez        $v0, . + 4 + (-0xB9 << 2)
    ctx->pc = 0x2DA7C8u;
    {
        const bool branch_taken_0x2da7c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DA7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA7C8u;
        // 0x2da7cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da7c8) {
            ctx->pc = 0x2DA4E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2da4e8;
        }
    }
    ctx->pc = 0x2DA7D0u;
    // 0x2da7d0: 0xc0b6a80  jal         func_2DAA00
    ctx->pc = 0x2DA7D0u;
    SET_GPR_U32(ctx, 31, 0x2DA7D8u);
    ctx->pc = 0x2DA7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA7D0u;
    // 0x2da7d4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DAA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAA00u, 0x2DA7D0u, 0x2DA7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA7D8u;
label_2da7d8:
    // 0x2da7d8: 0x8e43005c  lw          $v1, 0x5C($s2)
    ctx->pc = 0x2da7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x2da7dc: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x2da7dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x2da7e0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DA7E0u;
    {
        const bool branch_taken_0x2da7e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA7E0u;
        // 0x2da7e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da7e0) {
            ctx->pc = 0x2DA7F0u;
            goto label_2da7f0;
        }
    }
    ctx->pc = 0x2DA7E8u;
    // 0x2da7e8: 0xc0b6a08  jal         func_2DA820
    ctx->pc = 0x2DA7E8u;
    SET_GPR_U32(ctx, 31, 0x2DA7F0u);
    ctx->pc = 0x2DA820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA820u, 0x2DA7E8u, 0x2DA7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA7F0u;
label_2da7f0:
    // 0x2da7f0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2da7f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2da7f4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2da7f4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2da7f8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2da7f8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2da7fc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2da7fcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2da800: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2da800u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2da804: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2da804u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2da808: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2da808u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2da80c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2da80cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2da810: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2da810u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2da814: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2da814u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2da818: 0x3e00008  jr          $ra
    ctx->pc = 0x2DA818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DA81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA818u;
        // 0x2da81c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DA818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DA820u;
}
