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

// Function: sub_00115730
// Address: 0x115730 - 0x1159b0
void sub_00115730_0x115730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115730_0x115730");
#endif

    switch (ctx->pc) {
        case 0x115780u: goto label_115780;
        case 0x115798u: goto label_115798;
        case 0x1157b8u: goto label_1157b8;
        case 0x115810u: goto label_115810;
        case 0x115850u: goto label_115850;
        case 0x115878u: goto label_115878;
        case 0x1158dcu: goto label_1158dc;
        case 0x1158fcu: goto label_1158fc;
        case 0x115928u: goto label_115928;
        case 0x115938u: goto label_115938;
        case 0x115940u: goto label_115940;
        case 0x115954u: goto label_115954;
        case 0x115964u: goto label_115964;
        case 0x115974u: goto label_115974;
        case 0x11597cu: goto label_11597c;
        default: break;
    }

    ctx->pc = 0x115730u;

    // 0x115730: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x115730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x115734: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x115734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x115738: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x115738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x11573c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11573cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115740: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x115740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x115744: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x115744u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115748: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x115748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x11574c: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x11574cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115750: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x115750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x115754: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x115754u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115758: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x115758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x11575c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x11575cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115760: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x115760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x115764: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x115764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x115768: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x115768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x11576c: 0x3c1e0069  lui         $fp, 0x69
    ctx->pc = 0x11576cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)105 << 16));
    // 0x115770: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x115770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x115774: 0x27d2ec80  addiu       $s2, $fp, -0x1380
    ctx->pc = 0x115774u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), 4294962304));
    // 0x115778: 0xc044b50  jal         func_112D40
    ctx->pc = 0x115778u;
    SET_GPR_U32(ctx, 31, 0x115780u);
    ctx->pc = 0x11577Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115778u;
    // 0x11577c: 0xffb40080  sd          $s4, 0x80($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D40u, 0x115778u, 0x115780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115780u;
label_115780:
    // 0x115780: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x115780u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x115784: 0x8c622b3c  lw          $v0, 0x2B3C($v1)
    ctx->pc = 0x115784u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x402B3Cu));
    // 0x115788: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x115788u;
    {
        const bool branch_taken_0x115788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x115788) {
            ctx->pc = 0x11578Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x115788u;
            // 0x11578c: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11579Cu;
            goto label_11579c;
        }
    }
    ctx->pc = 0x115790u;
    // 0x115790: 0xc044b9a  jal         func_112E68
    ctx->pc = 0x115790u;
    SET_GPR_U32(ctx, 31, 0x115798u);
    ctx->pc = 0x112E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112E68u, 0x115790u, 0x115798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115798u;
label_115798:
    // 0x115798: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x115798u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_11579c:
    // 0x11579c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11579cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1157a0: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1157a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1157a4: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1157A4u;
    {
        const bool branch_taken_0x1157a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1157A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1157A4u;
        // 0x1157a8: 0xa242000c  sb          $v0, 0xC($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1157a4) {
            ctx->pc = 0x1157E4u;
            goto label_1157e4;
        }
    }
    ctx->pc = 0x1157ACu;
    // 0x1157ac: 0x2a270401  slti        $a3, $s1, 0x401
    ctx->pc = 0x1157acu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1025) ? 1 : 0);
    // 0x1157b0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1157b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1157b4: 0x0  nop
    ctx->pc = 0x1157b4u;
    // NOP
label_1157b8:
    // 0x1157b8: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x1157b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1157bc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1157BCu;
    {
        const bool branch_taken_0x1157bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1157C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1157BCu;
        // 0x1157c0: 0x2051021  addu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1157bc) {
            ctx->pc = 0x1157E8u;
            goto label_1157e8;
        }
    }
    ctx->pc = 0x1157C4u;
    // 0x1157c4: 0x2452021  addu        $a0, $s2, $a1
    ctx->pc = 0x1157c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1157c8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1157c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1157cc: 0xa083000c  sb          $v1, 0xC($a0)
    ctx->pc = 0x1157ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x1157d0: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1157d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1157d4: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1157D4u;
    {
        const bool branch_taken_0x1157d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1157d4) {
            ctx->pc = 0x1157D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1157D4u;
            // 0x1157d8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1157B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1157b8;
        }
    }
    ctx->pc = 0x1157DCu;
    // 0x1157dc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1157DCu;
    {
        const bool branch_taken_0x1157dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1157E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1157DCu;
        // 0x1157e0: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1157dc) {
            ctx->pc = 0x1157ECu;
            goto label_1157ec;
        }
    }
    ctx->pc = 0x1157E4u;
