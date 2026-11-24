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

// Function: sub_003406C0
// Address: 0x3406c0 - 0x340788
void sub_003406C0_0x3406c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003406C0_0x3406c0");
#endif

    switch (ctx->pc) {
        case 0x3406f4u: goto label_3406f4;
        case 0x340708u: goto label_340708;
        case 0x340714u: goto label_340714;
        default: break;
    }

    ctx->pc = 0x3406c0u;

    // 0x3406c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3406c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3406c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3406c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3406c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3406c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3406cc: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x3406ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x3406d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3406d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3406d4: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x3406d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x3406d8: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x3406d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x3406dc: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x3406dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x3406e0: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x3406e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x3406e4: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x3406e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x3406e8: 0xa080001a  sb          $zero, 0x1A($a0)
    ctx->pc = 0x3406e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 26), (uint8_t)GPR_U32(ctx, 0));
    // 0x3406ec: 0xc0d9044  jal         func_364110
    ctx->pc = 0x3406ECu;
    SET_GPR_U32(ctx, 31, 0x3406F4u);
    ctx->pc = 0x3406F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3406ECu;
    // 0x3406f0: 0xa080001c  sb          $zero, 0x1C($a0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 4), 28), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364110u, 0x3406ECu, 0x3406F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3406F4u;
label_3406f4:
    // 0x3406f4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3406f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3406f8: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3406F8u;
    {
        const bool branch_taken_0x3406f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3406FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3406F8u;
        // 0x3406fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3406f8) {
            ctx->pc = 0x340720u;
            goto label_340720;
        }
    }
    ctx->pc = 0x340700u;
    // 0x340700: 0xc0d039c  jal         func_340E70
    ctx->pc = 0x340700u;
    SET_GPR_U32(ctx, 31, 0x340708u);
    ctx->pc = 0x340E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340E70u, 0x340700u, 0x340708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340708u;
label_340708:
    // 0x340708: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x340708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34070c: 0xc0d03bc  jal         func_340EF0
    ctx->pc = 0x34070Cu;
    SET_GPR_U32(ctx, 31, 0x340714u);
    ctx->pc = 0x340710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34070Cu;
    // 0x340710: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340EF0u, 0x34070Cu, 0x340714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340714u;
label_340714:
    // 0x340714: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x340714u;
    {
        const bool branch_taken_0x340714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x340714) {
            ctx->pc = 0x340778u;
            goto label_340778;
        }
    }
    ctx->pc = 0x34071Cu;
    // 0x34071c: 0x0  nop
    ctx->pc = 0x34071cu;
    // NOP
label_340720:
    // 0x340720: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x340720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x340724: 0x94246ac4  lhu         $a0, 0x6AC4($at)
    ctx->pc = 0x340724u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x340728: 0x24030f30  addiu       $v1, $zero, 0xF30
    ctx->pc = 0x340728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3888));
    // 0x34072c: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x34072Cu;
    {
        const bool branch_taken_0x34072c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x340730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34072Cu;
        // 0x340730: 0x24030f31  addiu       $v1, $zero, 0xF31 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3889));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34072c) {
            ctx->pc = 0x340770u;
            goto label_340770;
        }
    }
    ctx->pc = 0x340734u;
    // 0x340734: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x340734u;
    {
        const bool branch_taken_0x340734 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x340734) {
            ctx->pc = 0x340760u;
            goto label_340760;
        }
    }
    ctx->pc = 0x34073Cu;
    // 0x34073c: 0x24030f37  addiu       $v1, $zero, 0xF37
    ctx->pc = 0x34073cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3895));
    // 0x340740: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x340740u;
    {
        const bool branch_taken_0x340740 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x340740) {
            ctx->pc = 0x340750u;
            goto label_340750;
        }
    }
    ctx->pc = 0x340748u;
    // 0x340748: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x340748u;
    {
        const bool branch_taken_0x340748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x340748) {
            ctx->pc = 0x340778u;
            goto label_340778;
        }
    }
    ctx->pc = 0x340750u;
label_340750:
    // 0x340750: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x340750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x340754: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x340754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x340758: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x340758u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x34075c: 0x0  nop
    ctx->pc = 0x34075cu;
    // NOP
label_340760:
    // 0x340760: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x340760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x340764: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x340764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x340768: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x340768u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x34076c: 0x0  nop
    ctx->pc = 0x34076cu;
    // NOP
label_340770:
    // 0x340770: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x340770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x340774: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x340774u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_340778:
    // 0x340778: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x340778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34077c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34077cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x340780: 0x3e00008  jr          $ra
    ctx->pc = 0x340780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x340784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340780u;
        // 0x340784: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x340788u;
}
