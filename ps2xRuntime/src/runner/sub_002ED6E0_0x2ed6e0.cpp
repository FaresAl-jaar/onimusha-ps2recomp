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

// Function: sub_002ED6E0
// Address: 0x2ed6e0 - 0x2ed804
void sub_002ED6E0_0x2ed6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ED6E0_0x2ed6e0");
#endif

    switch (ctx->pc) {
        case 0x2ed6fcu: goto label_2ed6fc;
        case 0x2ed724u: goto label_2ed724;
        case 0x2ed748u: goto label_2ed748;
        case 0x2ed7c4u: goto label_2ed7c4;
        case 0x2ed7f4u: goto label_2ed7f4;
        default: break;
    }

    ctx->pc = 0x2ed6e0u;

    // 0x2ed6e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2ed6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2ed6e4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2ed6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2ed6e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ed6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ed6ec: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x2ed6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2ed6f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ed6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ed6f4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2ED6F4u;
    {
        const bool branch_taken_0x2ed6f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED6F4u;
        // 0x2ed6f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed6f4) {
            ctx->pc = 0x2ED718u;
            goto label_2ed718;
        }
    }
    ctx->pc = 0x2ED6FCu;
label_2ed6fc:
    // 0x2ed6fc: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x2ed6fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ed700: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2ed700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2ed704: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2ed704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2ed708: 0x0  nop
    ctx->pc = 0x2ed708u;
    // NOP
    // 0x2ed70c: 0x0  nop
    ctx->pc = 0x2ed70cu;
    // NOP
    // 0x2ed710: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2ED710u;
    {
        const bool branch_taken_0x2ed710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ed710) {
            ctx->pc = 0x2ED6FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ed6fc;
        }
    }
    ctx->pc = 0x2ED718u;
label_2ed718:
    // 0x2ed718: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x2ed718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ed71c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2ED71Cu;
    {
        const bool branch_taken_0x2ed71c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED71Cu;
        // 0x2ed720: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed71c) {
            ctx->pc = 0x2ED740u;
            goto label_2ed740;
        }
    }
    ctx->pc = 0x2ED724u;
label_2ed724:
    // 0x2ed724: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x2ed724u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ed728: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2ed728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2ed72c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2ed72cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2ed730: 0x0  nop
    ctx->pc = 0x2ed730u;
    // NOP
    // 0x2ed734: 0x0  nop
    ctx->pc = 0x2ed734u;
    // NOP
    // 0x2ed738: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2ED738u;
    {
        const bool branch_taken_0x2ed738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ed738) {
            ctx->pc = 0x2ED724u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ed724;
        }
    }
    ctx->pc = 0x2ED740u;
label_2ed740:
    // 0x2ed740: 0xc0a4a1c  jal         func_292870
    ctx->pc = 0x2ED740u;
    SET_GPR_U32(ctx, 31, 0x2ED748u);
    ctx->pc = 0x2ED744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED740u;
    // 0x2ed744: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292870u, 0x2ED740u, 0x2ED748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED748u;
label_2ed748:
    // 0x2ed748: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x2ed748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x2ed74c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2ED74Cu;
    {
        const bool branch_taken_0x2ed74c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED74Cu;
        // 0x2ed750: 0x3c0344fa  lui         $v1, 0x44FA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17658 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed74c) {
            ctx->pc = 0x2ED770u;
            goto label_2ed770;
        }
    }
    ctx->pc = 0x2ED754u;
    // 0x2ed754: 0x2402ffdf  addiu       $v0, $zero, -0x21
    ctx->pc = 0x2ed754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x2ed758: 0xac830084  sw          $v1, 0x84($a0)
    ctx->pc = 0x2ed758u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 3));
    // 0x2ed75c: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x2ed75cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x2ed760: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2ed760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ed764: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2ed764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2ed768: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2ed768u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2ed76c: 0x0  nop
    ctx->pc = 0x2ed76cu;
    // NOP
label_2ed770:
    // 0x2ed770: 0x3c023fff  lui         $v0, 0x3FFF
    ctx->pc = 0x2ed770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16383 << 16));
    // 0x2ed774: 0x3442fcb9  ori         $v0, $v0, 0xFCB9
    ctx->pc = 0x2ed774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64697);
    // 0x2ed778: 0x3c0443c8  lui         $a0, 0x43C8
    ctx->pc = 0x2ed778u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17352 << 16));
    // 0x2ed77c: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x2ed77cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
    // 0x2ed780: 0x3c054416  lui         $a1, 0x4416
    ctx->pc = 0x2ed780u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17430 << 16));
    // 0x2ed784: 0xae0206c0  sw          $v0, 0x6C0($s0)
    ctx->pc = 0x2ed784u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1728), GPR_U32(ctx, 2));
    // 0x2ed788: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x2ed788u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x2ed78c: 0xa20000e4  sb          $zero, 0xE4($s0)
    ctx->pc = 0x2ed78cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 228), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ed790: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2ed790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2ed794: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2ed794u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2ed798: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2ed798u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2ed79c: 0xafa50034  sw          $a1, 0x34($sp)
    ctx->pc = 0x2ed79cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 5));
    // 0x2ed7a0: 0x27848560  addiu       $a0, $gp, -0x7AA0
    ctx->pc = 0x2ed7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935904));
    // 0x2ed7a4: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x2ed7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
    // 0x2ed7a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ed7a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed7ac: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x2ed7acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x2ed7b0: 0x27a80020  addiu       $t0, $sp, 0x20
    ctx->pc = 0x2ed7b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ed7b4: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x2ed7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x2ed7b8: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x2ed7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x2ed7bc: 0xc053ae8  jal         func_14EBA0
    ctx->pc = 0x2ED7BCu;
    SET_GPR_U32(ctx, 31, 0x2ED7C4u);
    ctx->pc = 0x2ED7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED7BCu;
    // 0x2ed7c0: 0x24470010  addiu       $a3, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EBA0u, 0x2ED7BCu, 0x2ED7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED7C4u;
label_2ed7c4:
    // 0x2ed7c4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2ed7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ed7c8: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x2ed7c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x2ed7cc: 0xa2032b20  sb          $v1, 0x2B20($s0)
    ctx->pc = 0x2ed7ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11040), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ed7d0: 0x24020483  addiu       $v0, $zero, 0x483
    ctx->pc = 0x2ed7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1155));
    // 0x2ed7d4: 0x94236ac4  lhu         $v1, 0x6AC4($at)
    ctx->pc = 0x2ed7d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x2ed7d8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ED7D8u;
    {
        const bool branch_taken_0x2ed7d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ed7d8) {
            ctx->pc = 0x2ED7E8u;
            goto label_2ed7e8;
        }
    }
    ctx->pc = 0x2ED7E0u;
    // 0x2ed7e0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2ed7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ed7e4: 0xaf828714  sw          $v0, -0x78EC($gp)
    ctx->pc = 0x2ed7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936340), GPR_U32(ctx, 2));
label_2ed7e8:
    // 0x2ed7e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ed7e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed7ec: 0xc0bb768  jal         func_2EDDA0
    ctx->pc = 0x2ED7ECu;
    SET_GPR_U32(ctx, 31, 0x2ED7F4u);
    ctx->pc = 0x2ED7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED7ECu;
    // 0x2ed7f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDA0u, 0x2ED7ECu, 0x2ED7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED7F4u;
label_2ed7f4:
    // 0x2ed7f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ed7f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ed7f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ed7f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ed7fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED7FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED7FCu;
        // 0x2ed800: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED7FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ED804u;
}