label_1157e4:
    // 0x1157e4: 0x2a270401  slti        $a3, $s1, 0x401
    ctx->pc = 0x1157e4u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1025) ? 1 : 0);
label_1157e8:
    // 0x1157e8: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1157e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1157ec:
    // 0x1157ec: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1157ECu;
    {
        const bool branch_taken_0x1157ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1157ec) {
            ctx->pc = 0x1157F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1157ECu;
            // 0x1157f0: 0xa240040b  sb          $zero, 0x40B($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 1035), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1157F4u;
            goto label_1157f4;
        }
    }
    ctx->pc = 0x1157F4u;
label_1157f4:
    // 0x1157f4: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x1157f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1157f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1157f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1157fc: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1157fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x115800: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x115800u;
    {
        const bool branch_taken_0x115800 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x115804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115800u;
        // 0x115804: 0xa242040c  sb          $v0, 0x40C($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1036), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115800) {
            ctx->pc = 0x115834u;
            goto label_115834;
        }
    }
    ctx->pc = 0x115808u;
    // 0x115808: 0x2646040c  addiu       $a2, $s2, 0x40C
    ctx->pc = 0x115808u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1036));
    // 0x11580c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x11580cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_115810:
    // 0x115810: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x115810u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x115814: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x115814u;
    {
        const bool branch_taken_0x115814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115814u;
        // 0x115818: 0x2651021  addu        $v0, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115814) {
            ctx->pc = 0x115834u;
            goto label_115834;
        }
    }
    ctx->pc = 0x11581Cu;
    // 0x11581c: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x11581cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x115820: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x115820u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x115824: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x115824u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x115828: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x115828u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x11582c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x11582Cu;
    {
        const bool branch_taken_0x11582c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11582c) {
            ctx->pc = 0x115830u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11582Cu;
            // 0x115830: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x115810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_115810;
        }
    }
    ctx->pc = 0x115834u;
label_115834:
    // 0x115834: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x115834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x115838: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x115838u;
    {
        const bool branch_taken_0x115838 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x115838) {
            ctx->pc = 0x11583Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x115838u;
            // 0x11583c: 0xa240080b  sb          $zero, 0x80B($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 2059), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x115840u;
            goto label_115840;
        }
    }
    ctx->pc = 0x115840u;
label_115840:
    // 0x115840: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x115840u;
    {
        const bool branch_taken_0x115840 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x115840) {
            ctx->pc = 0x115858u;
            goto label_115858;
        }
    }
    ctx->pc = 0x115848u;
    // 0x115848: 0xc044b5c  jal         func_112D70
    ctx->pc = 0x115848u;
    SET_GPR_U32(ctx, 31, 0x115850u);
    ctx->pc = 0x112D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D70u, 0x115848u, 0x115850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115850u;
label_115850:
    // 0x115850: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x115850u;
    {
        const bool branch_taken_0x115850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115850u;
        // 0x115854: 0x2402fff9  addiu       $v0, $zero, -0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115850) {
            ctx->pc = 0x115980u;
            goto label_115980;
        }
    }
    ctx->pc = 0x115858u;
