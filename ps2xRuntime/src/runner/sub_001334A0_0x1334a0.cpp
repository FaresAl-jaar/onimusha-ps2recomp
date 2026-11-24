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

// Function: sub_001334A0
// Address: 0x1334a0 - 0x13364c
void sub_001334A0_0x1334a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001334A0_0x1334a0");
#endif

    switch (ctx->pc) {
        case 0x1334e0u: goto label_1334e0;
        case 0x1334ecu: goto label_1334ec;
        case 0x1334fcu: goto label_1334fc;
        case 0x133538u: goto label_133538;
        case 0x133548u: goto label_133548;
        case 0x133564u: goto label_133564;
        case 0x133574u: goto label_133574;
        case 0x133584u: goto label_133584;
        case 0x133594u: goto label_133594;
        case 0x1335a4u: goto label_1335a4;
        case 0x1335b4u: goto label_1335b4;
        case 0x1335c4u: goto label_1335c4;
        case 0x1335d4u: goto label_1335d4;
        case 0x1335e4u: goto label_1335e4;
        case 0x1335f4u: goto label_1335f4;
        case 0x133604u: goto label_133604;
        case 0x133614u: goto label_133614;
        default: break;
    }

    ctx->pc = 0x1334a0u;

    // 0x1334a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1334a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1334a4: 0x6323c  dsll32      $a2, $a2, 8
    ctx->pc = 0x1334a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 8));
    // 0x1334a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1334a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1334ac: 0x6323e  dsrl32      $a2, $a2, 8
    ctx->pc = 0x1334acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 8));
    // 0x1334b0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1334b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1334b4: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x1334b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1334b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1334b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1334bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1334bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1334c0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1334c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1334c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1334c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1334c8: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x1334c8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1334cc: 0x101e00  sll         $v1, $s0, 24
    ctx->pc = 0x1334ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 24));
    // 0x1334d0: 0x16020017  bne         $s0, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1334D0u;
    {
        const bool branch_taken_0x1334d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1334D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1334D0u;
        // 0x1334d4: 0xc38825  or          $s1, $a2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1334d0) {
            ctx->pc = 0x133530u;
            goto label_133530;
        }
    }
    ctx->pc = 0x1334D8u;
    // 0x1334d8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1334d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1334dc: 0x0  nop
    ctx->pc = 0x1334dcu;
    // NOP
label_1334e0:
    // 0x1334e0: 0x326500ff  andi        $a1, $s3, 0xFF
    ctx->pc = 0x1334e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x1334e4: 0xc04cad8  jal         func_132B60
    ctx->pc = 0x1334E4u;
    SET_GPR_U32(ctx, 31, 0x1334ECu);
    ctx->pc = 0x1334E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1334E4u;
    // 0x1334e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132B60u, 0x1334E4u, 0x1334ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1334ECu;
label_1334ec:
    // 0x1334ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1334ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1334f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1334f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1334f4: 0xc04cd94  jal         func_133650
    ctx->pc = 0x1334F4u;
    SET_GPR_U32(ctx, 31, 0x1334FCu);
    ctx->pc = 0x1334F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1334F4u;
    // 0x1334f8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133650u, 0x1334F4u, 0x1334FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1334FCu;
label_1334fc:
    // 0x1334fc: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x1334fcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x133500: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x133500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x133504: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x133504u;
    {
        const bool branch_taken_0x133504 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x133504) {
            ctx->pc = 0x133518u;
            goto label_133518;
        }
    }
    ctx->pc = 0x13350Cu;
    // 0x13350c: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x13350Cu;
    {
        const bool branch_taken_0x13350c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13350Cu;
        // 0x133510: 0x8c420010  lw          $v0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13350c) {
            ctx->pc = 0x133630u;
            goto label_133630;
        }
    }
    ctx->pc = 0x133514u;
    // 0x133514: 0x0  nop
    ctx->pc = 0x133514u;
    // NOP
