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

// Function: sub_00152720
// Address: 0x152720 - 0x152834
void sub_00152720_0x152720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00152720_0x152720");
#endif

    switch (ctx->pc) {
        case 0x1527a0u: goto label_1527a0;
        case 0x1527b8u: goto label_1527b8;
        case 0x1527d0u: goto label_1527d0;
        case 0x1527e8u: goto label_1527e8;
        case 0x152800u: goto label_152800;
        case 0x15281cu: goto label_15281c;
        default: break;
    }

    ctx->pc = 0x152720u;

    // 0x152720: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x152720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x152724: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x152724u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x152728: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x152728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15272c: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x15272cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x152730: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x152730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x152734: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x152734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x152738: 0x1062002f  beq         $v1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x152738u;
    {
        const bool branch_taken_0x152738 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15273Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152738u;
        // 0x15273c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152738) {
            ctx->pc = 0x1527F8u;
            goto label_1527f8;
        }
    }
    ctx->pc = 0x152740u;
    // 0x152740: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x152740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x152744: 0x10620026  beq         $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x152744u;
    {
        const bool branch_taken_0x152744 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x152748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152744u;
        // 0x152748: 0x3c020003  lui         $v0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152744) {
            ctx->pc = 0x1527E0u;
            goto label_1527e0;
        }
    }
    ctx->pc = 0x15274Cu;
    // 0x15274c: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x15274Cu;
    {
        const bool branch_taken_0x15274c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15274c) {
            ctx->pc = 0x1527C8u;
            goto label_1527c8;
        }
    }
    ctx->pc = 0x152754u;
    // 0x152754: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x152754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x152758: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x152758u;
    {
        const bool branch_taken_0x152758 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15275Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152758u;
        // 0x15275c: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152758) {
            ctx->pc = 0x1527B0u;
            goto label_1527b0;
        }
    }
    ctx->pc = 0x152760u;
    // 0x152760: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x152760u;
    {
        const bool branch_taken_0x152760 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x152760) {
            ctx->pc = 0x152770u;
            goto label_152770;
        }
    }
    ctx->pc = 0x152768u;
    // 0x152768: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x152768u;
    {
        const bool branch_taken_0x152768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152768) {
            ctx->pc = 0x152810u;
            goto label_152810;
        }
    }
    ctx->pc = 0x152770u;
label_152770:
    // 0x152770: 0x97838598  lhu         $v1, -0x7A68($gp)
    ctx->pc = 0x152770u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935960)));
    // 0x152774: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x152774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x152778: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x152778u;
    {
        const bool branch_taken_0x152778 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x15277Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152778u;
        // 0x15277c: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152778) {
            ctx->pc = 0x152788u;
            goto label_152788;
        }
    }
    ctx->pc = 0x152780u;
    // 0x152780: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x152780u;
    {
        const bool branch_taken_0x152780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152780u;
        // 0x152784: 0x8d100008  lw          $s0, 0x8($t0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152780) {
            ctx->pc = 0x152820u;
            goto label_152820;
        }
    }
    ctx->pc = 0x152788u;
label_152788:
    // 0x152788: 0x8d040008  lw          $a0, 0x8($t0)
    ctx->pc = 0x152788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x15278c: 0x8d05000c  lw          $a1, 0xC($t0)
    ctx->pc = 0x15278cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x152790: 0x8d060010  lw          $a2, 0x10($t0)
    ctx->pc = 0x152790u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x152794: 0x8d070014  lw          $a3, 0x14($t0)
    ctx->pc = 0x152794u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x152798: 0xc0548ac  jal         func_1522B0
    ctx->pc = 0x152798u;
    SET_GPR_U32(ctx, 31, 0x1527A0u);
    ctx->pc = 0x15279Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152798u;
    // 0x15279c: 0x8d080018  lw          $t0, 0x18($t0) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1522B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1522B0u, 0x152798u, 0x1527A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1527A0u;
label_1527a0:
    // 0x1527a0: 0xaf8285a4  sw          $v0, -0x7A5C($gp)
    ctx->pc = 0x1527a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935972), GPR_U32(ctx, 2));
    // 0x1527a4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1527A4u;
    {
        const bool branch_taken_0x1527a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1527A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1527A4u;
        // 0x1527a8: 0x279085a4  addiu       $s0, $gp, -0x7A5C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935972));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1527a4) {
            ctx->pc = 0x152820u;
            goto label_152820;
        }
    }
    ctx->pc = 0x1527ACu;
    // 0x1527ac: 0x0  nop
    ctx->pc = 0x1527acu;
    // NOP
label_1527b0:
    // 0x1527b0: 0xc054988  jal         func_152620
    ctx->pc = 0x1527B0u;
    SET_GPR_U32(ctx, 31, 0x1527B8u);
    ctx->pc = 0x1527B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1527B0u;
    // 0x1527b4: 0x8cb00008  lw          $s0, 0x8($a1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152620u, 0x1527B0u, 0x1527B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1527B8u;
