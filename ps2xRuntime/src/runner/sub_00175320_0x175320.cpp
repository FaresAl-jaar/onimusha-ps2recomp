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

// Function: sub_00175320
// Address: 0x175320 - 0x175408
void sub_00175320_0x175320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175320_0x175320");
#endif

    switch (ctx->pc) {
        case 0x175348u: goto label_175348;
        default: break;
    }

    ctx->pc = 0x175320u;

    // 0x175320: 0x93838624  lbu         $v1, -0x79DC($gp)
    ctx->pc = 0x175320u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936100)));
    // 0x175324: 0x30a800ff  andi        $t0, $a1, 0xFF
    ctx->pc = 0x175324u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x175328: 0x10680035  beq         $v1, $t0, . + 4 + (0x35 << 2)
    ctx->pc = 0x175328u;
    {
        const bool branch_taken_0x175328 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        ctx->pc = 0x17532Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175328u;
        // 0x17532c: 0x3c090082  lui         $t1, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175328) {
            ctx->pc = 0x175400u;
            goto label_175400;
        }
    }
    ctx->pc = 0x175330u;
    // 0x175330: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x175330u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175334: 0x2529b1a0  addiu       $t1, $t1, -0x4E60
    ctx->pc = 0x175334u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294947232));
    // 0x175338: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x175338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17533c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x17533cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x175340: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x175340u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x175344: 0x0  nop
    ctx->pc = 0x175344u;
    // NOP
label_175348:
    // 0x175348: 0x95230000  lhu         $v1, 0x0($t1)
    ctx->pc = 0x175348u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x17534c: 0x10670026  beq         $v1, $a3, . + 4 + (0x26 << 2)
    ctx->pc = 0x17534Cu;
    {
        const bool branch_taken_0x17534c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x17534c) {
            ctx->pc = 0x1753E8u;
            goto label_1753e8;
        }
    }
    ctx->pc = 0x175354u;
    // 0x175354: 0x1106001c  beq         $t0, $a2, . + 4 + (0x1C << 2)
    ctx->pc = 0x175354u;
    {
        const bool branch_taken_0x175354 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 6));
        if (branch_taken_0x175354) {
            ctx->pc = 0x1753C8u;
            goto label_1753c8;
        }
    }
    ctx->pc = 0x17535Cu;
    // 0x17535c: 0x11040010  beq         $t0, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x17535Cu;
    {
        const bool branch_taken_0x17535c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 4));
        if (branch_taken_0x17535c) {
            ctx->pc = 0x1753A0u;
            goto label_1753a0;
        }
    }
    ctx->pc = 0x175364u;
    // 0x175364: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x175364u;
    {
        const bool branch_taken_0x175364 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x175364) {
            ctx->pc = 0x175378u;
            goto label_175378;
        }
    }
    ctx->pc = 0x17536Cu;
    // 0x17536c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x17536Cu;
    {
        const bool branch_taken_0x17536c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17536c) {
            ctx->pc = 0x1753E8u;
            goto label_1753e8;
        }
    }
    ctx->pc = 0x175374u;
    // 0x175374: 0x0  nop
    ctx->pc = 0x175374u;
    // NOP
label_175378:
    // 0x175378: 0x8d230010  lw          $v1, 0x10($t1)
    ctx->pc = 0x175378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x17537c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x17537Cu;
    {
        const bool branch_taken_0x17537c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17537c) {
            ctx->pc = 0x175388u;
            goto label_175388;
        }
    }
    ctx->pc = 0x175384u;
    // 0x175384: 0xad23000c  sw          $v1, 0xC($t1)
    ctx->pc = 0x175384u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 3));
