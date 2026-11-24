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

// Function: sub_001147F8
// Address: 0x1147f8 - 0x114a78
void sub_001147F8_0x1147f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001147F8_0x1147f8");
#endif

    switch (ctx->pc) {
        case 0x114840u: goto label_114840;
        case 0x114858u: goto label_114858;
        case 0x114878u: goto label_114878;
        case 0x1148e0u: goto label_1148e0;
        case 0x114920u: goto label_114920;
        case 0x114948u: goto label_114948;
        case 0x1149a8u: goto label_1149a8;
        case 0x1149c8u: goto label_1149c8;
        case 0x1149f4u: goto label_1149f4;
        case 0x114a04u: goto label_114a04;
        case 0x114a0cu: goto label_114a0c;
        case 0x114a20u: goto label_114a20;
        case 0x114a30u: goto label_114a30;
        case 0x114a40u: goto label_114a40;
        case 0x114a48u: goto label_114a48;
        default: break;
    }

    ctx->pc = 0x1147f8u;

    // 0x1147f8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1147f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1147fc: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1147fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x114800: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x114800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x114804: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x114804u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114808: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x114808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x11480c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x11480cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114810: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x114810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x114814: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x114814u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114818: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x114818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x11481c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x11481cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114820: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x114820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x114824: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x114824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x114828: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x114828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x11482c: 0x3c170069  lui         $s7, 0x69
    ctx->pc = 0x11482cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)105 << 16));
    // 0x114830: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x114830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x114834: 0x26f3ec80  addiu       $s3, $s7, -0x1380
    ctx->pc = 0x114834u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 4294962304));
    // 0x114838: 0xc044b50  jal         func_112D40
    ctx->pc = 0x114838u;
    SET_GPR_U32(ctx, 31, 0x114840u);
    ctx->pc = 0x11483Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114838u;
    // 0x11483c: 0xffb40080  sd          $s4, 0x80($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D40u, 0x114838u, 0x114840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114840u;
label_114840:
    // 0x114840: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x114840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x114844: 0x8c432b3c  lw          $v1, 0x2B3C($v0)
    ctx->pc = 0x114844u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x402B3Cu));
    // 0x114848: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x114848u;
    {
        const bool branch_taken_0x114848 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x114848) {
            ctx->pc = 0x11484Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x114848u;
            // 0x11484c: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11485Cu;
            goto label_11485c;
        }
    }
    ctx->pc = 0x114850u;
    // 0x114850: 0xc044b9a  jal         func_112E68
    ctx->pc = 0x114850u;
    SET_GPR_U32(ctx, 31, 0x114858u);
    ctx->pc = 0x112E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112E68u, 0x114850u, 0x114858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114858u;
label_114858:
    // 0x114858: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x114858u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_11485c:
    // 0x11485c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11485cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114860: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x114860u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x114864: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x114864u;
    {
        const bool branch_taken_0x114864 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x114868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114864u;
        // 0x114868: 0xa262000c  sb          $v0, 0xC($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114864) {
            ctx->pc = 0x1148A4u;
            goto label_1148a4;
        }
    }
    ctx->pc = 0x11486Cu;
    // 0x11486c: 0x2a270401  slti        $a3, $s1, 0x401
    ctx->pc = 0x11486cu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1025) ? 1 : 0);
    // 0x114870: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x114870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x114874: 0x0  nop
    ctx->pc = 0x114874u;
    // NOP
label_114878:
    // 0x114878: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x114878u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x11487c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x11487Cu;
    {
        const bool branch_taken_0x11487c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x114880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11487Cu;
        // 0x114880: 0x2051021  addu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11487c) {
            ctx->pc = 0x1148A8u;
            goto label_1148a8;
        }
    }
    ctx->pc = 0x114884u;
    // 0x114884: 0x2652021  addu        $a0, $s3, $a1
    ctx->pc = 0x114884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x114888: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x114888u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11488c: 0xa083000c  sb          $v1, 0xC($a0)
    ctx->pc = 0x11488cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x114890: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x114890u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x114894: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x114894u;
    {
        const bool branch_taken_0x114894 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x114894) {
            ctx->pc = 0x114898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x114894u;
            // 0x114898: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x114878u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114878;
        }
    }
    ctx->pc = 0x11489Cu;
    // 0x11489c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11489Cu;
    {
        const bool branch_taken_0x11489c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1148A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11489Cu;
        // 0x1148a0: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11489c) {
            ctx->pc = 0x1148ACu;
            goto label_1148ac;
        }
    }
    ctx->pc = 0x1148A4u;
