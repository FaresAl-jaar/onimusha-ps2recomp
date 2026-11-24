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

// Function: sub_00115358
// Address: 0x115358 - 0x115560
void sub_00115358_0x115358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115358_0x115358");
#endif

    switch (ctx->pc) {
        case 0x115394u: goto label_115394;
        case 0x1153acu: goto label_1153ac;
        case 0x1153d8u: goto label_1153d8;
        case 0x115440u: goto label_115440;
        case 0x115494u: goto label_115494;
        case 0x1154b4u: goto label_1154b4;
        case 0x1154e0u: goto label_1154e0;
        case 0x1154f0u: goto label_1154f0;
        case 0x1154f8u: goto label_1154f8;
        case 0x11550cu: goto label_11550c;
        case 0x11551cu: goto label_11551c;
        case 0x11552cu: goto label_11552c;
        case 0x115534u: goto label_115534;
        default: break;
    }

    ctx->pc = 0x115358u;

    // 0x115358: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x115358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x11535c: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x11535cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x115360: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x115360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x115364: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x115364u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115368: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x115368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x11536c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x11536cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115370: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x115370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x115374: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x115374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x115378: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x115378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x11537c: 0x3c160069  lui         $s6, 0x69
    ctx->pc = 0x11537cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)105 << 16));
    // 0x115380: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x115380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x115384: 0x26d2ec80  addiu       $s2, $s6, -0x1380
    ctx->pc = 0x115384u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 4294962304));
    // 0x115388: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x115388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x11538c: 0xc044b50  jal         func_112D40
    ctx->pc = 0x11538Cu;
    SET_GPR_U32(ctx, 31, 0x115394u);
    ctx->pc = 0x115390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11538Cu;
    // 0x115390: 0xffb30070  sd          $s3, 0x70($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D40u, 0x11538Cu, 0x115394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115394u;
label_115394:
    // 0x115394: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x115394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x115398: 0x8c432b3c  lw          $v1, 0x2B3C($v0)
    ctx->pc = 0x115398u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x402B3Cu));
    // 0x11539c: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x11539Cu;
    {
        const bool branch_taken_0x11539c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11539c) {
            ctx->pc = 0x1153A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11539Cu;
            // 0x1153a0: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1153B0u;
            goto label_1153b0;
        }
    }
    ctx->pc = 0x1153A4u;
    // 0x1153a4: 0xc044b9a  jal         func_112E68
    ctx->pc = 0x1153A4u;
    SET_GPR_U32(ctx, 31, 0x1153ACu);
    ctx->pc = 0x112E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112E68u, 0x1153A4u, 0x1153ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1153ACu;
label_1153ac:
    // 0x1153ac: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1153acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1153b0:
    // 0x1153b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1153b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1153b4: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1153b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1153b8: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1153B8u;
    {
        const bool branch_taken_0x1153b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1153BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1153B8u;
        // 0x1153bc: 0xa242000c  sb          $v0, 0xC($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1153b8) {
            ctx->pc = 0x115404u;
            goto label_115404;
        }
    }
    ctx->pc = 0x1153C0u;
    // 0x1153c0: 0x3c070066  lui         $a3, 0x66
    ctx->pc = 0x1153c0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)102 << 16));
    // 0x1153c4: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1153c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1153c8: 0x3c150069  lui         $s5, 0x69
    ctx->pc = 0x1153c8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)105 << 16));
    // 0x1153cc: 0x3c140069  lui         $s4, 0x69
    ctx->pc = 0x1153ccu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)105 << 16));
    // 0x1153d0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1153d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1153d4: 0x0  nop
    ctx->pc = 0x1153d4u;
    // NOP
label_1153d8:
    // 0x1153d8: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x1153d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1153dc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1153DCu;
    {
        const bool branch_taken_0x1153dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1153E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1153DCu;
        // 0x1153e0: 0x2251021  addu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1153dc) {
            ctx->pc = 0x115414u;
            goto label_115414;
        }
    }
    ctx->pc = 0x1153E4u;
    // 0x1153e4: 0x2452021  addu        $a0, $s2, $a1
    ctx->pc = 0x1153e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1153e8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1153e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1153ec: 0xa083000c  sb          $v1, 0xC($a0)
    ctx->pc = 0x1153ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x1153f0: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1153f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1153f4: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1153F4u;
    {
        const bool branch_taken_0x1153f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1153f4) {
            ctx->pc = 0x1153F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1153F4u;
            // 0x1153f8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1153D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1153d8;
        }
    }
    ctx->pc = 0x1153FCu;
    // 0x1153fc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1153FCu;
    {
        const bool branch_taken_0x1153fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1153FCu;
        // 0x115400: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1153fc) {
            ctx->pc = 0x115418u;
            goto label_115418;
        }
    }
    ctx->pc = 0x115404u;
