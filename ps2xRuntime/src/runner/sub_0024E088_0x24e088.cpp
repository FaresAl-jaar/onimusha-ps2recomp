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

// Function: sub_0024E088
// Address: 0x24e088 - 0x24e3b0
void sub_0024E088_0x24e088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024E088_0x24e088");
#endif

    switch (ctx->pc) {
        case 0x24e0c8u: goto label_24e0c8;
        case 0x24e2b8u: goto label_24e2b8;
        default: break;
    }

    ctx->pc = 0x24e088u;

    // 0x24e088: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24e088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24e08c: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x24e08cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x24e090: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24e090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24e094: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x24e094u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e098: 0x262f0010  addiu       $t7, $s1, 0x10
    ctx->pc = 0x24e098u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x24e09c: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24e09cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24e0a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24e0a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24e0a4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x24e0a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24e0a8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x24e0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x24e0ac: 0x24526530  addiu       $s2, $v0, 0x6530
    ctx->pc = 0x24e0acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 25904));
    // 0x24e0b0: 0x24679930  addiu       $a3, $v1, -0x66D0
    ctx->pc = 0x24e0b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940976));
    // 0x24e0b4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x24e0b4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e0b8: 0xc02d  daddu       $t8, $zero, $zero
    ctx->pc = 0x24e0b8u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e0bc: 0x24190002  addiu       $t9, $zero, 0x2
    ctx->pc = 0x24e0bcu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24e0c0: 0x1e0302d  daddu       $a2, $t7, $zero
    ctx->pc = 0x24e0c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e0c4: 0x0  nop
    ctx->pc = 0x24e0c4u;
    // NOP
label_24e0c8:
    // 0x24e0c8: 0x80e20000  lb          $v0, 0x0($a3)
    ctx->pc = 0x24e0c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x24e0cc: 0x545000af  bnel        $v0, $s0, . + 4 + (0xAF << 2)
    ctx->pc = 0x24E0CCu;
    {
        const bool branch_taken_0x24e0cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x24e0cc) {
            ctx->pc = 0x24E0D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E0CCu;
            // 0x24e0d0: 0x27180001  addiu       $t8, $t8, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E38Cu;
            goto label_24e38c;
        }
    }
    ctx->pc = 0x24E0D4u;
    // 0x24e0d4: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x24e0d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x24e0d8: 0x514800b0  beql        $t2, $t0, . + 4 + (0xB0 << 2)
    ctx->pc = 0x24E0D8u;
    {
        const bool branch_taken_0x24e0d8 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 8));
        if (branch_taken_0x24e0d8) {
            ctx->pc = 0x24E0DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E0D8u;
            // 0x24e0dc: 0xae2a0000  sw          $t2, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 10));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E39Cu;
            goto label_24e39c;
        }
    }
    ctx->pc = 0x24E0E0u;
    // 0x24e0e0: 0x80e3005b  lb          $v1, 0x5B($a3)
    ctx->pc = 0x24e0e0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 91)));
    // 0x24e0e4: 0x80e2005a  lb          $v0, 0x5A($a3)
    ctx->pc = 0x24e0e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 90)));
    // 0x24e0e8: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x24E0E8u;
    {
        const bool branch_taken_0x24e0e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24E0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E0E8u;
        // 0x24e0ec: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e0e8) {
            ctx->pc = 0x24E114u;
            goto label_24e114;
        }
    }
    ctx->pc = 0x24E0F0u;
    // 0x24e0f0: 0x8ce30020  lw          $v1, 0x20($a3)
    ctx->pc = 0x24e0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x24e0f4: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x24e0f4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x24e0f8: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x24e0f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x24e0fc: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x24e0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x24e100: 0x80e2005b  lb          $v0, 0x5B($a3)
    ctx->pc = 0x24e100u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 91)));
    // 0x24e104: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x24e104u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x24e108: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x24e108u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x24e10c: 0x90e2005b  lbu         $v0, 0x5B($a3)
    ctx->pc = 0x24e10cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 91)));
    // 0x24e110: 0xa0e2005a  sb          $v0, 0x5A($a3)
    ctx->pc = 0x24e110u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 90), (uint8_t)GPR_U32(ctx, 2));
