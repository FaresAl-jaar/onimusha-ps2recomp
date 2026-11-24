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

// Function: sub_00255390
// Address: 0x255390 - 0x25553c
void sub_00255390_0x255390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00255390_0x255390");
#endif

    switch (ctx->pc) {
        case 0x2553d0u: goto label_2553d0;
        case 0x2553e4u: goto label_2553e4;
        default: break;
    }

    ctx->pc = 0x255390u;

    // 0x255390: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x255390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x255394: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x255394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x255398: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x255398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x25539c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x25539cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2553a0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2553a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2553a4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2553a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2553a8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2553a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2553ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2553acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2553b0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2553b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2553b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2553b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2553b8: 0x8c820050  lw          $v0, 0x50($a0)
    ctx->pc = 0x2553b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x2553bc: 0x8442003e  lh          $v0, 0x3E($v0)
    ctx->pc = 0x2553bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 62)));
    // 0x2553c0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2553c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2553c4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2553c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2553c8: 0xc095594  jal         func_255650
    ctx->pc = 0x2553C8u;
    SET_GPR_U32(ctx, 31, 0x2553D0u);
    ctx->pc = 0x2553CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2553C8u;
    // 0x2553cc: 0x24511140  addiu       $s1, $v0, 0x1140 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255650u, 0x2553C8u, 0x2553D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2553D0u;
label_2553d0:
    // 0x2553d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2553d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2553d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2553d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2553d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2553d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2553dc: 0xc049590  jal         func_125640
    ctx->pc = 0x2553DCu;
    SET_GPR_U32(ctx, 31, 0x2553E4u);
    ctx->pc = 0x2553E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2553DCu;
    // 0x2553e0: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x2553DCu, 0x2553E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2553E4u;
