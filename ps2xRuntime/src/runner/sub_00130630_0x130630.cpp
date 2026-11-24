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

// Function: sub_00130630
// Address: 0x130630 - 0x130718
void sub_00130630_0x130630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00130630_0x130630");
#endif

    switch (ctx->pc) {
        case 0x1306d0u: goto label_1306d0;
        default: break;
    }

    ctx->pc = 0x130630u;

    // 0x130630: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x130630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x130634: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x130634u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x130638: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x130638u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x13063c: 0x665021  addu        $t2, $v1, $a2
    ctx->pc = 0x13063cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x130640: 0x902d8070  lbu         $t5, -0x7F90($at)
    ctx->pc = 0x130640u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294934640)));
    // 0x130644: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x130644u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x130648: 0xa58c0  sll         $t3, $t2, 3
    ctx->pc = 0x130648u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x13064c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x13064cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x130650: 0x35100  sll         $t2, $v1, 4
    ctx->pc = 0x130650u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x130654: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x130654u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130658: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x130658u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x13065c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x13065cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x130660: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x130660u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x130664: 0xd6900  sll         $t5, $t5, 4
    ctx->pc = 0x130664u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 4));
    // 0x130668: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x130668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x13066c: 0x8d1821  addu        $v1, $a0, $t5
    ctx->pc = 0x13066cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x130670: 0x34218074  ori         $at, $at, 0x8074
    ctx->pc = 0x130670u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32884);
    // 0x130674: 0x616821  addu        $t5, $v1, $at
    ctx->pc = 0x130674u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x130678: 0xa1ac0000  sb          $t4, 0x0($t5)
    ctx->pc = 0x130678u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 0), (uint8_t)GPR_U32(ctx, 12));
    // 0x13067c: 0xa1a60001  sb          $a2, 0x1($t5)
    ctx->pc = 0x13067cu;
    WRITE8(ADD32(GPR_U32(ctx, 13), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x130680: 0xa1a70002  sb          $a3, 0x2($t5)
    ctx->pc = 0x130680u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 2), (uint8_t)GPR_U32(ctx, 7));
    // 0x130684: 0xa5a80004  sh          $t0, 0x4($t5)
    ctx->pc = 0x130684u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 4), (uint16_t)GPR_U32(ctx, 8));
    // 0x130688: 0xa5a80006  sh          $t0, 0x6($t5)
    ctx->pc = 0x130688u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 6), (uint16_t)GPR_U32(ctx, 8));
    // 0x13068c: 0xada90008  sw          $t1, 0x8($t5)
    ctx->pc = 0x13068cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 9));
    // 0x130690: 0x8d23008c  lw          $v1, 0x8C($t1)
    ctx->pc = 0x130690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 140)));
    // 0x130694: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x130694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x130698: 0x9063000d  lbu         $v1, 0xD($v1)
    ctx->pc = 0x130698u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13)));
    // 0x13069c: 0xa1a30003  sb          $v1, 0x3($t5)
    ctx->pc = 0x13069cu;
    WRITE8(ADD32(GPR_U32(ctx, 13), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x1306a0: 0x8d23007c  lw          $v1, 0x7C($t1)
    ctx->pc = 0x1306a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 124)));
    // 0x1306a4: 0x8d270078  lw          $a3, 0x78($t1)
    ctx->pc = 0x1306a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 120)));
    // 0x1306a8: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x1306a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1306ac: 0x8ca8000c  lw          $t0, 0xC($a1)
    ctx->pc = 0x1306acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1306b0: 0x1473821  addu        $a3, $t2, $a3
    ctx->pc = 0x1306b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x1306b4: 0x8ce30030  lw          $v1, 0x30($a3)
    ctx->pc = 0x1306b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x1306b8: 0x90a50001  lbu         $a1, 0x1($a1)
    ctx->pc = 0x1306b8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x1306bc: 0x5082a  slt         $at, $zero, $a1
    ctx->pc = 0x1306bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1306c0: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x1306C0u;
    {
        const bool branch_taken_0x1306c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1306C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1306C0u;
        // 0x1306c4: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1306c0) {
            ctx->pc = 0x1306F8u;
            goto label_1306f8;
        }
    }
    ctx->pc = 0x1306C8u;
    // 0x1306c8: 0x90670002  lbu         $a3, 0x2($v1)
    ctx->pc = 0x1306c8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1306cc: 0x0  nop
    ctx->pc = 0x1306ccu;
    // NOP
label_1306d0:
    // 0x1306d0: 0x14e60005  bne         $a3, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1306D0u;
    {
        const bool branch_taken_0x1306d0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        if (branch_taken_0x1306d0) {
            ctx->pc = 0x1306E8u;
            goto label_1306e8;
        }
    }
    ctx->pc = 0x1306D8u;
    // 0x1306d8: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x1306d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1306dc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1306DCu;
    {
        const bool branch_taken_0x1306dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1306E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1306DCu;
        // 0x1306e0: 0xada3000c  sw          $v1, 0xC($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1306dc) {
            ctx->pc = 0x1306F8u;
            goto label_1306f8;
        }
    }
    ctx->pc = 0x1306E4u;
    // 0x1306e4: 0x0  nop
    ctx->pc = 0x1306e4u;
    // NOP
label_1306e8:
    // 0x1306e8: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x1306e8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x1306ec: 0x1c5182a  slt         $v1, $t6, $a1
    ctx->pc = 0x1306ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1306f0: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1306F0u;
    {
        const bool branch_taken_0x1306f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1306F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1306F0u;
        // 0x1306f4: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1306f0) {
            ctx->pc = 0x1306D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1306d0;
        }
    }
    ctx->pc = 0x1306F8u;
label_1306f8:
    // 0x1306f8: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1306f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1306fc: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x1306fcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x130700: 0x90238070  lbu         $v1, -0x7F90($at)
    ctx->pc = 0x130700u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294934640)));
    // 0x130704: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x130704u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x130708: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x130708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x13070c: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x13070cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x130710: 0x3e00008  jr          $ra
    ctx->pc = 0x130710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130710u;
        // 0x130714: 0xa0238070  sb          $v1, -0x7F90($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294934640), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130710u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x130718u;
}
