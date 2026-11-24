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

// Function: sub_00385050
// Address: 0x385050 - 0x38522c
void sub_00385050_0x385050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00385050_0x385050");
#endif

    switch (ctx->pc) {
        case 0x3850c0u: goto label_3850c0;
        case 0x3850e0u: goto label_3850e0;
        case 0x3850f4u: goto label_3850f4;
        case 0x385198u: goto label_385198;
        case 0x3851acu: goto label_3851ac;
        default: break;
    }

    ctx->pc = 0x385050u;

    // 0x385050: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x385050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x385054: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x385054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x385058: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x385058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38505c: 0x93858c30  lbu         $a1, -0x73D0($gp)
    ctx->pc = 0x38505cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937648)));
    // 0x385060: 0x10a2006b  beq         $a1, $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x385060u;
    {
        const bool branch_taken_0x385060 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x385064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385060u;
        // 0x385064: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385060) {
            ctx->pc = 0x385210u;
            goto label_385210;
        }
    }
    ctx->pc = 0x385068u;
    // 0x385068: 0x10a2004d  beq         $a1, $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x385068u;
    {
        const bool branch_taken_0x385068 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x385068) {
            ctx->pc = 0x3851A0u;
            goto label_3851a0;
        }
    }
    ctx->pc = 0x385070u;
    // 0x385070: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x385070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x385074: 0x10a2003e  beq         $a1, $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x385074u;
    {
        const bool branch_taken_0x385074 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x385078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385074u;
        // 0x385078: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385074) {
            ctx->pc = 0x385170u;
            goto label_385170;
        }
    }
    ctx->pc = 0x38507Cu;
    // 0x38507c: 0x10a20024  beq         $a1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x38507Cu;
    {
        const bool branch_taken_0x38507c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x38507c) {
            ctx->pc = 0x385110u;
            goto label_385110;
        }
    }
    ctx->pc = 0x385084u;
    // 0x385084: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x385084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x385088: 0x10a20017  beq         $a1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x385088u;
    {
        const bool branch_taken_0x385088 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x385088) {
            ctx->pc = 0x3850E8u;
            goto label_3850e8;
        }
    }
    ctx->pc = 0x385090u;
    // 0x385090: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x385090u;
    {
        const bool branch_taken_0x385090 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x385090) {
            ctx->pc = 0x3850A0u;
            goto label_3850a0;
        }
    }
    ctx->pc = 0x385098u;
    // 0x385098: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x385098u;
    {
        const bool branch_taken_0x385098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x385098) {
            ctx->pc = 0x385218u;
            goto label_385218;
        }
    }
    ctx->pc = 0x3850A0u;
label_3850a0:
    // 0x3850a0: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x3850a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3850a4: 0xa3828c30  sb          $v0, -0x73D0($gp)
    ctx->pc = 0x3850a4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937648), (uint8_t)GPR_U32(ctx, 2));
    // 0x3850a8: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x3850a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x3850ac: 0x8f828c38  lw          $v0, -0x73C8($gp)
    ctx->pc = 0x3850acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937656)));
    // 0x3850b0: 0x2484fee0  addiu       $a0, $a0, -0x120
    ctx->pc = 0x3850b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967008));
    // 0x3850b4: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x3850b4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3850b8: 0xc0f0154  jal         func_3C0550
    ctx->pc = 0x3850B8u;
    SET_GPR_U32(ctx, 31, 0x3850C0u);
    ctx->pc = 0x3850BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3850B8u;
    // 0x3850bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0550u, 0x3850B8u, 0x3850C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3850C0u;
label_3850c0:
    // 0x3850c0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3850c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3850c4: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x3850c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x3850c8: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x3850c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x3850cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3850ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3850d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3850d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3850d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3850d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3850d8: 0xc063c70  jal         func_18F1C0
    ctx->pc = 0x3850D8u;
    SET_GPR_U32(ctx, 31, 0x3850E0u);
    ctx->pc = 0x3850DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3850D8u;
    // 0x3850dc: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F1C0u, 0x3850D8u, 0x3850E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3850E0u;
label_3850e0:
    // 0x3850e0: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x3850E0u;
    {
        const bool branch_taken_0x3850e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3850e0) {
            ctx->pc = 0x385218u;
            goto label_385218;
        }
    }
    ctx->pc = 0x3850E8u;
label_3850e8:
    // 0x3850e8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3850e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3850ec: 0xc063d48  jal         func_18F520
    ctx->pc = 0x3850ECu;
    SET_GPR_U32(ctx, 31, 0x3850F4u);
    ctx->pc = 0x3850F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3850ECu;
    // 0x3850f0: 0x2484cbe0  addiu       $a0, $a0, -0x3420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F520u, 0x3850ECu, 0x3850F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3850F4u;
