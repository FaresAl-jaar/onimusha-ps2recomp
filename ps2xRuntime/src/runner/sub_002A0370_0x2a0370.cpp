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

// Function: sub_002A0370
// Address: 0x2a0370 - 0x2a041c
void sub_002A0370_0x2a0370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A0370_0x2a0370");
#endif

    switch (ctx->pc) {
        case 0x2a0380u: goto label_2a0380;
        case 0x2a0390u: goto label_2a0390;
        case 0x2a03c0u: goto label_2a03c0;
        default: break;
    }

    ctx->pc = 0x2a0370u;

    // 0x2a0370: 0x8c98007c  lw          $t8, 0x7C($a0)
    ctx->pc = 0x2a0370u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x2a0374: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2a0374u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2a0378: 0x948e0068  lhu         $t6, 0x68($a0)
    ctx->pc = 0x2a0378u;
    SET_GPR_ZE32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x2a037c: 0xb82021  addu        $a0, $a1, $t8
    ctx->pc = 0x2a037cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 24)));
label_2a0380:
    // 0x2a0380: 0x8c8f0068  lw          $t7, 0x68($a0)
    ctx->pc = 0x2a0380u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x2a0384: 0x930c0001  lbu         $t4, 0x1($t8)
    ctx->pc = 0x2a0384u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 1)));
    // 0x2a0388: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x2a0388u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a038c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a038cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a0390:
    // 0x2a0390: 0x8f030018  lw          $v1, 0x18($t8)
    ctx->pc = 0x2a0390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 24)));
    // 0x2a0394: 0x25ef0010  addiu       $t7, $t7, 0x10
    ctx->pc = 0x2a0394u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 16));
    // 0x2a0398: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2a0398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2a039c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2a039cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2a03a0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2a03a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a03a4: 0x8c6b0004  lw          $t3, 0x4($v1)
    ctx->pc = 0x2a03a4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2a03a8: 0x8c6a0008  lw          $t2, 0x8($v1)
    ctx->pc = 0x2a03a8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2a03ac: 0x8c69000c  lw          $t1, 0xC($v1)
    ctx->pc = 0x2a03acu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2a03b0: 0x8c680010  lw          $t0, 0x10($v1)
    ctx->pc = 0x2a03b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2a03b4: 0x8c670014  lw          $a3, 0x14($v1)
    ctx->pc = 0x2a03b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2a03b8: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x2a03b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a03bc: 0x0  nop
    ctx->pc = 0x2a03bcu;
    // NOP
label_2a03c0:
    // 0x2a03c0: 0xade80034  sw          $t0, 0x34($t7)
    ctx->pc = 0x2a03c0u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 52), GPR_U32(ctx, 8));
    // 0x2a03c4: 0xadeb0044  sw          $t3, 0x44($t7)
    ctx->pc = 0x2a03c4u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 68), GPR_U32(ctx, 11));
    // 0x2a03c8: 0x2463ffe8  addiu       $v1, $v1, -0x18
    ctx->pc = 0x2a03c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967272));
    // 0x2a03cc: 0xade90054  sw          $t1, 0x54($t7)
    ctx->pc = 0x2a03ccu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 84), GPR_U32(ctx, 9));
    // 0x2a03d0: 0x25080030  addiu       $t0, $t0, 0x30
    ctx->pc = 0x2a03d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
    // 0x2a03d4: 0xadea0064  sw          $t2, 0x64($t7)
    ctx->pc = 0x2a03d4u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 100), GPR_U32(ctx, 10));
    // 0x2a03d8: 0x256b0120  addiu       $t3, $t3, 0x120
    ctx->pc = 0x2a03d8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 288));
    // 0x2a03dc: 0xade70074  sw          $a3, 0x74($t7)
    ctx->pc = 0x2a03dcu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 116), GPR_U32(ctx, 7));
    // 0x2a03e0: 0x25290060  addiu       $t1, $t1, 0x60
    ctx->pc = 0x2a03e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 96));
    // 0x2a03e4: 0x254a0120  addiu       $t2, $t2, 0x120
    ctx->pc = 0x2a03e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 288));
    // 0x2a03e8: 0x24e70030  addiu       $a3, $a3, 0x30
    ctx->pc = 0x2a03e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    // 0x2a03ec: 0x1c60fff4  bgtz        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2A03ECu;
    {
        const bool branch_taken_0x2a03ec = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x2A03F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A03ECu;
        // 0x2a03f0: 0x25ef0090  addiu       $t7, $t7, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a03ec) {
            ctx->pc = 0x2A03C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a03c0;
        }
    }
    ctx->pc = 0x2A03F4u;
    // 0x2a03f4: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x2a03f4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x2a03f8: 0x1ac182a  slt         $v1, $t5, $t4
    ctx->pc = 0x2a03f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x2a03fc: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x2A03FCu;
    {
        const bool branch_taken_0x2a03fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A0400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A03FCu;
        // 0x2a0400: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a03fc) {
            ctx->pc = 0x2A0390u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a0390;
        }
    }
    ctx->pc = 0x2A0404u;
    // 0x2a0404: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x2a0404u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x2a0408: 0x248401f0  addiu       $a0, $a0, 0x1F0
    ctx->pc = 0x2a0408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 496));
    // 0x2a040c: 0x1dc0ffdc  bgtz        $t6, . + 4 + (-0x24 << 2)
    ctx->pc = 0x2A040Cu;
    {
        const bool branch_taken_0x2a040c = (GPR_S64(ctx, 14) > 0);
        ctx->pc = 0x2A0410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A040Cu;
        // 0x2a0410: 0x271801f0  addiu       $t8, $t8, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a040c) {
            ctx->pc = 0x2A0380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a0380;
        }
    }
    ctx->pc = 0x2A0414u;
    // 0x2a0414: 0x3e00008  jr          $ra
    ctx->pc = 0x2A0414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A0414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A041Cu;
}
