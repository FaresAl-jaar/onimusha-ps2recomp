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

// Function: sub_00234508
// Address: 0x234508 - 0x234638
void sub_00234508_0x234508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00234508_0x234508");
#endif

    switch (ctx->pc) {
        case 0x234550u: goto label_234550;
        case 0x2345b0u: goto label_2345b0;
        case 0x2345c0u: goto label_2345c0;
        case 0x2345c8u: goto label_2345c8;
        case 0x2345d0u: goto label_2345d0;
        default: break;
    }

    ctx->pc = 0x234508u;

    // 0x234508: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x234508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x23450c: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x23450cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x234510: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x234510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x234514: 0x2442fc60  addiu       $v0, $v0, -0x3A0
    ctx->pc = 0x234514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966368));
    // 0x234518: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x234518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23451c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23451cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x234520: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x234520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x234524: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x234524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x234528: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x234528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x23452c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x23452cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x234530: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x234530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x234534: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x234534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x234538: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x234538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x23453c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23453cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4BFC60u));
    // 0x234540: 0x1464000d  bne         $v1, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x234540u;
    {
        const bool branch_taken_0x234540 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x234544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234540u;
        // 0x234544: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234540) {
            ctx->pc = 0x234578u;
            goto label_234578;
        }
    }
    ctx->pc = 0x234548u;
    // 0x234548: 0x3c15004c  lui         $s5, 0x4C
    ctx->pc = 0x234548u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)76 << 16));
    // 0x23454c: 0x26a2fd00  addiu       $v0, $s5, -0x300
    ctx->pc = 0x23454cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294966528));
label_234550:
    // 0x234550: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x234550u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x234554: 0x0  nop
    ctx->pc = 0x234554u;
    // NOP
    // 0x234558: 0x0  nop
    ctx->pc = 0x234558u;
    // NOP
    // 0x23455c: 0x0  nop
    ctx->pc = 0x23455cu;
    // NOP
    // 0x234560: 0x0  nop
    ctx->pc = 0x234560u;
    // NOP
    // 0x234564: 0x1060fffa  beqz        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x234564u;
    {
        const bool branch_taken_0x234564 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x234568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234564u;
        // 0x234568: 0x3c17004c  lui         $s7, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234564) {
            ctx->pc = 0x234550u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_234550;
        }
    }
    ctx->pc = 0x23456Cu;
    // 0x23456c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x23456Cu;
    {
        const bool branch_taken_0x23456c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23456Cu;
        // 0x234570: 0x3c16004c  lui         $s6, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23456c) {
            ctx->pc = 0x2345F4u;
            goto label_2345f4;
        }
    }
    ctx->pc = 0x234574u;
    // 0x234574: 0x0  nop
    ctx->pc = 0x234574u;
    // NOP
label_234578:
    // 0x234578: 0x3c15004c  lui         $s5, 0x4C
    ctx->pc = 0x234578u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)76 << 16));
    // 0x23457c: 0x2443fd3c  addiu       $v1, $v0, -0x2C4
    ctx->pc = 0x23457cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966588));
    // 0x234580: 0x26a4fd00  addiu       $a0, $s5, -0x300
    ctx->pc = 0x234580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294966528));
    // 0x234584: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x234584u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x234588: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x234588u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x4BFD00u));
    // 0x23458c: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x23458Cu;
    {
        const bool branch_taken_0x23458c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x234590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23458Cu;
        // 0x234590: 0x3c17004c  lui         $s7, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23458c) {
            ctx->pc = 0x2345F0u;
            goto label_2345f0;
        }
    }
    ctx->pc = 0x234594u;
    // 0x234594: 0x3c16004c  lui         $s6, 0x4C
    ctx->pc = 0x234594u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)76 << 16));
    // 0x234598: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x234598u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23459c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x23459cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2345a0: 0x26f3fcf8  addiu       $s3, $s7, -0x308
    ctx->pc = 0x2345a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 4294966520));
    // 0x2345a4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2345a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2345a8: 0x26d0fcb4  addiu       $s0, $s6, -0x34C
    ctx->pc = 0x2345a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294966452));
    // 0x2345ac: 0x0  nop
    ctx->pc = 0x2345acu;
    // NOP
label_2345b0:
    // 0x2345b0: 0xfe720000  sd          $s2, 0x0($s3)
    ctx->pc = 0x2345b0u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 18));
    // 0x2345b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2345b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2345b8: 0xc04379c  jal         func_10DE70
    ctx->pc = 0x2345B8u;
    SET_GPR_U32(ctx, 31, 0x2345C0u);
    ctx->pc = 0x2345BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2345B8u;
    // 0x2345bc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DE70u, 0x2345B8u, 0x2345C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2345C0u;
label_2345c0:
    // 0x2345c0: 0xc0437c4  jal         func_10DF10
    ctx->pc = 0x2345C0u;
    SET_GPR_U32(ctx, 31, 0x2345C8u);
    ctx->pc = 0x2345C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2345C0u;
    // 0x2345c4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DF10u, 0x2345C0u, 0x2345C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2345C8u;
label_2345c8:
    // 0x2345c8: 0xc08ced2  jal         func_233B48
    ctx->pc = 0x2345C8u;
    SET_GPR_U32(ctx, 31, 0x2345D0u);
    ctx->pc = 0x2345CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2345C8u;
    // 0x2345cc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233B48u, 0x2345C8u, 0x2345D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2345D0u;
label_2345d0:
    // 0x2345d0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2345d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2345d4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2345d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2345d8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2345d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x2345dc: 0xde820000  ld          $v0, 0x0($s4)
    ctx->pc = 0x2345dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2345e0: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2345E0u;
    {
        const bool branch_taken_0x2345e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2345E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2345E0u;
        // 0x2345e4: 0x26a2fd00  addiu       $v0, $s5, -0x300 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294966528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2345e0) {
            ctx->pc = 0x2345B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2345b0;
        }
    }
    ctx->pc = 0x2345E8u;
    // 0x2345e8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2345E8u;
    {
        const bool branch_taken_0x2345e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2345ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2345E8u;
        // 0x2345ec: 0xdfb50028  ld          $s5, 0x28($sp) (Delay Slot)
        SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2345e8) {
            ctx->pc = 0x2345FCu;
            goto label_2345fc;
        }
    }
    ctx->pc = 0x2345F0u;
label_2345f0:
    // 0x2345f0: 0x3c16004c  lui         $s6, 0x4C
    ctx->pc = 0x2345f0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)76 << 16));
label_2345f4:
    // 0x2345f4: 0x26a2fd00  addiu       $v0, $s5, -0x300
    ctx->pc = 0x2345f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294966528));
    // 0x2345f8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2345f8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2345fc:
    // 0x2345fc: 0x26e3fcf8  addiu       $v1, $s7, -0x308
    ctx->pc = 0x2345fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294966520));
    // 0x234600: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x234600u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x234604: 0x26c4fcb4  addiu       $a0, $s6, -0x34C
    ctx->pc = 0x234604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294966452));
    // 0x234608: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x234608u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23460c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23460cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x234610: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x234610u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x234614: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x234614u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x234618: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x234618u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23461c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x23461cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x234620: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x234620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x234624: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x234624u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x234628: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x234628u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    // 0x23462c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x23462cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x234630: 0x3e00008  jr          $ra
    ctx->pc = 0x234630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234630u;
        // 0x234634: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x234638u;
}