label_175388:
    // 0x175388: 0x8d23001c  lw          $v1, 0x1C($t1)
    ctx->pc = 0x175388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 28)));
    // 0x17538c: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x17538Cu;
    {
        const bool branch_taken_0x17538c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17538c) {
            ctx->pc = 0x1753E8u;
            goto label_1753e8;
        }
    }
    ctx->pc = 0x175394u;
    // 0x175394: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x175394u;
    {
        const bool branch_taken_0x175394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175394u;
        // 0x175398: 0xad230004  sw          $v1, 0x4($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175394) {
            ctx->pc = 0x1753E8u;
            goto label_1753e8;
        }
    }
    ctx->pc = 0x17539Cu;
    // 0x17539c: 0x0  nop
    ctx->pc = 0x17539cu;
    // NOP
label_1753a0:
    // 0x1753a0: 0x8d230014  lw          $v1, 0x14($t1)
    ctx->pc = 0x1753a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x1753a4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1753A4u;
    {
        const bool branch_taken_0x1753a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1753a4) {
            ctx->pc = 0x1753B0u;
            goto label_1753b0;
        }
    }
    ctx->pc = 0x1753ACu;
    // 0x1753ac: 0xad23000c  sw          $v1, 0xC($t1)
    ctx->pc = 0x1753acu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 3));
label_1753b0:
    // 0x1753b0: 0x8d230020  lw          $v1, 0x20($t1)
    ctx->pc = 0x1753b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x1753b4: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1753B4u;
    {
        const bool branch_taken_0x1753b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1753b4) {
            ctx->pc = 0x1753E8u;
            goto label_1753e8;
        }
    }
    ctx->pc = 0x1753BCu;
    // 0x1753bc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1753BCu;
    {
        const bool branch_taken_0x1753bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1753C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1753BCu;
        // 0x1753c0: 0xad230004  sw          $v1, 0x4($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1753bc) {
            ctx->pc = 0x1753E8u;
            goto label_1753e8;
        }
    }
    ctx->pc = 0x1753C4u;
    // 0x1753c4: 0x0  nop
    ctx->pc = 0x1753c4u;
    // NOP
label_1753c8:
    // 0x1753c8: 0x8d230018  lw          $v1, 0x18($t1)
    ctx->pc = 0x1753c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x1753cc: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1753CCu;
    {
        const bool branch_taken_0x1753cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1753cc) {
            ctx->pc = 0x1753D8u;
            goto label_1753d8;
        }
    }
    ctx->pc = 0x1753D4u;
    // 0x1753d4: 0xad23000c  sw          $v1, 0xC($t1)
    ctx->pc = 0x1753d4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 3));
label_1753d8:
    // 0x1753d8: 0x8d230024  lw          $v1, 0x24($t1)
    ctx->pc = 0x1753d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 36)));
    // 0x1753dc: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1753DCu;
    {
        const bool branch_taken_0x1753dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1753dc) {
            ctx->pc = 0x1753E8u;
            goto label_1753e8;
        }
    }
    ctx->pc = 0x1753E4u;
    // 0x1753e4: 0xad230004  sw          $v1, 0x4($t1)
    ctx->pc = 0x1753e4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 3));
label_1753e8:
    // 0x1753e8: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1753e8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1753ec: 0x29430040  slti        $v1, $t2, 0x40
    ctx->pc = 0x1753ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x1753f0: 0x1460ffd5  bnez        $v1, . + 4 + (-0x2B << 2)
    ctx->pc = 0x1753F0u;
    {
        const bool branch_taken_0x1753f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1753F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1753F0u;
        // 0x1753f4: 0x25290028  addiu       $t1, $t1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1753f0) {
            ctx->pc = 0x175348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_175348;
        }
    }
    ctx->pc = 0x1753F8u;
    // 0x1753f8: 0xa3858624  sb          $a1, -0x79DC($gp)
    ctx->pc = 0x1753f8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936100), (uint8_t)GPR_U32(ctx, 5));
    // 0x1753fc: 0x0  nop
    ctx->pc = 0x1753fcu;
    // NOP
label_175400:
    // 0x175400: 0x3e00008  jr          $ra
    ctx->pc = 0x175400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175408u;
}
