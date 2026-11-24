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

// Function: sub_003A7620
// Address: 0x3a7620 - 0x3a79e8
void sub_003A7620_0x3a7620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A7620_0x3a7620");
#endif

    switch (ctx->pc) {
        case 0x3a7690u: goto label_3a7690;
        case 0x3a76a4u: goto label_3a76a4;
        case 0x3a76c4u: goto label_3a76c4;
        case 0x3a76f4u: goto label_3a76f4;
        case 0x3a7760u: goto label_3a7760;
        case 0x3a7774u: goto label_3a7774;
        case 0x3a7780u: goto label_3a7780;
        case 0x3a77c8u: goto label_3a77c8;
        case 0x3a77f0u: goto label_3a77f0;
        case 0x3a7838u: goto label_3a7838;
        case 0x3a78b8u: goto label_3a78b8;
        case 0x3a7910u: goto label_3a7910;
        case 0x3a791cu: goto label_3a791c;
        case 0x3a7930u: goto label_3a7930;
        case 0x3a7964u: goto label_3a7964;
        case 0x3a79c8u: goto label_3a79c8;
        case 0x3a79d4u: goto label_3a79d4;
        default: break;
    }

    ctx->pc = 0x3a7620u;

    // 0x3a7620: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a7620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3a7624: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3a7624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3a7628: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3a7628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3a762c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3a762cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3a7630: 0x90850002  lbu         $a1, 0x2($a0)
    ctx->pc = 0x3a7630u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3a7634: 0x10a3008a  beq         $a1, $v1, . + 4 + (0x8A << 2)
    ctx->pc = 0x3A7634u;
    {
        const bool branch_taken_0x3a7634 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3A7638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7634u;
        // 0x3a7638: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7634) {
            ctx->pc = 0x3A7860u;
            goto label_3a7860;
        }
    }
    ctx->pc = 0x3A763Cu;
    // 0x3a763c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3a763cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a7640: 0x10a3003b  beq         $a1, $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x3A7640u;
    {
        const bool branch_taken_0x3a7640 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3A7644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7640u;
        // 0x3a7644: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7640) {
            ctx->pc = 0x3A7730u;
            goto label_3a7730;
        }
    }
    ctx->pc = 0x3A7648u;
    // 0x3a7648: 0x10a30025  beq         $a1, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x3A7648u;
    {
        const bool branch_taken_0x3a7648 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a7648) {
            ctx->pc = 0x3A76E0u;
            goto label_3a76e0;
        }
    }
    ctx->pc = 0x3A7650u;
    // 0x3a7650: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a7650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a7654: 0x10a30016  beq         $a1, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x3A7654u;
    {
        const bool branch_taken_0x3a7654 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a7654) {
            ctx->pc = 0x3A76B0u;
            goto label_3a76b0;
        }
    }
    ctx->pc = 0x3A765Cu;
    // 0x3a765c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A765Cu;
    {
        const bool branch_taken_0x3a765c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a765c) {
            ctx->pc = 0x3A7670u;
            goto label_3a7670;
        }
    }
    ctx->pc = 0x3A7664u;
    // 0x3a7664: 0x100000dc  b           . + 4 + (0xDC << 2)
    ctx->pc = 0x3A7664u;
    {
        const bool branch_taken_0x3a7664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a7664) {
            ctx->pc = 0x3A79D8u;
            goto label_3a79d8;
        }
    }
    ctx->pc = 0x3A766Cu;
    // 0x3a766c: 0x0  nop
    ctx->pc = 0x3a766cu;
    // NOP
label_3a7670:
    // 0x3a7670: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x3a7670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3a7674: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x3a7674u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a7678: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3a7678u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3a767c: 0xa2000007  sb          $zero, 0x7($s0)
    ctx->pc = 0x3a767cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a7680: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3a7680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3a7684: 0xa2000008  sb          $zero, 0x8($s0)
    ctx->pc = 0x3a7684u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a7688: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x3A7688u;
    SET_GPR_U32(ctx, 31, 0x3A7690u);
    ctx->pc = 0x3A768Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7688u;
    // 0x3a768c: 0xa200004e  sb          $zero, 0x4E($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 78), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x3A7688u, 0x3A7690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7690u;
label_3a7690:
    // 0x3a7690: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a7690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7694: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x3a7694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x3a7698: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x3a7698u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a769c: 0xc0eb608  jal         func_3AD820
    ctx->pc = 0x3A769Cu;
    SET_GPR_U32(ctx, 31, 0x3A76A4u);
    ctx->pc = 0x3A76A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A769Cu;
    // 0x3a76a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD820u, 0x3A769Cu, 0x3A76A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A76A4u;