label_3850f4:
    // 0x3850f4: 0x14400048  bnez        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x3850F4u;
    {
        const bool branch_taken_0x3850f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3850f4) {
            ctx->pc = 0x385218u;
            goto label_385218;
        }
    }
    ctx->pc = 0x3850FCu;
    // 0x3850fc: 0x93828c30  lbu         $v0, -0x73D0($gp)
    ctx->pc = 0x3850fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937648)));
    // 0x385100: 0xa7808c34  sh          $zero, -0x73CC($gp)
    ctx->pc = 0x385100u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937652), (uint16_t)GPR_U32(ctx, 0));
    // 0x385104: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x385104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x385108: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x385108u;
    {
        const bool branch_taken_0x385108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38510Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385108u;
        // 0x38510c: 0xa3828c30  sb          $v0, -0x73D0($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294937648), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385108) {
            ctx->pc = 0x385218u;
            goto label_385218;
        }
    }
    ctx->pc = 0x385110u;
label_385110:
    // 0x385110: 0x87828c34  lh          $v0, -0x73CC($gp)
    ctx->pc = 0x385110u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937652)));
    // 0x385114: 0x8f868c38  lw          $a2, -0x73C8($gp)
    ctx->pc = 0x385114u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937656)));
    // 0x385118: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x385118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x38511c: 0xa7828c34  sh          $v0, -0x73CC($gp)
    ctx->pc = 0x38511cu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937652), (uint16_t)GPR_U32(ctx, 2));
    // 0x385120: 0x87838c34  lh          $v1, -0x73CC($gp)
    ctx->pc = 0x385120u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937652)));
    // 0x385124: 0x84c20002  lh          $v0, 0x2($a2)
    ctx->pc = 0x385124u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x385128: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x385128u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x38512c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x38512Cu;
    {
        const bool branch_taken_0x38512c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x385130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38512Cu;
        // 0x385130: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38512c) {
            ctx->pc = 0x385140u;
            goto label_385140;
        }
    }
    ctx->pc = 0x385134u;
    // 0x385134: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x385134u;
    {
        const bool branch_taken_0x385134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x385138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385134u;
        // 0x385138: 0xa3828c30  sb          $v0, -0x73D0($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294937648), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385134) {
            ctx->pc = 0x385218u;
            goto label_385218;
        }
    }
    ctx->pc = 0x38513Cu;
    // 0x38513c: 0x0  nop
    ctx->pc = 0x38513cu;
    // NOP
label_385140:
    // 0x385140: 0x84c20004  lh          $v0, 0x4($a2)
    ctx->pc = 0x385140u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x385144: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x385144u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x385148: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x385148u;
    {
        const bool branch_taken_0x385148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38514Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385148u;
        // 0x38514c: 0x3c010069  lui         $at, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385148) {
            ctx->pc = 0x385218u;
            goto label_385218;
        }
    }
    ctx->pc = 0x385150u;
    // 0x385150: 0x8c225f4c  lw          $v0, 0x5F4C($at)
    ctx->pc = 0x385150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 24396)));
    // 0x385154: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x385154u;
    {
        const bool branch_taken_0x385154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x385158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385154u;
        // 0x385158: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385154) {
            ctx->pc = 0x385218u;
            goto label_385218;
        }
    }
    ctx->pc = 0x38515Cu;
    // 0x38515c: 0x1080002e  beqz        $a0, . + 4 + (0x2E << 2)
    ctx->pc = 0x38515Cu;
    {
        const bool branch_taken_0x38515c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x385160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38515Cu;
        // 0x385160: 0xa3828c30  sb          $v0, -0x73D0($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294937648), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38515c) {
            ctx->pc = 0x385218u;
            goto label_385218;
        }
    }
    ctx->pc = 0x385164u;
    // 0x385164: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x385164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x385168: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x385168u;
    {
        const bool branch_taken_0x385168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38516Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385168u;
        // 0x38516c: 0xaf828c2c  sw          $v0, -0x73D4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937644), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385168) {
            ctx->pc = 0x385218u;
            goto label_385218;
        }
    }
    ctx->pc = 0x385170u;
