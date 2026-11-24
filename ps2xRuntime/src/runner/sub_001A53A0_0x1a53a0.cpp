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

// Function: sub_001A53A0
// Address: 0x1a53a0 - 0x1a577c
void sub_001A53A0_0x1a53a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A53A0_0x1a53a0");
#endif

    switch (ctx->pc) {
        case 0x1a53c8u: goto label_1a53c8;
        case 0x1a53d4u: goto label_1a53d4;
        case 0x1a5428u: goto label_1a5428;
        case 0x1a544cu: goto label_1a544c;
        case 0x1a5460u: goto label_1a5460;
        case 0x1a5470u: goto label_1a5470;
        case 0x1a5478u: goto label_1a5478;
        case 0x1a54f0u: goto label_1a54f0;
        case 0x1a5508u: goto label_1a5508;
        case 0x1a5510u: goto label_1a5510;
        case 0x1a5540u: goto label_1a5540;
        case 0x1a5550u: goto label_1a5550;
        case 0x1a5580u: goto label_1a5580;
        case 0x1a5594u: goto label_1a5594;
        case 0x1a559cu: goto label_1a559c;
        case 0x1a55b0u: goto label_1a55b0;
        case 0x1a55c8u: goto label_1a55c8;
        case 0x1a55e8u: goto label_1a55e8;
        case 0x1a55f4u: goto label_1a55f4;
        case 0x1a5620u: goto label_1a5620;
        case 0x1a5628u: goto label_1a5628;
        case 0x1a5634u: goto label_1a5634;
        case 0x1a563cu: goto label_1a563c;
        case 0x1a5648u: goto label_1a5648;
        case 0x1a565cu: goto label_1a565c;
        case 0x1a5664u: goto label_1a5664;
        case 0x1a566cu: goto label_1a566c;
        case 0x1a5678u: goto label_1a5678;
        case 0x1a5698u: goto label_1a5698;
        case 0x1a56a0u: goto label_1a56a0;
        case 0x1a56acu: goto label_1a56ac;
        case 0x1a56d8u: goto label_1a56d8;
        case 0x1a56e4u: goto label_1a56e4;
        default: break;
    }

    ctx->pc = 0x1a53a0u;

    // 0x1a53a0: 0x27bdfb00  addiu       $sp, $sp, -0x500
    ctx->pc = 0x1a53a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966016));
    // 0x1a53a4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1a53a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1a53a8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1a53a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1a53ac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1a53acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1a53b0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a53b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a53b4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a53b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a53b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a53b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a53bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a53bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a53c0: 0xc0705d8  jal         func_1C1760
    ctx->pc = 0x1A53C0u;
    SET_GPR_U32(ctx, 31, 0x1A53C8u);
    ctx->pc = 0x1A53C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A53C0u;
    // 0x1a53c4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1760u, 0x1A53C0u, 0x1A53C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A53C8u;
label_1a53c8:
    // 0x1a53c8: 0xae227848  sw          $v0, 0x7848($s1)
    ctx->pc = 0x1a53c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 30792), GPR_U32(ctx, 2));
    // 0x1a53cc: 0xc069224  jal         func_1A4890
    ctx->pc = 0x1A53CCu;
    SET_GPR_U32(ctx, 31, 0x1A53D4u);
    ctx->pc = 0x1A53D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A53CCu;
    // 0x1a53d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4890u, 0x1A53CCu, 0x1A53D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A53D4u;
label_1a53d4:
    // 0x1a53d4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A53D4u;
    {
        const bool branch_taken_0x1a53d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a53d4) {
            ctx->pc = 0x1A53E8u;
            goto label_1a53e8;
        }
    }
    ctx->pc = 0x1A53DCu;
    // 0x1a53dc: 0x100000de  b           . + 4 + (0xDE << 2)
    ctx->pc = 0x1A53DCu;
    {
        const bool branch_taken_0x1a53dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A53E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A53DCu;
        // 0x1a53e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a53dc) {
            ctx->pc = 0x1A5758u;
            goto label_1a5758;
        }
    }
    ctx->pc = 0x1A53E4u;
    // 0x1a53e4: 0x0  nop
    ctx->pc = 0x1a53e4u;
    // NOP