label_1148a4:
    // 0x1148a4: 0x2a270401  slti        $a3, $s1, 0x401
    ctx->pc = 0x1148a4u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1025) ? 1 : 0);
label_1148a8:
    // 0x1148a8: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1148a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1148ac:
    // 0x1148ac: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1148ACu;
    {
        const bool branch_taken_0x1148ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1148ac) {
            ctx->pc = 0x1148B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1148ACu;
            // 0x1148b0: 0xa260040b  sb          $zero, 0x40B($s3) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 19), 1035), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1148B4u;
            goto label_1148b4;
        }
    }
    ctx->pc = 0x1148B4u;
label_1148b4:
    // 0x1148b4: 0x56400003  bnel        $s2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1148B4u;
    {
        const bool branch_taken_0x1148b4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1148b4) {
            ctx->pc = 0x1148B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1148B4u;
            // 0x1148b8: 0x92420000  lbu         $v0, 0x0($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1148C4u;
            goto label_1148c4;
        }
    }
    ctx->pc = 0x1148BCu;
    // 0x1148bc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1148BCu;
    {
        const bool branch_taken_0x1148bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1148C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1148BCu;
        // 0x1148c0: 0xa260040c  sb          $zero, 0x40C($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1036), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1148bc) {
            ctx->pc = 0x114910u;
            goto label_114910;
        }
    }
    ctx->pc = 0x1148C4u;
label_1148c4:
    // 0x1148c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1148c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1148c8: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1148c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1148cc: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1148CCu;
    {
        const bool branch_taken_0x1148cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1148D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1148CCu;
        // 0x1148d0: 0xa262040c  sb          $v0, 0x40C($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1036), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1148cc) {
            ctx->pc = 0x114904u;
            goto label_114904;
        }
    }
    ctx->pc = 0x1148D4u;
    // 0x1148d4: 0x2666040c  addiu       $a2, $s3, 0x40C
    ctx->pc = 0x1148d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 1036));
    // 0x1148d8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1148d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1148dc: 0x0  nop
    ctx->pc = 0x1148dcu;
    // NOP
label_1148e0:
    // 0x1148e0: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x1148e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1148e4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1148E4u;
    {
        const bool branch_taken_0x1148e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1148E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1148E4u;
        // 0x1148e8: 0x2451021  addu        $v0, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1148e4) {
            ctx->pc = 0x114904u;
            goto label_114904;
        }
    }
    ctx->pc = 0x1148ECu;
    // 0x1148ec: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x1148ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1148f0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1148f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1148f4: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1148f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1148f8: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1148f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1148fc: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1148FCu;
    {
        const bool branch_taken_0x1148fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1148fc) {
            ctx->pc = 0x114900u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1148FCu;
            // 0x114900: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1148E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1148e0;
        }
    }
    ctx->pc = 0x114904u;
label_114904:
    // 0x114904: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x114904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x114908: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x114908u;
    {
        const bool branch_taken_0x114908 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x114908) {
            ctx->pc = 0x11490Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x114908u;
            // 0x11490c: 0xa260080b  sb          $zero, 0x80B($s3) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 19), 2059), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x114910u;
            goto label_114910;
        }
    }
    ctx->pc = 0x114910u;
label_114910:
    // 0x114910: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x114910u;
    {
        const bool branch_taken_0x114910 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x114910) {
            ctx->pc = 0x114928u;
            goto label_114928;
        }
    }
    ctx->pc = 0x114918u;
    // 0x114918: 0xc044b5c  jal         func_112D70
    ctx->pc = 0x114918u;
    SET_GPR_U32(ctx, 31, 0x114920u);
    ctx->pc = 0x112D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D70u, 0x114918u, 0x114920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114920u;
label_114920:
    // 0x114920: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x114920u;
    {
        const bool branch_taken_0x114920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114920u;
        // 0x114924: 0x2402fff9  addiu       $v0, $zero, -0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114920) {
            ctx->pc = 0x114A4Cu;
            goto label_114a4c;
        }
    }
    ctx->pc = 0x114928u;
