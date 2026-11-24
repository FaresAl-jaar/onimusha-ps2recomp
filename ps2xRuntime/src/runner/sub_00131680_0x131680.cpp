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

// Function: sub_00131680
// Address: 0x131680 - 0x131718
void sub_00131680_0x131680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131680_0x131680");
#endif

    switch (ctx->pc) {
        case 0x1316a0u: goto label_1316a0;
        default: break;
    }

    ctx->pc = 0x131680u;

    // 0x131680: 0x8cab00d4  lw          $t3, 0xD4($a1)
    ctx->pc = 0x131680u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 212)));
    // 0x131684: 0x24ad00d4  addiu       $t5, $a1, 0xD4
    ctx->pc = 0x131684u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 5), 212));
    // 0x131688: 0x8caa00dc  lw          $t2, 0xDC($a1)
    ctx->pc = 0x131688u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 220)));
    // 0x13168c: 0x24ac0030  addiu       $t4, $a1, 0x30
    ctx->pc = 0x13168cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x131690: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x131690u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131694: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x131694u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131698: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x131698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13169c: 0x0  nop
    ctx->pc = 0x13169cu;
    // NOP
label_1316a0:
    // 0x1316a0: 0xe54004  sllv        $t0, $a1, $a3
    ctx->pc = 0x1316a0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 7) & 0x1F));
    // 0x1316a4: 0x1681824  and         $v1, $t3, $t0
    ctx->pc = 0x1316a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) & GPR_U64(ctx, 8));
    // 0x1316a8: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1316A8u;
    {
        const bool branch_taken_0x1316a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1316ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1316A8u;
        // 0x1316ac: 0x1481824  and         $v1, $t2, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1316a8) {
            ctx->pc = 0x1316F0u;
            goto label_1316f0;
        }
    }
    ctx->pc = 0x1316B0u;
    // 0x1316b0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1316B0u;
    {
        const bool branch_taken_0x1316b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1316b0) {
            ctx->pc = 0x1316C0u;
            goto label_1316c0;
        }
    }
    ctx->pc = 0x1316B8u;
    // 0x1316b8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1316B8u;
    {
        const bool branch_taken_0x1316b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1316BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1316B8u;
        // 0x1316bc: 0x1284825  or          $t1, $t1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1316b8) {
            ctx->pc = 0x131700u;
            goto label_131700;
        }
    }
    ctx->pc = 0x1316C0u;
label_1316c0:
    // 0x1316c0: 0x1872021  addu        $a0, $t4, $a3
    ctx->pc = 0x1316c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 7)));
    // 0x1316c4: 0x90830004  lbu         $v1, 0x4($a0)
    ctx->pc = 0x1316c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1316c8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1316c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1316cc: 0xa0830004  sb          $v1, 0x4($a0)
    ctx->pc = 0x1316ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x1316d0: 0x90830004  lbu         $v1, 0x4($a0)
    ctx->pc = 0x1316d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1316d4: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1316D4u;
    {
        const bool branch_taken_0x1316d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1316D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1316D4u;
        // 0x1316d8: 0x24860004  addiu       $a2, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1316d4) {
            ctx->pc = 0x131700u;
            goto label_131700;
        }
    }
    ctx->pc = 0x1316DCu;
    // 0x1316dc: 0x91830001  lbu         $v1, 0x1($t4)
    ctx->pc = 0x1316dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 1)));
    // 0x1316e0: 0x1284825  or          $t1, $t1, $t0
    ctx->pc = 0x1316e0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x1316e4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1316E4u;
    {
        const bool branch_taken_0x1316e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1316E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1316E4u;
        // 0x1316e8: 0xa0c30000  sb          $v1, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1316e4) {
            ctx->pc = 0x131700u;
            goto label_131700;
        }
    }
    ctx->pc = 0x1316ECu;
    // 0x1316ec: 0x0  nop
    ctx->pc = 0x1316ecu;
    // NOP
label_1316f0:
    // 0x1316f0: 0x91840000  lbu         $a0, 0x0($t4)
    ctx->pc = 0x1316f0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1316f4: 0x1871821  addu        $v1, $t4, $a3
    ctx->pc = 0x1316f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 7)));
    // 0x1316f8: 0xa0640004  sb          $a0, 0x4($v1)
    ctx->pc = 0x1316f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 4));
    // 0x1316fc: 0x0  nop
    ctx->pc = 0x1316fcu;
    // NOP
label_131700:
    // 0x131700: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x131700u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x131704: 0x2ce30018  sltiu       $v1, $a3, 0x18
    ctx->pc = 0x131704u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x131708: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x131708u;
    {
        const bool branch_taken_0x131708 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x131708) {
            ctx->pc = 0x1316A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1316a0;
        }
    }
    ctx->pc = 0x131710u;
    // 0x131710: 0x3e00008  jr          $ra
    ctx->pc = 0x131710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131710u;
        // 0x131714: 0xada90014  sw          $t1, 0x14($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 20), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131710u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131718u;
}