label_1a53e8:
    // 0x1a53e8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1a53e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1a53ec: 0x8c22fc90  lw          $v0, -0x370($at)
    ctx->pc = 0x1a53ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81FC90u));
    // 0x1a53f0: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1a53f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1a53f4: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x1a53f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1a53f8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1a53f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1a53fc: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x1a53fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1a5400: 0x438024  and         $s0, $v0, $v1
    ctx->pc = 0x1a5400u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1a5404: 0xae30783c  sw          $s0, 0x783C($s1)
    ctx->pc = 0x1a5404u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 30780), GPR_U32(ctx, 16));
    // 0x1a5408: 0x92227845  lbu         $v0, 0x7845($s1)
    ctx->pc = 0x1a5408u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 30789)));
    // 0x1a540c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A540Cu;
    {
        const bool branch_taken_0x1a540c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a540c) {
            ctx->pc = 0x1A5430u;
            goto label_1a5430;
        }
    }
    ctx->pc = 0x1A5414u;
    // 0x1a5414: 0x92227846  lbu         $v0, 0x7846($s1)
    ctx->pc = 0x1a5414u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 30790)));
    // 0x1a5418: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1A5418u;
    {
        const bool branch_taken_0x1a5418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A541Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5418u;
        // 0x1a541c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5418) {
            ctx->pc = 0x1A5450u;
            goto label_1a5450;
        }
    }
    ctx->pc = 0x1A5420u;
    // 0x1a5420: 0xc069d58  jal         func_1A7560
    ctx->pc = 0x1A5420u;
    SET_GPR_U32(ctx, 31, 0x1A5428u);
    ctx->pc = 0x1A5424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5420u;
    // 0x1a5424: 0xa2207846  sb          $zero, 0x7846($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 30790), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7560u, 0x1A5420u, 0x1A5428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5428u;
label_1a5428:
    // 0x1a5428: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1A5428u;
    {
        const bool branch_taken_0x1a5428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5428) {
            ctx->pc = 0x1A5450u;
            goto label_1a5450;
        }
    }
    ctx->pc = 0x1A5430u;
label_1a5430:
    // 0x1a5430: 0x92237846  lbu         $v1, 0x7846($s1)
    ctx->pc = 0x1a5430u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 30790)));
    // 0x1a5434: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a5434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a5438: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A5438u;
    {
        const bool branch_taken_0x1a5438 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a5438) {
            ctx->pc = 0x1A5450u;
            goto label_1a5450;
        }
    }
    ctx->pc = 0x1A5440u;
    // 0x1a5440: 0xa2227846  sb          $v0, 0x7846($s1)
    ctx->pc = 0x1a5440u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 30790), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a5444: 0xc069d58  jal         func_1A7560
    ctx->pc = 0x1A5444u;
    SET_GPR_U32(ctx, 31, 0x1A544Cu);
    ctx->pc = 0x1A5448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5444u;
    // 0x1a5448: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7560u, 0x1A5444u, 0x1A544Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A544Cu;
label_1a544c:
    // 0x1a544c: 0x0  nop
    ctx->pc = 0x1a544cu;
    // NOP
label_1a5450:
    // 0x1a5450: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1a5450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1a5454: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a5454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5458: 0xc049590  jal         func_125640
    ctx->pc = 0x1A5458u;
    SET_GPR_U32(ctx, 31, 0x1A5460u);
    ctx->pc = 0x1A545Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5458u;
    // 0x1a545c: 0x24060440  addiu       $a2, $zero, 0x440 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x1A5458u, 0x1A5460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5460u;
label_1a5460:
    // 0x1a5460: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1a5460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1a5464: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a5464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5468: 0xc049590  jal         func_125640
    ctx->pc = 0x1A5468u;
    SET_GPR_U32(ctx, 31, 0x1A5470u);
    ctx->pc = 0x1A546Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5468u;
    // 0x1a546c: 0x24060044  addiu       $a2, $zero, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x1A5468u, 0x1A5470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5470u;
