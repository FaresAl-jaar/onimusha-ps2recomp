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

// Function: sub_00257670
// Address: 0x257670 - 0x257824
void sub_00257670_0x257670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00257670_0x257670");
#endif

    switch (ctx->pc) {
        case 0x2576c0u: goto label_2576c0;
        case 0x2576c8u: goto label_2576c8;
        case 0x2576d4u: goto label_2576d4;
        case 0x257710u: goto label_257710;
        case 0x257738u: goto label_257738;
        case 0x257744u: goto label_257744;
        case 0x257778u: goto label_257778;
        case 0x2577a0u: goto label_2577a0;
        case 0x2577acu: goto label_2577ac;
        case 0x2577e8u: goto label_2577e8;
        default: break;
    }

    ctx->pc = 0x257670u;

    // 0x257670: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x257670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x257674: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x257674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x257678: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x257678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x25767c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25767cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x257680: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x257680u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257684: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x257684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x257688: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x257688u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25768c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25768cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x257690: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x257690u;
    {
        const bool branch_taken_0x257690 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x257694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257690u;
        // 0x257694: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257690) {
            ctx->pc = 0x2576A0u;
            goto label_2576a0;
        }
    }
    ctx->pc = 0x257698u;
    // 0x257698: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x257698u;
    {
        const bool branch_taken_0x257698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25769Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257698u;
        // 0x25769c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257698) {
            ctx->pc = 0x257808u;
            goto label_257808;
        }
    }
    ctx->pc = 0x2576A0u;
label_2576a0:
    // 0x2576a0: 0x3401d640  ori         $at, $zero, 0xD640
    ctx->pc = 0x2576a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)54848);
    // 0x2576a4: 0x2618021  addu        $s0, $s3, $at
    ctx->pc = 0x2576a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 1)));
    // 0x2576a8: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2576a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2576ac: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x2576acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x2576b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2576b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2576b4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2576b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2576b8: 0xc049522  jal         func_125488
    ctx->pc = 0x2576B8u;
    SET_GPR_U32(ctx, 31, 0x2576C0u);
    ctx->pc = 0x2576BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2576B8u;
    // 0x2576bc: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x2576B8u, 0x2576C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2576C0u;
label_2576c0:
    // 0x2576c0: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x2576c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2576c4: 0x0  nop
    ctx->pc = 0x2576c4u;
    // NOP
label_2576c8:
    // 0x2576c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2576c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2576cc: 0xc097958  jal         func_25E560
    ctx->pc = 0x2576CCu;
    SET_GPR_U32(ctx, 31, 0x2576D4u);
    ctx->pc = 0x2576D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2576CCu;
    // 0x2576d0: 0x27a5005c  addiu       $a1, $sp, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E560u, 0x2576CCu, 0x2576D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2576D4u;
label_2576d4:
    // 0x2576d4: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x2576D4u;
    {
        const bool branch_taken_0x2576d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2576d4) {
            ctx->pc = 0x2577F8u;
            goto label_2577f8;
        }
    }
    ctx->pc = 0x2576DCu;
    // 0x2576dc: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x2576dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2576e0: 0x10600045  beqz        $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x2576E0u;
    {
        const bool branch_taken_0x2576e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2576e0) {
            ctx->pc = 0x2577F8u;
            goto label_2577f8;
        }
    }
    ctx->pc = 0x2576E8u;
    // 0x2576e8: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x2576e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2576ec: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2576ECu;
    {
        const bool branch_taken_0x2576ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2576ec) {
            ctx->pc = 0x257700u;
            goto label_257700;
        }
    }
    ctx->pc = 0x2576F4u;
    // 0x2576f4: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x2576f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x2576f8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2576F8u;
    {
        const bool branch_taken_0x2576f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2576FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2576F8u;
        // 0x2576fc: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2576f8) {
            ctx->pc = 0x257720u;
            goto label_257720;
        }
    }
    ctx->pc = 0x257700u;
label_257700:
    // 0x257700: 0x8fa6005c  lw          $a2, 0x5C($sp)
    ctx->pc = 0x257700u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x257704: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x257704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257708: 0xc049522  jal         func_125488
    ctx->pc = 0x257708u;
    SET_GPR_U32(ctx, 31, 0x257710u);
    ctx->pc = 0x25770Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257708u;
    // 0x25770c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x257708u, 0x257710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257710u;
label_257710:
    // 0x257710: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x257710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x257714: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x257714u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x257718: 0x1000ffeb  b           . + 4 + (-0x15 << 2)
    ctx->pc = 0x257718u;
    {
        const bool branch_taken_0x257718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25771Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257718u;
        // 0x25771c: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257718) {
            ctx->pc = 0x2576C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2576c8;
        }
    }
    ctx->pc = 0x257720u;
label_257720:
    // 0x257720: 0x1220001f  beqz        $s1, . + 4 + (0x1F << 2)
    ctx->pc = 0x257720u;
    {
        const bool branch_taken_0x257720 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x257724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257720u;
        // 0x257724: 0x240300f2  addiu       $v1, $zero, 0xF2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 242));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257720) {
            ctx->pc = 0x2577A0u;
            goto label_2577a0;
        }
    }
    ctx->pc = 0x257728u;
    // 0x257728: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x257728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x25772c: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x25772cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x257730: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x257730u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x257734: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x257734u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_257738:
    // 0x257738: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x257738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25773c: 0xc097958  jal         func_25E560
    ctx->pc = 0x25773Cu;
    SET_GPR_U32(ctx, 31, 0x257744u);
    ctx->pc = 0x257740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25773Cu;
    // 0x257740: 0x27a5005c  addiu       $a1, $sp, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E560u, 0x25773Cu, 0x257744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257744u;
