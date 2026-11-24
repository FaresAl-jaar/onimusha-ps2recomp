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

// Function: sub_002755F0
// Address: 0x2755f0 - 0x275748
void sub_002755F0_0x2755f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002755F0_0x2755f0");
#endif

    ctx->pc = 0x2755f0u;

    // 0x2755f0: 0x90820051  lbu         $v0, 0x51($a0)
    ctx->pc = 0x2755f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 81)));
    // 0x2755f4: 0x2c410006  sltiu       $at, $v0, 0x6
    ctx->pc = 0x2755f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x2755f8: 0x1020004f  beqz        $at, . + 4 + (0x4F << 2)
    ctx->pc = 0x2755F8u;
    {
        const bool branch_taken_0x2755f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2755FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2755F8u;
        // 0x2755fc: 0x3c030067  lui         $v1, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2755f8) {
            ctx->pc = 0x275738u;
            goto label_275738;
        }
    }
    ctx->pc = 0x275600u;
    // 0x275600: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x275600u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x275604: 0x24635af0  addiu       $v1, $v1, 0x5AF0
    ctx->pc = 0x275604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23280));
    // 0x275608: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x275608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27560c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x27560cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x275610: 0x400008  jr          $v0
    ctx->pc = 0x275610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x275618u: goto label_275618;
            case 0x275620u: goto label_275620;
            case 0x2756B0u: goto label_2756b0;
            case 0x2756B8u: goto label_2756b8;
            case 0x2756F0u: goto label_2756f0;
            case 0x275700u: goto label_275700;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275610u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x275618u;
label_275618:
    // 0x275618: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x275618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27561c: 0xa0820051  sb          $v0, 0x51($a0)
    ctx->pc = 0x27561cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 81), (uint8_t)GPR_U32(ctx, 2));
label_275620:
    // 0x275620: 0x90820074  lbu         $v0, 0x74($a0)
    ctx->pc = 0x275620u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x275624: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x275624u;
    {
        const bool branch_taken_0x275624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x275624) {
            ctx->pc = 0x275670u;
            goto label_275670;
        }
    }
    ctx->pc = 0x27562Cu;
    // 0x27562c: 0x84820078  lh          $v0, 0x78($a0)
    ctx->pc = 0x27562cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x275630: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x275630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x275634: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x275634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x275638: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x275638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27563c: 0xa4820078  sh          $v0, 0x78($a0)
    ctx->pc = 0x27563cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 120), (uint16_t)GPR_U32(ctx, 2));
    // 0x275640: 0xa085007a  sb          $a1, 0x7A($a0)
    ctx->pc = 0x275640u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 122), (uint8_t)GPR_U32(ctx, 5));
    // 0x275644: 0xa085007b  sb          $a1, 0x7B($a0)
    ctx->pc = 0x275644u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 123), (uint8_t)GPR_U32(ctx, 5));
    // 0x275648: 0x84820078  lh          $v0, 0x78($a0)
    ctx->pc = 0x275648u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x27564c: 0x284200ff  slti        $v0, $v0, 0xFF
    ctx->pc = 0x27564cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x275650: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x275650u;
    {
        const bool branch_taken_0x275650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x275654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275650u;
        // 0x275654: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275650) {
            ctx->pc = 0x275738u;
            goto label_275738;
        }
    }
    ctx->pc = 0x275658u;
    // 0x275658: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x275658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27565c: 0xa4830078  sh          $v1, 0x78($a0)
    ctx->pc = 0x27565cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 120), (uint16_t)GPR_U32(ctx, 3));
    // 0x275660: 0xa085007a  sb          $a1, 0x7A($a0)
    ctx->pc = 0x275660u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 122), (uint8_t)GPR_U32(ctx, 5));
    // 0x275664: 0xa085007b  sb          $a1, 0x7B($a0)
    ctx->pc = 0x275664u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 123), (uint8_t)GPR_U32(ctx, 5));
    // 0x275668: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x275668u;
    {
        const bool branch_taken_0x275668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27566Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275668u;
        // 0x27566c: 0xa0820051  sb          $v0, 0x51($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 81), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275668) {
            ctx->pc = 0x275738u;
            goto label_275738;
        }
    }
    ctx->pc = 0x275670u;
label_275670:
    // 0x275670: 0x84850078  lh          $a1, 0x78($a0)
    ctx->pc = 0x275670u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x275674: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x275674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x275678: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x275678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27567c: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x27567cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x275680: 0xa4830078  sh          $v1, 0x78($a0)
    ctx->pc = 0x275680u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 120), (uint16_t)GPR_U32(ctx, 3));
    // 0x275684: 0xa080007a  sb          $zero, 0x7A($a0)
    ctx->pc = 0x275684u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 122), (uint8_t)GPR_U32(ctx, 0));
    // 0x275688: 0xa082007b  sb          $v0, 0x7B($a0)
    ctx->pc = 0x275688u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 123), (uint8_t)GPR_U32(ctx, 2));
    // 0x27568c: 0x84820078  lh          $v0, 0x78($a0)
    ctx->pc = 0x27568cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x275690: 0x1c400029  bgtz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x275690u;
    {
        const bool branch_taken_0x275690 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x275690) {
            ctx->pc = 0x275738u;
            goto label_275738;
        }
    }
    ctx->pc = 0x275698u;
    // 0x275698: 0xa4800078  sh          $zero, 0x78($a0)
    ctx->pc = 0x275698u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 120), (uint16_t)GPR_U32(ctx, 0));
    // 0x27569c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x27569cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2756a0: 0xa080007a  sb          $zero, 0x7A($a0)
    ctx->pc = 0x2756a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 122), (uint8_t)GPR_U32(ctx, 0));
    // 0x2756a4: 0xa080007b  sb          $zero, 0x7B($a0)
    ctx->pc = 0x2756a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 123), (uint8_t)GPR_U32(ctx, 0));
    // 0x2756a8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2756A8u;
    {
        const bool branch_taken_0x2756a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2756ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2756A8u;
        // 0x2756ac: 0xa0820051  sb          $v0, 0x51($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 81), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2756a8) {
            ctx->pc = 0x275738u;
            goto label_275738;
        }
    }
    ctx->pc = 0x2756B0u;