label_1a5470:
    // 0x1a5470: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a5470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5474: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a5474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a5478:
    // 0x1a5478: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x1a5478u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a547c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1A547Cu;
    {
        const bool branch_taken_0x1a547c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a547c) {
            ctx->pc = 0x1A54D0u;
            goto label_1a54d0;
        }
    }
    ctx->pc = 0x1A5484u;
    // 0x1a5484: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x1a5484u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x1a5488: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1A5488u;
    {
        const bool branch_taken_0x1a5488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5488) {
            ctx->pc = 0x1A54D0u;
            goto label_1a54d0;
        }
    }
    ctx->pc = 0x1A5490u;
    // 0x1a5490: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x1a5490u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x1a5494: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1a5494u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a5498: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a5498u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a549c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1a549cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1a54a0: 0x8c420070  lw          $v0, 0x70($v0)
    ctx->pc = 0x1a54a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x1a54a4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1a54a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a54a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a54a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a54ac: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1a54acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1a54b0: 0xac4400c0  sw          $a0, 0xC0($v0)
    ctx->pc = 0x1a54b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 192), GPR_U32(ctx, 4));
    // 0x1a54b4: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x1a54b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x1a54b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a54b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a54bc: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x1a54bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1a54c0: 0x8c620070  lw          $v0, 0x70($v1)
    ctx->pc = 0x1a54c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x1a54c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a54c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a54c8: 0xac620070  sw          $v0, 0x70($v1)
    ctx->pc = 0x1a54c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 112), GPR_U32(ctx, 2));
    // 0x1a54cc: 0x0  nop
    ctx->pc = 0x1a54ccu;
    // NOP
label_1a54d0:
    // 0x1a54d0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1a54d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1a54d4: 0x2ca20010  sltiu       $v0, $a1, 0x10
    ctx->pc = 0x1a54d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1a54d8: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1A54D8u;
    {
        const bool branch_taken_0x1a54d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A54DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A54D8u;
        // 0x1a54dc: 0x24840200  addiu       $a0, $a0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a54d8) {
            ctx->pc = 0x1A5478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a5478;
        }
    }
    ctx->pc = 0x1A54E0u;
    // 0x1a54e0: 0x27b30070  addiu       $s3, $sp, 0x70
    ctx->pc = 0x1a54e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1a54e4: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x1a54e4u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a54e8: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x1a54e8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a54ec: 0x27a900c0  addiu       $t1, $sp, 0xC0
    ctx->pc = 0x1a54ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1a54f0:
    // 0x1a54f0: 0x8d4d0000  lw          $t5, 0x0($t2)
    ctx->pc = 0x1a54f0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1a54f4: 0x11a0001a  beqz        $t5, . + 4 + (0x1A << 2)
    ctx->pc = 0x1A54F4u;
    {
        const bool branch_taken_0x1a54f4 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A54F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A54F4u;
        // 0x1a54f8: 0xd082b  sltu        $at, $zero, $t5 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a54f4) {
            ctx->pc = 0x1A5560u;
            goto label_1a5560;
        }
    }
    ctx->pc = 0x1A54FCu;
    // 0x1a54fc: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x1A54FCu;
    {
        const bool branch_taken_0x1a54fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A54FCu;
        // 0x1a5500: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a54fc) {
            ctx->pc = 0x1A5560u;
            goto label_1a5560;
        }
    }
    ctx->pc = 0x1A5504u;
    // 0x1a5504: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1a5504u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a5508:
    // 0x1a5508: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x1A5508u;
    {
        const bool branch_taken_0x1a5508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A550Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5508u;
        // 0x1a550c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5508) {
            ctx->pc = 0x1A5740u;
            goto label_1a5740;
        }
    }
    ctx->pc = 0x1A5510u;
label_1a5510:
    // 0x1a5510: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x1a5510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1a5514: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x1a5514u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a5518: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x1a5518u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1a551c: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x1a551cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1a5520: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1a5520u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a5524: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A5524u;
    {
        const bool branch_taken_0x1a5524 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5524) {
            ctx->pc = 0x1A5538u;
            goto label_1a5538;
        }
    }
    ctx->pc = 0x1A552Cu;
    // 0x1a552c: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x1a552cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x1a5530: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x1a5530u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x1a5534: 0x0  nop
    ctx->pc = 0x1a5534u;
    // NOP
