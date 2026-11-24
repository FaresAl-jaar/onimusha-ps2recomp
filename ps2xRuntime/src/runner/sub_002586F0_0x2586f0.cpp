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

// Function: sub_002586F0
// Address: 0x2586f0 - 0x2589e8
void sub_002586F0_0x2586f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002586F0_0x2586f0");
#endif

    switch (ctx->pc) {
        case 0x25874cu: goto label_25874c;
        case 0x258770u: goto label_258770;
        case 0x258790u: goto label_258790;
        case 0x25879cu: goto label_25879c;
        case 0x258828u: goto label_258828;
        case 0x258850u: goto label_258850;
        case 0x25887cu: goto label_25887c;
        case 0x258918u: goto label_258918;
        case 0x258978u: goto label_258978;
        default: break;
    }

    ctx->pc = 0x2586f0u;

    // 0x2586f0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2586f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x2586f4: 0x3401d140  ori         $at, $zero, 0xD140
    ctx->pc = 0x2586f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)53568);
    // 0x2586f8: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x2586f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x2586fc: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x2586fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x258700: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x258700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x258704: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x258704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x258708: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x258708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x25870c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x25870cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x258710: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x258710u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258714: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x258714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x258718: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x258718u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25871c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x25871cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x258720: 0x2a19821  addu        $s3, $s5, $at
    ctx->pc = 0x258720u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 1)));
    // 0x258724: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x258724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x258728: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x258728u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25872c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x25872cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x258730: 0x26b23140  addiu       $s2, $s5, 0x3140
    ctx->pc = 0x258730u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 12608));
    // 0x258734: 0xa4800038  sh          $zero, 0x38($a0)
    ctx->pc = 0x258734u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 56), (uint16_t)GPR_U32(ctx, 0));
    // 0x258738: 0xa3a600db  sb          $a2, 0xDB($sp)
    ctx->pc = 0x258738u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 219), (uint8_t)GPR_U32(ctx, 6));
    // 0x25873c: 0x90a90006  lbu         $t1, 0x6($a1)
    ctx->pc = 0x25873cu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x258740: 0x86880000  lh          $t0, 0x0($s4)
    ctx->pc = 0x258740u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x258744: 0xc095e0c  jal         func_257830
    ctx->pc = 0x258744u;
    SET_GPR_U32(ctx, 31, 0x25874Cu);
    ctx->pc = 0x258748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258744u;
    // 0x258748: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257830u, 0x258744u, 0x25874Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25874Cu;
label_25874c:
    // 0x25874c: 0x92890007  lbu         $t1, 0x7($s4)
    ctx->pc = 0x25874cu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 7)));
    // 0x258750: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x258750u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x258754: 0x93a600db  lbu         $a2, 0xDB($sp)
    ctx->pc = 0x258754u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 219)));
    // 0x258758: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x258758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25875c: 0x86880002  lh          $t0, 0x2($s4)
    ctx->pc = 0x25875cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x258760: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x258760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x258764: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x258764u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258768: 0xc095e30  jal         func_2578C0
    ctx->pc = 0x258768u;
    SET_GPR_U32(ctx, 31, 0x258770u);
    ctx->pc = 0x25876Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258768u;
    // 0x25876c: 0x118c3f  dsra32      $s1, $s1, 16 (Delay Slot)
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2578C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2578C0u, 0x258768u, 0x258770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258770u;
label_258770:
    // 0x258770: 0x929e0004  lbu         $fp, 0x4($s4)
    ctx->pc = 0x258770u;
    SET_GPR_ZE32(ctx, 30, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x258774: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x258774u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x258778: 0x92960005  lbu         $s6, 0x5($s4)
    ctx->pc = 0x258778u;
    SET_GPR_ZE32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 5)));
    // 0x25877c: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x25877cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x258780: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x258780u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x258784: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x258784u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258788: 0xa3a200c0  sb          $v0, 0xC0($sp)
    ctx->pc = 0x258788u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 192), (uint8_t)GPR_U32(ctx, 2));
    // 0x25878c: 0x0  nop
    ctx->pc = 0x25878cu;
    // NOP
