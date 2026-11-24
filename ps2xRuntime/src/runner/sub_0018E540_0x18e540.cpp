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

// Function: sub_0018E540
// Address: 0x18e540 - 0x18e5fc
void sub_0018E540_0x18e540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018E540_0x18e540");
#endif

    switch (ctx->pc) {
        case 0x18e5c0u: goto label_18e5c0;
        case 0x18e5d0u: goto label_18e5d0;
        default: break;
    }

    ctx->pc = 0x18e540u;

    // 0x18e540: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18e540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18e544: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18e544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18e548: 0x8f8286a0  lw          $v0, -0x7960($gp)
    ctx->pc = 0x18e548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936224)));
    // 0x18e54c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18E54Cu;
    {
        const bool branch_taken_0x18e54c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e54c) {
            ctx->pc = 0x18E560u;
            goto label_18e560;
        }
    }
    ctx->pc = 0x18E554u;
    // 0x18e554: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x18E554u;
    {
        const bool branch_taken_0x18e554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E554u;
        // 0x18e558: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e554) {
            ctx->pc = 0x18E5F0u;
            goto label_18e5f0;
        }
    }
    ctx->pc = 0x18E55Cu;
    // 0x18e55c: 0x0  nop
    ctx->pc = 0x18e55cu;
    // NOP
label_18e560:
    // 0x18e560: 0x46082b  sltu        $at, $v0, $a2
    ctx->pc = 0x18e560u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x18e564: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x18E564u;
    {
        const bool branch_taken_0x18e564 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e564) {
            ctx->pc = 0x18E570u;
            goto label_18e570;
        }
    }
    ctx->pc = 0x18E56Cu;
    // 0x18e56c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x18e56cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18e570:
    // 0x18e570: 0x8f8786a0  lw          $a3, -0x7960($gp)
    ctx->pc = 0x18e570u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936224)));
    // 0x18e574: 0x8f8386a4  lw          $v1, -0x795C($gp)
    ctx->pc = 0x18e574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936228)));
    // 0x18e578: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18e578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18e57c: 0xe63823  subu        $a3, $a3, $a2
    ctx->pc = 0x18e57cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x18e580: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x18E580u;
    {
        const bool branch_taken_0x18e580 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18E584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E580u;
        // 0x18e584: 0xaf8786a0  sw          $a3, -0x7960($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936224), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e580) {
            ctx->pc = 0x18E5E0u;
            goto label_18e5e0;
        }
    }
    ctx->pc = 0x18E588u;
    // 0x18e588: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18e588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18e58c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18E58Cu;
    {
        const bool branch_taken_0x18e58c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18e58c) {
            ctx->pc = 0x18E5A8u;
            goto label_18e5a8;
        }
    }
    ctx->pc = 0x18E594u;
    // 0x18e594: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18E594u;
    {
        const bool branch_taken_0x18e594 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e594) {
            ctx->pc = 0x18E5A8u;
            goto label_18e5a8;
        }
    }
    ctx->pc = 0x18E59Cu;
    // 0x18e59c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x18E59Cu;
    {
        const bool branch_taken_0x18e59c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e59c) {
            ctx->pc = 0x18E5E8u;
            goto label_18e5e8;
        }
    }
    ctx->pc = 0x18E5A4u;
    // 0x18e5a4: 0x0  nop
    ctx->pc = 0x18e5a4u;
    // NOP
label_18e5a8:
    // 0x18e5a8: 0x8f8286a8  lw          $v0, -0x7958($gp)
    ctx->pc = 0x18e5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936232)));
    // 0x18e5ac: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x18e5acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18e5b0: 0x14470005  bne         $v0, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x18E5B0u;
    {
        const bool branch_taken_0x18e5b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x18e5b0) {
            ctx->pc = 0x18E5C8u;
            goto label_18e5c8;
        }
    }
    ctx->pc = 0x18E5B8u;
    // 0x18e5b8: 0xc063848  jal         func_18E120
    ctx->pc = 0x18E5B8u;
    SET_GPR_U32(ctx, 31, 0x18E5C0u);
    ctx->pc = 0x18E5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E5B8u;
    // 0x18e5bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E120u, 0x18E5B8u, 0x18E5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E5C0u;
label_18e5c0:
    // 0x18e5c0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18E5C0u;
    {
        const bool branch_taken_0x18e5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E5C0u;
        // 0x18e5c4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e5c0) {
            ctx->pc = 0x18E5D4u;
            goto label_18e5d4;
        }
    }
    ctx->pc = 0x18E5C8u;
label_18e5c8:
    // 0x18e5c8: 0xc063848  jal         func_18E120
    ctx->pc = 0x18E5C8u;
    SET_GPR_U32(ctx, 31, 0x18E5D0u);
    ctx->pc = 0x18E120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E120u, 0x18E5C8u, 0x18E5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E5D0u;
label_18e5d0:
    // 0x18e5d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18e5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18e5d4:
    // 0x18e5d4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x18E5D4u;
    {
        const bool branch_taken_0x18e5d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E5D4u;
        // 0x18e5d8: 0xaf8386a8  sw          $v1, -0x7958($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e5d4) {
            ctx->pc = 0x18E5F0u;
            goto label_18e5f0;
        }
    }
    ctx->pc = 0x18E5DCu;
    // 0x18e5dc: 0x0  nop
    ctx->pc = 0x18e5dcu;
    // NOP
label_18e5e0:
    // 0x18e5e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18E5E0u;
    {
        const bool branch_taken_0x18e5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E5E0u;
        // 0x18e5e4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e5e0) {
            ctx->pc = 0x18E5F0u;
            goto label_18e5f0;
        }
    }
    ctx->pc = 0x18E5E8u;
label_18e5e8:
    // 0x18e5e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18e5e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e5ec: 0x0  nop
    ctx->pc = 0x18e5ecu;
    // NOP
label_18e5f0:
    // 0x18e5f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18e5f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e5f4: 0x3e00008  jr          $ra
    ctx->pc = 0x18E5F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E5F4u;
        // 0x18e5f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E5F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18E5FCu;
}