label_1527b8:
    // 0x1527b8: 0xac500030  sw          $s0, 0x30($v0)
    ctx->pc = 0x1527b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 16));
    // 0x1527bc: 0x279085a4  addiu       $s0, $gp, -0x7A5C
    ctx->pc = 0x1527bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935972));
    // 0x1527c0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1527C0u;
    {
        const bool branch_taken_0x1527c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1527C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1527C0u;
        // 0x1527c4: 0xaf8085a4  sw          $zero, -0x7A5C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935972), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1527c0) {
            ctx->pc = 0x152820u;
            goto label_152820;
        }
    }
    ctx->pc = 0x1527C8u;
label_1527c8:
    // 0x1527c8: 0xc054988  jal         func_152620
    ctx->pc = 0x1527C8u;
    SET_GPR_U32(ctx, 31, 0x1527D0u);
    ctx->pc = 0x1527CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1527C8u;
    // 0x1527cc: 0x8cb00008  lw          $s0, 0x8($a1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152620u, 0x1527C8u, 0x1527D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1527D0u;
label_1527d0:
    // 0x1527d0: 0xac500020  sw          $s0, 0x20($v0)
    ctx->pc = 0x1527d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 16));
    // 0x1527d4: 0x279085a4  addiu       $s0, $gp, -0x7A5C
    ctx->pc = 0x1527d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935972));
    // 0x1527d8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1527D8u;
    {
        const bool branch_taken_0x1527d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1527DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1527D8u;
        // 0x1527dc: 0xaf8085a4  sw          $zero, -0x7A5C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935972), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1527d8) {
            ctx->pc = 0x152820u;
            goto label_152820;
        }
    }
    ctx->pc = 0x1527E0u;
label_1527e0:
    // 0x1527e0: 0xc054988  jal         func_152620
    ctx->pc = 0x1527E0u;
    SET_GPR_U32(ctx, 31, 0x1527E8u);
    ctx->pc = 0x1527E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1527E0u;
    // 0x1527e4: 0x8cb00008  lw          $s0, 0x8($a1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152620u, 0x1527E0u, 0x1527E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1527E8u;
label_1527e8:
    // 0x1527e8: 0xac500040  sw          $s0, 0x40($v0)
    ctx->pc = 0x1527e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 16));
    // 0x1527ec: 0x279085a4  addiu       $s0, $gp, -0x7A5C
    ctx->pc = 0x1527ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935972));
    // 0x1527f0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1527F0u;
    {
        const bool branch_taken_0x1527f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1527F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1527F0u;
        // 0x1527f4: 0xaf8085a4  sw          $zero, -0x7A5C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935972), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1527f0) {
            ctx->pc = 0x152820u;
            goto label_152820;
        }
    }
    ctx->pc = 0x1527F8u;
label_1527f8:
    // 0x1527f8: 0xc054988  jal         func_152620
    ctx->pc = 0x1527F8u;
    SET_GPR_U32(ctx, 31, 0x152800u);
    ctx->pc = 0x1527FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1527F8u;
    // 0x1527fc: 0x8cb00008  lw          $s0, 0x8($a1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152620u, 0x1527F8u, 0x152800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152800u;
label_152800:
    // 0x152800: 0xac500050  sw          $s0, 0x50($v0)
    ctx->pc = 0x152800u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 16));
    // 0x152804: 0x279085a4  addiu       $s0, $gp, -0x7A5C
    ctx->pc = 0x152804u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935972));
    // 0x152808: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x152808u;
    {
        const bool branch_taken_0x152808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15280Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152808u;
        // 0x15280c: 0xaf8085a4  sw          $zero, -0x7A5C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935972), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152808) {
            ctx->pc = 0x152820u;
            goto label_152820;
        }
    }
    ctx->pc = 0x152810u;
label_152810:
    // 0x152810: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x152810u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x152814: 0xc0499ee  jal         func_1267B8
    ctx->pc = 0x152814u;
    SET_GPR_U32(ctx, 31, 0x15281Cu);
    ctx->pc = 0x152818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152814u;
    // 0x152818: 0x24844ee0  addiu       $a0, $a0, 0x4EE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1267B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1267B8u, 0x152814u, 0x15281Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15281Cu;
label_15281c:
    // 0x15281c: 0x0  nop
    ctx->pc = 0x15281cu;
    // NOP
label_152820:
    // 0x152820: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x152820u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152824: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x152824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x152828: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x152828u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15282c: 0x3e00008  jr          $ra
    ctx->pc = 0x15282Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15282Cu;
        // 0x152830: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15282Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152834u;
}