label_258790:
    // 0x258790: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x258790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258794: 0xc097958  jal         func_25E560
    ctx->pc = 0x258794u;
    SET_GPR_U32(ctx, 31, 0x25879Cu);
    ctx->pc = 0x258798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258794u;
    // 0x258798: 0x27a500dc  addiu       $a1, $sp, 0xDC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E560u, 0x258794u, 0x25879Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25879Cu;
label_25879c:
    // 0x25879c: 0x10400084  beqz        $v0, . + 4 + (0x84 << 2)
    ctx->pc = 0x25879Cu;
    {
        const bool branch_taken_0x25879c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25879c) {
            ctx->pc = 0x2589B0u;
            goto label_2589b0;
        }
    }
    ctx->pc = 0x2587A4u;
    // 0x2587a4: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x2587a4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2587a8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2587a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2587ac: 0x10620062  beq         $v1, $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x2587ACu;
    {
        const bool branch_taken_0x2587ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2587ac) {
            ctx->pc = 0x258938u;
            goto label_258938;
        }
    }
    ctx->pc = 0x2587B4u;
    // 0x2587b4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2587b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2587b8: 0x1062003b  beq         $v1, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x2587B8u;
    {
        const bool branch_taken_0x2587b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2587BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2587B8u;
        // 0x2587bc: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2587b8) {
            ctx->pc = 0x2588A8u;
            goto label_2588a8;
        }
    }
    ctx->pc = 0x2587C0u;
    // 0x2587c0: 0x10620037  beq         $v1, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x2587C0u;
    {
        const bool branch_taken_0x2587c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2587c0) {
            ctx->pc = 0x2588A0u;
            goto label_2588a0;
        }
    }
    ctx->pc = 0x2587C8u;
    // 0x2587c8: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x2587c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2587cc: 0x10620032  beq         $v1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2587CCu;
    {
        const bool branch_taken_0x2587cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2587D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2587CCu;
        // 0x2587d0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2587cc) {
            ctx->pc = 0x258898u;
            goto label_258898;
        }
    }
    ctx->pc = 0x2587D4u;
    // 0x2587d4: 0x1062002e  beq         $v1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2587D4u;
    {
        const bool branch_taken_0x2587d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2587d4) {
            ctx->pc = 0x258890u;
            goto label_258890;
        }
    }
    ctx->pc = 0x2587DCu;
    // 0x2587dc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2587dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2587e0: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2587E0u;
    {
        const bool branch_taken_0x2587e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2587E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2587E0u;
        // 0x2587e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2587e0) {
            ctx->pc = 0x258888u;
            goto label_258888;
        }
    }
    ctx->pc = 0x2587E8u;
    // 0x2587e8: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2587E8u;
    {
        const bool branch_taken_0x2587e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2587e8) {
            ctx->pc = 0x258838u;
            goto label_258838;
        }
    }
    ctx->pc = 0x2587F0u;
    // 0x2587f0: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2587f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2587f4: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2587F4u;
    {
        const bool branch_taken_0x2587f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2587f4) {
            ctx->pc = 0x258818u;
            goto label_258818;
        }
    }
    ctx->pc = 0x2587FCu;
    // 0x2587fc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2587FCu;
    {
        const bool branch_taken_0x2587fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2587fc) {
            ctx->pc = 0x258810u;
            goto label_258810;
        }
    }
    ctx->pc = 0x258804u;
    // 0x258804: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x258804u;
    {
        const bool branch_taken_0x258804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x258804) {
            ctx->pc = 0x258998u;
            goto label_258998;
        }
    }
    ctx->pc = 0x25880Cu;
    // 0x25880c: 0x0  nop
    ctx->pc = 0x25880cu;
    // NOP