label_114928:
    // 0x114928: 0x1a200011  blez        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x114928u;
    {
        const bool branch_taken_0x114928 = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x11492Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114928u;
        // 0x11492c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114928) {
            ctx->pc = 0x114970u;
            goto label_114970;
        }
    }
    ctx->pc = 0x114930u;
    // 0x114930: 0x2666080c  addiu       $a2, $s3, 0x80C
    ctx->pc = 0x114930u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 2060));
    // 0x114934: 0x3c070066  lui         $a3, 0x66
    ctx->pc = 0x114934u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)102 << 16));
    // 0x114938: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x114938u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x11493c: 0x3c150069  lui         $s5, 0x69
    ctx->pc = 0x11493cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)105 << 16));
    // 0x114940: 0x3c140069  lui         $s4, 0x69
    ctx->pc = 0x114940u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)105 << 16));
    // 0x114944: 0x0  nop
    ctx->pc = 0x114944u;
    // NOP
label_114948:
    // 0x114948: 0x2c51021  addu        $v0, $s6, $a1
    ctx->pc = 0x114948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
    // 0x11494c: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x11494cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x114950: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x114950u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x114954: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x114954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x114958: 0xb1102a  slt         $v0, $a1, $s1
    ctx->pc = 0x114958u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x11495c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x11495cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x114960: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x114960u;
    {
        const bool branch_taken_0x114960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x114960) {
            ctx->pc = 0x114948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114948;
        }
    }
    ctx->pc = 0x114968u;
    // 0x114968: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x114968u;
    {
        const bool branch_taken_0x114968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11496Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114968u;
        // 0x11496c: 0xae710c0c  sw          $s1, 0xC0C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 3084), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114968) {
            ctx->pc = 0x114984u;
            goto label_114984;
        }
    }
    ctx->pc = 0x114970u;
label_114970:
    // 0x114970: 0x3c070066  lui         $a3, 0x66
    ctx->pc = 0x114970u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)102 << 16));
    // 0x114974: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x114974u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x114978: 0x3c150069  lui         $s5, 0x69
    ctx->pc = 0x114978u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)105 << 16));
    // 0x11497c: 0x3c140069  lui         $s4, 0x69
    ctx->pc = 0x11497cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)105 << 16));
    // 0x114980: 0xae710c0c  sw          $s1, 0xC0C($s3)
    ctx->pc = 0x114980u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3084), GPR_U32(ctx, 17));
label_114984:
    // 0x114984: 0x24e327f8  addiu       $v1, $a3, 0x27F8
    ctx->pc = 0x114984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 10232));
    // 0x114988: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x114988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11498c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x11498cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x114990: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x114990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x114994: 0x26f0ec80  addiu       $s0, $s7, -0x1380
    ctx->pc = 0x114994u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4294962304));
    // 0x114998: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x114998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x11499c: 0x2694f8c0  addiu       $s4, $s4, -0x740
    ctx->pc = 0x11499cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294965440));
    // 0x1149a0: 0xc0437f8  jal         func_10DFE0
    ctx->pc = 0x1149A0u;
    SET_GPR_U32(ctx, 31, 0x1149A8u);
    ctx->pc = 0x1149A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1149A0u;
    // 0x1149a4: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFE0u, 0x1149A0u, 0x1149A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1149A8u;
label_1149a8:
    // 0x1149a8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1149a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1149ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1149acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1149b0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1149b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1149b4: 0xae720004  sw          $s2, 0x4($s3)
    ctx->pc = 0x1149b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
    // 0x1149b8: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x1149b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x1149bc: 0x24050c10  addiu       $a1, $zero, 0xC10
    ctx->pc = 0x1149bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3088));
    // 0x1149c0: 0xc04453c  jal         func_1114F0
    ctx->pc = 0x1149C0u;
    SET_GPR_U32(ctx, 31, 0x1149C8u);
    ctx->pc = 0x1149C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1149C0u;
    // 0x1149c4: 0xae710000  sw          $s1, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1114F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1114F0u, 0x1149C0u, 0x1149C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1149C8u;