label_3a76a4:
    // 0x3a76a4: 0x100000cc  b           . + 4 + (0xCC << 2)
    ctx->pc = 0x3A76A4u;
    {
        const bool branch_taken_0x3a76a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a76a4) {
            ctx->pc = 0x3A79D8u;
            goto label_3a79d8;
        }
    }
    ctx->pc = 0x3A76ACu;
    // 0x3a76ac: 0x0  nop
    ctx->pc = 0x3a76acu;
    // NOP
label_3a76b0:
    // 0x3a76b0: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3a76b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x3a76b4: 0x24848c10  addiu       $a0, $a0, -0x73F0
    ctx->pc = 0x3a76b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937616));
    // 0x3a76b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a76b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a76bc: 0xc05277c  jal         func_149DF0
    ctx->pc = 0x3A76BCu;
    SET_GPR_U32(ctx, 31, 0x3A76C4u);
    ctx->pc = 0x3A76C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A76BCu;
    // 0x3a76c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149DF0u, 0x3A76BCu, 0x3A76C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A76C4u;
label_3a76c4:
    // 0x3a76c4: 0x1c4000c4  bgtz        $v0, . + 4 + (0xC4 << 2)
    ctx->pc = 0x3A76C4u;
    {
        const bool branch_taken_0x3a76c4 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x3a76c4) {
            ctx->pc = 0x3A79D8u;
            goto label_3a79d8;
        }
    }
    ctx->pc = 0x3A76CCu;
    // 0x3a76cc: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x3a76ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3a76d0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a76d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a76d4: 0x100000c0  b           . + 4 + (0xC0 << 2)
    ctx->pc = 0x3A76D4u;
    {
        const bool branch_taken_0x3a76d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A76D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A76D4u;
        // 0x3a76d8: 0xa2030002  sb          $v1, 0x2($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a76d4) {
            ctx->pc = 0x3A79D8u;
            goto label_3a79d8;
        }
    }
    ctx->pc = 0x3A76DCu;
    // 0x3a76dc: 0x0  nop
    ctx->pc = 0x3a76dcu;
    // NOP
label_3a76e0:
    // 0x3a76e0: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3a76e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x3a76e4: 0x24848c10  addiu       $a0, $a0, -0x73F0
    ctx->pc = 0x3a76e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937616));
    // 0x3a76e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3a76e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a76ec: 0xc05277c  jal         func_149DF0
    ctx->pc = 0x3A76ECu;
    SET_GPR_U32(ctx, 31, 0x3A76F4u);
    ctx->pc = 0x3A76F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A76ECu;
    // 0x3a76f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149DF0u, 0x3A76ECu, 0x3A76F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A76F4u;
label_3a76f4:
    // 0x3a76f4: 0x1c4000b8  bgtz        $v0, . + 4 + (0xB8 << 2)
    ctx->pc = 0x3A76F4u;
    {
        const bool branch_taken_0x3a76f4 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x3a76f4) {
            ctx->pc = 0x3A79D8u;
            goto label_3a79d8;
        }
    }
    ctx->pc = 0x3A76FCu;
    // 0x3a76fc: 0x82030058  lb          $v1, 0x58($s0)
    ctx->pc = 0x3a76fcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x3a7700: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3a7700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a7704: 0x14650006  bne         $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A7704u;
    {
        const bool branch_taken_0x3a7704 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x3A7708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7704u;
        // 0x3a7708: 0x3c01006c  lui         $at, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7704) {
            ctx->pc = 0x3A7720u;
            goto label_3a7720;
        }
    }
    ctx->pc = 0x3A770Cu;
    // 0x3a770c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3a770cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a7710: 0x8c248eac  lw          $a0, -0x7154($at)
    ctx->pc = 0x3a7710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294938284)));
    // 0x3a7714: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3A7714u;
    {
        const bool branch_taken_0x3a7714 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3a7714) {
            ctx->pc = 0x3A7720u;
            goto label_3a7720;
        }
    }
    ctx->pc = 0x3A771Cu;
    // 0x3a771c: 0xa2050007  sb          $a1, 0x7($s0)
    ctx->pc = 0x3a771cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 5));
label_3a7720:
    // 0x3a7720: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x3a7720u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3a7724: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a7724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a7728: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x3A7728u;
    {
        const bool branch_taken_0x3a7728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A772Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7728u;
        // 0x3a772c: 0xa2030002  sb          $v1, 0x2($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7728) {
            ctx->pc = 0x3A79D8u;
            goto label_3a79d8;
        }
    }
    ctx->pc = 0x3A7730u;