label_258810:
    // 0x258810: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x258810u;
    {
        const bool branch_taken_0x258810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258810u;
        // 0x258814: 0xa3a000c0  sb          $zero, 0xC0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 192), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258810) {
            ctx->pc = 0x258998u;
            goto label_258998;
        }
    }
    ctx->pc = 0x258818u;
label_258818:
    // 0x258818: 0x82650002  lb          $a1, 0x2($s3)
    ctx->pc = 0x258818u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x25881c: 0x92860006  lbu         $a2, 0x6($s4)
    ctx->pc = 0x25881cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 6)));
    // 0x258820: 0xc095c40  jal         func_257100
    ctx->pc = 0x258820u;
    SET_GPR_U32(ctx, 31, 0x258828u);
    ctx->pc = 0x258824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258820u;
    // 0x258824: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257100u, 0x258820u, 0x258828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258828u;
label_258828:
    // 0x258828: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x258828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x25882c: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x25882cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x258830: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x258830u;
    {
        const bool branch_taken_0x258830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258830u;
        // 0x258834: 0x118c3f  dsra32      $s1, $s1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258830) {
            ctx->pc = 0x258998u;
            goto label_258998;
        }
    }
    ctx->pc = 0x258838u;
label_258838:
    // 0x258838: 0x92820007  lbu         $v0, 0x7($s4)
    ctx->pc = 0x258838u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 7)));
    // 0x25883c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x25883cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258840: 0x26650001  addiu       $a1, $s3, 0x1
    ctx->pc = 0x258840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x258844: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x258844u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x258848: 0xc0959f4  jal         func_2567D0
    ctx->pc = 0x258848u;
    SET_GPR_U32(ctx, 31, 0x258850u);
    ctx->pc = 0x25884Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258848u;
    // 0x25884c: 0x6343f  dsra32      $a2, $a2, 16 (Delay Slot)
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2567D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2567D0u, 0x258848u, 0x258850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258850u;
label_258850:
    // 0x258850: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x258850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x258854: 0x92890006  lbu         $t1, 0x6($s4)
    ctx->pc = 0x258854u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 6)));
    // 0x258858: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x258858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x25885c: 0x3843c  dsll32      $s0, $v1, 16
    ctx->pc = 0x25885cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) << (32 + 16));
    // 0x258860: 0x93a600db  lbu         $a2, 0xDB($sp)
    ctx->pc = 0x258860u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 219)));
    // 0x258864: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x258864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258868: 0x86880000  lh          $t0, 0x0($s4)
    ctx->pc = 0x258868u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x25886c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25886cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x258870: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x258870u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x258874: 0xc095e0c  jal         func_257830
    ctx->pc = 0x258874u;
    SET_GPR_U32(ctx, 31, 0x25887Cu);
    ctx->pc = 0x258878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258874u;
    // 0x258878: 0x2623821  addu        $a3, $s3, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257830u, 0x258874u, 0x25887Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25887Cu;
label_25887c:
    // 0x25887c: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x25887cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x258880: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x258880u;
    {
        const bool branch_taken_0x258880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258880u;
        // 0x258884: 0x118c3f  dsra32      $s1, $s1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258880) {
            ctx->pc = 0x258998u;
            goto label_258998;
        }
    }
    ctx->pc = 0x258888u;
label_258888:
    // 0x258888: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x258888u;
    {
        const bool branch_taken_0x258888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25888Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258888u;
        // 0x25888c: 0x927e0001  lbu         $fp, 0x1($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 30, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258888) {
            ctx->pc = 0x258998u;
            goto label_258998;
        }
    }
    ctx->pc = 0x258890u;
label_258890:
    // 0x258890: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x258890u;
    {
        const bool branch_taken_0x258890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258890u;
        // 0x258894: 0x92760001  lbu         $s6, 0x1($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258890) {
            ctx->pc = 0x258998u;
            goto label_258998;
        }
    }
    ctx->pc = 0x258898u;