label_115404:
    // 0x115404: 0x3c070066  lui         $a3, 0x66
    ctx->pc = 0x115404u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)102 << 16));
    // 0x115408: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x115408u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x11540c: 0x3c150069  lui         $s5, 0x69
    ctx->pc = 0x11540cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)105 << 16));
    // 0x115410: 0x3c140069  lui         $s4, 0x69
    ctx->pc = 0x115410u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)105 << 16));
label_115414:
    // 0x115414: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x115414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_115418:
    // 0x115418: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x115418u;
    {
        const bool branch_taken_0x115418 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x115418) {
            ctx->pc = 0x11541Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x115418u;
            // 0x11541c: 0xa240040b  sb          $zero, 0x40B($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 1035), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x115420u;
            goto label_115420;
        }
    }
    ctx->pc = 0x115420u;
label_115420:
    // 0x115420: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x115420u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x115424: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x115424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115428: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x115428u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x11542c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x11542Cu;
    {
        const bool branch_taken_0x11542c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x115430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11542Cu;
        // 0x115430: 0xa242040c  sb          $v0, 0x40C($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1036), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11542c) {
            ctx->pc = 0x115464u;
            goto label_115464;
        }
    }
    ctx->pc = 0x115434u;
    // 0x115434: 0x2646040c  addiu       $a2, $s2, 0x40C
    ctx->pc = 0x115434u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1036));
    // 0x115438: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x115438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x11543c: 0x0  nop
    ctx->pc = 0x11543cu;
    // NOP
label_115440:
    // 0x115440: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x115440u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x115444: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x115444u;
    {
        const bool branch_taken_0x115444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115444u;
        // 0x115448: 0x2051021  addu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115444) {
            ctx->pc = 0x115464u;
            goto label_115464;
        }
    }
    ctx->pc = 0x11544Cu;
    // 0x11544c: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x11544cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x115450: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x115450u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x115454: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x115454u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x115458: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x115458u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x11545c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x11545Cu;
    {
        const bool branch_taken_0x11545c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11545c) {
            ctx->pc = 0x115460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11545Cu;
            // 0x115460: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x115440u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_115440;
        }
    }
    ctx->pc = 0x115464u;
label_115464:
    // 0x115464: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x115464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x115468: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x115468u;
    {
        const bool branch_taken_0x115468 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x115468) {
            ctx->pc = 0x11546Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x115468u;
            // 0x11546c: 0xa240080b  sb          $zero, 0x80B($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 2059), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x115470u;
            goto label_115470;
        }
    }
    ctx->pc = 0x115470u;
label_115470:
    // 0x115470: 0x24e32888  addiu       $v1, $a3, 0x2888
    ctx->pc = 0x115470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 10376));
    // 0x115474: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x115474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x115478: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x115478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x11547c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x11547cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x115480: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x115480u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x115484: 0x26d0ec80  addiu       $s0, $s6, -0x1380
    ctx->pc = 0x115484u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294962304));
    // 0x115488: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x115488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x11548c: 0xc0437f8  jal         func_10DFE0
    ctx->pc = 0x11548Cu;
    SET_GPR_U32(ctx, 31, 0x115494u);
    ctx->pc = 0x115490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11548Cu;
    // 0x115490: 0x2694f8c0  addiu       $s4, $s4, -0x740 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294965440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFE0u, 0x11548Cu, 0x115494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115494u;
label_115494:
    // 0x115494: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x115494u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115498: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x115498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11549c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x11549cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1154a0: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x1154a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
    // 0x1154a4: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1154a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1154a8: 0x2405080c  addiu       $a1, $zero, 0x80C
    ctx->pc = 0x1154a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2060));
    // 0x1154ac: 0xc04453c  jal         func_1114F0
    ctx->pc = 0x1154ACu;
    SET_GPR_U32(ctx, 31, 0x1154B4u);
    ctx->pc = 0x1154B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1154ACu;
    // 0x1154b0: 0xae510000  sw          $s1, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1114F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1114F0u, 0x1154ACu, 0x1154B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1154B4u;