label_2553e4:
    // 0x2553e4: 0x86040006  lh          $a0, 0x6($s0)
    ctx->pc = 0x2553e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x2553e8: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2553E8u;
    {
        const bool branch_taken_0x2553e8 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x2553ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2553E8u;
        // 0x2553ec: 0x41843  sra         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2553e8) {
            ctx->pc = 0x2553F8u;
            goto label_2553f8;
        }
    }
    ctx->pc = 0x2553F0u;
    // 0x2553f0: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x2553f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2553f4: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2553f4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_2553f8:
    // 0x2553f8: 0x2631823  subu        $v1, $s3, $v1
    ctx->pc = 0x2553f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x2553fc: 0xa6230008  sh          $v1, 0x8($s1)
    ctx->pc = 0x2553fcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x255400: 0x86040008  lh          $a0, 0x8($s0)
    ctx->pc = 0x255400u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x255404: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x255404u;
    {
        const bool branch_taken_0x255404 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x255408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255404u;
        // 0x255408: 0x41843  sra         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255404) {
            ctx->pc = 0x255414u;
            goto label_255414;
        }
    }
    ctx->pc = 0x25540Cu;
    // 0x25540c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x25540cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x255410: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x255410u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_255414:
    // 0x255414: 0x2431823  subu        $v1, $s2, $v1
    ctx->pc = 0x255414u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x255418: 0xa623000a  sh          $v1, 0xA($s1)
    ctx->pc = 0x255418u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x25541c: 0x86040006  lh          $a0, 0x6($s0)
    ctx->pc = 0x25541cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x255420: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x255420u;
    {
        const bool branch_taken_0x255420 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x255424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255420u;
        // 0x255424: 0x41843  sra         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255420) {
            ctx->pc = 0x255430u;
            goto label_255430;
        }
    }
    ctx->pc = 0x255428u;
    // 0x255428: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x255428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x25542c: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x25542cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_255430:
    // 0x255430: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x255430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x255434: 0xa623000c  sh          $v1, 0xC($s1)
    ctx->pc = 0x255434u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x255438: 0x86040008  lh          $a0, 0x8($s0)
    ctx->pc = 0x255438u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x25543c: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25543Cu;
    {
        const bool branch_taken_0x25543c = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x255440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25543Cu;
        // 0x255440: 0x41843  sra         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25543c) {
            ctx->pc = 0x25544Cu;
            goto label_25544c;
        }
    }
    ctx->pc = 0x255444u;
    // 0x255444: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x255444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x255448: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x255448u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_25544c:
    // 0x25544c: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x25544cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x255450: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x255450u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
    // 0x255454: 0xa623000e  sh          $v1, 0xE($s1)
    ctx->pc = 0x255454u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x255458: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x255458u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x25545c: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x25545cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x255460: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x255460u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x255464: 0x92280000  lbu         $t0, 0x0($s1)
    ctx->pc = 0x255464u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x255468: 0x24c60830  addiu       $a2, $a2, 0x830
    ctx->pc = 0x255468u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2096));
    // 0x25546c: 0x24a50831  addiu       $a1, $a1, 0x831
    ctx->pc = 0x25546cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2097));
    // 0x255470: 0x24840832  addiu       $a0, $a0, 0x832
    ctx->pc = 0x255470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2098));
    // 0x255474: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x255474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x255478: 0x83840  sll         $a3, $t0, 1
    ctx->pc = 0x255478u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x25547c: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x25547cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x255480: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x255480u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x255484: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x255484u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x255488: 0xa2260001  sb          $a2, 0x1($s1)
    ctx->pc = 0x255488u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x25548c: 0x92270000  lbu         $a3, 0x0($s1)
    ctx->pc = 0x25548cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x255490: 0x73040  sll         $a2, $a3, 1
    ctx->pc = 0x255490u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x255494: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x255494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x255498: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x255498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x25549c: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x25549cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2554a0: 0xa2250002  sb          $a1, 0x2($s1)
    ctx->pc = 0x2554a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x2554a4: 0x92260000  lbu         $a2, 0x0($s1)
    ctx->pc = 0x2554a4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2554a8: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x2554a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2554ac: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2554acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2554b0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2554b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2554b4: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x2554b4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2554b8: 0xa2240003  sb          $a0, 0x3($s1)
    ctx->pc = 0x2554b8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x2554bc: 0xa6200006  sh          $zero, 0x6($s1)
    ctx->pc = 0x2554bcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x2554c0: 0xa6230004  sh          $v1, 0x4($s1)
    ctx->pc = 0x2554c0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x2554c4: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x2554c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2554c8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2554c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2554cc: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x2554ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2554d0: 0xa6230018  sh          $v1, 0x18($s1)
    ctx->pc = 0x2554d0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 24), (uint16_t)GPR_U32(ctx, 3));
    // 0x2554d4: 0x86030004  lh          $v1, 0x4($s0)
    ctx->pc = 0x2554d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2554d8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2554d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2554dc: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x2554dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2554e0: 0xa623001a  sh          $v1, 0x1A($s1)
    ctx->pc = 0x2554e0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 26), (uint16_t)GPR_U32(ctx, 3));
    // 0x2554e4: 0x86030006  lh          $v1, 0x6($s0)
    ctx->pc = 0x2554e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x2554e8: 0x96240018  lhu         $a0, 0x18($s1)
    ctx->pc = 0x2554e8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2554ec: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2554ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2554f0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2554f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2554f4: 0xa623001c  sh          $v1, 0x1C($s1)
    ctx->pc = 0x2554f4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 28), (uint16_t)GPR_U32(ctx, 3));
    // 0x2554f8: 0x86030008  lh          $v1, 0x8($s0)
    ctx->pc = 0x2554f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2554fc: 0x9624001a  lhu         $a0, 0x1A($s1)
    ctx->pc = 0x2554fcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 26)));
    // 0x255500: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x255500u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x255504: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x255504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x255508: 0xa623001e  sh          $v1, 0x1E($s1)
    ctx->pc = 0x255508u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 30), (uint16_t)GPR_U32(ctx, 3));
    // 0x25550c: 0x8e840050  lw          $a0, 0x50($s4)
    ctx->pc = 0x25550cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
    // 0x255510: 0x8483003e  lh          $v1, 0x3E($a0)
    ctx->pc = 0x255510u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 62)));
    // 0x255514: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x255514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x255518: 0xa4830014  sh          $v1, 0x14($a0)
    ctx->pc = 0x255518u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x25551c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x25551cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x255520: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x255520u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x255524: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x255524u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x255528: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x255528u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25552c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25552cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x255530: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x255530u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x255534: 0x3e00008  jr          $ra
    ctx->pc = 0x255534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x255538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255534u;
        // 0x255538: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25553Cu;
}