label_257744:
    // 0x257744: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x257744u;
    {
        const bool branch_taken_0x257744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x257744) {
            ctx->pc = 0x257790u;
            goto label_257790;
        }
    }
    ctx->pc = 0x25774Cu;
    // 0x25774c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x25774cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x257750: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x257750u;
    {
        const bool branch_taken_0x257750 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x257750) {
            ctx->pc = 0x257790u;
            goto label_257790;
        }
    }
    ctx->pc = 0x257758u;
    // 0x257758: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x257758u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x25775c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x25775cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x257760: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x257760u;
    {
        const bool branch_taken_0x257760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x257760) {
            ctx->pc = 0x257780u;
            goto label_257780;
        }
    }
    ctx->pc = 0x257768u;
    // 0x257768: 0x8fa6005c  lw          $a2, 0x5C($sp)
    ctx->pc = 0x257768u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x25776c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25776cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257770: 0xc049522  jal         func_125488
    ctx->pc = 0x257770u;
    SET_GPR_U32(ctx, 31, 0x257778u);
    ctx->pc = 0x257774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257770u;
    // 0x257774: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x257770u, 0x257778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257778u;
label_257778:
    // 0x257778: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x257778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x25777c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x25777cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_257780:
    // 0x257780: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x257780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x257784: 0x1000ffec  b           . + 4 + (-0x14 << 2)
    ctx->pc = 0x257784u;
    {
        const bool branch_taken_0x257784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257784u;
        // 0x257788: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257784) {
            ctx->pc = 0x257738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_257738;
        }
    }
    ctx->pc = 0x25778Cu;
    // 0x25778c: 0x0  nop
    ctx->pc = 0x25778cu;
    // NOP
label_257790:
    // 0x257790: 0x240200f2  addiu       $v0, $zero, 0xF2
    ctx->pc = 0x257790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 242));
    // 0x257794: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x257794u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x257798: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x257798u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x25779c: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x25779cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_2577a0:
    // 0x2577a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2577a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2577a4: 0xc097958  jal         func_25E560
    ctx->pc = 0x2577A4u;
    SET_GPR_U32(ctx, 31, 0x2577ACu);
    ctx->pc = 0x2577A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2577A4u;
    // 0x2577a8: 0x27a5005c  addiu       $a1, $sp, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E560u, 0x2577A4u, 0x2577ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2577ACu;
label_2577ac:
    // 0x2577ac: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2577ACu;
    {
        const bool branch_taken_0x2577ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2577ac) {
            ctx->pc = 0x2577F8u;
            goto label_2577f8;
        }
    }
    ctx->pc = 0x2577B4u;
    // 0x2577b4: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x2577b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2577b8: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2577B8u;
    {
        const bool branch_taken_0x2577b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2577b8) {
            ctx->pc = 0x2577F8u;
            goto label_2577f8;
        }
    }
    ctx->pc = 0x2577C0u;
    // 0x2577c0: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x2577c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2577c4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2577C4u;
    {
        const bool branch_taken_0x2577c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2577c4) {
            ctx->pc = 0x2577D8u;
            goto label_2577d8;
        }
    }
    ctx->pc = 0x2577CCu;
    // 0x2577cc: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x2577ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x2577d0: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x2577D0u;
    {
        const bool branch_taken_0x2577d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2577D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2577D0u;
        // 0x2577d4: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2577d0) {
            ctx->pc = 0x2577A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2577a0;
        }
    }
    ctx->pc = 0x2577D8u;
label_2577d8:
    // 0x2577d8: 0x8fa6005c  lw          $a2, 0x5C($sp)
    ctx->pc = 0x2577d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x2577dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2577dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2577e0: 0xc049522  jal         func_125488
    ctx->pc = 0x2577E0u;
    SET_GPR_U32(ctx, 31, 0x2577E8u);
    ctx->pc = 0x2577E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2577E0u;
    // 0x2577e4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x2577E0u, 0x2577E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2577E8u;
label_2577e8:
    // 0x2577e8: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x2577e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x2577ec: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2577ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2577f0: 0x1000ffeb  b           . + 4 + (-0x15 << 2)
    ctx->pc = 0x2577F0u;
    {
        const bool branch_taken_0x2577f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2577F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2577F0u;
        // 0x2577f4: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2577f0) {
            ctx->pc = 0x2577A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2577a0;
        }
    }
    ctx->pc = 0x2577F8u;
label_2577f8:
    // 0x2577f8: 0x3401d640  ori         $at, $zero, 0xD640
    ctx->pc = 0x2577f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)54848);
    // 0x2577fc: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2577fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x257800: 0x2611021  addu        $v0, $s3, $at
    ctx->pc = 0x257800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 1)));
    // 0x257804: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x257804u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
label_257808:
    // 0x257808: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x257808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25780c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x25780cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257810: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x257810u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x257814: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x257814u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x257818: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x257818u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25781c: 0x3e00008  jr          $ra
    ctx->pc = 0x25781Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x257820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25781Cu;
        // 0x257820: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25781Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x257824u;
}