label_1154b4:
    // 0x1154b4: 0x26a40380  addiu       $a0, $s5, 0x380
    ctx->pc = 0x1154b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 896));
    // 0x1154b8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1154b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1154bc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1154bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1154c0: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x1154c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1154c4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1154c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1154c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1154c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1154cc: 0x2408080c  addiu       $t0, $zero, 0x80C
    ctx->pc = 0x1154ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2060));
    // 0x1154d0: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x1154d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1154d4: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1154d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1154d8: 0xc0449f4  jal         func_1127D0
    ctx->pc = 0x1154D8u;
    SET_GPR_U32(ctx, 31, 0x1154E0u);
    ctx->pc = 0x1154DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1154D8u;
    // 0x1154dc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1127D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1127D0u, 0x1154D8u, 0x1154E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1154E0u;
label_1154e0:
    // 0x1154e0: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1154E0u;
    {
        const bool branch_taken_0x1154e0 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x1154E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1154E0u;
        // 0x1154e4: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1154e0) {
            ctx->pc = 0x115500u;
            goto label_115500;
        }
    }
    ctx->pc = 0x1154E8u;
    // 0x1154e8: 0xc0437fc  jal         func_10DFF0
    ctx->pc = 0x1154E8u;
    SET_GPR_U32(ctx, 31, 0x1154F0u);
    ctx->pc = 0x1154ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1154E8u;
    // 0x1154ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFF0u, 0x1154E8u, 0x1154F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1154F0u;
label_1154f0:
    // 0x1154f0: 0xc044b5c  jal         func_112D70
    ctx->pc = 0x1154F0u;
    SET_GPR_U32(ctx, 31, 0x1154F8u);
    ctx->pc = 0x112D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D70u, 0x1154F0u, 0x1154F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1154F8u;
label_1154f8:
    // 0x1154f8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1154F8u;
    {
        const bool branch_taken_0x1154f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1154FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1154F8u;
        // 0x1154fc: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1154f8) {
            ctx->pc = 0x115538u;
            goto label_115538;
        }
    }
    ctx->pc = 0x115500u;
label_115500:
    // 0x115500: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x115500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x115504: 0xc044b5c  jal         func_112D70
    ctx->pc = 0x115504u;
    SET_GPR_U32(ctx, 31, 0x11550Cu);
    ctx->pc = 0x115508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115504u;
    // 0x115508: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D70u, 0x115504u, 0x11550Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11550Cu;
label_11550c:
    // 0x11550c: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11550Cu;
    {
        const bool branch_taken_0x11550c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x11550c) {
            ctx->pc = 0x115524u;
            goto label_115524;
        }
    }
    ctx->pc = 0x115514u;
    // 0x115514: 0xc0437fc  jal         func_10DFF0
    ctx->pc = 0x115514u;
    SET_GPR_U32(ctx, 31, 0x11551Cu);
    ctx->pc = 0x115518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115514u;
    // 0x115518: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFF0u, 0x115514u, 0x11551Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11551Cu;
label_11551c:
    // 0x11551c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x11551Cu;
    {
        const bool branch_taken_0x11551c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11551Cu;
        // 0x115520: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11551c) {
            ctx->pc = 0x115538u;
            goto label_115538;
        }
    }
    ctx->pc = 0x115524u;
label_115524:
    // 0x115524: 0xc043808  jal         func_10E020
    ctx->pc = 0x115524u;
    SET_GPR_U32(ctx, 31, 0x11552Cu);
    ctx->pc = 0x115528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115524u;
    // 0x115528: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E020u, 0x115524u, 0x11552Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11552Cu;
label_11552c:
    // 0x11552c: 0xc0437fc  jal         func_10DFF0
    ctx->pc = 0x11552Cu;
    SET_GPR_U32(ctx, 31, 0x115534u);
    ctx->pc = 0x115530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11552Cu;
    // 0x115530: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFF0u, 0x11552Cu, 0x115534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115534u;
label_115534:
    // 0x115534: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x115534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_115538:
    // 0x115538: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x115538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x11553c: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x11553cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x115540: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x115540u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x115544: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x115544u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x115548: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x115548u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11554c: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x11554cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x115550: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x115550u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x115554: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x115554u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x115558: 0x3e00008  jr          $ra
    ctx->pc = 0x115558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11555Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115558u;
        // 0x11555c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115558u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115560u;
}