label_24e114:
    // 0x24e114: 0x114800a0  beq         $t2, $t0, . + 4 + (0xA0 << 2)
    ctx->pc = 0x24E114u;
    {
        const bool branch_taken_0x24e114 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 8));
        ctx->pc = 0x24E118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E114u;
        // 0x24e118: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e114) {
            ctx->pc = 0x24E398u;
            goto label_24e398;
        }
    }
    ctx->pc = 0x24E11Cu;
    // 0x24e11c: 0x94e30050  lhu         $v1, 0x50($a3)
    ctx->pc = 0x24e11cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x24e120: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x24E120u;
    {
        const bool branch_taken_0x24e120 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24e120) {
            ctx->pc = 0x24E14Cu;
            goto label_24e14c;
        }
    }
    ctx->pc = 0x24E128u;
    // 0x24e128: 0x8ce20020  lw          $v0, 0x20($a3)
    ctx->pc = 0x24e128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x24e12c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x24e12cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x24e130: 0xa4d90000  sh          $t9, 0x0($a2)
    ctx->pc = 0x24e130u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 25));
    // 0x24e134: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x24e134u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x24e138: 0x80e30050  lb          $v1, 0x50($a3)
    ctx->pc = 0x24e138u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x24e13c: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x24e13cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x24e140: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x24e140u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x24e144: 0x90e20050  lbu         $v0, 0x50($a3)
    ctx->pc = 0x24e144u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x24e148: 0xa0e20051  sb          $v0, 0x51($a3)
    ctx->pc = 0x24e148u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 81), (uint8_t)GPR_U32(ctx, 2));
label_24e14c:
    // 0x24e14c: 0x51480093  beql        $t2, $t0, . + 4 + (0x93 << 2)
    ctx->pc = 0x24E14Cu;
    {
        const bool branch_taken_0x24e14c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 8));
        if (branch_taken_0x24e14c) {
            ctx->pc = 0x24E150u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E14Cu;
            // 0x24e150: 0xae2a0000  sw          $t2, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 10));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E39Cu;
            goto label_24e39c;
        }
    }
    ctx->pc = 0x24E154u;
    // 0x24e154: 0x80e30054  lb          $v1, 0x54($a3)
    ctx->pc = 0x24e154u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 84)));
    // 0x24e158: 0x80e20055  lb          $v0, 0x55($a3)
    ctx->pc = 0x24e158u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 85)));
    // 0x24e15c: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x24E15Cu;
    {
        const bool branch_taken_0x24e15c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24E160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E15Cu;
        // 0x24e160: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e15c) {
            ctx->pc = 0x24E188u;
            goto label_24e188;
        }
    }
    ctx->pc = 0x24E164u;
    // 0x24e164: 0x8ce30020  lw          $v1, 0x20($a3)
    ctx->pc = 0x24e164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x24e168: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x24e168u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x24e16c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x24e16cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x24e170: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x24e170u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x24e174: 0x80e20054  lb          $v0, 0x54($a3)
    ctx->pc = 0x24e174u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 84)));
    // 0x24e178: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x24e178u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x24e17c: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x24e17cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x24e180: 0x90e20054  lbu         $v0, 0x54($a3)
    ctx->pc = 0x24e180u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 84)));
    // 0x24e184: 0xa0e20055  sb          $v0, 0x55($a3)
    ctx->pc = 0x24e184u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 85), (uint8_t)GPR_U32(ctx, 2));