label_3a7730:
    // 0x3a7730: 0x92040009  lbu         $a0, 0x9($s0)
    ctx->pc = 0x3a7730u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x3a7734: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a7734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a7738: 0x148300a7  bne         $a0, $v1, . + 4 + (0xA7 << 2)
    ctx->pc = 0x3A7738u;
    {
        const bool branch_taken_0x3a7738 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3a7738) {
            ctx->pc = 0x3A79D8u;
            goto label_3a79d8;
        }
    }
    ctx->pc = 0x3A7740u;
    // 0x3a7740: 0x86030016  lh          $v1, 0x16($s0)
    ctx->pc = 0x3a7740u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x3a7744: 0x146000a4  bnez        $v1, . + 4 + (0xA4 << 2)
    ctx->pc = 0x3A7744u;
    {
        const bool branch_taken_0x3a7744 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a7744) {
            ctx->pc = 0x3A79D8u;
            goto label_3a79d8;
        }
    }
    ctx->pc = 0x3A774Cu;
    // 0x3a774c: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x3a774cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3a7750: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3a7750u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3a7754: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3a7754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3a7758: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x3A7758u;
    SET_GPR_U32(ctx, 31, 0x3A7760u);
    ctx->pc = 0x3A775Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7758u;
    // 0x3a775c: 0xa2020002  sb          $v0, 0x2($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x3A7758u, 0x3A7760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7760u;
label_3a7760:
    // 0x3a7760: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a7760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7764: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x3a7764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x3a7768: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x3a7768u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a776c: 0xc0eb608  jal         func_3AD820
    ctx->pc = 0x3A776Cu;
    SET_GPR_U32(ctx, 31, 0x3A7774u);
    ctx->pc = 0x3A7770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A776Cu;
    // 0x3a7770: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD820u, 0x3A776Cu, 0x3A7774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7774u;
label_3a7774:
    // 0x3a7774: 0x26050190  addiu       $a1, $s0, 0x190
    ctx->pc = 0x3a7774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x3a7778: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3a7778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a777c: 0x0  nop
    ctx->pc = 0x3a777cu;
    // NOP
label_3a7780:
    // 0x3a7780: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x3a7780u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a7784: 0xa0a00001  sb          $zero, 0x1($a1)
    ctx->pc = 0x3a7784u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a7788: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x3a7788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x3a778c: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x3a778cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x3a7790: 0x2c830328  sltiu       $v1, $a0, 0x328
    ctx->pc = 0x3a7790u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)808) ? 1 : 0);
    // 0x3a7794: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x3a7794u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a7798: 0xa0a00001  sb          $zero, 0x1($a1)
    ctx->pc = 0x3a7798u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a779c: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x3a779cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x3a77a0: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x3a77a0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a77a4: 0xa0a00001  sb          $zero, 0x1($a1)
    ctx->pc = 0x3a77a4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a77a8: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x3a77a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x3a77ac: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x3a77acu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a77b0: 0xa0a00001  sb          $zero, 0x1($a1)
    ctx->pc = 0x3a77b0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a77b4: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x3A77B4u;
    {
        const bool branch_taken_0x3a77b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A77B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A77B4u;
        // 0x3a77b8: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a77b4) {
            ctx->pc = 0x3A7780u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a7780;
        }
    }
    ctx->pc = 0x3A77BCu;
    // 0x3a77bc: 0x2c810330  sltiu       $at, $a0, 0x330
    ctx->pc = 0x3a77bcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)816) ? 1 : 0);
    // 0x3a77c0: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A77C0u;
    {
        const bool branch_taken_0x3a77c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a77c0) {
            ctx->pc = 0x3A77E8u;
            goto label_3a77e8;
        }
    }
    ctx->pc = 0x3A77C8u;
label_3a77c8:
    // 0x3a77c8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3a77c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3a77cc: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x3a77ccu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a77d0: 0x2c830330  sltiu       $v1, $a0, 0x330
    ctx->pc = 0x3a77d0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)816) ? 1 : 0);
    // 0x3a77d4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3a77d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3a77d8: 0x0  nop
    ctx->pc = 0x3a77d8u;
    // NOP
    // 0x3a77dc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3A77DCu;
    {
        const bool branch_taken_0x3a77dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a77dc) {
            ctx->pc = 0x3A77C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a77c8;
        }
    }
    ctx->pc = 0x3A77E4u;
    // 0x3a77e4: 0x0  nop
    ctx->pc = 0x3a77e4u;
    // NOP