label_1a5538:
    // 0x1a5538: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x1a5538u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x1a553c: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1a553cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_1a5540:
    // 0x1a5540: 0x16d102b  sltu        $v0, $t3, $t5
    ctx->pc = 0x1a5540u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x1a5544: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1A5544u;
    {
        const bool branch_taken_0x1a5544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a5544) {
            ctx->pc = 0x1A5510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a5510;
        }
    }
    ctx->pc = 0x1A554Cu;
    // 0x1a554c: 0x0  nop
    ctx->pc = 0x1a554cu;
    // NOP
label_1a5550:
    // 0x1a5550: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x1a5550u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x1a5554: 0x18d102b  sltu        $v0, $t4, $t5
    ctx->pc = 0x1a5554u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x1a5558: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1A5558u;
    {
        const bool branch_taken_0x1a5558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A555Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5558u;
        // 0x1a555c: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5558) {
            ctx->pc = 0x1A5508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a5508;
        }
    }
    ctx->pc = 0x1A5560u;
label_1a5560:
    // 0x1a5560: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x1a5560u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x1a5564: 0x2dc20011  sltiu       $v0, $t6, 0x11
    ctx->pc = 0x1a5564u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x1a5568: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x1a5568u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x1a556c: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1A556Cu;
    {
        const bool branch_taken_0x1a556c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A5570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A556Cu;
        // 0x1a5570: 0x25290040  addiu       $t1, $t1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a556c) {
            ctx->pc = 0x1A54F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a54f0;
        }
    }
    ctx->pc = 0x1A5574u;
    // 0x1a5574: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1a5574u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5578: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1a5578u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a557c: 0x0  nop
    ctx->pc = 0x1a557cu;
    // NOP
label_1a5580:
    // 0x1a5580: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1a5580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1a5584: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1A5584u;
    {
        const bool branch_taken_0x1a5584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5584u;
        // 0x1a5588: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5584) {
            ctx->pc = 0x1A55F8u;
            goto label_1a55f8;
        }
    }
    ctx->pc = 0x1A558Cu;
    // 0x1a558c: 0xc0697d4  jal         func_1A5F50
    ctx->pc = 0x1A558Cu;
    SET_GPR_U32(ctx, 31, 0x1A5594u);
    ctx->pc = 0x1A5F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5F50u, 0x1A558Cu, 0x1A5594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5594u;
label_1a5594:
    // 0x1a5594: 0xc0695e0  jal         func_1A5780
    ctx->pc = 0x1A5594u;
    SET_GPR_U32(ctx, 31, 0x1A559Cu);
    ctx->pc = 0x1A5598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5594u;
    // 0x1a5598: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5780u, 0x1A5594u, 0x1A559Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A559Cu;
label_1a559c:
    // 0x1a559c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1a559cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1a55a0: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x1a55a0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a55a4: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x1A55A4u;
    {
        const bool branch_taken_0x1a55a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A55A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A55A4u;
        // 0x1a55a8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a55a4) {
            ctx->pc = 0x1A55E0u;
            goto label_1a55e0;
        }
    }
    ctx->pc = 0x1A55ACu;
    // 0x1a55ac: 0x0  nop
    ctx->pc = 0x1a55acu;
    // NOP
label_1a55b0:
    // 0x1a55b0: 0x2921021  addu        $v0, $s4, $s2
    ctx->pc = 0x1a55b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x1a55b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a55b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a55b8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1a55b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1a55bc: 0x8c4500c0  lw          $a1, 0xC0($v0)
    ctx->pc = 0x1a55bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1a55c0: 0xc069694  jal         func_1A5A50
    ctx->pc = 0x1A55C0u;
    SET_GPR_U32(ctx, 31, 0x1A55C8u);
    ctx->pc = 0x1A55C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A55C0u;
    // 0x1a55c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5A50u, 0x1A55C0u, 0x1A55C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A55C8u;
label_1a55c8:
    // 0x1a55c8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1a55c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1a55cc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1a55ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1a55d0: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x1a55d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a55d4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1A55D4u;
    {
        const bool branch_taken_0x1a55d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a55d4) {
            ctx->pc = 0x1A55B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a55b0;
        }
    }
    ctx->pc = 0x1A55DCu;
    // 0x1a55dc: 0x0  nop
    ctx->pc = 0x1a55dcu;
    // NOP