label_24e188:
    // 0x24e188: 0x51480084  beql        $t2, $t0, . + 4 + (0x84 << 2)
    ctx->pc = 0x24E188u;
    {
        const bool branch_taken_0x24e188 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 8));
        if (branch_taken_0x24e188) {
            ctx->pc = 0x24E18Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E188u;
            // 0x24e18c: 0xae2a0000  sw          $t2, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 10));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E39Cu;
            goto label_24e39c;
        }
    }
    ctx->pc = 0x24E190u;
    // 0x24e190: 0x80e30056  lb          $v1, 0x56($a3)
    ctx->pc = 0x24e190u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 86)));
    // 0x24e194: 0x80e20057  lb          $v0, 0x57($a3)
    ctx->pc = 0x24e194u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 87)));
    // 0x24e198: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x24E198u;
    {
        const bool branch_taken_0x24e198 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24E19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E198u;
        // 0x24e19c: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e198) {
            ctx->pc = 0x24E1C4u;
            goto label_24e1c4;
        }
    }
    ctx->pc = 0x24E1A0u;
    // 0x24e1a0: 0x8ce30020  lw          $v1, 0x20($a3)
    ctx->pc = 0x24e1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x24e1a4: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x24e1a4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x24e1a8: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x24e1a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x24e1ac: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x24e1acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x24e1b0: 0x80e20056  lb          $v0, 0x56($a3)
    ctx->pc = 0x24e1b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 86)));
    // 0x24e1b4: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x24e1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x24e1b8: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x24e1b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x24e1bc: 0x90e20056  lbu         $v0, 0x56($a3)
    ctx->pc = 0x24e1bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 86)));
    // 0x24e1c0: 0xa0e20057  sb          $v0, 0x57($a3)
    ctx->pc = 0x24e1c0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 87), (uint8_t)GPR_U32(ctx, 2));
label_24e1c4:
    // 0x24e1c4: 0x51480075  beql        $t2, $t0, . + 4 + (0x75 << 2)
    ctx->pc = 0x24E1C4u;
    {
        const bool branch_taken_0x24e1c4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 8));
        if (branch_taken_0x24e1c4) {
            ctx->pc = 0x24E1C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E1C4u;
            // 0x24e1c8: 0xae2a0000  sw          $t2, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 10));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E39Cu;
            goto label_24e39c;
        }
    }
    ctx->pc = 0x24E1CCu;
    // 0x24e1cc: 0x80e30052  lb          $v1, 0x52($a3)
    ctx->pc = 0x24e1ccu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 82)));
    // 0x24e1d0: 0x80e20053  lb          $v0, 0x53($a3)
    ctx->pc = 0x24e1d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 83)));
    // 0x24e1d4: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x24E1D4u;
    {
        const bool branch_taken_0x24e1d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24E1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E1D4u;
        // 0x24e1d8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e1d4) {
            ctx->pc = 0x24E200u;
            goto label_24e200;
        }
    }
    ctx->pc = 0x24E1DCu;
    // 0x24e1dc: 0x8ce30020  lw          $v1, 0x20($a3)
    ctx->pc = 0x24e1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x24e1e0: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x24e1e0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x24e1e4: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x24e1e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x24e1e8: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x24e1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x24e1ec: 0x80e20052  lb          $v0, 0x52($a3)
    ctx->pc = 0x24e1ecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 82)));
    // 0x24e1f0: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x24e1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x24e1f4: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x24e1f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x24e1f8: 0x90e20052  lbu         $v0, 0x52($a3)
    ctx->pc = 0x24e1f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 82)));
    // 0x24e1fc: 0xa0e20053  sb          $v0, 0x53($a3)
    ctx->pc = 0x24e1fcu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 83), (uint8_t)GPR_U32(ctx, 2));
