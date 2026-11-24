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

// Function: sub_001524C0
// Address: 0x1524c0 - 0x15261c
void sub_001524C0_0x1524c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001524C0_0x1524c0");
#endif

    switch (ctx->pc) {
        case 0x1524f8u: goto label_1524f8;
        case 0x15250cu: goto label_15250c;
        case 0x152548u: goto label_152548;
        case 0x152578u: goto label_152578;
        case 0x15258cu: goto label_15258c;
        case 0x1525c8u: goto label_1525c8;
        case 0x152604u: goto label_152604;
        default: break;
    }

    ctx->pc = 0x1524c0u;

    // 0x1524c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1524c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1524c4: 0x3c020011  lui         $v0, 0x11
    ctx->pc = 0x1524c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17 << 16));
    // 0x1524c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1524c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1524cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1524ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1524d0: 0x10820027  beq         $a0, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1524D0u;
    {
        const bool branch_taken_0x1524d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1524D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1524D0u;
        // 0x1524d4: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1524d0) {
            ctx->pc = 0x152570u;
            goto label_152570;
        }
    }
    ctx->pc = 0x1524D8u;
    // 0x1524d8: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1524d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x1524dc: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1524DCu;
    {
        const bool branch_taken_0x1524dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1524dc) {
            ctx->pc = 0x1524F0u;
            goto label_1524f0;
        }
    }
    ctx->pc = 0x1524E4u;
    // 0x1524e4: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x1524E4u;
    {
        const bool branch_taken_0x1524e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1524e4) {
            ctx->pc = 0x1525F0u;
            goto label_1525f0;
        }
    }
    ctx->pc = 0x1524ECu;
    // 0x1524ec: 0x0  nop
    ctx->pc = 0x1524ecu;
    // NOP
label_1524f0:
    // 0x1524f0: 0x14a00013  bnez        $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1524F0u;
    {
        const bool branch_taken_0x1524f0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1524f0) {
            ctx->pc = 0x152540u;
            goto label_152540;
        }
    }
    ctx->pc = 0x1524F8u;
label_1524f8:
    // 0x1524f8: 0x0  nop
    ctx->pc = 0x1524f8u;
    // NOP
    // 0x1524fc: 0x0  nop
    ctx->pc = 0x1524fcu;
    // NOP
    // 0x152500: 0x0  nop
    ctx->pc = 0x152500u;
    // NOP
    // 0x152504: 0xc054990  jal         func_152640
    ctx->pc = 0x152504u;
    SET_GPR_U32(ctx, 31, 0x15250Cu);
    ctx->pc = 0x152640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152640u, 0x152504u, 0x15250Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15250Cu;
label_15250c:
    // 0x15250c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15250cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x152510: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x152510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x152514: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x152514u;
    {
        const bool branch_taken_0x152514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x152518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152514u;
        // 0x152518: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152514) {
            ctx->pc = 0x152528u;
            goto label_152528;
        }
    }
    ctx->pc = 0x15251Cu;
    // 0x15251c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15251Cu;
    {
        const bool branch_taken_0x15251c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15251c) {
            ctx->pc = 0x152530u;
            goto label_152530;
        }
    }
    ctx->pc = 0x152524u;
    // 0x152524: 0x0  nop
    ctx->pc = 0x152524u;
    // NOP
label_152528:
    // 0x152528: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x152528u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15252c: 0x0  nop
    ctx->pc = 0x15252cu;
    // NOP
label_152530:
    // 0x152530: 0x1600fff1  bnez        $s0, . + 4 + (-0xF << 2)
    ctx->pc = 0x152530u;
    {
        const bool branch_taken_0x152530 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x152530) {
            ctx->pc = 0x1524F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1524f8;
        }
    }
    ctx->pc = 0x152538u;
    // 0x152538: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x152538u;
    {
        const bool branch_taken_0x152538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152538) {
            ctx->pc = 0x152608u;
            goto label_152608;
        }
    }
    ctx->pc = 0x152540u;
label_152540:
    // 0x152540: 0xc054990  jal         func_152640
    ctx->pc = 0x152540u;
    SET_GPR_U32(ctx, 31, 0x152548u);
    ctx->pc = 0x152640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152640u, 0x152540u, 0x152548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152548u;
label_152548:
    // 0x152548: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x152548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15254c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15254cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x152550: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x152550u;
    {
        const bool branch_taken_0x152550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x152554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152550u;
        // 0x152554: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152550) {
            ctx->pc = 0x152560u;
            goto label_152560;
        }
    }
    ctx->pc = 0x152558u;
    // 0x152558: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x152558u;
    {
        const bool branch_taken_0x152558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152558) {
            ctx->pc = 0x152568u;
            goto label_152568;
        }
    }
    ctx->pc = 0x152560u;