label_1149c8:
    // 0x1149c8: 0x26a40380  addiu       $a0, $s5, 0x380
    ctx->pc = 0x1149c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 896));
    // 0x1149cc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1149ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1149d0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1149d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1149d4: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1149d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1149d8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1149d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1149dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1149dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1149e0: 0x24080c10  addiu       $t0, $zero, 0xC10
    ctx->pc = 0x1149e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3088));
    // 0x1149e4: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x1149e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1149e8: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1149e8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1149ec: 0xc0449f4  jal         func_1127D0
    ctx->pc = 0x1149ECu;
    SET_GPR_U32(ctx, 31, 0x1149F4u);
    ctx->pc = 0x1149F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1149ECu;
    // 0x1149f0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1127D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1127D0u, 0x1149ECu, 0x1149F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1149F4u;
label_1149f4:
    // 0x1149f4: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1149F4u;
    {
        const bool branch_taken_0x1149f4 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x1149F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1149F4u;
        // 0x1149f8: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1149f4) {
            ctx->pc = 0x114A14u;
            goto label_114a14;
        }
    }
    ctx->pc = 0x1149FCu;
    // 0x1149fc: 0xc0437fc  jal         func_10DFF0
    ctx->pc = 0x1149FCu;
    SET_GPR_U32(ctx, 31, 0x114A04u);
    ctx->pc = 0x114A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1149FCu;
    // 0x114a00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFF0u, 0x1149FCu, 0x114A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114A04u;
label_114a04:
    // 0x114a04: 0xc044b5c  jal         func_112D70
    ctx->pc = 0x114A04u;
    SET_GPR_U32(ctx, 31, 0x114A0Cu);
    ctx->pc = 0x112D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D70u, 0x114A04u, 0x114A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114A0Cu;
label_114a0c:
    // 0x114a0c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x114A0Cu;
    {
        const bool branch_taken_0x114a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114A0Cu;
        // 0x114a10: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114a0c) {
            ctx->pc = 0x114A4Cu;
            goto label_114a4c;
        }
    }
    ctx->pc = 0x114A14u;
label_114a14:
    // 0x114a14: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x114a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x114a18: 0xc044b5c  jal         func_112D70
    ctx->pc = 0x114A18u;
    SET_GPR_U32(ctx, 31, 0x114A20u);
    ctx->pc = 0x114A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114A18u;
    // 0x114a1c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D70u, 0x114A18u, 0x114A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114A20u;
label_114a20:
    // 0x114a20: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x114A20u;
    {
        const bool branch_taken_0x114a20 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x114a20) {
            ctx->pc = 0x114A38u;
            goto label_114a38;
        }
    }
    ctx->pc = 0x114A28u;
    // 0x114a28: 0xc0437fc  jal         func_10DFF0
    ctx->pc = 0x114A28u;
    SET_GPR_U32(ctx, 31, 0x114A30u);
    ctx->pc = 0x114A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114A28u;
    // 0x114a2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFF0u, 0x114A28u, 0x114A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114A30u;
label_114a30:
    // 0x114a30: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x114A30u;
    {
        const bool branch_taken_0x114a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114A30u;
        // 0x114a34: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114a30) {
            ctx->pc = 0x114A4Cu;
            goto label_114a4c;
        }
    }
    ctx->pc = 0x114A38u;
label_114a38:
    // 0x114a38: 0xc043808  jal         func_10E020
    ctx->pc = 0x114A38u;
    SET_GPR_U32(ctx, 31, 0x114A40u);
    ctx->pc = 0x114A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114A38u;
    // 0x114a3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E020u, 0x114A38u, 0x114A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114A40u;
label_114a40:
    // 0x114a40: 0xc0437fc  jal         func_10DFF0
    ctx->pc = 0x114A40u;
    SET_GPR_U32(ctx, 31, 0x114A48u);
    ctx->pc = 0x114A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114A40u;
    // 0x114a44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFF0u, 0x114A40u, 0x114A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114A48u;
label_114a48:
    // 0x114a48: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x114a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_114a4c:
    // 0x114a4c: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x114a4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x114a50: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x114a50u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x114a54: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x114a54u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x114a58: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x114a58u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x114a5c: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x114a5cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x114a60: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x114a60u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x114a64: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x114a64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x114a68: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x114a68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x114a6c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x114a6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x114a70: 0x3e00008  jr          $ra
    ctx->pc = 0x114A70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114A70u;
        // 0x114a74: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114A70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114A78u;
}