label_24e200:
    // 0x24e200: 0x51480066  beql        $t2, $t0, . + 4 + (0x66 << 2)
    ctx->pc = 0x24E200u;
    {
        const bool branch_taken_0x24e200 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 8));
        if (branch_taken_0x24e200) {
            ctx->pc = 0x24E204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E200u;
            // 0x24e204: 0xae2a0000  sw          $t2, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 10));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E39Cu;
            goto label_24e39c;
        }
    }
    ctx->pc = 0x24E208u;
    // 0x24e208: 0x8ce30030  lw          $v1, 0x30($a3)
    ctx->pc = 0x24e208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x24e20c: 0x8ce20034  lw          $v0, 0x34($a3)
    ctx->pc = 0x24e20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x24e210: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24E210u;
    {
        const bool branch_taken_0x24e210 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24E214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E210u;
        // 0x24e214: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e210) {
            ctx->pc = 0x24E238u;
            goto label_24e238;
        }
    }
    ctx->pc = 0x24E218u;
    // 0x24e218: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x24e218u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x24e21c: 0x8ce40020  lw          $a0, 0x20($a3)
    ctx->pc = 0x24e21cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x24e220: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x24e220u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x24e224: 0x8ce30030  lw          $v1, 0x30($a3)
    ctx->pc = 0x24e224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x24e228: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x24e228u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x24e22c: 0xace30034  sw          $v1, 0x34($a3)
    ctx->pc = 0x24e22cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 52), GPR_U32(ctx, 3));
    // 0x24e230: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x24e230u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
    // 0x24e234: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x24e234u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_24e238:
    // 0x24e238: 0x51480058  beql        $t2, $t0, . + 4 + (0x58 << 2)
    ctx->pc = 0x24E238u;
    {
        const bool branch_taken_0x24e238 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 8));
        if (branch_taken_0x24e238) {
            ctx->pc = 0x24E23Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E238u;
            // 0x24e23c: 0xae2a0000  sw          $t2, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 10));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E39Cu;
            goto label_24e39c;
        }
    }
    ctx->pc = 0x24E240u;
    // 0x24e240: 0x8ce30038  lw          $v1, 0x38($a3)
    ctx->pc = 0x24e240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x24e244: 0x8ce2003c  lw          $v0, 0x3C($a3)
    ctx->pc = 0x24e244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x24e248: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x24E248u;
    {
        const bool branch_taken_0x24e248 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24E24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E248u;
        // 0x24e24c: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e248) {
            ctx->pc = 0x24E280u;
            goto label_24e280;
        }
    }
    ctx->pc = 0x24E250u;
    // 0x24e250: 0x8ce50020  lw          $a1, 0x20($a3)
    ctx->pc = 0x24e250u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x24e254: 0x2421023  subu        $v0, $s2, $v0
    ctx->pc = 0x24e254u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x24e258: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x24e258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x24e25c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x24e25cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24e260: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x24e260u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x24e264: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x24e264u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x24e268: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x24e268u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x24e26c: 0xa4c40000  sh          $a0, 0x0($a2)
    ctx->pc = 0x24e26cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x24e270: 0x8ce20038  lw          $v0, 0x38($a3)
    ctx->pc = 0x24e270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x24e274: 0xacc50004  sw          $a1, 0x4($a2)
    ctx->pc = 0x24e274u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
    // 0x24e278: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x24e278u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x24e27c: 0xace2003c  sw          $v0, 0x3C($a3)
    ctx->pc = 0x24e27cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 60), GPR_U32(ctx, 2));