label_258898:
    // 0x258898: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x258898u;
    {
        const bool branch_taken_0x258898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25889Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258898u;
        // 0x25889c: 0x64170001  daddiu      $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 23, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x258898) {
            ctx->pc = 0x258998u;
            goto label_258998;
        }
    }
    ctx->pc = 0x2588A0u;
label_2588a0:
    // 0x2588a0: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x2588A0u;
    {
        const bool branch_taken_0x2588a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2588A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2588A0u;
        // 0x2588a4: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2588a0) {
            ctx->pc = 0x258998u;
            goto label_258998;
        }
    }
    ctx->pc = 0x2588A8u;
label_2588a8:
    // 0x2588a8: 0x86a20038  lh          $v0, 0x38($s5)
    ctx->pc = 0x2588a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 56)));
    // 0x2588ac: 0x2c410500  sltiu       $at, $v0, 0x500
    ctx->pc = 0x2588acu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1280) ? 1 : 0);
    // 0x2588b0: 0x10200039  beqz        $at, . + 4 + (0x39 << 2)
    ctx->pc = 0x2588B0u;
    {
        const bool branch_taken_0x2588b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2588b0) {
            ctx->pc = 0x258998u;
            goto label_258998;
        }
    }
    ctx->pc = 0x2588B8u;
    // 0x2588b8: 0x92630000  lbu         $v1, 0x0($s3)
    ctx->pc = 0x2588b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2588bc: 0x2462ff20  addiu       $v0, $v1, -0xE0
    ctx->pc = 0x2588bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967072));
    // 0x2588c0: 0x28410010  slti        $at, $v0, 0x10
    ctx->pc = 0x2588c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2588c4: 0x10200034  beqz        $at, . + 4 + (0x34 << 2)
    ctx->pc = 0x2588C4u;
    {
        const bool branch_taken_0x2588c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2588C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2588C4u;
        // 0x2588c8: 0x92640001  lbu         $a0, 0x1($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2588c4) {
            ctx->pc = 0x258998u;
            goto label_258998;
        }
    }
    ctx->pc = 0x2588CCu;
    // 0x2588cc: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x2588ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2588d0: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x2588d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2588d4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2588d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2588d8: 0x114c3c  dsll32      $t1, $s1, 16
    ctx->pc = 0x2588d8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 17) << (32 + 16));
    // 0x2588dc: 0x92830007  lbu         $v1, 0x7($s4)
    ctx->pc = 0x2588dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 7)));
    // 0x2588e0: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x2588e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2588e4: 0x10543c  dsll32      $t2, $s0, 16
    ctx->pc = 0x2588e4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 16) << (32 + 16));
    // 0x2588e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2588e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2588ec: 0x33c700ff  andi        $a3, $fp, 0xFF
    ctx->pc = 0x2588ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
    // 0x2588f0: 0x32c800ff  andi        $t0, $s6, 0xFF
    ctx->pc = 0x2588f0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x2588f4: 0x94c3f  dsra32      $t1, $t1, 16
    ctx->pc = 0x2588f4u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
    // 0x2588f8: 0xa543f  dsra32      $t2, $t2, 16
    ctx->pc = 0x2588f8u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
    // 0x2588fc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2588fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258900: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x258900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x258904: 0xffb70008  sd          $s7, 0x8($sp)
    ctx->pc = 0x258904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 23));
    // 0x258908: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x258908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x25890c: 0x928b0006  lbu         $t3, 0x6($s4)
    ctx->pc = 0x25890cu;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 6)));
    // 0x258910: 0xc0951e0  jal         func_254780
    ctx->pc = 0x258910u;
    SET_GPR_U32(ctx, 31, 0x258918u);
    ctx->pc = 0x258914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258910u;
    // 0x258914: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254780u, 0x258910u, 0x258918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258918u;
