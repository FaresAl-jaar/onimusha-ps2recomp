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

// Function: sub_00249838
// Address: 0x249838 - 0x249898
void sub_00249838_0x249838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249838_0x249838");
#endif

    ctx->pc = 0x249838u;

    // 0x249838: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x249838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24983c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x24983cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249840: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x249840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x249844: 0x8ca40024  lw          $a0, 0x24($a1)
    ctx->pc = 0x249844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x249848: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x249848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x24984c: 0xdca30008  ld          $v1, 0x8($a1)
    ctx->pc = 0x24984cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x249850: 0x43ac0  sll         $a3, $a0, 11
    ctx->pc = 0x249850u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 11));
    // 0x249854: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x249854u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x249858: 0x212f8  dsll        $v0, $v0, 11
    ctx->pc = 0x249858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 11);
    // 0x24985c: 0x43202f  dsubu       $a0, $v0, $v1
    ctx->pc = 0x24985cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x249860: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x249860u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x249864: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x249864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x249868: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x249868u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x24986c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x24986Cu;
    {
        const bool branch_taken_0x24986c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x249870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24986Cu;
        // 0x249870: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24986c) {
            ctx->pc = 0x249890u;
            goto label_249890;
        }
    }
    ctx->pc = 0x249874u;
    // 0x249874: 0x8ca40020  lw          $a0, 0x20($a1)
    ctx->pc = 0x249874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x249878: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x249878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24987c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x24987cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249880: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x249880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x249884: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x249884u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x249888: 0x8049590  j           func_125640
    ctx->pc = 0x249888u;
    ctx->pc = 0x24988Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249888u;
    // 0x24988c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    sub_00125640_0x125640(rdram, ctx, runtime); return;
    ctx->pc = 0x249890u;
label_249890:
    // 0x249890: 0x3e00008  jr          $ra
    ctx->pc = 0x249890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249890u;
        // 0x249894: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249898u;
}