label_133518:
    // 0x133518: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x133518u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x13351c: 0x2a630015  slti        $v1, $s3, 0x15
    ctx->pc = 0x13351cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x133520: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x133520u;
    {
        const bool branch_taken_0x133520 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x133520) {
            ctx->pc = 0x1334E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1334e0;
        }
    }
    ctx->pc = 0x133528u;
    // 0x133528: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x133528u;
    {
        const bool branch_taken_0x133528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133528) {
            ctx->pc = 0x133548u;
            goto label_133548;
        }
    }
    ctx->pc = 0x133530u;
label_133530:
    // 0x133530: 0xc04cad8  jal         func_132B60
    ctx->pc = 0x133530u;
    SET_GPR_U32(ctx, 31, 0x133538u);
    ctx->pc = 0x132B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132B60u, 0x133530u, 0x133538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133538u;
label_133538:
    // 0x133538: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x133538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13353c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13353cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133540: 0xc04cd94  jal         func_133650
    ctx->pc = 0x133540u;
    SET_GPR_U32(ctx, 31, 0x133548u);
    ctx->pc = 0x133544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133540u;
    // 0x133544: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133650u, 0x133540u, 0x133548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133548u;
label_133548:
    // 0x133548: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x133548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13354c: 0x16030032  bne         $s0, $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x13354Cu;
    {
        const bool branch_taken_0x13354c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x13354c) {
            ctx->pc = 0x133618u;
            goto label_133618;
        }
    }
    ctx->pc = 0x133554u;
    // 0x133554: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x133554u;
    {
        const bool branch_taken_0x133554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x133558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133554u;
        // 0x133558: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133554) {
            ctx->pc = 0x133618u;
            goto label_133618;
        }
    }
    ctx->pc = 0x13355Cu;
    // 0x13355c: 0xc04cad8  jal         func_132B60
    ctx->pc = 0x13355Cu;
    SET_GPR_U32(ctx, 31, 0x133564u);
    ctx->pc = 0x133560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13355Cu;
    // 0x133560: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132B60u, 0x13355Cu, 0x133564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133564u;
label_133564:
    // 0x133564: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x133564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133568: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x133568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13356c: 0xc04cd94  jal         func_133650
    ctx->pc = 0x13356Cu;
    SET_GPR_U32(ctx, 31, 0x133574u);
    ctx->pc = 0x133570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13356Cu;
    // 0x133570: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133650u, 0x13356Cu, 0x133574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133574u;
label_133574:
    // 0x133574: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x133574u;
    {
        const bool branch_taken_0x133574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x133578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133574u;
        // 0x133578: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133574) {
            ctx->pc = 0x133618u;
            goto label_133618;
        }
    }
    ctx->pc = 0x13357Cu;
    // 0x13357c: 0xc04cad8  jal         func_132B60
    ctx->pc = 0x13357Cu;
    SET_GPR_U32(ctx, 31, 0x133584u);
    ctx->pc = 0x133580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13357Cu;
    // 0x133580: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132B60u, 0x13357Cu, 0x133584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133584u;
label_133584:
    // 0x133584: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x133584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133588: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x133588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13358c: 0xc04cd94  jal         func_133650
    ctx->pc = 0x13358Cu;
    SET_GPR_U32(ctx, 31, 0x133594u);
    ctx->pc = 0x133590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13358Cu;
    // 0x133590: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133650u, 0x13358Cu, 0x133594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133594u;
label_133594:
    // 0x133594: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x133594u;
    {
        const bool branch_taken_0x133594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x133598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133594u;
        // 0x133598: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133594) {
            ctx->pc = 0x133618u;
            goto label_133618;
        }
    }
    ctx->pc = 0x13359Cu;
    // 0x13359c: 0xc04cad8  jal         func_132B60
    ctx->pc = 0x13359Cu;
    SET_GPR_U32(ctx, 31, 0x1335A4u);
    ctx->pc = 0x1335A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13359Cu;
    // 0x1335a0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132B60u, 0x13359Cu, 0x1335A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1335A4u;
label_1335a4:
    // 0x1335a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1335a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1335a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1335a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1335ac: 0xc04cd94  jal         func_133650
    ctx->pc = 0x1335ACu;
    SET_GPR_U32(ctx, 31, 0x1335B4u);
    ctx->pc = 0x1335B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1335ACu;
    // 0x1335b0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133650u, 0x1335ACu, 0x1335B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1335B4u;