label_258918:
    // 0x258918: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x258918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x25891c: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x25891cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x258920: 0x86a20038  lh          $v0, 0x38($s5)
    ctx->pc = 0x258920u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 56)));
    // 0x258924: 0x38c3c  dsll32      $s1, $v1, 16
    ctx->pc = 0x258924u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) << (32 + 16));
    // 0x258928: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x258928u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x25892c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25892cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x258930: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x258930u;
    {
        const bool branch_taken_0x258930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258930u;
        // 0x258934: 0xa6a20038  sh          $v0, 0x38($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 56), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258930) {
            ctx->pc = 0x258998u;
            goto label_258998;
        }
    }
    ctx->pc = 0x258938u;
label_258938:
    // 0x258938: 0x86a20038  lh          $v0, 0x38($s5)
    ctx->pc = 0x258938u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 56)));
    // 0x25893c: 0x2c410500  sltiu       $at, $v0, 0x500
    ctx->pc = 0x25893cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1280) ? 1 : 0);
    // 0x258940: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x258940u;
    {
        const bool branch_taken_0x258940 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x258940) {
            ctx->pc = 0x258998u;
            goto label_258998;
        }
    }
    ctx->pc = 0x258948u;
    // 0x258948: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x258948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x25894c: 0x11443c  dsll32      $t0, $s1, 16
    ctx->pc = 0x25894cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 17) << (32 + 16));
    // 0x258950: 0x92660001  lbu         $a2, 0x1($s3)
    ctx->pc = 0x258950u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x258954: 0x104c3c  dsll32      $t1, $s0, 16
    ctx->pc = 0x258954u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 16) << (32 + 16));
    // 0x258958: 0x928a0006  lbu         $t2, 0x6($s4)
    ctx->pc = 0x258958u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 6)));
    // 0x25895c: 0x32c700ff  andi        $a3, $s6, 0xFF
    ctx->pc = 0x25895cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x258960: 0x928b0007  lbu         $t3, 0x7($s4)
    ctx->pc = 0x258960u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 7)));
    // 0x258964: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x258964u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x258968: 0x94c3f  dsra32      $t1, $t1, 16
    ctx->pc = 0x258968u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
    // 0x25896c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x25896cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258970: 0xc09526c  jal         func_2549B0
    ctx->pc = 0x258970u;
    SET_GPR_U32(ctx, 31, 0x258978u);
    ctx->pc = 0x258974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258970u;
    // 0x258974: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2549B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2549B0u, 0x258970u, 0x258978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258978u;
label_258978:
    // 0x258978: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x258978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x25897c: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x25897cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x258980: 0x86a20038  lh          $v0, 0x38($s5)
    ctx->pc = 0x258980u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 56)));
    // 0x258984: 0x38c3c  dsll32      $s1, $v1, 16
    ctx->pc = 0x258984u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) << (32 + 16));
    // 0x258988: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x258988u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x25898c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25898cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x258990: 0xa6a20038  sh          $v0, 0x38($s5)
    ctx->pc = 0x258990u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 56), (uint16_t)GPR_U32(ctx, 2));
    // 0x258994: 0x0  nop
    ctx->pc = 0x258994u;
    // NOP
label_258998:
    // 0x258998: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x258998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x25899c: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x25899cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2589a0: 0x93a200c0  lbu         $v0, 0xC0($sp)
    ctx->pc = 0x2589a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2589a4: 0x1440ff7a  bnez        $v0, . + 4 + (-0x86 << 2)
    ctx->pc = 0x2589A4u;
    {
        const bool branch_taken_0x2589a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2589a4) {
            ctx->pc = 0x258790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_258790;
        }
    }
    ctx->pc = 0x2589ACu;
    // 0x2589ac: 0x0  nop
    ctx->pc = 0x2589acu;
    // NOP
label_2589b0:
    // 0x2589b0: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2589b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x2589b4: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x2589b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2589b8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2589b8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2589bc: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x2589bcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2589c0: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x2589c0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2589c4: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x2589c4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2589c8: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x2589c8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2589cc: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2589ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2589d0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2589d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2589d4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2589d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2589d8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2589d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2589dc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2589dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2589e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2589E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2589E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2589E0u;
        // 0x2589e4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2589E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2589E8u;
}