label_115858:
    // 0x115858: 0x1a200011  blez        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x115858u;
    {
        const bool branch_taken_0x115858 = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x11585Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115858u;
        // 0x11585c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115858) {
            ctx->pc = 0x1158A0u;
            goto label_1158a0;
        }
    }
    ctx->pc = 0x115860u;
    // 0x115860: 0x2646080c  addiu       $a2, $s2, 0x80C
    ctx->pc = 0x115860u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 2060));
    // 0x115864: 0x3c070066  lui         $a3, 0x66
    ctx->pc = 0x115864u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)102 << 16));
    // 0x115868: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x115868u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x11586c: 0x3c150069  lui         $s5, 0x69
    ctx->pc = 0x11586cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)105 << 16));
    // 0x115870: 0x3c140069  lui         $s4, 0x69
    ctx->pc = 0x115870u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)105 << 16));
    // 0x115874: 0x0  nop
    ctx->pc = 0x115874u;
    // NOP
label_115878:
    // 0x115878: 0x2c51021  addu        $v0, $s6, $a1
    ctx->pc = 0x115878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
    // 0x11587c: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x11587cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x115880: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x115880u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x115884: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x115884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x115888: 0xb1102a  slt         $v0, $a1, $s1
    ctx->pc = 0x115888u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x11588c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x11588cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x115890: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x115890u;
    {
        const bool branch_taken_0x115890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x115890) {
            ctx->pc = 0x115878u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_115878;
        }
    }
    ctx->pc = 0x115898u;
    // 0x115898: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x115898u;
    {
        const bool branch_taken_0x115898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11589Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115898u;
        // 0x11589c: 0xae510c10  sw          $s1, 0xC10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3088), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115898) {
            ctx->pc = 0x1158B4u;
            goto label_1158b4;
        }
    }
    ctx->pc = 0x1158A0u;
label_1158a0:
    // 0x1158a0: 0x3c070066  lui         $a3, 0x66
    ctx->pc = 0x1158a0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)102 << 16));
    // 0x1158a4: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1158a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1158a8: 0x3c150069  lui         $s5, 0x69
    ctx->pc = 0x1158a8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)105 << 16));
    // 0x1158ac: 0x3c140069  lui         $s4, 0x69
    ctx->pc = 0x1158acu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)105 << 16));
    // 0x1158b0: 0xae510c10  sw          $s1, 0xC10($s2)
    ctx->pc = 0x1158b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3088), GPR_U32(ctx, 17));
label_1158b4:
    // 0x1158b4: 0x24e328b8  addiu       $v1, $a3, 0x28B8
    ctx->pc = 0x1158b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 10424));
    // 0x1158b8: 0xae570c0c  sw          $s7, 0xC0C($s2)
    ctx->pc = 0x1158b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3084), GPR_U32(ctx, 23));
    // 0x1158bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1158bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1158c0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1158c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1158c4: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1158c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1158c8: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x1158c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x1158cc: 0x27d0ec80  addiu       $s0, $fp, -0x1380
    ctx->pc = 0x1158ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4294962304));
    // 0x1158d0: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1158d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1158d4: 0xc0437f8  jal         func_10DFE0
    ctx->pc = 0x1158D4u;
    SET_GPR_U32(ctx, 31, 0x1158DCu);
    ctx->pc = 0x1158D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1158D4u;
    // 0x1158d8: 0x2694f8c0  addiu       $s4, $s4, -0x740 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294965440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFE0u, 0x1158D4u, 0x1158DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1158DCu;
label_1158dc:
    // 0x1158dc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1158dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1158e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1158e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1158e4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1158e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1158e8: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x1158e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
    // 0x1158ec: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1158ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1158f0: 0x24050c14  addiu       $a1, $zero, 0xC14
    ctx->pc = 0x1158f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3092));
    // 0x1158f4: 0xc04453c  jal         func_1114F0
    ctx->pc = 0x1158F4u;
    SET_GPR_U32(ctx, 31, 0x1158FCu);
    ctx->pc = 0x1158F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1158F4u;
    // 0x1158f8: 0xae510000  sw          $s1, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1114F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1114F0u, 0x1158F4u, 0x1158FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1158FCu;