label_24e280:
    // 0x24e280: 0x11480045  beq         $t2, $t0, . + 4 + (0x45 << 2)
    ctx->pc = 0x24E280u;
    {
        const bool branch_taken_0x24e280 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 8));
        ctx->pc = 0x24E284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E280u;
        // 0x24e284: 0x2402007f  addiu       $v0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e280) {
            ctx->pc = 0x24E398u;
            goto label_24e398;
        }
    }
    ctx->pc = 0x24E288u;
    // 0x24e288: 0x51420044  beql        $t2, $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x24E288u;
    {
        const bool branch_taken_0x24e288 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 2));
        if (branch_taken_0x24e288) {
            ctx->pc = 0x24E28Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E288u;
            // 0x24e28c: 0xae2a0000  sw          $t2, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 10));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E39Cu;
            goto label_24e39c;
        }
    }
    ctx->pc = 0x24E290u;
    // 0x24e290: 0x80e20052  lb          $v0, 0x52($a3)
    ctx->pc = 0x24e290u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 82)));
    // 0x24e294: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x24e294u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e298: 0x1840001e  blez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x24E298u;
    {
        const bool branch_taken_0x24e298 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x24E29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E298u;
        // 0x24e29c: 0x90e90052  lbu         $t1, 0x52($a3) (Delay Slot)
        SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 82)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e298) {
            ctx->pc = 0x24E314u;
            goto label_24e314;
        }
    }
    ctx->pc = 0x24E2A0u;
    // 0x24e2a0: 0xa1100  sll         $v0, $t2, 4
    ctx->pc = 0x24e2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x24e2a4: 0x24ed0008  addiu       $t5, $a3, 0x8
    ctx->pc = 0x24e2a4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x24e2a8: 0x4f2021  addu        $a0, $v0, $t7
    ctx->pc = 0x24e2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x24e2ac: 0x240e0009  addiu       $t6, $zero, 0x9
    ctx->pc = 0x24e2acu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x24e2b0: 0x240b0040  addiu       $t3, $zero, 0x40
    ctx->pc = 0x24e2b0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x24e2b4: 0xeb2821  addu        $a1, $a3, $t3
    ctx->pc = 0x24e2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
label_24e2b8:
    // 0x24e2b8: 0x1ab4021  addu        $t0, $t5, $t3
    ctx->pc = 0x24e2b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
    // 0x24e2bc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x24e2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x24e2c0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x24e2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x24e2c4: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x24E2C4u;
    {
        const bool branch_taken_0x24e2c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24E2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E2C4u;
        // 0x24e2c8: 0x256b0004  addiu       $t3, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e2c4) {
            ctx->pc = 0x24E2FCu;
            goto label_24e2fc;
        }
    }
    ctx->pc = 0x24E2CCu;
    // 0x24e2cc: 0xac8c0008  sw          $t4, 0x8($a0)
    ctx->pc = 0x24e2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 12));
    // 0x24e2d0: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x24e2d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x24e2d4: 0x8ce30020  lw          $v1, 0x20($a3)
    ctx->pc = 0x24e2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x24e2d8: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x24e2d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x24e2dc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x24e2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x24e2e0: 0xa48e0000  sh          $t6, 0x0($a0)
    ctx->pc = 0x24e2e0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 14));
    // 0x24e2e4: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x24e2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x24e2e8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x24e2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x24e2ec: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x24e2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x24e2f0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x24e2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x24e2f4: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x24e2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x24e2f8: 0x90e90052  lbu         $t1, 0x52($a3)
    ctx->pc = 0x24e2f8u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 82)));
label_24e2fc:
    // 0x24e2fc: 0x91600  sll         $v0, $t1, 24
    ctx->pc = 0x24e2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 24));
    // 0x24e300: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x24e300u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x24e304: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x24e304u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x24e308: 0x182102a  slt         $v0, $t4, $v0
    ctx->pc = 0x24e308u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x24e30c: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x24E30Cu;
    {
        const bool branch_taken_0x24e30c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24E310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E30Cu;
        // 0x24e310: 0xeb2821  addu        $a1, $a3, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e30c) {
            ctx->pc = 0x24E2B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24e2b8;
        }
    }
    ctx->pc = 0x24E314u;
