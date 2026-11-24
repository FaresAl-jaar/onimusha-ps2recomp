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

// Function: sub_0027A400
// Address: 0x27a400 - 0x27a4a8
void sub_0027A400_0x27a400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027A400_0x27a400");
#endif

    switch (ctx->pc) {
        case 0x27a420u: goto label_27a420;
        default: break;
    }

    ctx->pc = 0x27a400u;

    // 0x27a400: 0x90830048  lbu         $v1, 0x48($a0)
    ctx->pc = 0x27a400u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x27a404: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x27a404u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27a408: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27a408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27a40c: 0x8c6a0004  lw          $t2, 0x4($v1)
    ctx->pc = 0x27a40cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x27a410: 0x11400023  beqz        $t2, . + 4 + (0x23 << 2)
    ctx->pc = 0x27A410u;
    {
        const bool branch_taken_0x27a410 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A410u;
        // 0x27a414: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a410) {
            ctx->pc = 0x27A4A0u;
            goto label_27a4a0;
        }
    }
    ctx->pc = 0x27A418u;
    // 0x27a418: 0x3c07008c  lui         $a3, 0x8C
    ctx->pc = 0x27a418u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)140 << 16));
    // 0x27a41c: 0x24e731a0  addiu       $a3, $a3, 0x31A0
    ctx->pc = 0x27a41cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12704));
label_27a420:
    // 0x27a420: 0x91430000  lbu         $v1, 0x0($t2)
    ctx->pc = 0x27a420u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x27a424: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x27a424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x27a428: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x27A428u;
    {
        const bool branch_taken_0x27a428 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27a428) {
            ctx->pc = 0x27A488u;
            goto label_27a488;
        }
    }
    ctx->pc = 0x27A430u;
    // 0x27a430: 0x91480003  lbu         $t0, 0x3($t2)
    ctx->pc = 0x27a430u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 3)));
    // 0x27a434: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x27a434u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x27a438: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x27a438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x27a43c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x27a43cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x27a440: 0xe34021  addu        $t0, $a3, $v1
    ctx->pc = 0x27a440u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x27a444: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x27a444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x27a448: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x27a448u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27a44c: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x27a44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x27a450: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x27a450u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x27a454: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x27A454u;
    {
        const bool branch_taken_0x27a454 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x27A458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A454u;
        // 0x27a458: 0x64090001  daddiu      $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a454) {
            ctx->pc = 0x27A460u;
            goto label_27a460;
        }
    }
    ctx->pc = 0x27A45Cu;
    // 0x27a45c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x27a45cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27a460:
    // 0x27a460: 0x11200005  beqz        $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x27A460u;
    {
        const bool branch_taken_0x27a460 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a460) {
            ctx->pc = 0x27A478u;
            goto label_27a478;
        }
    }
    ctx->pc = 0x27A468u;
    // 0x27a468: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x27a468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x27a46c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27a46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27a470: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x27a470u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x27a474: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x27a474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_27a478:
    // 0x27a478: 0x46082a  slt         $at, $v0, $a2
    ctx->pc = 0x27a478u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x27a47c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x27A47Cu;
    {
        const bool branch_taken_0x27a47c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a47c) {
            ctx->pc = 0x27A4A0u;
            goto label_27a4a0;
        }
    }
    ctx->pc = 0x27A484u;
    // 0x27a484: 0x0  nop
    ctx->pc = 0x27a484u;
    // NOP
label_27a488:
    // 0x27a488: 0x90830048  lbu         $v1, 0x48($a0)
    ctx->pc = 0x27a488u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x27a48c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x27a48cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27a490: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x27a490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x27a494: 0x8c6a0004  lw          $t2, 0x4($v1)
    ctx->pc = 0x27a494u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x27a498: 0x1540ffe1  bnez        $t2, . + 4 + (-0x1F << 2)
    ctx->pc = 0x27A498u;
    {
        const bool branch_taken_0x27a498 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x27a498) {
            ctx->pc = 0x27A420u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27a420;
        }
    }
    ctx->pc = 0x27A4A0u;
label_27a4a0:
    // 0x27a4a0: 0x3e00008  jr          $ra
    ctx->pc = 0x27A4A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A4A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27A4A8u;
}