label_385170:
    // 0x385170: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x385170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x385174: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x385174u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x385178: 0xa3828c30  sb          $v0, -0x73D0($gp)
    ctx->pc = 0x385178u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937648), (uint8_t)GPR_U32(ctx, 2));
    // 0x38517c: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x38517cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x385180: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x385180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x385184: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x385184u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385188: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x385188u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38518c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x38518cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385190: 0xc063cd0  jal         func_18F340
    ctx->pc = 0x385190u;
    SET_GPR_U32(ctx, 31, 0x385198u);
    ctx->pc = 0x385194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385190u;
    // 0x385194: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F340u, 0x385190u, 0x385198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385198u;
label_385198:
    // 0x385198: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x385198u;
    {
        const bool branch_taken_0x385198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x385198) {
            ctx->pc = 0x385218u;
            goto label_385218;
        }
    }
    ctx->pc = 0x3851A0u;
label_3851a0:
    // 0x3851a0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3851a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3851a4: 0xc063d48  jal         func_18F520
    ctx->pc = 0x3851A4u;
    SET_GPR_U32(ctx, 31, 0x3851ACu);
    ctx->pc = 0x3851A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3851A4u;
    // 0x3851a8: 0x2484cbe0  addiu       $a0, $a0, -0x3420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F520u, 0x3851A4u, 0x3851ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3851ACu;
label_3851ac:
    // 0x3851ac: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3851ACu;
    {
        const bool branch_taken_0x3851ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3851ac) {
            ctx->pc = 0x385218u;
            goto label_385218;
        }
    }
    ctx->pc = 0x3851B4u;
    // 0x3851b4: 0x8f828c38  lw          $v0, -0x73C8($gp)
    ctx->pc = 0x3851b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937656)));
    // 0x3851b8: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3851b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3851bc: 0x9024feea  lbu         $a0, -0x116($at)
    ctx->pc = 0x3851bcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x92FEEAu));
    // 0x3851c0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3851c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3851c4: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x3851c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x3851c8: 0xaf828c38  sw          $v0, -0x73C8($gp)
    ctx->pc = 0x3851c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937656), GPR_U32(ctx, 2));
    // 0x3851cc: 0x308400fe  andi        $a0, $a0, 0xFE
    ctx->pc = 0x3851ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)254);
    // 0x3851d0: 0x8f828c38  lw          $v0, -0x73C8($gp)
    ctx->pc = 0x3851d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937656)));
    // 0x3851d4: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3851d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3851d8: 0xa024feea  sb          $a0, -0x116($at)
    ctx->pc = 0x3851d8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x92FEEAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x92FEEAu, _value); } while (0);
    // 0x3851dc: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x3851dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3851e0: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3851E0u;
    {
        const bool branch_taken_0x3851e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3851e0) {
            ctx->pc = 0x3851F8u;
            goto label_3851f8;
        }
    }
    ctx->pc = 0x3851E8u;
    // 0x3851e8: 0x8f828c2c  lw          $v0, -0x73D4($gp)
    ctx->pc = 0x3851e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937644)));
    // 0x3851ec: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3851ECu;
    {
        const bool branch_taken_0x3851ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3851ec) {
            ctx->pc = 0x385208u;
            goto label_385208;
        }
    }
    ctx->pc = 0x3851F4u;
    // 0x3851f4: 0x0  nop
    ctx->pc = 0x3851f4u;
    // NOP
label_3851f8:
    // 0x3851f8: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x3851f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3851fc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3851FCu;
    {
        const bool branch_taken_0x3851fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x385200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3851FCu;
        // 0x385200: 0xa3828c30  sb          $v0, -0x73D0($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294937648), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3851fc) {
            ctx->pc = 0x385218u;
            goto label_385218;
        }
    }
    ctx->pc = 0x385204u;
    // 0x385204: 0x0  nop
    ctx->pc = 0x385204u;
    // NOP
label_385208:
    // 0x385208: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x385208u;
    {
        const bool branch_taken_0x385208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38520Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385208u;
        // 0x38520c: 0xa3808c30  sb          $zero, -0x73D0($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294937648), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385208) {
            ctx->pc = 0x385218u;
            goto label_385218;
        }
    }
    ctx->pc = 0x385210u;
label_385210:
    // 0x385210: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x385210u;
    {
        const bool branch_taken_0x385210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x385214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385210u;
        // 0x385214: 0x8f828c2c  lw          $v0, -0x73D4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937644)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385210) {
            ctx->pc = 0x385220u;
            goto label_385220;
        }
    }
    ctx->pc = 0x385218u;
label_385218:
    // 0x385218: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x385218u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38521c: 0x0  nop
    ctx->pc = 0x38521cu;
    // NOP
label_385220:
    // 0x385220: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x385220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x385224: 0x3e00008  jr          $ra
    ctx->pc = 0x385224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x385228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385224u;
        // 0x385228: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38522Cu;
}
