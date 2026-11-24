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

// Function: sub_0032D880
// Address: 0x32d880 - 0x32d920
void sub_0032D880_0x32d880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032D880_0x32d880");
#endif

    switch (ctx->pc) {
        case 0x32d8a8u: goto label_32d8a8;
        default: break;
    }

    ctx->pc = 0x32d880u;

    // 0x32d880: 0x90860004  lbu         $a2, 0x4($a0)
    ctx->pc = 0x32d880u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x32d884: 0x54e3c  dsll32      $t1, $a1, 24
    ctx->pc = 0x32d884u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) << (32 + 24));
    // 0x32d888: 0x90870008  lbu         $a3, 0x8($a0)
    ctx->pc = 0x32d888u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x32d88c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x32d88cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d890: 0x94e3f  dsra32      $t1, $t1, 24
    ctx->pc = 0x32d890u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 24));
    // 0x32d894: 0x30a800ff  andi        $t0, $a1, 0xFF
    ctx->pc = 0x32d894u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x32d898: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x32d898u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d89c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x32d89cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x32d8a0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x32d8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32d8a4: 0x0  nop
    ctx->pc = 0x32d8a4u;
    // NOP
label_32d8a8:
    // 0x32d8a8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x32D8A8u;
    {
        const bool branch_taken_0x32d8a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32d8a8) {
            ctx->pc = 0x32D8C0u;
            goto label_32d8c0;
        }
    }
    ctx->pc = 0x32D8B0u;
    // 0x32d8b0: 0x5210003  bgez        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x32D8B0u;
    {
        const bool branch_taken_0x32d8b0 = (GPR_S64(ctx, 9) >= 0);
        if (branch_taken_0x32d8b0) {
            ctx->pc = 0x32D8C0u;
            goto label_32d8c0;
        }
    }
    ctx->pc = 0x32D8B8u;
    // 0x32d8b8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x32D8B8u;
    {
        const bool branch_taken_0x32d8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D8B8u;
        // 0x32d8bc: 0x64020004  daddiu      $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d8b8) {
            ctx->pc = 0x32D8E0u;
            goto label_32d8e0;
        }
    }
    ctx->pc = 0x32D8C0u;
label_32d8c0:
    // 0x32d8c0: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x32d8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x32d8c4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x32d8c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x32d8c8: 0x45001b  divu        $zero, $v0, $a1
    ctx->pc = 0x32d8c8u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x32d8cc: 0x0  nop
    ctx->pc = 0x32d8ccu;
    // NOP
    // 0x32d8d0: 0x0  nop
    ctx->pc = 0x32d8d0u;
    // NOP
    // 0x32d8d4: 0x1010  mfhi        $v0
    ctx->pc = 0x32d8d4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x32d8d8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x32d8d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x32d8dc: 0x0  nop
    ctx->pc = 0x32d8dcu;
    // NOP
label_32d8e0:
    // 0x32d8e0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x32d8e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x32d8e4: 0x641804  sllv        $v1, $a0, $v1
    ctx->pc = 0x32d8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x32d8e8: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x32d8e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x32d8ec: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x32D8ECu;
    {
        const bool branch_taken_0x32d8ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d8ec) {
            ctx->pc = 0x32D900u;
            goto label_32d900;
        }
    }
    ctx->pc = 0x32D8F4u;
    // 0x32d8f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x32D8F4u;
    {
        const bool branch_taken_0x32d8f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d8f4) {
            ctx->pc = 0x32D918u;
            goto label_32d918;
        }
    }
    ctx->pc = 0x32D8FCu;
    // 0x32d8fc: 0x0  nop
    ctx->pc = 0x32d8fcu;
    // NOP
label_32d900:
    // 0x32d900: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x32d900u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x32d904: 0x29430004  slti        $v1, $t2, 0x4
    ctx->pc = 0x32d904u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x32d908: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x32D908u;
    {
        const bool branch_taken_0x32d908 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32d908) {
            ctx->pc = 0x32D8A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32d8a8;
        }
    }
    ctx->pc = 0x32D910u;
    // 0x32d910: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x32d910u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d914: 0x0  nop
    ctx->pc = 0x32d914u;
    // NOP
label_32d918:
    // 0x32d918: 0x3e00008  jr          $ra
    ctx->pc = 0x32D918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32D918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32D920u;
}