label_3a77e8:
    // 0x3a77e8: 0x260404c0  addiu       $a0, $s0, 0x4C0
    ctx->pc = 0x3a77e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1216));
    // 0x3a77ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a77ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a77f0:
    // 0x3a77f0: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x3a77f0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a77f4: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x3a77f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a77f8: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x3a77f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x3a77fc: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x3a77fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x3a7800: 0x2ca30328  sltiu       $v1, $a1, 0x328
    ctx->pc = 0x3a7800u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)808) ? 1 : 0);
    // 0x3a7804: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x3a7804u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a7808: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x3a7808u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a780c: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x3a780cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x3a7810: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x3a7810u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a7814: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x3a7814u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a7818: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x3a7818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x3a781c: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x3a781cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a7820: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x3a7820u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a7824: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x3A7824u;
    {
        const bool branch_taken_0x3a7824 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A7828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7824u;
        // 0x3a7828: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7824) {
            ctx->pc = 0x3A77F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a77f0;
        }
    }
    ctx->pc = 0x3A782Cu;
    // 0x3a782c: 0x2ca10330  sltiu       $at, $a1, 0x330
    ctx->pc = 0x3a782cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)816) ? 1 : 0);
    // 0x3a7830: 0x10200069  beqz        $at, . + 4 + (0x69 << 2)
    ctx->pc = 0x3A7830u;
    {
        const bool branch_taken_0x3a7830 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a7830) {
            ctx->pc = 0x3A79D8u;
            goto label_3a79d8;
        }
    }
    ctx->pc = 0x3A7838u;
label_3a7838:
    // 0x3a7838: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3a7838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3a783c: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x3a783cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a7840: 0x2ca30330  sltiu       $v1, $a1, 0x330
    ctx->pc = 0x3a7840u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)816) ? 1 : 0);
    // 0x3a7844: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3a7844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3a7848: 0x0  nop
    ctx->pc = 0x3a7848u;
    // NOP
    // 0x3a784c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3A784Cu;
    {
        const bool branch_taken_0x3a784c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a784c) {
            ctx->pc = 0x3A7838u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a7838;
        }
    }
    ctx->pc = 0x3A7854u;
    // 0x3a7854: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x3A7854u;
    {
        const bool branch_taken_0x3a7854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a7854) {
            ctx->pc = 0x3A79D8u;
            goto label_3a79d8;
        }
    }
    ctx->pc = 0x3A785Cu;
    // 0x3a785c: 0x0  nop
    ctx->pc = 0x3a785cu;
    // NOP
label_3a7860:
    // 0x3a7860: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x3a7860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3a7864: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x3a7864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
    // 0x3a7868: 0x344200a0  ori         $v0, $v0, 0xA0
    ctx->pc = 0x3a7868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)160);
    // 0x3a786c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3a786cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3a7870: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3A7870u;
    {
        const bool branch_taken_0x3a7870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a7870) {
            ctx->pc = 0x3A78B8u;
            goto label_3a78b8;
        }
    }
    ctx->pc = 0x3A7878u;
    // 0x3a7878: 0x82030007  lb          $v1, 0x7($s0)
    ctx->pc = 0x3a7878u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x3a787c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3a787cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3a7880: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3a7880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a7884: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3a7884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3a7888: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x3a7888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x3a788c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a788cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7890: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a7890u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7894: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3a7894u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7898: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3a7898u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a789c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3a789cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a78a0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3a78a0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a78a4: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x3a78a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x3a78a8: 0xa2030007  sb          $v1, 0x7($s0)
    ctx->pc = 0x3a78a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x3a78ac: 0xa2000053  sb          $zero, 0x53($s0)
    ctx->pc = 0x3a78acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 83), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a78b0: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3A78B0u;
    SET_GPR_U32(ctx, 31, 0x3A78B8u);
    ctx->pc = 0x3A78B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A78B0u;
    // 0x3a78b4: 0xffa20000  sd          $v0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3A78B0u, 0x3A78B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A78B8u;