label_152560:
    // 0x152560: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x152560u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x152564: 0x0  nop
    ctx->pc = 0x152564u;
    // NOP
label_152568:
    // 0x152568: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x152568u;
    {
        const bool branch_taken_0x152568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152568) {
            ctx->pc = 0x152608u;
            goto label_152608;
        }
    }
    ctx->pc = 0x152570u;
label_152570:
    // 0x152570: 0x14a00013  bnez        $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x152570u;
    {
        const bool branch_taken_0x152570 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x152570) {
            ctx->pc = 0x1525C0u;
            goto label_1525c0;
        }
    }
    ctx->pc = 0x152578u;
label_152578:
    // 0x152578: 0x0  nop
    ctx->pc = 0x152578u;
    // NOP
    // 0x15257c: 0x0  nop
    ctx->pc = 0x15257cu;
    // NOP
    // 0x152580: 0x0  nop
    ctx->pc = 0x152580u;
    // NOP
    // 0x152584: 0xc054990  jal         func_152640
    ctx->pc = 0x152584u;
    SET_GPR_U32(ctx, 31, 0x15258Cu);
    ctx->pc = 0x152640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152640u, 0x152584u, 0x15258Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15258Cu;
label_15258c:
    // 0x15258c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15258cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x152590: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x152590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x152594: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x152594u;
    {
        const bool branch_taken_0x152594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x152598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152594u;
        // 0x152598: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152594) {
            ctx->pc = 0x1525A8u;
            goto label_1525a8;
        }
    }
    ctx->pc = 0x15259Cu;
    // 0x15259c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15259Cu;
    {
        const bool branch_taken_0x15259c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15259c) {
            ctx->pc = 0x1525B0u;
            goto label_1525b0;
        }
    }
    ctx->pc = 0x1525A4u;
    // 0x1525a4: 0x0  nop
    ctx->pc = 0x1525a4u;
    // NOP
label_1525a8:
    // 0x1525a8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1525a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1525ac: 0x0  nop
    ctx->pc = 0x1525acu;
    // NOP
label_1525b0:
    // 0x1525b0: 0x1600fff1  bnez        $s0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1525B0u;
    {
        const bool branch_taken_0x1525b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1525b0) {
            ctx->pc = 0x152578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_152578;
        }
    }
    ctx->pc = 0x1525B8u;
    // 0x1525b8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1525B8u;
    {
        const bool branch_taken_0x1525b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1525b8) {
            ctx->pc = 0x152608u;
            goto label_152608;
        }
    }
    ctx->pc = 0x1525C0u;
label_1525c0:
    // 0x1525c0: 0xc054990  jal         func_152640
    ctx->pc = 0x1525C0u;
    SET_GPR_U32(ctx, 31, 0x1525C8u);
    ctx->pc = 0x152640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152640u, 0x1525C0u, 0x1525C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1525C8u;
label_1525c8:
    // 0x1525c8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1525c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1525cc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1525ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1525d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1525D0u;
    {
        const bool branch_taken_0x1525d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1525D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1525D0u;
        // 0x1525d4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1525d0) {
            ctx->pc = 0x1525E0u;
            goto label_1525e0;
        }
    }
    ctx->pc = 0x1525D8u;
    // 0x1525d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1525D8u;
    {
        const bool branch_taken_0x1525d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1525d8) {
            ctx->pc = 0x1525E8u;
            goto label_1525e8;
        }
    }
    ctx->pc = 0x1525E0u;
label_1525e0:
    // 0x1525e0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1525e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1525e4: 0x0  nop
    ctx->pc = 0x1525e4u;
    // NOP
label_1525e8:
    // 0x1525e8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1525E8u;
    {
        const bool branch_taken_0x1525e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1525e8) {
            ctx->pc = 0x152608u;
            goto label_152608;
        }
    }
    ctx->pc = 0x1525F0u;
label_1525f0:
    // 0x1525f0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1525f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1525f4: 0x822824  and         $a1, $a0, $v0
    ctx->pc = 0x1525f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1525f8: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x1525f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x1525fc: 0xc0499ee  jal         func_1267B8
    ctx->pc = 0x1525FCu;
    SET_GPR_U32(ctx, 31, 0x152604u);
    ctx->pc = 0x152600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1525FCu;
    // 0x152600: 0x24844ea0  addiu       $a0, $a0, 0x4EA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1267B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1267B8u, 0x1525FCu, 0x152604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152604u;
label_152604:
    // 0x152604: 0x0  nop
    ctx->pc = 0x152604u;
    // NOP
label_152608:
    // 0x152608: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x152608u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15260c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15260cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x152610: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x152610u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x152614: 0x3e00008  jr          $ra
    ctx->pc = 0x152614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152614u;
        // 0x152618: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15261Cu;
}