label_1a55e0:
    // 0x1a55e0: 0xc0695f4  jal         func_1A57D0
    ctx->pc = 0x1A55E0u;
    SET_GPR_U32(ctx, 31, 0x1A55E8u);
    ctx->pc = 0x1A55E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A55E0u;
    // 0x1a55e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A57D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A57D0u, 0x1A55E0u, 0x1A55E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A55E8u;
label_1a55e8:
    // 0x1a55e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a55e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a55ec: 0xc0697e0  jal         func_1A5F80
    ctx->pc = 0x1A55ECu;
    SET_GPR_U32(ctx, 31, 0x1A55F4u);
    ctx->pc = 0x1A55F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A55ECu;
    // 0x1a55f0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5F80u, 0x1A55ECu, 0x1A55F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A55F4u;
label_1a55f4:
    // 0x1a55f4: 0x0  nop
    ctx->pc = 0x1a55f4u;
    // NOP
label_1a55f8:
    // 0x1a55f8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1a55f8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1a55fc: 0x2ea20011  sltiu       $v0, $s5, 0x11
    ctx->pc = 0x1a55fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x1a5600: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1a5600u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x1a5604: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x1A5604u;
    {
        const bool branch_taken_0x1a5604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A5608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5604u;
        // 0x1a5608: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5604) {
            ctx->pc = 0x1A5580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a5580;
        }
    }
    ctx->pc = 0x1A560Cu;
    // 0x1a560c: 0x8e2278b8  lw          $v0, 0x78B8($s1)
    ctx->pc = 0x1a560cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30904)));
    // 0x1a5610: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1A5610u;
    {
        const bool branch_taken_0x1a5610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5610u;
        // 0x1a5614: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5610) {
            ctx->pc = 0x1A5648u;
            goto label_1a5648;
        }
    }
    ctx->pc = 0x1A5618u;
    // 0x1a5618: 0xc0697d4  jal         func_1A5F50
    ctx->pc = 0x1A5618u;
    SET_GPR_U32(ctx, 31, 0x1A5620u);
    ctx->pc = 0x1A5F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5F50u, 0x1A5618u, 0x1A5620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5620u;
label_1a5620:
    // 0x1a5620: 0xc0695e0  jal         func_1A5780
    ctx->pc = 0x1A5620u;
    SET_GPR_U32(ctx, 31, 0x1A5628u);
    ctx->pc = 0x1A5624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5620u;
    // 0x1a5624: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5780u, 0x1A5620u, 0x1A5628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5628u;
label_1a5628:
    // 0x1a5628: 0x8e2578b8  lw          $a1, 0x78B8($s1)
    ctx->pc = 0x1a5628u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30904)));
    // 0x1a562c: 0xc0708b4  jal         func_1C22D0
    ctx->pc = 0x1A562Cu;
    SET_GPR_U32(ctx, 31, 0x1A5634u);
    ctx->pc = 0x1A5630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A562Cu;
    // 0x1a5630: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C22D0u, 0x1A562Cu, 0x1A5634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5634u;
label_1a5634:
    // 0x1a5634: 0xc0695f4  jal         func_1A57D0
    ctx->pc = 0x1A5634u;
    SET_GPR_U32(ctx, 31, 0x1A563Cu);
    ctx->pc = 0x1A5638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5634u;
    // 0x1a5638: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A57D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A57D0u, 0x1A5634u, 0x1A563Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A563Cu;
label_1a563c:
    // 0x1a563c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a563cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5640: 0xc0697e0  jal         func_1A5F80
    ctx->pc = 0x1A5640u;
    SET_GPR_U32(ctx, 31, 0x1A5648u);
    ctx->pc = 0x1A5644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5640u;
    // 0x1a5644: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5F80u, 0x1A5640u, 0x1A5648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5648u;
