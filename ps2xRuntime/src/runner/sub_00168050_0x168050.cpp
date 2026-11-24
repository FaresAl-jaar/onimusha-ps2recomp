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

// Function: sub_00168050
// Address: 0x168050 - 0x1680ec
void sub_00168050_0x168050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168050_0x168050");
#endif

    switch (ctx->pc) {
        case 0x168060u: goto label_168060;
        case 0x168070u: goto label_168070;
        case 0x168098u: goto label_168098;
        default: break;
    }

    ctx->pc = 0x168050u;

    // 0x168050: 0x8c8f007c  lw          $t7, 0x7C($a0)
    ctx->pc = 0x168050u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x168054: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x168054u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x168058: 0x948d0068  lhu         $t5, 0x68($a0)
    ctx->pc = 0x168058u;
    SET_GPR_ZE32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x16805c: 0xaf2021  addu        $a0, $a1, $t7
    ctx->pc = 0x16805cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
label_168060:
    // 0x168060: 0x8c8e0068  lw          $t6, 0x68($a0)
    ctx->pc = 0x168060u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x168064: 0x91eb0001  lbu         $t3, 0x1($t7)
    ctx->pc = 0x168064u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 1)));
    // 0x168068: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x168068u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16806c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16806cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_168070:
    // 0x168070: 0x8de30018  lw          $v1, 0x18($t7)
    ctx->pc = 0x168070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 24)));
    // 0x168074: 0x25ce0010  addiu       $t6, $t6, 0x10
    ctx->pc = 0x168074u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
    // 0x168078: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x168078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x16807c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x16807cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x168080: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x168080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x168084: 0x8c6a0004  lw          $t2, 0x4($v1)
    ctx->pc = 0x168084u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x168088: 0x8c690008  lw          $t1, 0x8($v1)
    ctx->pc = 0x168088u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x16808c: 0x8c68000c  lw          $t0, 0xC($v1)
    ctx->pc = 0x16808cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x168090: 0x8c670010  lw          $a3, 0x10($v1)
    ctx->pc = 0x168090u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x168094: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x168094u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_168098:
    // 0x168098: 0xadc70034  sw          $a3, 0x34($t6)
    ctx->pc = 0x168098u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 52), GPR_U32(ctx, 7));
    // 0x16809c: 0xadca0044  sw          $t2, 0x44($t6)
    ctx->pc = 0x16809cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 68), GPR_U32(ctx, 10));
    // 0x1680a0: 0x2463ffec  addiu       $v1, $v1, -0x14
    ctx->pc = 0x1680a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1680a4: 0xadc80054  sw          $t0, 0x54($t6)
    ctx->pc = 0x1680a4u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 84), GPR_U32(ctx, 8));
    // 0x1680a8: 0x24e70050  addiu       $a3, $a3, 0x50
    ctx->pc = 0x1680a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
    // 0x1680ac: 0xadc90064  sw          $t1, 0x64($t6)
    ctx->pc = 0x1680acu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 100), GPR_U32(ctx, 9));
    // 0x1680b0: 0x254a00f0  addiu       $t2, $t2, 0xF0
    ctx->pc = 0x1680b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 240));
    // 0x1680b4: 0x25080050  addiu       $t0, $t0, 0x50
    ctx->pc = 0x1680b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 80));
    // 0x1680b8: 0x252900f0  addiu       $t1, $t1, 0xF0
    ctx->pc = 0x1680b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 240));
    // 0x1680bc: 0x1c60fff6  bgtz        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1680BCu;
    {
        const bool branch_taken_0x1680bc = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x1680C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1680BCu;
        // 0x1680c0: 0x25ce0080  addiu       $t6, $t6, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1680bc) {
            ctx->pc = 0x168098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_168098;
        }
    }
    ctx->pc = 0x1680C4u;
    // 0x1680c4: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x1680c4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x1680c8: 0x18b182a  slt         $v1, $t4, $t3
    ctx->pc = 0x1680c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x1680cc: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1680CCu;
    {
        const bool branch_taken_0x1680cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1680D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1680CCu;
        // 0x1680d0: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1680cc) {
            ctx->pc = 0x168070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_168070;
        }
    }
    ctx->pc = 0x1680D4u;
    // 0x1680d4: 0x25adffff  addiu       $t5, $t5, -0x1
    ctx->pc = 0x1680d4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x1680d8: 0x248401f0  addiu       $a0, $a0, 0x1F0
    ctx->pc = 0x1680d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 496));
    // 0x1680dc: 0x1da0ffe0  bgtz        $t5, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1680DCu;
    {
        const bool branch_taken_0x1680dc = (GPR_S64(ctx, 13) > 0);
        ctx->pc = 0x1680E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1680DCu;
        // 0x1680e0: 0x25ef01f0  addiu       $t7, $t7, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1680dc) {
            ctx->pc = 0x168060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_168060;
        }
    }
    ctx->pc = 0x1680E4u;
    // 0x1680e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1680E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1680E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1680ECu;
}