label_1158fc:
    // 0x1158fc: 0x26a40380  addiu       $a0, $s5, 0x380
    ctx->pc = 0x1158fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 896));
    // 0x115900: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x115900u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115904: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x115904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x115908: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x115908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x11590c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x11590cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x115910: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x115910u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115914: 0x24080c14  addiu       $t0, $zero, 0xC14
    ctx->pc = 0x115914u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3092));
    // 0x115918: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x115918u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11591c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x11591cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x115920: 0xc0449f4  jal         func_1127D0
    ctx->pc = 0x115920u;
    SET_GPR_U32(ctx, 31, 0x115928u);
    ctx->pc = 0x115924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115920u;
    // 0x115924: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1127D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1127D0u, 0x115920u, 0x115928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115928u;
label_115928:
    // 0x115928: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x115928u;
    {
        const bool branch_taken_0x115928 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x11592Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115928u;
        // 0x11592c: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115928) {
            ctx->pc = 0x115948u;
            goto label_115948;
        }
    }
    ctx->pc = 0x115930u;
    // 0x115930: 0xc0437fc  jal         func_10DFF0
    ctx->pc = 0x115930u;
    SET_GPR_U32(ctx, 31, 0x115938u);
    ctx->pc = 0x115934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115930u;
    // 0x115934: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFF0u, 0x115930u, 0x115938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115938u;
label_115938:
    // 0x115938: 0xc044b5c  jal         func_112D70
    ctx->pc = 0x115938u;
    SET_GPR_U32(ctx, 31, 0x115940u);
    ctx->pc = 0x112D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D70u, 0x115938u, 0x115940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115940u;
label_115940:
    // 0x115940: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x115940u;
    {
        const bool branch_taken_0x115940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115940u;
        // 0x115944: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115940) {
            ctx->pc = 0x115980u;
            goto label_115980;
        }
    }
    ctx->pc = 0x115948u;
label_115948:
    // 0x115948: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x115948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x11594c: 0xc044b5c  jal         func_112D70
    ctx->pc = 0x11594Cu;
    SET_GPR_U32(ctx, 31, 0x115954u);
    ctx->pc = 0x115950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11594Cu;
    // 0x115950: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D70u, 0x11594Cu, 0x115954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115954u;
label_115954:
    // 0x115954: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x115954u;
    {
        const bool branch_taken_0x115954 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x115954) {
            ctx->pc = 0x11596Cu;
            goto label_11596c;
        }
    }
    ctx->pc = 0x11595Cu;
    // 0x11595c: 0xc0437fc  jal         func_10DFF0
    ctx->pc = 0x11595Cu;
    SET_GPR_U32(ctx, 31, 0x115964u);
    ctx->pc = 0x115960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11595Cu;
    // 0x115960: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFF0u, 0x11595Cu, 0x115964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115964u;
label_115964:
    // 0x115964: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x115964u;
    {
        const bool branch_taken_0x115964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115964u;
        // 0x115968: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115964) {
            ctx->pc = 0x115980u;
            goto label_115980;
        }
    }
    ctx->pc = 0x11596Cu;
label_11596c:
    // 0x11596c: 0xc043808  jal         func_10E020
    ctx->pc = 0x11596Cu;
    SET_GPR_U32(ctx, 31, 0x115974u);
    ctx->pc = 0x115970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11596Cu;
    // 0x115970: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E020u, 0x11596Cu, 0x115974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115974u;
label_115974:
    // 0x115974: 0xc0437fc  jal         func_10DFF0
    ctx->pc = 0x115974u;
    SET_GPR_U32(ctx, 31, 0x11597Cu);
    ctx->pc = 0x115978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115974u;
    // 0x115978: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFF0u, 0x115974u, 0x11597Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11597Cu;
label_11597c:
    // 0x11597c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x11597cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_115980:
    // 0x115980: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x115980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x115984: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x115984u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x115988: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x115988u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x11598c: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x11598cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x115990: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x115990u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x115994: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x115994u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x115998: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x115998u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11599c: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x11599cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1159a0: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1159a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1159a4: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1159a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1159a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1159A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1159ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1159A8u;
        // 0x1159ac: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1159A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1159B0u;
}
