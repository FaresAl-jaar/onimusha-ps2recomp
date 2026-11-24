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

// Function: sub_003B8550
// Address: 0x3b8550 - 0x3b8610
void sub_003B8550_0x3b8550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B8550_0x3b8550");
#endif

    switch (ctx->pc) {
        case 0x3b8564u: goto label_3b8564;
        case 0x3b85a0u: goto label_3b85a0;
        case 0x3b85b0u: goto label_3b85b0;
        case 0x3b85c0u: goto label_3b85c0;
        case 0x3b85d0u: goto label_3b85d0;
        case 0x3b85e0u: goto label_3b85e0;
        case 0x3b85f0u: goto label_3b85f0;
        case 0x3b8600u: goto label_3b8600;
        default: break;
    }

    ctx->pc = 0x3b8550u;

    // 0x3b8550: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b8550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b8554: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b8554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3b8558: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b8558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3b855c: 0xc0ee264  jal         func_3B8990
    ctx->pc = 0x3B855Cu;
    SET_GPR_U32(ctx, 31, 0x3B8564u);
    ctx->pc = 0x3B8560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B855Cu;
    // 0x3b8560: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B8990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8990u, 0x3B855Cu, 0x3B8564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8564u;
label_3b8564:
    // 0x3b8564: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x3B8564u;
    {
        const bool branch_taken_0x3b8564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b8564) {
            ctx->pc = 0x3B8600u;
            goto label_3b8600;
        }
    }
    ctx->pc = 0x3B856Cu;
    // 0x3b856c: 0x92032b54  lbu         $v1, 0x2B54($s0)
    ctx->pc = 0x3b856cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11092)));
    // 0x3b8570: 0x2c610008  sltiu       $at, $v1, 0x8
    ctx->pc = 0x3b8570u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x3b8574: 0x10200022  beqz        $at, . + 4 + (0x22 << 2)
    ctx->pc = 0x3B8574u;
    {
        const bool branch_taken_0x3b8574 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8574u;
        // 0x3b8578: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8574) {
            ctx->pc = 0x3B8600u;
            goto label_3b8600;
        }
    }
    ctx->pc = 0x3B857Cu;
    // 0x3b857c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3b857cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3b8580: 0x24842ca0  addiu       $a0, $a0, 0x2CA0
    ctx->pc = 0x3b8580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11424));
    // 0x3b8584: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3b8584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3b8588: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3b8588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3b858c: 0x600008  jr          $v1
    ctx->pc = 0x3B858Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3B8598u: goto label_3b8598;
            case 0x3B85A8u: goto label_3b85a8;
            case 0x3B85B8u: goto label_3b85b8;
            case 0x3B85C8u: goto label_3b85c8;
            case 0x3B85D8u: goto label_3b85d8;
            case 0x3B85E8u: goto label_3b85e8;
            case 0x3B85F8u: goto label_3b85f8;
            case 0x3B8600u: goto label_3b8600;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B858Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3B8594u;
    // 0x3b8594: 0x0  nop
    ctx->pc = 0x3b8594u;
    // NOP
label_3b8598:
    // 0x3b8598: 0xc0ee270  jal         func_3B89C0
    ctx->pc = 0x3B8598u;
    SET_GPR_U32(ctx, 31, 0x3B85A0u);
    ctx->pc = 0x3B859Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8598u;
    // 0x3b859c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B89C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B89C0u, 0x3B8598u, 0x3B85A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B85A0u;
label_3b85a0:
    // 0x3b85a0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x3B85A0u;
    {
        const bool branch_taken_0x3b85a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b85a0) {
            ctx->pc = 0x3B8600u;
            goto label_3b8600;
        }
    }
    ctx->pc = 0x3B85A8u;
label_3b85a8:
    // 0x3b85a8: 0xc0ee50c  jal         func_3B9430
    ctx->pc = 0x3B85A8u;
    SET_GPR_U32(ctx, 31, 0x3B85B0u);
    ctx->pc = 0x3B85ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B85A8u;
    // 0x3b85ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B9430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9430u, 0x3B85A8u, 0x3B85B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B85B0u;
label_3b85b0:
    // 0x3b85b0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3B85B0u;
    {
        const bool branch_taken_0x3b85b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b85b0) {
            ctx->pc = 0x3B8600u;
            goto label_3b8600;
        }
    }
    ctx->pc = 0x3B85B8u;
label_3b85b8:
    // 0x3b85b8: 0xc0ee588  jal         func_3B9620
    ctx->pc = 0x3B85B8u;
    SET_GPR_U32(ctx, 31, 0x3B85C0u);
    ctx->pc = 0x3B85BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B85B8u;
    // 0x3b85bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B9620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9620u, 0x3B85B8u, 0x3B85C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B85C0u;
label_3b85c0:
    // 0x3b85c0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3B85C0u;
    {
        const bool branch_taken_0x3b85c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b85c0) {
            ctx->pc = 0x3B8600u;
            goto label_3b8600;
        }
    }
    ctx->pc = 0x3B85C8u;
label_3b85c8:
    // 0x3b85c8: 0xc0ee404  jal         func_3B9010
    ctx->pc = 0x3B85C8u;
    SET_GPR_U32(ctx, 31, 0x3B85D0u);
    ctx->pc = 0x3B85CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B85C8u;
    // 0x3b85cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B9010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9010u, 0x3B85C8u, 0x3B85D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B85D0u;
label_3b85d0:
    // 0x3b85d0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3B85D0u;
    {
        const bool branch_taken_0x3b85d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b85d0) {
            ctx->pc = 0x3B8600u;
            goto label_3b8600;
        }
    }
    ctx->pc = 0x3B85D8u;
label_3b85d8:
    // 0x3b85d8: 0xc0ee488  jal         func_3B9220
    ctx->pc = 0x3B85D8u;
    SET_GPR_U32(ctx, 31, 0x3B85E0u);
    ctx->pc = 0x3B85DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B85D8u;
    // 0x3b85dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B9220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9220u, 0x3B85D8u, 0x3B85E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B85E0u;
label_3b85e0:
    // 0x3b85e0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3B85E0u;
    {
        const bool branch_taken_0x3b85e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b85e0) {
            ctx->pc = 0x3B8600u;
            goto label_3b8600;
        }
    }
    ctx->pc = 0x3B85E8u;
label_3b85e8:
    // 0x3b85e8: 0xc0ee384  jal         func_3B8E10
    ctx->pc = 0x3B85E8u;
    SET_GPR_U32(ctx, 31, 0x3B85F0u);
    ctx->pc = 0x3B85ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B85E8u;
    // 0x3b85ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B8E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8E10u, 0x3B85E8u, 0x3B85F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B85F0u;
label_3b85f0:
    // 0x3b85f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3B85F0u;
    {
        const bool branch_taken_0x3b85f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b85f0) {
            ctx->pc = 0x3B8600u;
            goto label_3b8600;
        }
    }
    ctx->pc = 0x3B85F8u;
label_3b85f8:
    // 0x3b85f8: 0xc0ee5fc  jal         func_3B97F0
    ctx->pc = 0x3B85F8u;
    SET_GPR_U32(ctx, 31, 0x3B8600u);
    ctx->pc = 0x3B85FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B85F8u;
    // 0x3b85fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B97F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B97F0u, 0x3B85F8u, 0x3B8600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8600u;
label_3b8600:
    // 0x3b8600: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b8600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b8604: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b8604u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b8608: 0x3e00008  jr          $ra
    ctx->pc = 0x3B8608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B860Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8608u;
        // 0x3b860c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B8608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B8610u;
}