label_3a78b8:
    // 0x3a78b8: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x3a78b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3a78bc: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x3a78bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x3a78c0: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x3A78C0u;
    {
        const bool branch_taken_0x3a78c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a78c0) {
            ctx->pc = 0x3A7970u;
            goto label_3a7970;
        }
    }
    ctx->pc = 0x3A78C8u;
    // 0x3a78c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a78c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a78cc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3a78ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x3a78d0: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x3a78d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3a78d4: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x3a78d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x3a78d8: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x3a78d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a78dc: 0x24428c10  addiu       $v0, $v0, -0x73F0
    ctx->pc = 0x3a78dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937616));
    // 0x3a78e0: 0xa200004e  sb          $zero, 0x4E($s0)
    ctx->pc = 0x3a78e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 78), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a78e4: 0x24a527f0  addiu       $a1, $a1, 0x27F0
    ctx->pc = 0x3a78e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10224));
    // 0x3a78e8: 0xa2000008  sb          $zero, 0x8($s0)
    ctx->pc = 0x3a78e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a78ec: 0x82040007  lb          $a0, 0x7($s0)
    ctx->pc = 0x3a78ecu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x3a78f0: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x3a78f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3a78f4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x3a78f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3a78f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a78f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a78fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3a78fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3a7900: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a7900u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a7904: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a7904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3a7908: 0xc049ed2  jal         func_127B48
    ctx->pc = 0x3A7908u;
    SET_GPR_U32(ctx, 31, 0x3A7910u);
    ctx->pc = 0x3A790Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7908u;
    // 0x3a790c: 0x24440238  addiu       $a0, $v0, 0x238 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B48u, 0x3A7908u, 0x3A7910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7910u;
label_3a7910:
    // 0x3a7910: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3a7910u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3a7914: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x3A7914u;
    SET_GPR_U32(ctx, 31, 0x3A791Cu);
    ctx->pc = 0x3A7918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7914u;
    // 0x3a7918: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x3A7914u, 0x3A791Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A791Cu;
label_3a791c:
    // 0x3a791c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a791cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7920: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x3a7920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x3a7924: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x3a7924u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3a7928: 0xc0eb608  jal         func_3AD820
    ctx->pc = 0x3A7928u;
    SET_GPR_U32(ctx, 31, 0x3A7930u);
    ctx->pc = 0x3A792Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7928u;
    // 0x3a792c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD820u, 0x3A7928u, 0x3A7930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7930u;
label_3a7930:
    // 0x3a7930: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3a7930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a7934: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3a7934u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3a7938: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3a7938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3a793c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3a793cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3a7940: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x3a7940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x3a7944: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a7944u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7948: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3a7948u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3a794c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a794cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7950: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3a7950u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7954: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3a7954u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7958: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3a7958u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a795c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3A795Cu;
    SET_GPR_U32(ctx, 31, 0x3A7964u);
    ctx->pc = 0x3A7960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A795Cu;
    // 0x3a7960: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3A795Cu, 0x3A7964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7964u;
label_3a7964:
    // 0x3a7964: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x3A7964u;
    {
        const bool branch_taken_0x3a7964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a7964) {
            ctx->pc = 0x3A79D8u;
            goto label_3a79d8;
        }
    }
    ctx->pc = 0x3A796Cu;
    // 0x3a796c: 0x0  nop
    ctx->pc = 0x3a796cu;
    // NOP
label_3a7970:
    // 0x3a7970: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x3a7970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x3a7974: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3A7974u;
    {
        const bool branch_taken_0x3a7974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a7974) {
            ctx->pc = 0x3A79C8u;
            goto label_3a79c8;
        }
    }
    ctx->pc = 0x3A797Cu;
    // 0x3a797c: 0x920c0000  lbu         $t4, 0x0($s0)
    ctx->pc = 0x3a797cu;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3a7980: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3a7980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x3a7984: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3a7984u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3a7988: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3a7988u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3a798c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3a798cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a7990: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3a7990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3a7994: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a7994u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7998: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a7998u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a799c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3a799cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a79a0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3a79a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a79a4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3a79a4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a79a8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3a79a8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a79ac: 0x25820001  addiu       $v0, $t4, 0x1
    ctx->pc = 0x3a79acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x3a79b0: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x3a79b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a79b4: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x3a79b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a79b8: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x3a79b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a79bc: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x3a79bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a79c0: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3A79C0u;
    SET_GPR_U32(ctx, 31, 0x3A79C8u);
    ctx->pc = 0x3A79C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A79C0u;
    // 0x3a79c4: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3A79C0u, 0x3A79C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A79C8u;
label_3a79c8:
    // 0x3a79c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a79c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a79cc: 0xc0eb300  jal         func_3ACC00
    ctx->pc = 0x3A79CCu;
    SET_GPR_U32(ctx, 31, 0x3A79D4u);
    ctx->pc = 0x3A79D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A79CCu;
    // 0x3a79d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ACC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ACC00u, 0x3A79CCu, 0x3A79D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A79D4u;
label_3a79d4:
    // 0x3a79d4: 0x0  nop
    ctx->pc = 0x3a79d4u;
    // NOP
label_3a79d8:
    // 0x3a79d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3a79d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a79dc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3a79dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a79e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3A79E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A79E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A79E0u;
        // 0x3a79e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A79E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A79E8u;
}