label_1a5648:
    // 0x1a5648: 0x92227845  lbu         $v0, 0x7845($s1)
    ctx->pc = 0x1a5648u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 30789)));
    // 0x1a564c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1A564Cu;
    {
        const bool branch_taken_0x1a564c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A564Cu;
        // 0x1a5650: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a564c) {
            ctx->pc = 0x1A56B0u;
            goto label_1a56b0;
        }
    }
    ctx->pc = 0x1A5654u;
    // 0x1a5654: 0xc0697d4  jal         func_1A5F50
    ctx->pc = 0x1A5654u;
    SET_GPR_U32(ctx, 31, 0x1A565Cu);
    ctx->pc = 0x1A5F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5F50u, 0x1A5654u, 0x1A565Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A565Cu;
label_1a565c:
    // 0x1a565c: 0xc0695e0  jal         func_1A5780
    ctx->pc = 0x1A565Cu;
    SET_GPR_U32(ctx, 31, 0x1A5664u);
    ctx->pc = 0x1A5660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A565Cu;
    // 0x1a5660: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5780u, 0x1A565Cu, 0x1A5664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5664u;
label_1a5664:
    // 0x1a5664: 0xc0705dc  jal         func_1C1770
    ctx->pc = 0x1A5664u;
    SET_GPR_U32(ctx, 31, 0x1A566Cu);
    ctx->pc = 0x1A5668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5664u;
    // 0x1a5668: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1770u, 0x1A5664u, 0x1A566Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A566Cu;
label_1a566c:
    // 0x1a566c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a566cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5670: 0xc0705e8  jal         func_1C17A0
    ctx->pc = 0x1A5670u;
    SET_GPR_U32(ctx, 31, 0x1A5678u);
    ctx->pc = 0x1A5674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5670u;
    // 0x1a5674: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C17A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C17A0u, 0x1A5670u, 0x1A5678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5678u;
label_1a5678:
    // 0x1a5678: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1a5678u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a567c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1a567cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5680: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x1a5680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x1a5684: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a5684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5688: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x1a5688u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1a568c: 0x240800e0  addiu       $t0, $zero, 0xE0
    ctx->pc = 0x1a568cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1a5690: 0xc06c2b8  jal         func_1B0AE0
    ctx->pc = 0x1A5690u;
    SET_GPR_U32(ctx, 31, 0x1A5698u);
    ctx->pc = 0x1A5694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5690u;
    // 0x1a5694: 0x3449ffff  ori         $t1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0AE0u, 0x1A5690u, 0x1A5698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5698u;
label_1a5698:
    // 0x1a5698: 0xc0695f4  jal         func_1A57D0
    ctx->pc = 0x1A5698u;
    SET_GPR_U32(ctx, 31, 0x1A56A0u);
    ctx->pc = 0x1A569Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5698u;
    // 0x1a569c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A57D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A57D0u, 0x1A5698u, 0x1A56A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A56A0u;
label_1a56a0:
    // 0x1a56a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a56a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a56a4: 0xc0697e0  jal         func_1A5F80
    ctx->pc = 0x1A56A4u;
    SET_GPR_U32(ctx, 31, 0x1A56ACu);
    ctx->pc = 0x1A56A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A56A4u;
    // 0x1a56a8: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5F80u, 0x1A56A4u, 0x1A56ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A56ACu;
label_1a56ac:
    // 0x1a56ac: 0x0  nop
    ctx->pc = 0x1a56acu;
    // NOP
label_1a56b0:
    // 0x1a56b0: 0x8e237848  lw          $v1, 0x7848($s1)
    ctx->pc = 0x1a56b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30792)));
    // 0x1a56b4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1a56b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a56b8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1a56b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1a56bc: 0x24527800  addiu       $s2, $v0, 0x7800
    ctx->pc = 0x1a56bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 30720));
    // 0x1a56c0: 0x8c427800  lw          $v0, 0x7800($v0)
    ctx->pc = 0x1a56c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30720)));
    // 0x1a56c4: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x1a56c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a56c8: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x1A56C8u;
    {
        const bool branch_taken_0x1a56c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A56CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A56C8u;
        // 0x1a56cc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a56c8) {
            ctx->pc = 0x1A56F8u;
            goto label_1a56f8;
        }
    }
    ctx->pc = 0x1A56D0u;
    // 0x1a56d0: 0x31240  sll         $v0, $v1, 9
    ctx->pc = 0x1a56d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 9));
    // 0x1a56d4: 0x222a021  addu        $s4, $s1, $v0
    ctx->pc = 0x1a56d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1a56d8:
    // 0x1a56d8: 0x8e857400  lw          $a1, 0x7400($s4)
    ctx->pc = 0x1a56d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 29696)));
    // 0x1a56dc: 0xc0708b0  jal         func_1C22C0
    ctx->pc = 0x1A56DCu;
    SET_GPR_U32(ctx, 31, 0x1A56E4u);
    ctx->pc = 0x1A56E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A56DCu;
    // 0x1a56e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C22C0u, 0x1A56DCu, 0x1A56E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A56E4u;