label_24e314:
    // 0x24e314: 0x8ce3005c  lw          $v1, 0x5C($a3)
    ctx->pc = 0x24e314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 92)));
    // 0x24e318: 0x8ce20060  lw          $v0, 0x60($a3)
    ctx->pc = 0x24e318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 96)));
    // 0x24e31c: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24E31Cu;
    {
        const bool branch_taken_0x24e31c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24E320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E31Cu;
        // 0x24e320: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e31c) {
            ctx->pc = 0x24E344u;
            goto label_24e344;
        }
    }
    ctx->pc = 0x24E324u;
    // 0x24e324: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x24e324u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x24e328: 0x8ce40020  lw          $a0, 0x20($a3)
    ctx->pc = 0x24e328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x24e32c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x24e32cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x24e330: 0x8ce3005c  lw          $v1, 0x5C($a3)
    ctx->pc = 0x24e330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 92)));
    // 0x24e334: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x24e334u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x24e338: 0xace30060  sw          $v1, 0x60($a3)
    ctx->pc = 0x24e338u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 96), GPR_U32(ctx, 3));
    // 0x24e33c: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x24e33cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
    // 0x24e340: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x24e340u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_24e344:
    // 0x24e344: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x24e344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x24e348: 0x51440014  beql        $t2, $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x24E348u;
    {
        const bool branch_taken_0x24e348 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 4));
        if (branch_taken_0x24e348) {
            ctx->pc = 0x24E34Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E348u;
            // 0x24e34c: 0xae2a0000  sw          $t2, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 10));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E39Cu;
            goto label_24e39c;
        }
    }
    ctx->pc = 0x24E350u;
    // 0x24e350: 0x94e20050  lhu         $v0, 0x50($a3)
    ctx->pc = 0x24e350u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x24e354: 0x1450000a  bne         $v0, $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x24E354u;
    {
        const bool branch_taken_0x24e354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x24e354) {
            ctx->pc = 0x24E380u;
            goto label_24e380;
        }
    }
    ctx->pc = 0x24E35Cu;
    // 0x24e35c: 0x8ce20020  lw          $v0, 0x20($a3)
    ctx->pc = 0x24e35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x24e360: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x24e360u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x24e364: 0xa4d90000  sh          $t9, 0x0($a2)
    ctx->pc = 0x24e364u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 25));
    // 0x24e368: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x24e368u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x24e36c: 0x80e30050  lb          $v1, 0x50($a3)
    ctx->pc = 0x24e36cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x24e370: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x24e370u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x24e374: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x24e374u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x24e378: 0x90e20050  lbu         $v0, 0x50($a3)
    ctx->pc = 0x24e378u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x24e37c: 0xa0e20051  sb          $v0, 0x51($a3)
    ctx->pc = 0x24e37cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 81), (uint8_t)GPR_U32(ctx, 2));
label_24e380:
    // 0x24e380: 0x51440006  beql        $t2, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24E380u;
    {
        const bool branch_taken_0x24e380 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 4));
        if (branch_taken_0x24e380) {
            ctx->pc = 0x24E384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E380u;
            // 0x24e384: 0xae2a0000  sw          $t2, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 10));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E39Cu;
            goto label_24e39c;
        }
    }
    ctx->pc = 0x24E388u;
    // 0x24e388: 0x27180001  addiu       $t8, $t8, 0x1
    ctx->pc = 0x24e388u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 1));
label_24e38c:
    // 0x24e38c: 0x2b020010  slti        $v0, $t8, 0x10
    ctx->pc = 0x24e38cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 24) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x24e390: 0x1440ff4d  bnez        $v0, . + 4 + (-0xB3 << 2)
    ctx->pc = 0x24E390u;
    {
        const bool branch_taken_0x24e390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24E394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E390u;
        // 0x24e394: 0x24e70064  addiu       $a3, $a3, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e390) {
            ctx->pc = 0x24E0C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24e0c8;
        }
    }
    ctx->pc = 0x24E398u;
label_24e398:
    // 0x24e398: 0xae2a0000  sw          $t2, 0x0($s1)
    ctx->pc = 0x24e398u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 10));
label_24e39c:
    // 0x24e39c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24e39cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24e3a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24e3a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24e3a4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x24e3a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24e3a8: 0x3e00008  jr          $ra
    ctx->pc = 0x24E3A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24E3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E3A8u;
        // 0x24e3ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24E3A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24E3B0u;
}