label_1335b4:
    // 0x1335b4: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1335B4u;
    {
        const bool branch_taken_0x1335b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1335B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1335B4u;
        // 0x1335b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1335b4) {
            ctx->pc = 0x133618u;
            goto label_133618;
        }
    }
    ctx->pc = 0x1335BCu;
    // 0x1335bc: 0xc04cad8  jal         func_132B60
    ctx->pc = 0x1335BCu;
    SET_GPR_U32(ctx, 31, 0x1335C4u);
    ctx->pc = 0x1335C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1335BCu;
    // 0x1335c0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132B60u, 0x1335BCu, 0x1335C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1335C4u;
label_1335c4:
    // 0x1335c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1335c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1335c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1335c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1335cc: 0xc04cd94  jal         func_133650
    ctx->pc = 0x1335CCu;
    SET_GPR_U32(ctx, 31, 0x1335D4u);
    ctx->pc = 0x1335D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1335CCu;
    // 0x1335d0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133650u, 0x1335CCu, 0x1335D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1335D4u;
label_1335d4:
    // 0x1335d4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1335D4u;
    {
        const bool branch_taken_0x1335d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1335D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1335D4u;
        // 0x1335d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1335d4) {
            ctx->pc = 0x133618u;
            goto label_133618;
        }
    }
    ctx->pc = 0x1335DCu;
    // 0x1335dc: 0xc04cad8  jal         func_132B60
    ctx->pc = 0x1335DCu;
    SET_GPR_U32(ctx, 31, 0x1335E4u);
    ctx->pc = 0x1335E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1335DCu;
    // 0x1335e0: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132B60u, 0x1335DCu, 0x1335E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1335E4u;
label_1335e4:
    // 0x1335e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1335e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1335e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1335e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1335ec: 0xc04cd94  jal         func_133650
    ctx->pc = 0x1335ECu;
    SET_GPR_U32(ctx, 31, 0x1335F4u);
    ctx->pc = 0x1335F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1335ECu;
    // 0x1335f0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133650u, 0x1335ECu, 0x1335F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1335F4u;
label_1335f4:
    // 0x1335f4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1335F4u;
    {
        const bool branch_taken_0x1335f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1335F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1335F4u;
        // 0x1335f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1335f4) {
            ctx->pc = 0x133618u;
            goto label_133618;
        }
    }
    ctx->pc = 0x1335FCu;
    // 0x1335fc: 0xc04cad8  jal         func_132B60
    ctx->pc = 0x1335FCu;
    SET_GPR_U32(ctx, 31, 0x133604u);
    ctx->pc = 0x133600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1335FCu;
    // 0x133600: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132B60u, 0x1335FCu, 0x133604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133604u;
label_133604:
    // 0x133604: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x133604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133608: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x133608u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13360c: 0xc04cd94  jal         func_133650
    ctx->pc = 0x13360Cu;
    SET_GPR_U32(ctx, 31, 0x133614u);
    ctx->pc = 0x133610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13360Cu;
    // 0x133610: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133650u, 0x13360Cu, 0x133614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133614u;
label_133614:
    // 0x133614: 0x0  nop
    ctx->pc = 0x133614u;
    // NOP
label_133618:
    // 0x133618: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x133618u;
    {
        const bool branch_taken_0x133618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x133618) {
            ctx->pc = 0x133628u;
            goto label_133628;
        }
    }
    ctx->pc = 0x133620u;
    // 0x133620: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x133620u;
    {
        const bool branch_taken_0x133620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133620u;
        // 0x133624: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133620) {
            ctx->pc = 0x13362Cu;
            goto label_13362c;
        }
    }
    ctx->pc = 0x133628u;
label_133628:
    // 0x133628: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x133628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_13362c:
    // 0x13362c: 0x0  nop
    ctx->pc = 0x13362cu;
    // NOP
label_133630:
    // 0x133630: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x133630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x133634: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x133634u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x133638: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x133638u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13363c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13363cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x133640: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x133640u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133644: 0x3e00008  jr          $ra
    ctx->pc = 0x133644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133644u;
        // 0x133648: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13364Cu;
}
