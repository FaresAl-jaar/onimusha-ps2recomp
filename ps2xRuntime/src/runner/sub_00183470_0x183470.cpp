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

// Function: sub_00183470
// Address: 0x183470 - 0x1834fc
void sub_00183470_0x183470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00183470_0x183470");
#endif

    switch (ctx->pc) {
        case 0x183480u: goto label_183480;
        default: break;
    }

    ctx->pc = 0x183470u;

    // 0x183470: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x183470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x183474: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x183474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x183478: 0xc060d40  jal         func_183500
    ctx->pc = 0x183478u;
    SET_GPR_U32(ctx, 31, 0x183480u);
    ctx->pc = 0x183500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183500u, 0x183478u, 0x183480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183480u;
label_183480:
    // 0x183480: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x183480u;
    {
        const bool branch_taken_0x183480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x183480) {
            ctx->pc = 0x183490u;
            goto label_183490;
        }
    }
    ctx->pc = 0x183488u;
    // 0x183488: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x183488u;
    {
        const bool branch_taken_0x183488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18348Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183488u;
        // 0x18348c: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183488) {
            ctx->pc = 0x1834F0u;
            goto label_1834f0;
        }
    }
    ctx->pc = 0x183490u;
label_183490:
    // 0x183490: 0x8c4411d4  lw          $a0, 0x11D4($v0)
    ctx->pc = 0x183490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4564)));
    // 0x183494: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x183494u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x183498: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x183498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x18349c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18349Cu;
    {
        const bool branch_taken_0x18349c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18349c) {
            ctx->pc = 0x1834B0u;
            goto label_1834b0;
        }
    }
    ctx->pc = 0x1834A4u;
    // 0x1834a4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1834A4u;
    {
        const bool branch_taken_0x1834a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1834A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1834A4u;
        // 0x1834a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1834a4) {
            ctx->pc = 0x1834F0u;
            goto label_1834f0;
        }
    }
    ctx->pc = 0x1834ACu;
    // 0x1834ac: 0x0  nop
    ctx->pc = 0x1834acu;
    // NOP
label_1834b0:
    // 0x1834b0: 0x34830008  ori         $v1, $a0, 0x8
    ctx->pc = 0x1834b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x1834b4: 0xac4311d4  sw          $v1, 0x11D4($v0)
    ctx->pc = 0x1834b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4564), GPR_U32(ctx, 3));
    // 0x1834b8: 0x8c4311d4  lw          $v1, 0x11D4($v0)
    ctx->pc = 0x1834b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4564)));
    // 0x1834bc: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1834bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1834c0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1834C0u;
    {
        const bool branch_taken_0x1834c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1834c0) {
            ctx->pc = 0x1834E8u;
            goto label_1834e8;
        }
    }
    ctx->pc = 0x1834C8u;
    // 0x1834c8: 0x8c4411e8  lw          $a0, 0x11E8($v0)
    ctx->pc = 0x1834c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4584)));
    // 0x1834cc: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x1834ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1834d0: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1834D0u;
    {
        const bool branch_taken_0x1834d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1834d0) {
            ctx->pc = 0x1834E8u;
            goto label_1834e8;
        }
    }
    ctx->pc = 0x1834D8u;
    // 0x1834d8: 0x8c4211d8  lw          $v0, 0x11D8($v0)
    ctx->pc = 0x1834d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4568)));
    // 0x1834dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1834DCu;
    {
        const bool branch_taken_0x1834dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1834E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1834DCu;
        // 0x1834e0: 0x30420003  andi        $v0, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1834dc) {
            ctx->pc = 0x1834F0u;
            goto label_1834f0;
        }
    }
    ctx->pc = 0x1834E4u;
    // 0x1834e4: 0x0  nop
    ctx->pc = 0x1834e4u;
    // NOP
label_1834e8:
    // 0x1834e8: 0x8c4211d8  lw          $v0, 0x11D8($v0)
    ctx->pc = 0x1834e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4568)));
    // 0x1834ec: 0x0  nop
    ctx->pc = 0x1834ecu;
    // NOP
label_1834f0:
    // 0x1834f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1834f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1834f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1834F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1834F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1834F4u;
        // 0x1834f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1834F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1834FCu;
}