label_2756b0:
    // 0x2756b0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2756b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2756b4: 0xa0820051  sb          $v0, 0x51($a0)
    ctx->pc = 0x2756b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 81), (uint8_t)GPR_U32(ctx, 2));
label_2756b8:
    // 0x2756b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2756b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2756bc: 0xa085007a  sb          $a1, 0x7A($a0)
    ctx->pc = 0x2756bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 122), (uint8_t)GPR_U32(ctx, 5));
    // 0x2756c0: 0xa085007b  sb          $a1, 0x7B($a0)
    ctx->pc = 0x2756c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 123), (uint8_t)GPR_U32(ctx, 5));
    // 0x2756c4: 0x90820074  lbu         $v0, 0x74($a0)
    ctx->pc = 0x2756c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x2756c8: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2756C8u;
    {
        const bool branch_taken_0x2756c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2756c8) {
            ctx->pc = 0x275738u;
            goto label_275738;
        }
    }
    ctx->pc = 0x2756D0u;
    // 0x2756d0: 0x84830078  lh          $v1, 0x78($a0)
    ctx->pc = 0x2756d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x2756d4: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x2756d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2756d8: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2756d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2756dc: 0xa4820078  sh          $v0, 0x78($a0)
    ctx->pc = 0x2756dcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 120), (uint16_t)GPR_U32(ctx, 2));
    // 0x2756e0: 0xa080007a  sb          $zero, 0x7A($a0)
    ctx->pc = 0x2756e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 122), (uint8_t)GPR_U32(ctx, 0));
    // 0x2756e4: 0xa085007b  sb          $a1, 0x7B($a0)
    ctx->pc = 0x2756e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 123), (uint8_t)GPR_U32(ctx, 5));
    // 0x2756e8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2756E8u;
    {
        const bool branch_taken_0x2756e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2756ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2756E8u;
        // 0x2756ec: 0xa0800051  sb          $zero, 0x51($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 81), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2756e8) {
            ctx->pc = 0x275738u;
            goto label_275738;
        }
    }
    ctx->pc = 0x2756F0u;
label_2756f0:
    // 0x2756f0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2756f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2756f4: 0xa0820051  sb          $v0, 0x51($a0)
    ctx->pc = 0x2756f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 81), (uint8_t)GPR_U32(ctx, 2));
    // 0x2756f8: 0xa4800078  sh          $zero, 0x78($a0)
    ctx->pc = 0x2756f8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 120), (uint16_t)GPR_U32(ctx, 0));
    // 0x2756fc: 0x0  nop
    ctx->pc = 0x2756fcu;
    // NOP
label_275700:
    // 0x275700: 0xa080007a  sb          $zero, 0x7A($a0)
    ctx->pc = 0x275700u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 122), (uint8_t)GPR_U32(ctx, 0));
    // 0x275704: 0xa080007b  sb          $zero, 0x7B($a0)
    ctx->pc = 0x275704u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 123), (uint8_t)GPR_U32(ctx, 0));
    // 0x275708: 0x90820074  lbu         $v0, 0x74($a0)
    ctx->pc = 0x275708u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x27570c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x27570Cu;
    {
        const bool branch_taken_0x27570c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27570c) {
            ctx->pc = 0x275738u;
            goto label_275738;
        }
    }
    ctx->pc = 0x275714u;
    // 0x275714: 0x84830078  lh          $v1, 0x78($a0)
    ctx->pc = 0x275714u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x275718: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x275718u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x27571c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27571cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x275720: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x275720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x275724: 0xa4830078  sh          $v1, 0x78($a0)
    ctx->pc = 0x275724u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 120), (uint16_t)GPR_U32(ctx, 3));
    // 0x275728: 0xa082007a  sb          $v0, 0x7A($a0)
    ctx->pc = 0x275728u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 122), (uint8_t)GPR_U32(ctx, 2));
    // 0x27572c: 0xa082007b  sb          $v0, 0x7B($a0)
    ctx->pc = 0x27572cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 123), (uint8_t)GPR_U32(ctx, 2));
    // 0x275730: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x275730u;
    {
        const bool branch_taken_0x275730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275730u;
        // 0x275734: 0xa0800051  sb          $zero, 0x51($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 81), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275730) {
            ctx->pc = 0x275740u;
            goto label_275740;
        }
    }
    ctx->pc = 0x275738u;
label_275738:
    // 0x275738: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x275738u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27573c: 0x0  nop
    ctx->pc = 0x27573cu;
    // NOP
label_275740:
    // 0x275740: 0x3e00008  jr          $ra
    ctx->pc = 0x275740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275748u;
}