label_1a56e4:
    // 0x1a56e4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1a56e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1a56e8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1a56e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1a56ec: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x1a56ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a56f0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1A56F0u;
    {
        const bool branch_taken_0x1a56f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A56F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A56F0u;
        // 0x1a56f4: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a56f0) {
            ctx->pc = 0x1A56D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a56d8;
        }
    }
    ctx->pc = 0x1A56F8u;
label_1a56f8:
    // 0x1a56f8: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1a56f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x1a56fc: 0x8e23783c  lw          $v1, 0x783C($s1)
    ctx->pc = 0x1a56fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30780)));
    // 0x1a5700: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x1a5700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1a5704: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1a5704u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1a5708: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1a5708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1a570c: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x1a570cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1a5710: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1a5710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1a5714: 0xac22fc90  sw          $v0, -0x370($at)
    ctx->pc = 0x1a5714u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966416), GPR_U32(ctx, 2));
    // 0x1a5718: 0xa2207844  sb          $zero, 0x7844($s1)
    ctx->pc = 0x1a5718u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 30788), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a571c: 0x8e22783c  lw          $v0, 0x783C($s1)
    ctx->pc = 0x1a571cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30780)));
    // 0x1a5720: 0x501823  subu        $v1, $v0, $s0
    ctx->pc = 0x1a5720u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a5724: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A5724u;
    {
        const bool branch_taken_0x1a5724 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1A5728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5724u;
        // 0x1a5728: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5724) {
            ctx->pc = 0x1A5734u;
            goto label_1a5734;
        }
    }
    ctx->pc = 0x1A572Cu;
    // 0x1a572c: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1a572cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1a5730: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1a5730u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1a5734:
    // 0x1a5734: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1A5734u;
    {
        const bool branch_taken_0x1a5734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5734u;
        // 0x1a5738: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5734) {
            ctx->pc = 0x1A5758u;
            goto label_1a5758;
        }
    }
    ctx->pc = 0x1A573Cu;
    // 0x1a573c: 0x0  nop
    ctx->pc = 0x1a573cu;
    // NOP
label_1a5740:
    // 0x1a5740: 0xd082b  sltu        $at, $zero, $t5
    ctx->pc = 0x1a5740u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x1a5744: 0x1020ff82  beqz        $at, . + 4 + (-0x7E << 2)
    ctx->pc = 0x1A5744u;
    {
        const bool branch_taken_0x1a5744 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5744u;
        // 0x1a5748: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5744) {
            ctx->pc = 0x1A5550u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a5550;
        }
    }
    ctx->pc = 0x1A574Cu;
    // 0x1a574c: 0x1000ff7c  b           . + 4 + (-0x84 << 2)
    ctx->pc = 0x1A574Cu;
    {
        const bool branch_taken_0x1a574c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A574Cu;
        // 0x1a5750: 0x1283021  addu        $a2, $t1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a574c) {
            ctx->pc = 0x1A5540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a5540;
        }
    }
    ctx->pc = 0x1A5754u;
    // 0x1a5754: 0x0  nop
    ctx->pc = 0x1a5754u;
    // NOP
label_1a5758:
    // 0x1a5758: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1a5758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a575c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1a575cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a5760: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1a5760u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a5764: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a5764u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a5768: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a5768u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a576c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a576cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a5770: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a5770u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a5774: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5774u;
        // 0x1a5778: 0x27bd0500  addiu       $sp, $sp, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1280));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A577Cu;
}
